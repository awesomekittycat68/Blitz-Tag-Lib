#include "../Externs.h"
#include "Loader.h"
#include "BNM/Loading.hpp"
#include "SDK/GorillaLocomotion/GTPlayer.hpp"
#include "SDK/GlobalNamespace/BuilderSetManager.hpp"

namespace BlitzTag
{
    static void (*AwakeGT)(GorillaLocomotion::GTPlayer*);
    static void new_Awake(GorillaLocomotion::GTPlayer* instance)
    {
        Awake();
        AwakeGT(instance);
    }

    static void (*UpdateGT)(GorillaLocomotion::GTPlayer*);
    static void new_Update(GorillaLocomotion::GTPlayer* instance)
    {
        Update();
        UpdateGT(instance);
    }

    static void (*OnGotInventoryItemsGT)(GlobalNamespace::BuilderSetManager*);
    static void new_OnGotInventoryItems(GlobalNamespace::BuilderSetManager* instance, PlayFab_ClientModels::GetUserInventoryResult inventoryResult, PlayFab_ClientModels::GetCatalogItemsResult catalogResult)
    {
        OnGotInventoryItems(inventoryResult, catalogResult);
        OnGotInventoryItemsGT(instance);
    }

    void Loader::Initialize()
    {
        BasicHook(GorillaLocomotion::GTPlayer::GetClass().GetMethod("Awake"), new_Awake, AwakeGT);
        BasicHook(GorillaLocomotion::GTPlayer::GetClass().GetMethod("FixedUpdate"), new_Update, UpdateGT);
        BasicHook(GlobalNamespace::BuilderSetManager::GetClass().GetMethod("OnGotInventoryItems", 2), new_OnGotInventoryItems, OnGotInventoryItemsGT);
    }
}