#include "httplib.h"
#include <fstream>
#include <filesystem>
#include <string>
#include "AssetLoading.h"
#include "BNMResolve.hpp"

using namespace BNM;

AssetBundle* AssetLoading::LoadBundle(std::string directory) {
    return AssetBundle::LoadFromFile(directory);
}

Object* AssetLoading::InstantiateAsset(void *bundle, string name) {
    Method<Object*> LoadAsset = Class("UnityEngine", "AssetBundle").GetMethod("LoadAsset", 2);
    Object* prefab = LoadAsset(CreateMonoString(name), GameObject::GetType());
    auto Unload = reinterpret_cast<void (*)(void *, bool)>(GetExternMethod("UnityEngine.AssetBundle::Unload"));
    Unload(bundle, false);
    return prefab;
}

GameObject* AssetLoading::InstantiateAssetFromDir(string directory, string name) {
    return reinterpret_cast<GameObject*>(InstantiateAsset(LoadBundle(directory), name));
}

void AssetLoading::LoadBundleFromDownloadLinkAsync(string url, string directory, string filename, std::function<void(AssetBundle*)> onComplete) {
    namespace fs = std::filesystem;

    // Ensure the target directory exists
    fs::create_directories(directory);
    fs::path filePath = fs::path(directory) / filename;

    Logger::Log("[AssetLoading] Starting download for: " + url);
    Logger::Log("[AssetLoading] Target file path: " + filePath.string());

    // If file already exists, load immediately
    if (fs::exists(filePath)) {
        Logger::Log("[AssetLoading] File already exists. Loading from disk.");
        AssetBundle* bundle = LoadBundle(filePath.string());
        if (!bundle) {
            Logger::Log("[AssetLoading] ERROR: Failed to load existing bundle at: " + filePath.string());
        }
        onComplete(bundle);
        return;
    }

    // Download in a background thread
    std::thread([url, filePath, onComplete]() {
        std::string host, path;

        // Parse URL
        if (url.rfind("http://", 0) == 0) {
            host = url.substr(7, url.find('/', 7) - 7);
            path = url.substr(url.find('/', 7));
        } else if (url.rfind("https://", 0) == 0) {
            host = url.substr(8, url.find('/', 8) - 8);
            path = url.substr(url.find('/', 8));
        } else {
            Logger::Log("[AssetLoading] ERROR: Invalid URL: " + url);
            onComplete(nullptr);
            return;
        }

        Logger::Log("[AssetLoading] Connecting to host: " + host + ", path: " + path);

        httplib::Client client(host.c_str());
        client.enable_server_certificate_verification(false); // for HTTPS

        auto res = client.Get(path.c_str());
        if (!res) {
            Logger::Log("[AssetLoading] ERROR: Failed to connect to " + host);
            onComplete(nullptr);
            return;
        }

        if (res->status == 301 || res->status == 302) {
            auto newLocationIt = res->headers.find("Location");
            if (newLocationIt != res->headers.end()) {
                Logger::Log("[AssetLoading] Redirected to: " + newLocationIt->second);
                LoadBundleFromDownloadLinkAsync(newLocationIt->second,
                filePath.parent_path().string(), filePath.filename().string(), onComplete);
                return;
            } else {
                Logger::Log("[AssetLoading] ERROR: Redirect status but no Location header.");
                onComplete(nullptr);
                return;
            }
        }

        if (res->status != 200) {
            Logger::Log("[AssetLoading] ERROR: HTTP GET failed. Status code: " + std::to_string(res->status));
            onComplete(nullptr);
            return;
        }

        Logger::Log("[AssetLoading] Download succeeded. Writing file: " + filePath.string());

        // Write to file
        std::ofstream out(filePath, std::ios::binary);
        if (!out.is_open()) {
            Logger::Log("[AssetLoading] ERROR: Failed to open file for writing: " + filePath.string());
            onComplete(nullptr);
            return;
        }

        out.write(res->body.c_str(), res->body.size());
        out.close();

        Logger::Log("[AssetLoading] File write complete. Loading AssetBundle...");

        // Load AssetBundle
        AssetBundle* bundle = LoadBundle(filePath.string());
        if (!bundle) {
            Logger::Log("[AssetLoading] ERROR: Failed to load AssetBundle from file: " + filePath.string());
        } else {
            Logger::Log("[AssetLoading] AssetBundle loaded successfully!");
        }

        // Call the callback
        onComplete(bundle);

    }).detach();
}