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
#include "SDK/PlayFab_ClientModels/GetUserInventoryResult.hpp"
#include "SDK/PlayFab_ClientModels/GetCatalogItemsResult.hpp"
#include "SDK/PlayFab_ClientModels/ItemInstance.hpp"
#include "Features/Security.cpp"
#include "Features/Computer.cpp"
#include "Features/InAppPurchases.cpp"
#include "Features/Loader.cpp"
#include "Features/Staff/ModMenu.cpp"
#include "Utils/Logger.hpp"
#include "Features/HUD.h"
#include "Globals.cpp"
#include "Utils/AssetLoading.cpp"
#include "Utils/Backend.hpp"
#include "IXWebSocket.h"

float longArms = 1.0f;
bool isFirstLaunch = false;
ix::WebSocket webSocket;
std::thread wsThread;

void OnAuthenticated() {
    Logger::Log("OnAuthenticated");

    /*
        std::filesystem::path fullPath = std::filesystem::path(Application::GetStreamingAssetsPath()) / "travis.bundle";
        std::string pathString = fullPath.string();

        AssetBundle::LoadFromFile(pathString);
     */
}

void OnGotInventoryItems(PlayFab_ClientModels::GetUserInventoryResult inventoryResult, PlayFab_ClientModels::GetCatalogItemsResult catalogResult) {
    Logger::Log("OnGotInventoryItems");

    for (PlayFab_ClientModels::ItemInstance* itemInstance : inventoryResult.GetInventory()->ToVector()) {
        if (itemInstance->GetItemId() == CreateMonoString("LBADE.")) {
            BlitzTag::Globals::HasFingerPainterBadge = true;
        }
        if (itemInstance->GetItemId() == CreateMonoString("LBANI.")) {
            BlitzTag::Globals::HasAACreatorBadge = true;
        }
        if (itemInstance->GetItemId() == CreateMonoString("LBAOT.")) {
            BlitzTag::Globals::HasMonkeMayhemStaffShirt = true;
        }
        if (itemInstance->GetItemId() == CreateMonoString("LBAAD.")) {
            BlitzTag::Globals::HasAdminBadge = true;
        }
        if (itemInstance->GetItemId() == CreateMonoString("LBAAK.")) {
            BlitzTag::Globals::HasModStick = true;
        }
        if (itemInstance->GetItemId() == CreateMonoString("LMAPY.")) {
            BlitzTag::Globals::HasForestGuideModStick = true;
        }

        BlitzTag::Globals::CosmeticsInitialized = true;
    }
}

void UpdateLongArms() {
    Logger::Log("UpdateLongArms");

    PlayerPrefs::SetFloat("longArms", longArms);
    PlayerPrefs::Save();

    GameObject::Find("GorillaPlayer")->GetTransform()->SetLocalScale(BNM::Structures::Unity::Vector3::one * longArms);
}

void Awake() {
    Logger::Log("Awake");

    ModMenu::Init(); // This only sets a font, meaning we don't need to have admin for it.

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

    if (BlitzTag::Globals::HasForestGuideModStick && BlitzTag::Globals::CosmeticsInitialized) {
        Logger::Log("yeah so does this work (means HasForestGuideModStick and CosmeticsInitialized is true!)");
        Logger::Log("trying to load the menu, if it crashes here, means the menu is broken.");
        ModMenu::Update(); // This LOADS the menu, meaning we DO need admin for it.
    }
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