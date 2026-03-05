#include <jni.h>
#include <thread>
#include <httplib.h>
#include <vector>
#include <string>
#include <iostream>
#include <filesystem>
#include "SDK/GorillaLocomotion/GTPlayer.hpp"
#include "SDK/GlobalNamespace/GorillaTagger.hpp"
#include "SDK/GlobalNamespace/ControllerInputPoller.hpp"
#include "Features/Security.cpp"
#include "Features/Computer.cpp"
#include "Features/InAppPurchases.cpp"
#include "Features/Loader.cpp"
#include "Features/Nametags.h"
#include "Utils/Logger.hpp"
#include "Features/HUD.h"
#include "Utils/AssetLoading.cpp"
#include "Utils/Backend.hpp"
#include "IXWebSocket.h"

float longArms = 1.0f;
bool isFirstLaunch = false;
Backend::MothershipClientDataResponseData serverdata;
ix::WebSocket webSocket;
std::thread wsThread;

void OnAuthenticated() {
    Logger::Log("OnAuthenticated");

    serverdata.Admins.push_back({
        "6494FFA906D59FB1",
        "BXT",
        Backend::MothershipClientDataRole::Owner
    });

    serverdata.Admins.push_back({
        "1FC3C8925ED44C4C",
        "NOTFISHVR",
        Backend::MothershipClientDataRole::Admin
    });

    Backend::GetMothershipClientData("ds", [](const Backend::MothershipClientDataResponseData& successData) {

    }, [](const Backend::MothershipClientDataFailureResponseData& errorData) {
        //GorillaNetworking::GorillaComputer::GetInstance()->GeneralFailureMessage(CreateMonoString("There was an error connecting to Blitz Tag's servers: " + errorData.Message + "\nError Code: " + std::to_string(static_cast<int>(errorData.Error))));
    });

    //std::filesystem::path fullPath = std::filesystem::path(Application::GetStreamingAssetsPath()) / "travis.bundle";
    //std::string pathString = fullPath.string();

    //AssetBundle::LoadFromFile(pathString);
}

void UpdateLongArms() {
    Logger::Log("UpdateLongArms");

    PlayerPrefs::SetFloat("longArms", longArms);
    PlayerPrefs::Save();

    GameObject::Find("GorillaPlayer")->GetTransform()->SetLocalScale(BNM::Structures::Unity::Vector3::one * longArms);
}

void Awake() {
    Logger::Log("Awake");
    BlitzTag::HUD::Init();

    if (PlayerPrefs::HasKey("longArms")) {
        longArms = PlayerPrefs::GetFloat("longArms", 1.2f);
    }
    else {
        longArms = 1.2f;
        isFirstLaunch = true;
    }

    UpdateLongArms();
}

void Update() {
    BlitzTag::HUD::Update();
    BlitzTag::Nametags::Update();
}

void OnLoaded() {
    // use BasicHook instead of InvokeHook, BasicHook is better since InvokeHook just edits MethodInfo but BasicHook actually changes the void or something like that

    BlitzTag::Loader::Initialize();
    BlitzTag::Computer::Initialize();
    BlitzTag::Security::Initialize();
    BlitzTag::InAppPurchases::Initialize();
}

JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM *vm, [[maybe_unused]] void *reserved) {
    JNIEnv* env;
    vm->GetEnv((void **) &env, JNI_VERSION_1_6);

    BNM::Loading::AddOnLoadedEvent(OnLoaded);

    BNM::Loading::TryLoadByJNI(env);

    return JNI_VERSION_1_6;
}