#include "../Include/BNMIncludes.hpp"
#include "unistd.h"
#include "string"
#include "BNMResolve.hpp"

using namespace std;

namespace AssetLoading {
    AssetBundle* LoadBundle(string directory);
    GameObject* InstantiateAssetFromDir(string directory, string name);
    Object* InstantiateAsset(void* bundle, string name);
    void LoadBundleFromDownloadLinkAsync(string link, string directory, string name, std::function<void(AssetBundle*)> onComplete);
}