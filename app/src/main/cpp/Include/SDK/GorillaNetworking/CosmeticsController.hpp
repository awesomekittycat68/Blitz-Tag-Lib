#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GlobalNamespace/BodyDockPositions_DropPositions.hpp"
#include "CosmeticsController_CosmeticCategory.hpp"
#include "CosmeticsController_CosmeticItem.hpp"
#include "CosmeticsController_CosmeticSlots.hpp"
#include "CosmeticsController_EWearingCosmeticSet.hpp"
#include "CosmeticsController_PurchaseItemStages.hpp"
#include "../GorillaTag_CosmeticSystem/CosmeticAnchorAntiIntersectOffsets.hpp"
#include "../GorillaTag_CosmeticSystem/CosmeticInfoV2.hpp"

namespace GorillaNetworking {
    struct CosmeticsController : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaNetworking", "CosmeticsController");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GorillaNetworking::CosmeticsController* GetInstance() {
            static BNM::Field<::GorillaNetworking::CosmeticsController*> field = GetClass().GetField("instance");
            return field.Get();
        }
        static constexpr int maximumTransferrableItems = 5;
        static constexpr const char* oculusIAPEndpoint = "/api/ConsumeOculusIAP";
        ::BNM::Structures::Mono::List<::GorillaNetworking::CosmeticsController_CosmeticItem>* GetAllCosmetics() {
            static BNM::Method<::BNM::Structures::Mono::List<::GorillaNetworking::CosmeticsController_CosmeticItem>*> _method = GetClass().GetMethod(O("get_allCosmetics"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetAllCosmetics(::BNM::Structures::Mono::List<::GorillaNetworking::CosmeticsController_CosmeticItem>* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_allCosmetics"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::GorillaNetworking::CosmeticsController_CosmeticItem>* GetAllCosmeticsDict() {
            static BNM::Method<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::GorillaNetworking::CosmeticsController_CosmeticItem>*> _method = GetClass().GetMethod(O("get_allCosmeticsDict"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetAllCosmeticsDictIsInitialized() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_allCosmeticsDict_isInitialized"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetAllCosmeticsDictIsInitialized(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_allCosmeticsDict_isInitialized"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* GetAllCosmeticsItemIDsfromDisplayNamesDict() {
            static BNM::Method<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>*> _method = GetClass().GetMethod(O("get_allCosmeticsItemIDsfromDisplayNamesDict"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetAllCosmeticsItemIDsfromDisplayNamesDictIsInitialized() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_allCosmeticsItemIDsfromDisplayNamesDict_isInitialized"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetAllCosmeticsItemIDsfromDisplayNamesDictIsInitialized(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_allCosmeticsItemIDsfromDisplayNamesDict_isInitialized"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetCurrencyBalance() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_CurrencyBalance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GorillaTag_CosmeticSystem::CosmeticAnchorAntiIntersectOffsets GetDefaultClipOffsets() {
            static BNM::Method<::GorillaTag_CosmeticSystem::CosmeticAnchorAntiIntersectOffsets> _method = GetClass().GetMethod(O("get_defaultClipOffsets"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GorillaTag_CosmeticSystem::CosmeticSO* GetEarlyAccessSupporterPackCosmeticSO() {
            static BNM::Method<::GorillaTag_CosmeticSystem::CosmeticSO*> _method = GetClass().GetMethod(O("get_EarlyAccessSupporterPackCosmeticSO"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetHasInstance() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_hasInstance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetHasInstance(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_hasInstance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetIsHidingCosmeticsFromRemotePlayers() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_isHidingCosmeticsFromRemotePlayers"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetIsHidingCosmeticsFromRemotePlayers(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_isHidingCosmeticsFromRemotePlayers"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetOculusAttemptingToPurchase() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_OculusAttemptingToPurchase"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetSelectedOutfit() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_SelectedOutfit"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::Array<::GorillaTag_CosmeticSystem::CosmeticInfoV2>* GetV2AllCosmetics() {
            static BNM::Method<::BNM::Structures::Mono::Array<::GorillaTag_CosmeticSystem::CosmeticInfoV2>*> _method = GetClass().GetMethod(O("get_v2_allCosmetics"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetV2AllCosmetics(::BNM::Structures::Mono::Array<::GorillaTag_CosmeticSystem::CosmeticInfoV2>* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_v2_allCosmetics"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetV2AllCosmeticsInfoAssetRefIsLoaded() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_v2_allCosmeticsInfoAssetRef_isLoaded"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetV2AllCosmeticsInfoAssetRefIsLoaded(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_v2_allCosmeticsInfoAssetRef_isLoaded"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetV2IsCosmeticPlayFabCatalogDataLoaded() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_v2_isCosmeticPlayFabCatalogDataLoaded"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetV2IsCosmeticPlayFabCatalogDataLoaded(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_v2_isCosmeticPlayFabCatalogDataLoaded"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetV2IsGetCosmeticsPlayCatalogDataWaitingForCallback() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_v2_isGetCosmeticsPlayCatalogDataWaitingForCallback"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetV2IsGetCosmeticsPlayCatalogDataWaitingForCallback(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_v2_isGetCosmeticsPlayCatalogDataWaitingForCallback"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::List<::GorillaNetworking::CosmeticsController_CosmeticItem>* GetAllCosmetics_f() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaNetworking::CosmeticsController_CosmeticItem>*> _field = GetClass().GetField(O("_allCosmetics"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::GorillaNetworking::CosmeticsController_CosmeticItem>* GetAllCosmeticsDict_f() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::GorillaNetworking::CosmeticsController_CosmeticItem>*> _field = GetClass().GetField(O("_allCosmeticsDict"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::GorillaTag_CosmeticSystem::CosmeticInfoV2>* GetAllCosmeticsDictV2() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::GorillaTag_CosmeticSystem::CosmeticInfoV2>*> _field = GetClass().GetField(O("_allCosmeticsDictV2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* GetAllCosmeticsItemIDsfromDisplayNamesDict_f() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("_allCosmeticsItemIDsfromDisplayNamesDict"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::GorillaNetworking::CosmeticsController_CosmeticSlots>* GetGDefaultOutAppliedSlotsListForApplyCosmeticItemToSet() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaNetworking::CosmeticsController_CosmeticSlots>*> _field = GetClass().GetField(O("_g_default_outAppliedSlotsList_for_applyCosmeticItemToSet"));
            return _field.Get();
        }
        ::GorillaNetworking::CosmeticsController_CosmeticSet* GetActiveMergedSet() {
            static BNM::Field<::GorillaNetworking::CosmeticsController_CosmeticSet*> _field = GetClass().GetField(O("activeMergedSet"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::VRRigAnchorOverrides* GetAnchorOverrides() {
            static BNM::Field<::GlobalNamespace::VRRigAnchorOverrides*> _field = GetClass().GetField(O("anchorOverrides"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetAttempts() {
            static BNM::Field<int> _field = GetClass().GetField(O("attempts"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetAttemptsLimit() {
            static BNM::Field<int> _field = GetClass().GetField(O("attemptsLimit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::BundleList* GetBundleList() {
            static BNM::Field<::GlobalNamespace::BundleList*> _field = GetClass().GetField(O("bundleList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetBundlePlayfabItemName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("BundlePlayfabItemName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetBundleShinyRocks() {
            static BNM::Field<int> _field = GetClass().GetField(O("BundleShinyRocks"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetBundleSkuName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("BundleSkuName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetBuyingBundle() {
            static BNM::Field<bool> _field = GetClass().GetField(O("buyingBundle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaNetworking::CosmeticsController_CosmeticSet* GetCachedSet() {
            static BNM::Field<::GorillaNetworking::CosmeticsController_CosmeticSet*> _field = GetClass().GetField(O("cachedSet"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetCatalog() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("catalog"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::PlayFab_ClientModels::CatalogItem*>* GetCatalogItems() {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_ClientModels::CatalogItem*>*> _field = GetClass().GetField(O("catalogItems"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetCheckedDaily() {
            static BNM::Field<bool> _field = GetClass().GetField(O("checkedDaily"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetCheckoutCartButtonPressedWithLeft() {
            static BNM::Field<bool> _field = GetClass().GetField(O("checkoutCartButtonPressedWithLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetConcatStringCosmeticsAllowed() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("concatStringCosmeticsAllowed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetConfirmedDidntPlayInBeta() {
            static BNM::Field<bool> _field = GetClass().GetField(O("confirmedDidntPlayInBeta"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Oculus_Platform_Models::Purchase* GetConsumedPurchase() {
            static BNM::Field<::Oculus_Platform_Models::Purchase*> _field = GetClass().GetField(O("consumedPurchase"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaNetworking::CosmeticsController_CosmeticItem GetCosmeticItemVar() {
            static BNM::Field<::GorillaNetworking::CosmeticsController_CosmeticItem> _field = GetClass().GetField(O("cosmeticItemVar"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<int>* GetCosmeticsPages() {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("cosmeticsPages"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::CosmeticStand*>* GetCosmeticStands() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::CosmeticStand*>*> _field = GetClass().GetField(O("cosmeticStands"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCurrencyBalance_f() {
            static BNM::Field<int> _field = GetClass().GetField(O("currencyBalance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::CosmeticRoom::CurrencyBoard*>* GetCurrencyBoards() {
            static BNM::Field<::BNM::Structures::Mono::List<::CosmeticRoom::CurrencyBoard*>*> _field = GetClass().GetField(O("currencyBoards"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetCurrencyName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("currencyName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GorillaNetworking::CosmeticsController_CosmeticItem>* GetCurrentCart() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaNetworking::CosmeticsController_CosmeticItem>*> _field = GetClass().GetField(O("currentCart"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetCurrentPurchaseID() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("currentPurchaseID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaNetworking::CosmeticsController_PurchaseItemStages GetCurrentPurchaseItemStage() {
            static BNM::Field<::GorillaNetworking::CosmeticsController_PurchaseItemStages> _field = GetClass().GetField(O("currentPurchaseItemStage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetCurrentTime() {
            static BNM::Field<void*> _field = GetClass().GetField(O("currentTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaNetworking::CosmeticsController_CosmeticSet* GetCurrentWornSet() {
            static BNM::Field<::GorillaNetworking::CosmeticsController_CosmeticSet*> _field = GetClass().GetField(O("currentWornSet"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts_VirtualStumpCustomMaps::CustomMapCosmeticsData* GetCustomMapCosmeticsData() {
            static BNM::Field<::GorillaTagScripts_VirtualStumpCustomMaps::CustomMapCosmeticsData*> _field = GetClass().GetField(O("customMapCosmeticsData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<bool>* GetDebugParameters() {
            static BNM::Field<::BNM::Structures::Mono::Array<bool>*> _field = GetClass().GetField(O("debugParameters"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Unity::Vector3 GetDefaultColor() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("defaultColor"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::EarlyAccessButton*>* GetEarlyAccessButtons() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::EarlyAccessButton*>*> _field = GetClass().GetField(O("earlyAccessButtons"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetFinalLine() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("finalLine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::CosmeticRoom::FittingRoom*>* GetFittingRooms() {
            static BNM::Field<::BNM::Structures::Mono::List<::CosmeticRoom::FittingRoom*>*> _field = GetClass().GetField(O("fittingRooms"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetFoundCosmetic() {
            static BNM::Field<bool> _field = GetClass().GetField(O("foundCosmetic"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetGotMyDaily() {
            static BNM::Field<bool> _field = GetClass().GetField(O("gotMyDaily"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasPrice() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasPrice"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetIapConsumeAttempts() {
            static BNM::Field<int> _field = GetClass().GetField(O("iapConsumeAttempts"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GorillaNetworking::CosmeticsController* GetInstance_f() {
            static BNM::Field<::GorillaNetworking::CosmeticsController*> _field = GetClass().GetField(O("instance"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* GetInventoryStringList() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("inventoryStringList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsLastHandTouchedLeft() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isLastHandTouchedLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::CosmeticRoom::ItemCheckout*>* GetItemCheckouts() {
            static BNM::Field<::BNM::Structures::Mono::List<::CosmeticRoom::ItemCheckout*>*> _field = GetClass().GetField(O("itemCheckouts"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>* GetItemLists() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("itemLists"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaNetworking::CosmeticsController_CosmeticItem GetItemToBuy() {
            static BNM::Field<::GorillaNetworking::CosmeticsController_CosmeticItem> _field = GetClass().GetField(O("itemToBuy"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetItemToPurchase() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("itemToPurchase"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetIterator() {
            static BNM::Field<int> _field = GetClass().GetField(O("iterator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetLastDailyLogin() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("lastDailyLogin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::PlayFab_ClientModels::GetUserInventoryResult* GetLatestInventory() {
            static BNM::Field<::PlayFab_ClientModels::GetUserInventoryResult*> _field = GetClass().GetField(O("latestInventory"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetLeftCheckoutPurchaseButtonOn() {
            static BNM::Field<bool> _field = GetClass().GetField(O("leftCheckoutPurchaseButtonOn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetLeftCheckoutPurchaseButtonString() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("leftCheckoutPurchaseButtonString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static bool GetLoadedSavedOutfits() {
            static BNM::Field<bool> _field = GetClass().GetField(O("loadedSavedOutfits"));
            return _field.Get();
        }
        static bool GetLoadOutfitsInProgress() {
            static BNM::Field<bool> _field = GetClass().GetField(O("loadOutfitsInProgress"));
            return _field.Get();
        }
        ::GorillaTag_CosmeticSystem::CosmeticSO* GetMEarlyAccessSupporterPackCosmeticSO() {
            static BNM::Field<::GorillaTag_CosmeticSystem::CosmeticSO*> _field = GetClass().GetField(O("m_earlyAccessSupporterPackCosmeticSO"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMaxUpdateCosmeticsRetries() {
            static BNM::Field<int> _field = GetClass().GetField(O("maxUpdateCosmeticsRetries"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaNetworking::CosmeticsController_CosmeticItem GetNullItem() {
            static BNM::Field<::GorillaNetworking::CosmeticsController_CosmeticItem> _field = GetClass().GetField(O("nullItem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetNumFittingRoomButtons() {
            static BNM::Field<int> _field = GetClass().GetField(O("numFittingRoomButtons"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetOculusAttemptingToPurchase_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("oculusAttemptingToPurchase"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<>* GetOnCosmeticsUpdated() {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnCosmeticsUpdated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<>* GetOnGetCurrency() {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnGetCurrency"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<>* GetOnOutfitsUpdated() {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnOutfitsUpdated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Action<float, float, float>* GetOnPlayerColorSet() {
            static BNM::Field<::BNM::Structures::Mono::Action<float, float, float>*> _field = GetClass().GetField(O("OnPlayerColorSet"));
            return _field.Get();
        }
        static ::GorillaNetworking::CosmeticsController_OutfitData* GetOutfitDataTemp() {
            static BNM::Field<::GorillaNetworking::CosmeticsController_OutfitData*> _field = GetClass().GetField(O("outfitDataTemp"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetOutfitStringMothership() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("outfitStringMothership"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetOutfitStringPendingSave() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("outfitStringPendingSave"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CosmeticOutfitSystemConfig* GetOutfitSystemConfig() {
            static BNM::Field<::GlobalNamespace::CosmeticOutfitSystemConfig*> _field = GetClass().GetField(O("outfitSystemConfig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetPlayedInBeta() {
            static BNM::Field<bool> _field = GetClass().GetField(O("playedInBeta"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* GetPlayerIDList() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("playerIDList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* GetPushTerminalMessage() {
            static BNM::Field<::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("PushTerminalMessage"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetReturnString() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("returnString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRightCheckoutPurchaseButtonOn() {
            static BNM::Field<bool> _field = GetClass().GetField(O("rightCheckoutPurchaseButtonOn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetRightCheckoutPurchaseButtonString() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("rightCheckoutPurchaseButtonString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>* GetSavedColors() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>*> _field = GetClass().GetField(O("savedColors"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GorillaNetworking::CosmeticsController_CosmeticSet*>* GetSavedOutfits() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaNetworking::CosmeticsController_CosmeticSet*>*> _field = GetClass().GetField(O("savedOutfits"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static bool GetSaveOutfitInProgress() {
            static BNM::Field<bool> _field = GetClass().GetField(O("saveOutfitInProgress"));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetSb() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("sb"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSearchIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("searchIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSecondsToWaitToCheckDaily() {
            static BNM::Field<float> _field = GetClass().GetField(O("secondsToWaitToCheckDaily"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSecondsUntilTomorrow() {
            static BNM::Field<int> _field = GetClass().GetField(O("secondsUntilTomorrow"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static int GetSelectedOutfit_f() {
            static BNM::Field<int> _field = GetClass().GetField(O("selectedOutfit"));
            return _field.Get();
        }
        int GetStartupAttempts() {
            static BNM::Field<int> _field = GetClass().GetField(O("startupAttempts"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaNetworking::CosmeticsController_CosmeticItem GetTempItem() {
            static BNM::Field<::GorillaNetworking::CosmeticsController_CosmeticItem> _field = GetClass().GetField(O("tempItem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* GetTempStringArray() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("tempStringArray"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaNetworking::CosmeticsController_CosmeticSet* GetTempUnlockedSet() {
            static BNM::Field<::GorillaNetworking::CosmeticsController_CosmeticSet*> _field = GetClass().GetField(O("tempUnlockedSet"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetTriggerAPI() {
            static BNM::Field<bool> _field = GetClass().GetField(O("triggerAPI"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetTryGetPurchasesTwice() {
            static BNM::Field<bool> _field = GetClass().GetField(O("tryGetPurchasesTwice"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaNetworking::CosmeticsController_CosmeticSet* GetTryOnSet() {
            static BNM::Field<::GorillaNetworking::CosmeticsController_CosmeticSet*> _field = GetClass().GetField(O("tryOnSet"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetTryTwice() {
            static BNM::Field<bool> _field = GetClass().GetField(O("tryTwice"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GorillaNetworking::CosmeticsController_CosmeticItem>* GetUnlockedArms() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaNetworking::CosmeticsController_CosmeticItem>*> _field = GetClass().GetField(O("unlockedArms"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GorillaNetworking::CosmeticsController_CosmeticItem>* GetUnlockedBacks() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaNetworking::CosmeticsController_CosmeticItem>*> _field = GetClass().GetField(O("unlockedBacks"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GorillaNetworking::CosmeticsController_CosmeticItem>* GetUnlockedBadges() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaNetworking::CosmeticsController_CosmeticItem>*> _field = GetClass().GetField(O("unlockedBadges"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GorillaNetworking::CosmeticsController_CosmeticItem>* GetUnlockedChests() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaNetworking::CosmeticsController_CosmeticItem>*> _field = GetClass().GetField(O("unlockedChests"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GorillaNetworking::CosmeticsController_CosmeticItem>* GetUnlockedCosmetics() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaNetworking::CosmeticsController_CosmeticItem>*> _field = GetClass().GetField(O("unlockedCosmetics"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GorillaNetworking::CosmeticsController_CosmeticItem>* GetUnlockedFaces() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaNetworking::CosmeticsController_CosmeticItem>*> _field = GetClass().GetField(O("unlockedFaces"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GorillaNetworking::CosmeticsController_CosmeticItem>* GetUnlockedFurs() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaNetworking::CosmeticsController_CosmeticItem>*> _field = GetClass().GetField(O("unlockedFurs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GorillaNetworking::CosmeticsController_CosmeticItem>* GetUnlockedHats() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaNetworking::CosmeticsController_CosmeticItem>*> _field = GetClass().GetField(O("unlockedHats"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GorillaNetworking::CosmeticsController_CosmeticItem>* GetUnlockedPants() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaNetworking::CosmeticsController_CosmeticItem>*> _field = GetClass().GetField(O("unlockedPants"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GorillaNetworking::CosmeticsController_CosmeticItem>* GetUnlockedPaws() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaNetworking::CosmeticsController_CosmeticItem>*> _field = GetClass().GetField(O("unlockedPaws"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GorillaNetworking::CosmeticsController_CosmeticItem>* GetUnlockedShirts() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaNetworking::CosmeticsController_CosmeticItem>*> _field = GetClass().GetField(O("unlockedShirts"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GorillaNetworking::CosmeticsController_CosmeticItem>* GetUnlockedTagFX() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaNetworking::CosmeticsController_CosmeticItem>*> _field = GetClass().GetField(O("unlockedTagFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GorillaNetworking::CosmeticsController_CosmeticItem>* GetUnlockedThrowables() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaNetworking::CosmeticsController_CosmeticItem>*> _field = GetClass().GetField(O("unlockedThrowables"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetUpdateCosmeticsRetries() {
            static BNM::Field<int> _field = GetClass().GetField(O("updateCosmeticsRetries"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::PlayFab_ClientModels::UserDataRecord* GetUserDataRecord() {
            static BNM::Field<::PlayFab_ClientModels::UserDataRecord*> _field = GetClass().GetField(O("userDataRecord"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetUserToken() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("userToken"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<>* GetV2AllCosmeticsInfoAssetRefOnPostLoad() {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("V2_allCosmeticsInfoAssetRef_OnPostLoad"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<>* GetV2OnGetCosmeticsPlayFabCatalogDataPostSuccess() {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("V2_OnGetCosmeticsPlayFabCatalogData_PostSuccess"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaNetworking::CosmeticsController_ValidatedCreatorCode* GetValidatedCreatorCode() {
            static BNM::Field<::GorillaNetworking::CosmeticsController_ValidatedCreatorCode*> _field = GetClass().GetField(O("validatedCreatorCode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::WardrobeInstance*>* GetWardrobes() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::WardrobeInstance*>*> _field = GetClass().GetField(O("wardrobes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetWardrobeType() {
            static BNM::Field<int> _field = GetClass().GetField(O("wardrobeType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAllCosmetics_fs(::BNM::Structures::Mono::List<::GorillaNetworking::CosmeticsController_CosmeticItem>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaNetworking::CosmeticsController_CosmeticItem>*> _field = GetClass().GetField(O("_allCosmetics"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAllCosmeticsDict(::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::GorillaNetworking::CosmeticsController_CosmeticItem>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::GorillaNetworking::CosmeticsController_CosmeticItem>*> _field = GetClass().GetField(O("_allCosmeticsDict"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAllCosmeticsItemIDsfromDisplayNamesDict(::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("_allCosmeticsItemIDsfromDisplayNamesDict"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetActiveMergedSet(::GorillaNetworking::CosmeticsController_CosmeticSet* value) {
            static BNM::Field<::GorillaNetworking::CosmeticsController_CosmeticSet*> _field = GetClass().GetField(O("activeMergedSet"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAnchorOverrides(::GlobalNamespace::VRRigAnchorOverrides* value) {
            static BNM::Field<::GlobalNamespace::VRRigAnchorOverrides*> _field = GetClass().GetField(O("anchorOverrides"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAttempts(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("attempts"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAttemptsLimit(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("attemptsLimit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBundleList(::GlobalNamespace::BundleList* value) {
            static BNM::Field<::GlobalNamespace::BundleList*> _field = GetClass().GetField(O("bundleList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBundlePlayfabItemName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("BundlePlayfabItemName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBundleShinyRocks(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("BundleShinyRocks"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBundleSkuName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("BundleSkuName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBuyingBundle(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("buyingBundle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCachedSet(::GorillaNetworking::CosmeticsController_CosmeticSet* value) {
            static BNM::Field<::GorillaNetworking::CosmeticsController_CosmeticSet*> _field = GetClass().GetField(O("cachedSet"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCatalog(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("catalog"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCatalogItems(::BNM::Structures::Mono::List<::PlayFab_ClientModels::CatalogItem*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_ClientModels::CatalogItem*>*> _field = GetClass().GetField(O("catalogItems"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCheckedDaily(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("checkedDaily"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCheckoutCartButtonPressedWithLeft(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("checkoutCartButtonPressedWithLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetConcatStringCosmeticsAllowed(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("concatStringCosmeticsAllowed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetConfirmedDidntPlayInBeta(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("confirmedDidntPlayInBeta"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetConsumedPurchase(::Oculus_Platform_Models::Purchase* value) {
            static BNM::Field<::Oculus_Platform_Models::Purchase*> _field = GetClass().GetField(O("consumedPurchase"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCosmeticItemVar(::GorillaNetworking::CosmeticsController_CosmeticItem value) {
            static BNM::Field<::GorillaNetworking::CosmeticsController_CosmeticItem> _field = GetClass().GetField(O("cosmeticItemVar"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCosmeticsPages(::BNM::Structures::Mono::Array<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("cosmeticsPages"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCosmeticStands(::BNM::Structures::Mono::Array<::GlobalNamespace::CosmeticStand*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::CosmeticStand*>*> _field = GetClass().GetField(O("cosmeticStands"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrencyBalance(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("currencyBalance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrencyBoards(::BNM::Structures::Mono::List<::CosmeticRoom::CurrencyBoard*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::CosmeticRoom::CurrencyBoard*>*> _field = GetClass().GetField(O("currencyBoards"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrencyName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("currencyName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentCart(::BNM::Structures::Mono::List<::GorillaNetworking::CosmeticsController_CosmeticItem>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaNetworking::CosmeticsController_CosmeticItem>*> _field = GetClass().GetField(O("currentCart"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentPurchaseID(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("currentPurchaseID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentPurchaseItemStage(::GorillaNetworking::CosmeticsController_PurchaseItemStages value) {
            static BNM::Field<::GorillaNetworking::CosmeticsController_PurchaseItemStages> _field = GetClass().GetField(O("currentPurchaseItemStage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentTime(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("currentTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentWornSet(::GorillaNetworking::CosmeticsController_CosmeticSet* value) {
            static BNM::Field<::GorillaNetworking::CosmeticsController_CosmeticSet*> _field = GetClass().GetField(O("currentWornSet"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCustomMapCosmeticsData(::GorillaTagScripts_VirtualStumpCustomMaps::CustomMapCosmeticsData* value) {
            static BNM::Field<::GorillaTagScripts_VirtualStumpCustomMaps::CustomMapCosmeticsData*> _field = GetClass().GetField(O("customMapCosmeticsData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDebugParameters(::BNM::Structures::Mono::Array<bool>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<bool>*> _field = GetClass().GetField(O("debugParameters"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEarlyAccessButtons(::BNM::Structures::Mono::Array<::GlobalNamespace::EarlyAccessButton*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::EarlyAccessButton*>*> _field = GetClass().GetField(O("earlyAccessButtons"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFinalLine(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("finalLine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFittingRooms(::BNM::Structures::Mono::List<::CosmeticRoom::FittingRoom*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::CosmeticRoom::FittingRoom*>*> _field = GetClass().GetField(O("fittingRooms"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFoundCosmetic(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("foundCosmetic"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGotMyDaily(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("gotMyDaily"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasPrice(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasPrice"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIapConsumeAttempts(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("iapConsumeAttempts"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetInstance(::GorillaNetworking::CosmeticsController* value) {
            static BNM::Field<::GorillaNetworking::CosmeticsController*> _field = GetClass().GetField(O("instance"));
            _field.Set(value);
        }
        void SetInventoryStringList(::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("inventoryStringList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsLastHandTouchedLeft(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isLastHandTouchedLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetItemCheckouts(::BNM::Structures::Mono::List<::CosmeticRoom::ItemCheckout*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::CosmeticRoom::ItemCheckout*>*> _field = GetClass().GetField(O("itemCheckouts"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetItemLists(::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("itemLists"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetItemToBuy(::GorillaNetworking::CosmeticsController_CosmeticItem value) {
            static BNM::Field<::GorillaNetworking::CosmeticsController_CosmeticItem> _field = GetClass().GetField(O("itemToBuy"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetItemToPurchase(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("itemToPurchase"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIterator(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("iterator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastDailyLogin(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("lastDailyLogin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLatestInventory(::PlayFab_ClientModels::GetUserInventoryResult* value) {
            static BNM::Field<::PlayFab_ClientModels::GetUserInventoryResult*> _field = GetClass().GetField(O("latestInventory"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftCheckoutPurchaseButtonOn(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("leftCheckoutPurchaseButtonOn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftCheckoutPurchaseButtonString(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("leftCheckoutPurchaseButtonString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetLoadedSavedOutfits(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("loadedSavedOutfits"));
            _field.Set(value);
        }
        static void SetLoadOutfitsInProgress(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("loadOutfitsInProgress"));
            _field.Set(value);
        }
        void SetMEarlyAccessSupporterPackCosmeticSO(::GorillaTag_CosmeticSystem::CosmeticSO* value) {
            static BNM::Field<::GorillaTag_CosmeticSystem::CosmeticSO*> _field = GetClass().GetField(O("m_earlyAccessSupporterPackCosmeticSO"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxUpdateCosmeticsRetries(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("maxUpdateCosmeticsRetries"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNullItem(::GorillaNetworking::CosmeticsController_CosmeticItem value) {
            static BNM::Field<::GorillaNetworking::CosmeticsController_CosmeticItem> _field = GetClass().GetField(O("nullItem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNumFittingRoomButtons(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("numFittingRoomButtons"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOculusAttemptingToPurchase(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("oculusAttemptingToPurchase"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnCosmeticsUpdated(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnCosmeticsUpdated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnGetCurrency(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnGetCurrency"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnOutfitsUpdated(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnOutfitsUpdated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetOnPlayerColorSet(::BNM::Structures::Mono::Action<float, float, float>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<float, float, float>*> _field = GetClass().GetField(O("OnPlayerColorSet"));
            _field.Set(value);
        }
        static void SetOutfitDataTemp(::GorillaNetworking::CosmeticsController_OutfitData* value) {
            static BNM::Field<::GorillaNetworking::CosmeticsController_OutfitData*> _field = GetClass().GetField(O("outfitDataTemp"));
            _field.Set(value);
        }
        void SetOutfitStringMothership(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("outfitStringMothership"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOutfitStringPendingSave(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("outfitStringPendingSave"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOutfitSystemConfig(::GlobalNamespace::CosmeticOutfitSystemConfig* value) {
            static BNM::Field<::GlobalNamespace::CosmeticOutfitSystemConfig*> _field = GetClass().GetField(O("outfitSystemConfig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayedInBeta(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("playedInBeta"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerIDList(::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("playerIDList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetPushTerminalMessage(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("PushTerminalMessage"));
            _field.Set(value);
        }
        void SetReturnString(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("returnString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightCheckoutPurchaseButtonOn(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("rightCheckoutPurchaseButtonOn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightCheckoutPurchaseButtonString(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("rightCheckoutPurchaseButtonString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSavedColors(::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>*> _field = GetClass().GetField(O("savedColors"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSavedOutfits(::BNM::Structures::Mono::Array<::GorillaNetworking::CosmeticsController_CosmeticSet*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaNetworking::CosmeticsController_CosmeticSet*>*> _field = GetClass().GetField(O("savedOutfits"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetSaveOutfitInProgress(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("saveOutfitInProgress"));
            _field.Set(value);
        }
        void SetSb(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("sb"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSearchIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("searchIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSecondsToWaitToCheckDaily(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("secondsToWaitToCheckDaily"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSecondsUntilTomorrow(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("secondsUntilTomorrow"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetSelectedOutfit(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("selectedOutfit"));
            _field.Set(value);
        }
        void SetStartupAttempts(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("startupAttempts"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTempItem(::GorillaNetworking::CosmeticsController_CosmeticItem value) {
            static BNM::Field<::GorillaNetworking::CosmeticsController_CosmeticItem> _field = GetClass().GetField(O("tempItem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTempStringArray(::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("tempStringArray"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTempUnlockedSet(::GorillaNetworking::CosmeticsController_CosmeticSet* value) {
            static BNM::Field<::GorillaNetworking::CosmeticsController_CosmeticSet*> _field = GetClass().GetField(O("tempUnlockedSet"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTriggerAPI(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("triggerAPI"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTryGetPurchasesTwice(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("tryGetPurchasesTwice"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTryOnSet(::GorillaNetworking::CosmeticsController_CosmeticSet* value) {
            static BNM::Field<::GorillaNetworking::CosmeticsController_CosmeticSet*> _field = GetClass().GetField(O("tryOnSet"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTryTwice(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("tryTwice"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUnlockedArms(::BNM::Structures::Mono::List<::GorillaNetworking::CosmeticsController_CosmeticItem>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaNetworking::CosmeticsController_CosmeticItem>*> _field = GetClass().GetField(O("unlockedArms"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUnlockedBacks(::BNM::Structures::Mono::List<::GorillaNetworking::CosmeticsController_CosmeticItem>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaNetworking::CosmeticsController_CosmeticItem>*> _field = GetClass().GetField(O("unlockedBacks"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUnlockedBadges(::BNM::Structures::Mono::List<::GorillaNetworking::CosmeticsController_CosmeticItem>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaNetworking::CosmeticsController_CosmeticItem>*> _field = GetClass().GetField(O("unlockedBadges"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUnlockedChests(::BNM::Structures::Mono::List<::GorillaNetworking::CosmeticsController_CosmeticItem>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaNetworking::CosmeticsController_CosmeticItem>*> _field = GetClass().GetField(O("unlockedChests"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUnlockedCosmetics(::BNM::Structures::Mono::List<::GorillaNetworking::CosmeticsController_CosmeticItem>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaNetworking::CosmeticsController_CosmeticItem>*> _field = GetClass().GetField(O("unlockedCosmetics"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUnlockedFaces(::BNM::Structures::Mono::List<::GorillaNetworking::CosmeticsController_CosmeticItem>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaNetworking::CosmeticsController_CosmeticItem>*> _field = GetClass().GetField(O("unlockedFaces"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUnlockedFurs(::BNM::Structures::Mono::List<::GorillaNetworking::CosmeticsController_CosmeticItem>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaNetworking::CosmeticsController_CosmeticItem>*> _field = GetClass().GetField(O("unlockedFurs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUnlockedHats(::BNM::Structures::Mono::List<::GorillaNetworking::CosmeticsController_CosmeticItem>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaNetworking::CosmeticsController_CosmeticItem>*> _field = GetClass().GetField(O("unlockedHats"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUnlockedPants(::BNM::Structures::Mono::List<::GorillaNetworking::CosmeticsController_CosmeticItem>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaNetworking::CosmeticsController_CosmeticItem>*> _field = GetClass().GetField(O("unlockedPants"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUnlockedPaws(::BNM::Structures::Mono::List<::GorillaNetworking::CosmeticsController_CosmeticItem>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaNetworking::CosmeticsController_CosmeticItem>*> _field = GetClass().GetField(O("unlockedPaws"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUnlockedShirts(::BNM::Structures::Mono::List<::GorillaNetworking::CosmeticsController_CosmeticItem>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaNetworking::CosmeticsController_CosmeticItem>*> _field = GetClass().GetField(O("unlockedShirts"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUnlockedTagFX(::BNM::Structures::Mono::List<::GorillaNetworking::CosmeticsController_CosmeticItem>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaNetworking::CosmeticsController_CosmeticItem>*> _field = GetClass().GetField(O("unlockedTagFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUnlockedThrowables(::BNM::Structures::Mono::List<::GorillaNetworking::CosmeticsController_CosmeticItem>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaNetworking::CosmeticsController_CosmeticItem>*> _field = GetClass().GetField(O("unlockedThrowables"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUpdateCosmeticsRetries(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("updateCosmeticsRetries"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUserDataRecord(::PlayFab_ClientModels::UserDataRecord* value) {
            static BNM::Field<::PlayFab_ClientModels::UserDataRecord*> _field = GetClass().GetField(O("userDataRecord"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUserToken(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("userToken"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetV2AllCosmeticsInfoAssetRefOnPostLoad(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("V2_allCosmeticsInfoAssetRef_OnPostLoad"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetV2OnGetCosmeticsPlayFabCatalogDataPostSuccess(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("V2_OnGetCosmeticsPlayFabCatalogData_PostSuccess"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetValidatedCreatorCode(::GorillaNetworking::CosmeticsController_ValidatedCreatorCode* value) {
            static BNM::Field<::GorillaNetworking::CosmeticsController_ValidatedCreatorCode*> _field = GetClass().GetField(O("validatedCreatorCode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWardrobeType(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("wardrobeType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AddCurrencyBoard(::CosmeticRoom::CurrencyBoard* newCurrencyBoard) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddCurrencyBoard"), {"newCurrencyBoard"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newCurrencyBoard);
        }
        void AddFittingRoom(::CosmeticRoom::FittingRoom* newFittingRoom) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddFittingRoom"), {"newFittingRoom"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newFittingRoom);
        }
        void AddItemCheckout(::CosmeticRoom::ItemCheckout* newItemCheckout) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddItemCheckout"), {"newItemCheckout"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newItemCheckout);
        }
        void AddTempUnlockToWardrobe(::BNM::Structures::Mono::String* cosmeticID) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddTempUnlockToWardrobe"), {"cosmeticID"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(cosmeticID);
        }
        void AddWardrobeInstance(::GlobalNamespace::WardrobeInstance* instance) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddWardrobeInstance"), {"instance"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(instance);
        }
        void AlreadyOwnAllBundleButtons() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AlreadyOwnAllBundleButtons"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool AnyMatch(::GorillaNetworking::CosmeticsController_CosmeticSet* set, ::GorillaNetworking::CosmeticsController_CosmeticItem item) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("AnyMatch"), {"set", "item"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(set, item);
        }
        void ApplyCosmeticItemToSet(::GorillaNetworking::CosmeticsController_CosmeticSet* set, ::GorillaNetworking::CosmeticsController_CosmeticItem newItem, bool isLeftHand, bool applyToPlayerPrefs) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyCosmeticItemToSet"), {"set", "newItem", "isLeftHand", "applyToPlayerPrefs"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(set, newItem, isLeftHand, applyToPlayerPrefs);
        }
        void ApplyCosmeticItemToSet(::GorillaNetworking::CosmeticsController_CosmeticSet* set, ::GorillaNetworking::CosmeticsController_CosmeticItem newItem, bool isLeftHand, bool applyToPlayerPrefs, ::BNM::Structures::Mono::List<::GorillaNetworking::CosmeticsController_CosmeticSlots>* outAppliedSlotsList) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyCosmeticItemToSet"), {"set", "newItem", "isLeftHand", "applyToPlayerPrefs", "outAppliedSlotsList"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(set, newItem, isLeftHand, applyToPlayerPrefs, outAppliedSlotsList);
        }
        void ApplyCosmeticToSet(::GorillaNetworking::CosmeticsController_CosmeticSet* set, ::GorillaNetworking::CosmeticsController_CosmeticItem newItem, int slotIdx, ::GorillaNetworking::CosmeticsController_CosmeticSlots slot, bool applyToPlayerPrefs, ::BNM::Structures::Mono::List<::GorillaNetworking::CosmeticsController_CosmeticSlots>* appliedSlots) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyCosmeticToSet"), {"set", "newItem", "slotIdx", "slot", "applyToPlayerPrefs", "appliedSlots"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(set, newItem, slotIdx, slot, applyToPlayerPrefs, appliedSlots);
        }
        void ApplyNewItem(::GorillaNetworking::CosmeticsController_CosmeticSet* outfit, int i) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyNewItem"), {"outfit", "i"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(outfit, i);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool BuildValidationCheck() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("BuildValidationCheck"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static bool CanScrollOutfits() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CanScrollOutfits"));
            return _m.Call();
        }
        static ::GorillaNetworking::CosmeticsController_CosmeticSlots CategoryToNonTransferrableSlot(::GorillaNetworking::CosmeticsController_CosmeticCategory category) {
            static BNM::Method<::GorillaNetworking::CosmeticsController_CosmeticSlots> _m = GetClass().GetMethod(O("CategoryToNonTransferrableSlot"), {"category"});
            return _m.Call(category);
        }
        ::BNM::Coroutine::IEnumerator* CheckCanGetDaily() {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("CheckCanGetDaily"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void CheckCosmeticsSharedGroup() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CheckCosmeticsSharedGroup"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CheckIAPPurchases() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CheckIAPPurchases"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::GorillaNetworking::CosmeticsController_EWearingCosmeticSet CheckIfCosmeticSetMatchesItemSet(::GorillaNetworking::CosmeticsController_CosmeticSet* set, ::BNM::Structures::Mono::String* itemName) {
            static BNM::Method<::GorillaNetworking::CosmeticsController_EWearingCosmeticSet> _m = GetClass().GetMethod(O("CheckIfCosmeticSetMatchesItemSet"), {"set", "itemName"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(set, itemName);
        }
        ::BNM::Coroutine::IEnumerator* CheckIfMyCosmeticsUpdated(::BNM::Structures::Mono::String* itemToBuyID) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("CheckIfMyCosmeticsUpdated"), {"itemToBuyID"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(itemToBuyID);
        }
        void ClearCheckout(bool sendEvent) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearCheckout"), {"sendEvent"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(sendEvent);
        }
        void ClearCheckoutAndCart(bool sendEvent) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearCheckoutAndCart"), {"sendEvent"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(sendEvent);
        }
        void ClearOutfits() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearOutfits"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static bool CompareCategoryToSavedCosmeticSlots(::GorillaNetworking::CosmeticsController_CosmeticCategory category, ::GorillaNetworking::CosmeticsController_CosmeticSlots slot) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CompareCategoryToSavedCosmeticSlots"), {"category", "slot"});
            return _m.Call(category, slot);
        }
        void ConfirmIndividualCosmeticsSharedGroup(::PlayFab_ClientModels::GetUserInventoryResult* inventory) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ConfirmIndividualCosmeticsSharedGroup"), {"inventory"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(inventory);
        }
        void ConsumeIAPOculus(::BNM::Structures::Mono::String* nonce, ::BNM::Structures::Mono::String* platform, ::BNM::Structures::Mono::String* sku, bool isStartupCheck) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ConsumeIAPOculus"), {"nonce", "platform", "sku", "isStartupCheck"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(nonce, platform, sku, isStartupCheck);
        }
        static ::GlobalNamespace::BodyDockPositions_DropPositions CosmeticSlotToDropPosition(::GorillaNetworking::CosmeticsController_CosmeticSlots slot) {
            static BNM::Method<::GlobalNamespace::BodyDockPositions_DropPositions> _m = GetClass().GetMethod(O("CosmeticSlotToDropPosition"), {"slot"});
            return _m.Call(slot);
        }
        ::GorillaNetworking::CosmeticsController_CosmeticSlots DropPositionToCosmeticSlot(::GlobalNamespace::BodyDockPositions_DropPositions pos) {
            static BNM::Method<::GorillaNetworking::CosmeticsController_CosmeticSlots> _m = GetClass().GetMethod(O("DropPositionToCosmeticSlot"), {"pos"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(pos);
        }
        void FormattedPurchaseText(::BNM::Structures::Mono::String* finalLineVar, ::BNM::Structures::Mono::String* leftPurchaseButtonText, ::BNM::Structures::Mono::String* rightPurchaseButtonText, bool leftButtonOn, bool rightButtonOn) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FormattedPurchaseText"), {"finalLineVar", "leftPurchaseButtonText", "rightPurchaseButtonText", "leftButtonOn", "rightButtonOn"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(finalLineVar, leftPurchaseButtonText, rightPurchaseButtonText, leftButtonOn, rightButtonOn);
        }
        ::BNM::Structures::Mono::List<::GorillaNetworking::CosmeticsController_CosmeticItem>* get_allCosmetics() {
            static BNM::Method<::BNM::Structures::Mono::List<::GorillaNetworking::CosmeticsController_CosmeticItem>*> _m = GetClass().GetMethod(O("get_allCosmetics"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::GorillaNetworking::CosmeticsController_CosmeticItem>* get_allCosmeticsDict() {
            static BNM::Method<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::GorillaNetworking::CosmeticsController_CosmeticItem>*> _m = GetClass().GetMethod(O("get_allCosmeticsDict"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_allCosmeticsDict_isInitialized() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_allCosmeticsDict_isInitialized"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* get_allCosmeticsItemIDsfromDisplayNamesDict() {
            static BNM::Method<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>*> _m = GetClass().GetMethod(O("get_allCosmeticsItemIDsfromDisplayNamesDict"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_allCosmeticsItemIDsfromDisplayNamesDict_isInitialized() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_allCosmeticsItemIDsfromDisplayNamesDict_isInitialized"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_CurrencyBalance() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_CurrencyBalance"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GorillaTag_CosmeticSystem::CosmeticAnchorAntiIntersectOffsets get_defaultClipOffsets() {
            static BNM::Method<::GorillaTag_CosmeticSystem::CosmeticAnchorAntiIntersectOffsets> _m = GetClass().GetMethod(O("get_defaultClipOffsets"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GorillaTag_CosmeticSystem::CosmeticSO* get_EarlyAccessSupporterPackCosmeticSO() {
            static BNM::Method<::GorillaTag_CosmeticSystem::CosmeticSO*> _m = GetClass().GetMethod(O("get_EarlyAccessSupporterPackCosmeticSO"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static bool get_hasInstance() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_hasInstance"));
            return _m.Call();
        }
        bool get_isHidingCosmeticsFromRemotePlayers() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_isHidingCosmeticsFromRemotePlayers"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_OculusAttemptingToPurchase() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_OculusAttemptingToPurchase"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static int get_SelectedOutfit() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_SelectedOutfit"));
            return _m.Call();
        }
        ::BNM::Structures::Mono::Array<::GorillaTag_CosmeticSystem::CosmeticInfoV2>* get_v2_allCosmetics() {
            static BNM::Method<::BNM::Structures::Mono::Array<::GorillaTag_CosmeticSystem::CosmeticInfoV2>*> _m = GetClass().GetMethod(O("get_v2_allCosmetics"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_v2_allCosmeticsInfoAssetRef_isLoaded() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_v2_allCosmeticsInfoAssetRef_isLoaded"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_v2_isCosmeticPlayFabCatalogDataLoaded() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_v2_isCosmeticPlayFabCatalogDataLoaded"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_v2_isGetCosmeticsPlayCatalogDataWaitingForCallback() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_v2_isGetCosmeticsPlayCatalogDataWaitingForCallback"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int GetCategorySize(::GorillaNetworking::CosmeticsController_CosmeticCategory category) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetCategorySize"), {"category"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(category);
        }
        ::GorillaTag_CosmeticSystem::CosmeticAnchorAntiIntersectOffsets GetClipOffsetsFromDisplayName(::BNM::Structures::Mono::String* displayName) {
            static BNM::Method<::GorillaTag_CosmeticSystem::CosmeticAnchorAntiIntersectOffsets> _m = GetClass().GetMethod(O("GetClipOffsetsFromDisplayName"), {"displayName"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(displayName);
        }
        ::GorillaNetworking::CosmeticsController_CosmeticItem GetCosmetic(int category, int cosmeticIndex) {
            static BNM::Method<::GorillaNetworking::CosmeticsController_CosmeticItem> _m = GetClass().GetMethod(O("GetCosmetic"), {"category", "cosmeticIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(category, cosmeticIndex);
        }
        ::GorillaNetworking::CosmeticsController_CosmeticItem GetCosmetic(::GorillaNetworking::CosmeticsController_CosmeticCategory category, int cosmeticIndex) {
            static BNM::Method<::GorillaNetworking::CosmeticsController_CosmeticItem> _m = GetClass().GetMethod(O("GetCosmetic"), {"category", "cosmeticIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(category, cosmeticIndex);
        }
        ::GorillaTag_CosmeticSystem::CosmeticSO* GetCosmeticSOFromDisplayName(::BNM::Structures::Mono::String* displayName) {
            static BNM::Method<::GorillaTag_CosmeticSystem::CosmeticSO*> _m = GetClass().GetMethod(O("GetCosmeticSOFromDisplayName"), {"displayName"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(displayName);
        }
        void GetCosmeticsPlayFabCatalogData() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetCosmeticsPlayFabCatalogData"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void GetCurrencyBalance_1() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetCurrencyBalance"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* GetCurrentlyWornCosmetics(bool tempSet) {
            static BNM::Method<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _m = GetClass().GetMethod(O("GetCurrentlyWornCosmetics"), {"tempSet"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(tempSet);
        }
        ::BNM::Structures::Mono::Array<bool>* GetCurrentRightEquippedSided(bool tempSet) {
            static BNM::Method<::BNM::Structures::Mono::Array<bool>*> _m = GetClass().GetMethod(O("GetCurrentRightEquippedSided"), {"tempSet"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(tempSet);
        }
        int GetIndexForCategory(::GorillaNetworking::CosmeticsController_CosmeticCategory category) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetIndexForCategory"), {"category"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(category);
        }
        ::BNM::Structures::Mono::String* GetItemDisplayName(::GorillaNetworking::CosmeticsController_CosmeticItem item) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetItemDisplayName"), {"item"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(item);
        }
        ::GorillaNetworking::CosmeticsController_CosmeticItem GetItemFromDict(::BNM::Structures::Mono::String* itemID) {
            static BNM::Method<::GorillaNetworking::CosmeticsController_CosmeticItem> _m = GetClass().GetMethod(O("GetItemFromDict"), {"itemID"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(itemID);
        }
        ::BNM::Structures::Mono::String* GetItemNameFromDisplayName(::BNM::Structures::Mono::String* displayName) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetItemNameFromDisplayName"), {"displayName"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(displayName);
        }
        void GetLastDailyLogin_1() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetLastDailyLogin"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Coroutine::IEnumerator* GetMyDaily() {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("GetMyDaily"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void GetSavedOutfitsComplete() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetSavedOutfitsComplete"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void GetSavedOutfitsFail(::GlobalNamespace::MothershipError* error, int status) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetSavedOutfitsFail"), {"error", "status"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(error, status);
        }
        void GetSavedOutfitsSuccess(::GlobalNamespace::MothershipUserData* response) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetSavedOutfitsSuccess"), {"response"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(response);
        }
        ::GorillaNetworking::CosmeticsController_CosmeticItem GetSlotItem(::GorillaNetworking::CosmeticsController_CosmeticSlots slot, bool checkOpposite, bool tempSet) {
            static BNM::Method<::GorillaNetworking::CosmeticsController_CosmeticItem> _m = GetClass().GetMethod(O("GetSlotItem"), {"slot", "checkOpposite", "tempSet"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(slot, checkOpposite, tempSet);
        }
        void handleIAPError(::BNM::Structures::Mono::String* error, ::PlayFab::PlayFabError* playFabError, bool isStartupCheck) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("handleIAPError"), {"error", "playFabError", "isStartupCheck"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(error, playFabError, isStartupCheck);
        }
        void handleIAPResponse(::PlayFab_Json::JsonObject* jsonResponse, bool isStartupCheck) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("handleIAPResponse"), {"jsonResponse", "isStartupCheck"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(jsonResponse, isStartupCheck);
        }
        void Initialize() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Initialize"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void InitializeCosmeticStands() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitializeCosmeticStands"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool IsCosmeticEquipped(::GorillaNetworking::CosmeticsController_CosmeticItem cosmetic) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsCosmeticEquipped"), {"cosmetic"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(cosmetic);
        }
        bool IsCosmeticEquipped(::GorillaNetworking::CosmeticsController_CosmeticItem cosmetic, bool tempSet) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsCosmeticEquipped"), {"cosmetic", "tempSet"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(cosmetic, tempSet);
        }
        bool IsTemporaryCosmeticEquipped(::GorillaNetworking::CosmeticsController_CosmeticItem cosmetic) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsTemporaryCosmeticEquipped"), {"cosmetic"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(cosmetic);
        }
        void LoadSavedOutfit(int newOutfitIndex) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LoadSavedOutfit"), {"newOutfitIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newOutfitIndex);
        }
        void LoadSavedOutfits() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LoadSavedOutfits"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ModifyUnlockList(::BNM::Structures::Mono::List<::GorillaNetworking::CosmeticsController_CosmeticItem>* list, int index, bool relock) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ModifyUnlockList"), {"list", "index", "relock"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(list, index, relock);
        }
        void OnCreatorCodeFailure() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnCreatorCodeFailure"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDisable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnGetAccessTokenForCurrencyPurchase(::Oculus_Platform::Message* msg) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnGetAccessTokenForCurrencyPurchase"), {"msg"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(msg);
        }
        void OnGetAccessTokenForStartupIAPCheck(::Oculus_Platform::Message* msg, ::BNM::Structures::Mono::String* sku) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnGetAccessTokenForStartupIAPCheck"), {"msg", "sku"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(msg, sku);
        }
        void OnGetNonceForCurrencyPurchase(::Oculus_Platform::Message* msg) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnGetNonceForCurrencyPurchase"), {"msg"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(msg);
        }
        void OnGetNonceForStartupIAPCheck(::Oculus_Platform::Message* msg, ::BNM::Structures::Mono::String* sku) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnGetNonceForStartupIAPCheck"), {"msg", "sku"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(msg, sku);
        }
        void OnGetViewerPurchasesStartup(::Oculus_Platform::Message* msg) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnGetViewerPurchasesStartup"), {"msg"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(msg);
        }
        ::BNM::Structures::Mono::String* OutfitsToString() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("OutfitsToString"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void PressCheckoutCartButton(::GlobalNamespace::CheckoutCartButton* pressedCheckoutCartButton, bool isLeftHand) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PressCheckoutCartButton"), {"pressedCheckoutCartButton", "isLeftHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pressedCheckoutCartButton, isLeftHand);
        }
        void PressCosmeticStandButton(::GlobalNamespace::CosmeticStand* pressedStand) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PressCosmeticStandButton"), {"pressedStand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pressedStand);
        }
        void PressEarlyAccessButton() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PressEarlyAccessButton"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PressFittingRoomButton(::GlobalNamespace::FittingRoomButton* pressedFittingRoomButton, bool isLeftHand) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PressFittingRoomButton"), {"pressedFittingRoomButton", "isLeftHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pressedFittingRoomButton, isLeftHand);
        }
        void PressPurchaseItemButton(::GlobalNamespace::PurchaseItemButton* pressedPurchaseItemButton, bool isLeftHand) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PressPurchaseItemButton"), {"pressedPurchaseItemButton", "isLeftHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pressedPurchaseItemButton, isLeftHand);
        }
        void PressTemporaryWardrobeItemButton(::GorillaNetworking::CosmeticsController_CosmeticItem item, bool isLeftHand) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PressTemporaryWardrobeItemButton"), {"item", "isLeftHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(item, isLeftHand);
        }
        void PressWardrobeFunctionButton(::BNM::Structures::Mono::String* function) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PressWardrobeFunctionButton"), {"function"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(function);
        }
        void PressWardrobeItemButton(::GorillaNetworking::CosmeticsController_CosmeticItem item, bool isLeftHand) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PressWardrobeItemButton"), {"item", "isLeftHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(item, isLeftHand);
        }
        void PressWardrobeItemButton(::GorillaNetworking::CosmeticsController_CosmeticItem cosmeticItem, bool isLeftHand, bool isTempCosm) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PressWardrobeItemButton"), {"cosmeticItem", "isLeftHand", "isTempCosm"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(cosmeticItem, isLeftHand, isTempCosm);
        }
        void PressWardrobeScrollOutfit(bool forward) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PressWardrobeScrollOutfit"), {"forward"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(forward);
        }
        void PrivApplyCosmeticItemToSet(::GorillaNetworking::CosmeticsController_CosmeticSet* set, ::GorillaNetworking::CosmeticsController_CosmeticItem newItem, bool isLeftHand, bool applyToPlayerPrefs, ::BNM::Structures::Mono::List<::GorillaNetworking::CosmeticsController_CosmeticSlots>* appliedSlots) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PrivApplyCosmeticItemToSet"), {"set", "newItem", "isLeftHand", "applyToPlayerPrefs", "appliedSlots"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(set, newItem, isLeftHand, applyToPlayerPrefs, appliedSlots);
        }
        void ProcessExternalUnlock(::BNM::Structures::Mono::String* itemID, bool autoEquip, bool isLeftHand) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ProcessExternalUnlock"), {"itemID", "autoEquip", "isLeftHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(itemID, autoEquip, isLeftHand);
        }
        void ProcessPurchaseItemState(::BNM::Structures::Mono::String* buttonSide, bool isLeftHand) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ProcessPurchaseItemState"), {"buttonSide", "isLeftHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(buttonSide, isLeftHand);
        }
        template <typename TP1 = void*>
        void PurchaseBundle(::GorillaNetworking_Store::StoreBundle* bundleToPurchase, TP1 ccp) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PurchaseBundle"), {"bundleToPurchase", "ccp"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(bundleToPurchase, ccp);
        }
        void PurchaseItem() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PurchaseItem"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ReauthOrBan(::PlayFab::PlayFabError* error) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReauthOrBan"), {"error"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(error);
        }
        void RefreshItemToBuyPreview() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RefreshItemToBuyPreview"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RemoveCosmeticItemFromSet(::GorillaNetworking::CosmeticsController_CosmeticSet* set, ::BNM::Structures::Mono::String* itemName, bool applyToPlayerPrefs) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveCosmeticItemFromSet"), {"set", "itemName", "applyToPlayerPrefs"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(set, itemName, applyToPlayerPrefs);
        }
        void RemoveCurrencyBoard(::CosmeticRoom::CurrencyBoard* currencyBoardToRemove) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveCurrencyBoard"), {"currencyBoardToRemove"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(currencyBoardToRemove);
        }
        void RemoveFittingRoom(::CosmeticRoom::FittingRoom* fittingRoomToRemove) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveFittingRoom"), {"fittingRoomToRemove"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(fittingRoomToRemove);
        }
        void RemoveItemCheckout(::CosmeticRoom::ItemCheckout* checkoutToRemove) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveItemCheckout"), {"checkoutToRemove"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(checkoutToRemove);
        }
        bool RemoveItemFromCart(::GorillaNetworking::CosmeticsController_CosmeticItem cosmeticItem) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("RemoveItemFromCart"), {"cosmeticItem"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(cosmeticItem);
        }
        void RemoveTempUnlockFromWardrobe(::BNM::Structures::Mono::String* cosmeticID) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveTempUnlockFromWardrobe"), {"cosmeticID"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(cosmeticID);
        }
        void RemoveWardrobeInstance(::GlobalNamespace::WardrobeInstance* instance) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveWardrobeInstance"), {"instance"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(instance);
        }
        void SaveCurrentItemPreferences() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SaveCurrentItemPreferences"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SaveItemPreference(::GorillaNetworking::CosmeticsController_CosmeticSlots slot, int slotIdx, ::GorillaNetworking::CosmeticsController_CosmeticItem newItem) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SaveItemPreference"), {"slot", "slotIdx", "newItem"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(slot, slotIdx, newItem);
        }
        void SaveOutfitsToMothership() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SaveOutfitsToMothership"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SaveOutfitsToMothershipFail(::GlobalNamespace::MothershipError* error, int status) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SaveOutfitsToMothershipFail"), {"error", "status"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(error, status);
        }
        void SaveOutfitsToMothershipSuccess(::GlobalNamespace::SetUserDataResponse* response) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SaveOutfitsToMothershipSuccess"), {"response"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(response);
        }
        ::BNM::Coroutine::IEnumerator* SendPostRequest(::BNM::Structures::Mono::String* url, ::BNM::Structures::Mono::String* jsonBody, ::GorillaNetworking::CosmeticsController_SuccessCallback* onSuccess, ::GorillaNetworking::CosmeticsController_ErrorCallback* onError) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("SendPostRequest"), {"url", "jsonBody", "onSuccess", "onError"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(url, jsonBody, onSuccess, onError);
        }
        void set_allCosmetics(::BNM::Structures::Mono::List<::GorillaNetworking::CosmeticsController_CosmeticItem>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_allCosmetics"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_allCosmeticsDict_isInitialized(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_allCosmeticsDict_isInitialized"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_allCosmeticsItemIDsfromDisplayNamesDict_isInitialized(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_allCosmeticsItemIDsfromDisplayNamesDict_isInitialized"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        static void set_hasInstance(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_hasInstance"), {"value"});
            _m.Call(value);
        }
        void set_isHidingCosmeticsFromRemotePlayers(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_isHidingCosmeticsFromRemotePlayers"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_v2_allCosmetics(::BNM::Structures::Mono::Array<::GorillaTag_CosmeticSystem::CosmeticInfoV2>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_v2_allCosmetics"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_v2_allCosmeticsInfoAssetRef_isLoaded(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_v2_allCosmeticsInfoAssetRef_isLoaded"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_v2_isCosmeticPlayFabCatalogDataLoaded(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_v2_isCosmeticPlayFabCatalogDataLoaded"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_v2_isGetCosmeticsPlayCatalogDataWaitingForCallback(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_v2_isGetCosmeticsPlayCatalogDataWaitingForCallback"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetHideCosmeticsFromRemotePlayers(bool hideCosmetics) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetHideCosmeticsFromRemotePlayers"), {"hideCosmetics"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(hideCosmetics);
        }
        void SetValidatedCreatorCode_1(::BNM::Structures::Mono::String* memberCode, ::BNM::Structures::Mono::String* groupCode, ::BNM::Structures::Mono::String* terminalId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetValidatedCreatorCode"), {"memberCode", "groupCode", "terminalId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(memberCode, groupCode, terminalId);
        }
        void SliceUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SliceUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void StringToOutfits(::BNM::Structures::Mono::String* response) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StringToOutfits"), {"response"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(response);
        }
        bool TryGetCosmeticInfoV2(::BNM::Structures::Mono::String* playFabId, ::GorillaTag_CosmeticSystem::CosmeticInfoV2& cosmeticInfo) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryGetCosmeticInfoV2"), {"playFabId", "cosmeticInfo"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(playFabId, &cosmeticInfo);
        }
        void UnlockItem(::BNM::Structures::Mono::String* itemIdToUnlock, bool relock) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnlockItem"), {"itemIdToUnlock", "relock"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(itemIdToUnlock, relock);
        }
        void UpdateCurrencyBoards() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateCurrencyBoards"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateMonkeColor(::BNM::Structures::Unity::Vector3 col, bool saveToPrefs) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateMonkeColor"), {"col", "saveToPrefs"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(col, saveToPrefs);
        }
        void UpdateMyCosmetics() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateMyCosmetics"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateMyCosmeticsForRoom(bool shouldSetSharedGroupData) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateMyCosmeticsForRoom"), {"shouldSetSharedGroupData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(shouldSetSharedGroupData);
        }
        void UpdateMyCosmeticsNotInRoom() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateMyCosmeticsNotInRoom"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateShoppingCart() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateShoppingCart"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateWardrobeModelsAndButtons() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateWardrobeModelsAndButtons"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateWornCosmetics() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateWornCosmetics"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateWornCosmetics(bool sync) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateWornCosmetics"), {"sync"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(sync);
        }
        void UpdateWornCosmetics(bool sync, bool playfx) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateWornCosmetics"), {"sync", "playfx"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(sync, playfx);
        }
        bool UseNewCosmeticsPath() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("UseNewCosmeticsPath"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void V2_allCosmeticsInfoAssetRef_LoadSucceeded(::GorillaTag_CosmeticSystem::AllCosmeticsArraySO* allCosmeticsSO) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("V2_allCosmeticsInfoAssetRef_LoadSucceeded"), {"allCosmeticsSO"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(allCosmeticsSO);
        }
        ::BNM::Coroutine::IEnumerator* V2_allCosmeticsInfoAssetRefSO_LoadCoroutine() {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("V2_allCosmeticsInfoAssetRefSO_LoadCoroutine"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void V2_ConformCosmeticItemV1DisplayName(::GorillaNetworking::CosmeticsController_CosmeticItem& cosmetic) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("V2_ConformCosmeticItemV1DisplayName"), {"cosmetic"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&cosmetic);
        }
        void V2Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("V2Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool ValidatePackedItems(::BNM::Structures::Mono::Array<int>* packed) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ValidatePackedItems"), {"packed"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(packed);
        }
        ::BNM::Coroutine::IEnumerator* WaitForNextCosmeticsAttempt() {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("WaitForNextCosmeticsAttempt"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
