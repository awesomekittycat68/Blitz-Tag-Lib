#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace PlayFab {
    struct PlayFabClientInstanceAPI : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab", "PlayFabClientInstanceAPI");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::PlayFab::PlayFabApiSettings* GetApiSettings() {
            static BNM::Field<::PlayFab::PlayFabApiSettings*> _field = GetClass().GetField(O("apiSettings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::PlayFab::PlayFabAuthenticationContext* GetAuthenticationContext() {
            static BNM::Field<::PlayFab::PlayFabAuthenticationContext*> _field = GetClass().GetField(O("authenticationContext"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        template <typename TP3 = void*>
        void AcceptTrade(::PlayFab_ClientModels::AcceptTradeRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::AcceptTradeResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AcceptTrade"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void AddFriend(::PlayFab_ClientModels::AddFriendRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::AddFriendResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddFriend"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void AddGenericID(::PlayFab_ClientModels::AddGenericIDRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::AddGenericIDResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddGenericID"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void AddOrUpdateContactEmail(::PlayFab_ClientModels::AddOrUpdateContactEmailRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::AddOrUpdateContactEmailResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddOrUpdateContactEmail"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void AddSharedGroupMembers(::PlayFab_ClientModels::AddSharedGroupMembersRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::AddSharedGroupMembersResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddSharedGroupMembers"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void AddUsernamePassword(::PlayFab_ClientModels::AddUsernamePasswordRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::AddUsernamePasswordResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddUsernamePassword"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void AddUserVirtualCurrency(::PlayFab_ClientModels::AddUserVirtualCurrencyRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::ModifyUserVirtualCurrencyResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddUserVirtualCurrency"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void AndroidDevicePushNotificationRegistration(::PlayFab_ClientModels::AndroidDevicePushNotificationRegistrationRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::AndroidDevicePushNotificationRegistrationResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AndroidDevicePushNotificationRegistration"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void AttributeInstall(::PlayFab_ClientModels::AttributeInstallRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::AttributeInstallResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AttributeInstall"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void CancelTrade(::PlayFab_ClientModels::CancelTradeRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::CancelTradeResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CancelTrade"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void ConfirmPurchase(::PlayFab_ClientModels::ConfirmPurchaseRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::ConfirmPurchaseResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ConfirmPurchase"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void ConsumeItem(::PlayFab_ClientModels::ConsumeItemRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::ConsumeItemResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ConsumeItem"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void ConsumePSNEntitlements(::PlayFab_ClientModels::ConsumePSNEntitlementsRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::ConsumePSNEntitlementsResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ConsumePSNEntitlements"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void ConsumeXboxEntitlements(::PlayFab_ClientModels::ConsumeXboxEntitlementsRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::ConsumeXboxEntitlementsResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ConsumeXboxEntitlements"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void CreateSharedGroup(::PlayFab_ClientModels::CreateSharedGroupRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::CreateSharedGroupResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CreateSharedGroup"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void ExecuteCloudScript(::PlayFab_ClientModels::ExecuteCloudScriptRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::ExecuteCloudScriptResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ExecuteCloudScript"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TOut, typename TP3 = void*>
        void ExecuteCloudScript_1(::PlayFab_ClientModels::ExecuteCloudScriptRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::ExecuteCloudScriptResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ExecuteCloudScript"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        void ForgetAllCredentials() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ForgetAllCredentials"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        template <typename TP3 = void*>
        void GetAccountInfo(::PlayFab_ClientModels::GetAccountInfoRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::GetAccountInfoResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetAccountInfo"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void GetAdPlacements(::PlayFab_ClientModels::GetAdPlacementsRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::GetAdPlacementsResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetAdPlacements"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void GetAllUsersCharacters(::PlayFab_ClientModels::ListUsersCharactersRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::ListUsersCharactersResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetAllUsersCharacters"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void GetCatalogItems(::PlayFab_ClientModels::GetCatalogItemsRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::GetCatalogItemsResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetCatalogItems"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void GetCharacterData(::PlayFab_ClientModels::GetCharacterDataRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::GetCharacterDataResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetCharacterData"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void GetCharacterInventory(::PlayFab_ClientModels::GetCharacterInventoryRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::GetCharacterInventoryResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetCharacterInventory"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void GetCharacterLeaderboard(::PlayFab_ClientModels::GetCharacterLeaderboardRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::GetCharacterLeaderboardResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetCharacterLeaderboard"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void GetCharacterReadOnlyData(::PlayFab_ClientModels::GetCharacterDataRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::GetCharacterDataResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetCharacterReadOnlyData"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void GetCharacterStatistics(::PlayFab_ClientModels::GetCharacterStatisticsRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::GetCharacterStatisticsResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetCharacterStatistics"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void GetContentDownloadUrl(::PlayFab_ClientModels::GetContentDownloadUrlRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::GetContentDownloadUrlResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetContentDownloadUrl"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void GetCurrentGames(::PlayFab_ClientModels::CurrentGamesRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::CurrentGamesResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetCurrentGames"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void GetFriendLeaderboard(::PlayFab_ClientModels::GetFriendLeaderboardRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::GetLeaderboardResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetFriendLeaderboard"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void GetFriendLeaderboardAroundPlayer(::PlayFab_ClientModels::GetFriendLeaderboardAroundPlayerRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::GetFriendLeaderboardAroundPlayerResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetFriendLeaderboardAroundPlayer"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void GetFriendsList(::PlayFab_ClientModels::GetFriendsListRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::GetFriendsListResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetFriendsList"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void GetGameServerRegions(::PlayFab_ClientModels::GameServerRegionsRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::GameServerRegionsResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetGameServerRegions"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void GetLeaderboard(::PlayFab_ClientModels::GetLeaderboardRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::GetLeaderboardResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetLeaderboard"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void GetLeaderboardAroundCharacter(::PlayFab_ClientModels::GetLeaderboardAroundCharacterRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::GetLeaderboardAroundCharacterResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetLeaderboardAroundCharacter"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void GetLeaderboardAroundPlayer(::PlayFab_ClientModels::GetLeaderboardAroundPlayerRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::GetLeaderboardAroundPlayerResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetLeaderboardAroundPlayer"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void GetLeaderboardForUserCharacters(::PlayFab_ClientModels::GetLeaderboardForUsersCharactersRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::GetLeaderboardForUsersCharactersResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetLeaderboardForUserCharacters"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void GetPaymentToken(::PlayFab_ClientModels::GetPaymentTokenRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::GetPaymentTokenResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetPaymentToken"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void GetPhotonAuthenticationToken(::PlayFab_ClientModels::GetPhotonAuthenticationTokenRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::GetPhotonAuthenticationTokenResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetPhotonAuthenticationToken"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void GetPlayerCombinedInfo(::PlayFab_ClientModels::GetPlayerCombinedInfoRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::GetPlayerCombinedInfoResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetPlayerCombinedInfo"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void GetPlayerProfile(::PlayFab_ClientModels::GetPlayerProfileRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::GetPlayerProfileResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetPlayerProfile"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void GetPlayerSegments(::PlayFab_ClientModels::GetPlayerSegmentsRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::GetPlayerSegmentsResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetPlayerSegments"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void GetPlayerStatistics(::PlayFab_ClientModels::GetPlayerStatisticsRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::GetPlayerStatisticsResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetPlayerStatistics"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void GetPlayerStatisticVersions(::PlayFab_ClientModels::GetPlayerStatisticVersionsRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::GetPlayerStatisticVersionsResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetPlayerStatisticVersions"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void GetPlayerTags(::PlayFab_ClientModels::GetPlayerTagsRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::GetPlayerTagsResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetPlayerTags"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void GetPlayerTrades(::PlayFab_ClientModels::GetPlayerTradesRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::GetPlayerTradesResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetPlayerTrades"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void GetPlayFabIDsFromFacebookIDs(::PlayFab_ClientModels::GetPlayFabIDsFromFacebookIDsRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::GetPlayFabIDsFromFacebookIDsResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetPlayFabIDsFromFacebookIDs"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void GetPlayFabIDsFromFacebookInstantGamesIds(::PlayFab_ClientModels::GetPlayFabIDsFromFacebookInstantGamesIdsRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::GetPlayFabIDsFromFacebookInstantGamesIdsResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetPlayFabIDsFromFacebookInstantGamesIds"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void GetPlayFabIDsFromGameCenterIDs(::PlayFab_ClientModels::GetPlayFabIDsFromGameCenterIDsRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::GetPlayFabIDsFromGameCenterIDsResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetPlayFabIDsFromGameCenterIDs"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void GetPlayFabIDsFromGenericIDs(::PlayFab_ClientModels::GetPlayFabIDsFromGenericIDsRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::GetPlayFabIDsFromGenericIDsResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetPlayFabIDsFromGenericIDs"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void GetPlayFabIDsFromGoogleIDs(::PlayFab_ClientModels::GetPlayFabIDsFromGoogleIDsRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::GetPlayFabIDsFromGoogleIDsResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetPlayFabIDsFromGoogleIDs"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void GetPlayFabIDsFromKongregateIDs(::PlayFab_ClientModels::GetPlayFabIDsFromKongregateIDsRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::GetPlayFabIDsFromKongregateIDsResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetPlayFabIDsFromKongregateIDs"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void GetPlayFabIDsFromNintendoSwitchDeviceIds(::PlayFab_ClientModels::GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::GetPlayFabIDsFromNintendoSwitchDeviceIdsResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetPlayFabIDsFromNintendoSwitchDeviceIds"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void GetPlayFabIDsFromPSNAccountIDs(::PlayFab_ClientModels::GetPlayFabIDsFromPSNAccountIDsRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::GetPlayFabIDsFromPSNAccountIDsResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetPlayFabIDsFromPSNAccountIDs"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void GetPlayFabIDsFromSteamIDs(::PlayFab_ClientModels::GetPlayFabIDsFromSteamIDsRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::GetPlayFabIDsFromSteamIDsResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetPlayFabIDsFromSteamIDs"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void GetPlayFabIDsFromTwitchIDs(::PlayFab_ClientModels::GetPlayFabIDsFromTwitchIDsRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::GetPlayFabIDsFromTwitchIDsResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetPlayFabIDsFromTwitchIDs"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void GetPlayFabIDsFromXboxLiveIDs(::PlayFab_ClientModels::GetPlayFabIDsFromXboxLiveIDsRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::GetPlayFabIDsFromXboxLiveIDsResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetPlayFabIDsFromXboxLiveIDs"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void GetPublisherData(::PlayFab_ClientModels::GetPublisherDataRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::GetPublisherDataResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetPublisherData"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void GetPurchase(::PlayFab_ClientModels::GetPurchaseRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::GetPurchaseResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetPurchase"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void GetSharedGroupData(::PlayFab_ClientModels::GetSharedGroupDataRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::GetSharedGroupDataResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetSharedGroupData"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void GetStoreItems(::PlayFab_ClientModels::GetStoreItemsRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::GetStoreItemsResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetStoreItems"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void GetTime(::PlayFab_ClientModels::GetTimeRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::GetTimeResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetTime"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void GetTitleData(::PlayFab_ClientModels::GetTitleDataRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::GetTitleDataResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetTitleData"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void GetTitleNews(::PlayFab_ClientModels::GetTitleNewsRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::GetTitleNewsResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetTitleNews"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void GetTitlePublicKey(::PlayFab_ClientModels::GetTitlePublicKeyRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::GetTitlePublicKeyResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetTitlePublicKey"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void GetTradeStatus(::PlayFab_ClientModels::GetTradeStatusRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::GetTradeStatusResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetTradeStatus"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void GetUserData(::PlayFab_ClientModels::GetUserDataRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::GetUserDataResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetUserData"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void GetUserInventory(::PlayFab_ClientModels::GetUserInventoryRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::GetUserInventoryResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetUserInventory"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void GetUserPublisherData(::PlayFab_ClientModels::GetUserDataRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::GetUserDataResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetUserPublisherData"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void GetUserPublisherReadOnlyData(::PlayFab_ClientModels::GetUserDataRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::GetUserDataResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetUserPublisherReadOnlyData"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void GetUserReadOnlyData(::PlayFab_ClientModels::GetUserDataRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::GetUserDataResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetUserReadOnlyData"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void GetWindowsHelloChallenge(::PlayFab_ClientModels::GetWindowsHelloChallengeRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::GetWindowsHelloChallengeResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetWindowsHelloChallenge"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void GrantCharacterToUser(::PlayFab_ClientModels::GrantCharacterToUserRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::GrantCharacterToUserResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GrantCharacterToUser"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        bool IsClientLoggedIn() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsClientLoggedIn"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        template <typename TP3 = void*>
        void LinkAndroidDeviceID(::PlayFab_ClientModels::LinkAndroidDeviceIDRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::LinkAndroidDeviceIDResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LinkAndroidDeviceID"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void LinkApple(::PlayFab_ClientModels::LinkAppleRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::EmptyResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LinkApple"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void LinkCustomID(::PlayFab_ClientModels::LinkCustomIDRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::LinkCustomIDResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LinkCustomID"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void LinkFacebookAccount(::PlayFab_ClientModels::LinkFacebookAccountRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::LinkFacebookAccountResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LinkFacebookAccount"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void LinkFacebookInstantGamesId(::PlayFab_ClientModels::LinkFacebookInstantGamesIdRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::LinkFacebookInstantGamesIdResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LinkFacebookInstantGamesId"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void LinkGameCenterAccount(::PlayFab_ClientModels::LinkGameCenterAccountRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::LinkGameCenterAccountResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LinkGameCenterAccount"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void LinkGoogleAccount(::PlayFab_ClientModels::LinkGoogleAccountRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::LinkGoogleAccountResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LinkGoogleAccount"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void LinkIOSDeviceID(::PlayFab_ClientModels::LinkIOSDeviceIDRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::LinkIOSDeviceIDResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LinkIOSDeviceID"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void LinkKongregate(::PlayFab_ClientModels::LinkKongregateAccountRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::LinkKongregateAccountResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LinkKongregate"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void LinkNintendoAccount(::PlayFab_ClientModels::LinkNintendoAccountRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::EmptyResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LinkNintendoAccount"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void LinkNintendoSwitchDeviceId(::PlayFab_ClientModels::LinkNintendoSwitchDeviceIdRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::LinkNintendoSwitchDeviceIdResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LinkNintendoSwitchDeviceId"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void LinkOpenIdConnect(::PlayFab_ClientModels::LinkOpenIdConnectRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::EmptyResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LinkOpenIdConnect"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void LinkPSNAccount(::PlayFab_ClientModels::LinkPSNAccountRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::LinkPSNAccountResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LinkPSNAccount"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void LinkSteamAccount(::PlayFab_ClientModels::LinkSteamAccountRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::LinkSteamAccountResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LinkSteamAccount"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void LinkTwitch(::PlayFab_ClientModels::LinkTwitchAccountRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::LinkTwitchAccountResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LinkTwitch"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void LinkWindowsHello(::PlayFab_ClientModels::LinkWindowsHelloAccountRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::LinkWindowsHelloAccountResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LinkWindowsHello"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void LinkXboxAccount(::PlayFab_ClientModels::LinkXboxAccountRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::LinkXboxAccountResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LinkXboxAccount"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void LoginWithAndroidDeviceID(::PlayFab_ClientModels::LoginWithAndroidDeviceIDRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::LoginResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LoginWithAndroidDeviceID"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void LoginWithApple(::PlayFab_ClientModels::LoginWithAppleRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::LoginResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LoginWithApple"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void LoginWithCustomID(::PlayFab_ClientModels::LoginWithCustomIDRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::LoginResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LoginWithCustomID"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void LoginWithEmailAddress(::PlayFab_ClientModels::LoginWithEmailAddressRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::LoginResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LoginWithEmailAddress"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void LoginWithFacebook(::PlayFab_ClientModels::LoginWithFacebookRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::LoginResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LoginWithFacebook"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void LoginWithFacebookInstantGamesId(::PlayFab_ClientModels::LoginWithFacebookInstantGamesIdRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::LoginResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LoginWithFacebookInstantGamesId"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void LoginWithGameCenter(::PlayFab_ClientModels::LoginWithGameCenterRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::LoginResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LoginWithGameCenter"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void LoginWithGoogleAccount(::PlayFab_ClientModels::LoginWithGoogleAccountRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::LoginResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LoginWithGoogleAccount"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void LoginWithIOSDeviceID(::PlayFab_ClientModels::LoginWithIOSDeviceIDRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::LoginResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LoginWithIOSDeviceID"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void LoginWithKongregate(::PlayFab_ClientModels::LoginWithKongregateRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::LoginResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LoginWithKongregate"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void LoginWithNintendoAccount(::PlayFab_ClientModels::LoginWithNintendoAccountRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::LoginResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LoginWithNintendoAccount"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void LoginWithNintendoSwitchDeviceId(::PlayFab_ClientModels::LoginWithNintendoSwitchDeviceIdRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::LoginResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LoginWithNintendoSwitchDeviceId"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void LoginWithOpenIdConnect(::PlayFab_ClientModels::LoginWithOpenIdConnectRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::LoginResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LoginWithOpenIdConnect"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void LoginWithPlayFab(::PlayFab_ClientModels::LoginWithPlayFabRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::LoginResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LoginWithPlayFab"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void LoginWithPSN(::PlayFab_ClientModels::LoginWithPSNRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::LoginResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LoginWithPSN"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void LoginWithSteam(::PlayFab_ClientModels::LoginWithSteamRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::LoginResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LoginWithSteam"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void LoginWithTwitch(::PlayFab_ClientModels::LoginWithTwitchRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::LoginResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LoginWithTwitch"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void LoginWithWindowsHello(::PlayFab_ClientModels::LoginWithWindowsHelloRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::LoginResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LoginWithWindowsHello"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void LoginWithXbox(::PlayFab_ClientModels::LoginWithXboxRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::LoginResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LoginWithXbox"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void Matchmake(::PlayFab_ClientModels::MatchmakeRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::MatchmakeResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Matchmake"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void OpenTrade(::PlayFab_ClientModels::OpenTradeRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::OpenTradeResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OpenTrade"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void PayForPurchase(::PlayFab_ClientModels::PayForPurchaseRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::PayForPurchaseResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PayForPurchase"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void PurchaseItem(::PlayFab_ClientModels::PurchaseItemRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::PurchaseItemResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PurchaseItem"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void RedeemCoupon(::PlayFab_ClientModels::RedeemCouponRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::RedeemCouponResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RedeemCoupon"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void RefreshPSNAuthToken(::PlayFab_ClientModels::RefreshPSNAuthTokenRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::EmptyResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RefreshPSNAuthToken"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void RegisterForIOSPushNotification(::PlayFab_ClientModels::RegisterForIOSPushNotificationRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::RegisterForIOSPushNotificationResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RegisterForIOSPushNotification"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void RegisterPlayFabUser(::PlayFab_ClientModels::RegisterPlayFabUserRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::RegisterPlayFabUserResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RegisterPlayFabUser"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void RegisterWithWindowsHello(::PlayFab_ClientModels::RegisterWithWindowsHelloRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::LoginResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RegisterWithWindowsHello"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void RemoveContactEmail(::PlayFab_ClientModels::RemoveContactEmailRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::RemoveContactEmailResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveContactEmail"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void RemoveFriend(::PlayFab_ClientModels::RemoveFriendRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::RemoveFriendResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveFriend"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void RemoveGenericID(::PlayFab_ClientModels::RemoveGenericIDRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::RemoveGenericIDResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveGenericID"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void RemoveSharedGroupMembers(::PlayFab_ClientModels::RemoveSharedGroupMembersRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::RemoveSharedGroupMembersResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveSharedGroupMembers"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void ReportAdActivity(::PlayFab_ClientModels::ReportAdActivityRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::ReportAdActivityResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReportAdActivity"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void ReportDeviceInfo(::PlayFab_ClientModels::DeviceInfoRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::EmptyResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReportDeviceInfo"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void ReportPlayer(::PlayFab_ClientModels::ReportPlayerClientRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::ReportPlayerClientResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReportPlayer"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void RestoreIOSPurchases(::PlayFab_ClientModels::RestoreIOSPurchasesRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::RestoreIOSPurchasesResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RestoreIOSPurchases"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void RewardAdActivity(::PlayFab_ClientModels::RewardAdActivityRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::RewardAdActivityResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RewardAdActivity"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void SendAccountRecoveryEmail(::PlayFab_ClientModels::SendAccountRecoveryEmailRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::SendAccountRecoveryEmailResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendAccountRecoveryEmail"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void SetFriendTags(::PlayFab_ClientModels::SetFriendTagsRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::SetFriendTagsResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetFriendTags"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void SetPlayerSecret(::PlayFab_ClientModels::SetPlayerSecretRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::SetPlayerSecretResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetPlayerSecret"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void StartGame(::PlayFab_ClientModels::StartGameRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::StartGameResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StartGame"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void StartPurchase(::PlayFab_ClientModels::StartPurchaseRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::StartPurchaseResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StartPurchase"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void SubtractUserVirtualCurrency(::PlayFab_ClientModels::SubtractUserVirtualCurrencyRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::ModifyUserVirtualCurrencyResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SubtractUserVirtualCurrency"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void UnlinkAndroidDeviceID(::PlayFab_ClientModels::UnlinkAndroidDeviceIDRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::UnlinkAndroidDeviceIDResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnlinkAndroidDeviceID"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void UnlinkApple(::PlayFab_ClientModels::UnlinkAppleRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::EmptyResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnlinkApple"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void UnlinkCustomID(::PlayFab_ClientModels::UnlinkCustomIDRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::UnlinkCustomIDResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnlinkCustomID"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void UnlinkFacebookAccount(::PlayFab_ClientModels::UnlinkFacebookAccountRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::UnlinkFacebookAccountResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnlinkFacebookAccount"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void UnlinkFacebookInstantGamesId(::PlayFab_ClientModels::UnlinkFacebookInstantGamesIdRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::UnlinkFacebookInstantGamesIdResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnlinkFacebookInstantGamesId"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void UnlinkGameCenterAccount(::PlayFab_ClientModels::UnlinkGameCenterAccountRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::UnlinkGameCenterAccountResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnlinkGameCenterAccount"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void UnlinkGoogleAccount(::PlayFab_ClientModels::UnlinkGoogleAccountRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::UnlinkGoogleAccountResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnlinkGoogleAccount"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void UnlinkIOSDeviceID(::PlayFab_ClientModels::UnlinkIOSDeviceIDRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::UnlinkIOSDeviceIDResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnlinkIOSDeviceID"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void UnlinkKongregate(::PlayFab_ClientModels::UnlinkKongregateAccountRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::UnlinkKongregateAccountResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnlinkKongregate"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void UnlinkNintendoAccount(::PlayFab_ClientModels::UnlinkNintendoAccountRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::EmptyResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnlinkNintendoAccount"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void UnlinkNintendoSwitchDeviceId(::PlayFab_ClientModels::UnlinkNintendoSwitchDeviceIdRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::UnlinkNintendoSwitchDeviceIdResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnlinkNintendoSwitchDeviceId"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void UnlinkOpenIdConnect(::PlayFab_ClientModels::UnlinkOpenIdConnectRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::EmptyResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnlinkOpenIdConnect"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void UnlinkPSNAccount(::PlayFab_ClientModels::UnlinkPSNAccountRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::UnlinkPSNAccountResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnlinkPSNAccount"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void UnlinkSteamAccount(::PlayFab_ClientModels::UnlinkSteamAccountRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::UnlinkSteamAccountResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnlinkSteamAccount"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void UnlinkTwitch(::PlayFab_ClientModels::UnlinkTwitchAccountRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::UnlinkTwitchAccountResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnlinkTwitch"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void UnlinkWindowsHello(::PlayFab_ClientModels::UnlinkWindowsHelloAccountRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::UnlinkWindowsHelloAccountResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnlinkWindowsHello"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void UnlinkXboxAccount(::PlayFab_ClientModels::UnlinkXboxAccountRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::UnlinkXboxAccountResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnlinkXboxAccount"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void UnlockContainerInstance(::PlayFab_ClientModels::UnlockContainerInstanceRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::UnlockContainerItemResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnlockContainerInstance"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void UnlockContainerItem(::PlayFab_ClientModels::UnlockContainerItemRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::UnlockContainerItemResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnlockContainerItem"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void UpdateAvatarUrl(::PlayFab_ClientModels::UpdateAvatarUrlRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::EmptyResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateAvatarUrl"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void UpdateCharacterData(::PlayFab_ClientModels::UpdateCharacterDataRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::UpdateCharacterDataResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateCharacterData"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void UpdateCharacterStatistics(::PlayFab_ClientModels::UpdateCharacterStatisticsRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::UpdateCharacterStatisticsResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateCharacterStatistics"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void UpdatePlayerStatistics(::PlayFab_ClientModels::UpdatePlayerStatisticsRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::UpdatePlayerStatisticsResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdatePlayerStatistics"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void UpdateSharedGroupData(::PlayFab_ClientModels::UpdateSharedGroupDataRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::UpdateSharedGroupDataResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateSharedGroupData"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void UpdateUserData(::PlayFab_ClientModels::UpdateUserDataRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::UpdateUserDataResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateUserData"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void UpdateUserPublisherData(::PlayFab_ClientModels::UpdateUserDataRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::UpdateUserDataResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateUserPublisherData"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void UpdateUserTitleDisplayName(::PlayFab_ClientModels::UpdateUserTitleDisplayNameRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::UpdateUserTitleDisplayNameResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateUserTitleDisplayName"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void ValidateAmazonIAPReceipt(::PlayFab_ClientModels::ValidateAmazonReceiptRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::ValidateAmazonReceiptResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ValidateAmazonIAPReceipt"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void ValidateGooglePlayPurchase(::PlayFab_ClientModels::ValidateGooglePlayPurchaseRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::ValidateGooglePlayPurchaseResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ValidateGooglePlayPurchase"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void ValidateIOSReceipt(::PlayFab_ClientModels::ValidateIOSReceiptRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::ValidateIOSReceiptResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ValidateIOSReceipt"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void ValidateWindowsStoreReceipt(::PlayFab_ClientModels::ValidateWindowsReceiptRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::ValidateWindowsReceiptResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ValidateWindowsStoreReceipt"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void WriteCharacterEvent(::PlayFab_ClientModels::WriteClientCharacterEventRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::WriteEventResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteCharacterEvent"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void WritePlayerEvent(::PlayFab_ClientModels::WriteClientPlayerEventRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::WriteEventResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WritePlayerEvent"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void WriteTitleEvent(::PlayFab_ClientModels::WriteTitleEventRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::WriteEventResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteTitleEvent"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
    };
}
