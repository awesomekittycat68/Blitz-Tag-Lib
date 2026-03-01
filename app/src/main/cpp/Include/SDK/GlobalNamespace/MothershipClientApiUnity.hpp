#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct MothershipClientApiUnity : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "MothershipClientApiUnity");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void add_OnCloseNotificationSocket(::BNM::Structures::Mono::Action<::BNM::Types::nint>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnCloseNotificationSocket"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnCloseNotificationSocket(::BNM::Structures::Mono::Action<::BNM::Types::nint>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnCloseNotificationSocket"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_OnErrorNotificationSocket(::BNM::Structures::Mono::Action<::BNM::Types::nint>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnErrorNotificationSocket"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnErrorNotificationSocket(::BNM::Structures::Mono::Action<::BNM::Types::nint>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnErrorNotificationSocket"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_OnMessageNotificationSocket(::BNM::Structures::Mono::Action<::GlobalNamespace::NotificationsMessageResponse*, ::BNM::Types::nint>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnMessageNotificationSocket"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnMessageNotificationSocket(::BNM::Structures::Mono::Action<::GlobalNamespace::NotificationsMessageResponse*, ::BNM::Types::nint>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnMessageNotificationSocket"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_OnOpenNotificationSocket(::BNM::Structures::Mono::Action<::BNM::Types::nint>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnOpenNotificationSocket"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnOpenNotificationSocket(::BNM::Structures::Mono::Action<::BNM::Types::nint>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnOpenNotificationSocket"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        static ::GlobalNamespace::LoginCompleteDelegateWrapper* GetAuth() {
            static BNM::Field<::GlobalNamespace::LoginCompleteDelegateWrapper*> _field = GetClass().GetField(O("auth"));
            return _field.Get();
        }
        static ::GlobalNamespace::MothershipAuthRefreshRequiredCallback* GetAuthRefreshRequiredCallback() {
            static BNM::Field<::GlobalNamespace::MothershipAuthRefreshRequiredCallback*> _field = GetClass().GetField(O("authRefreshRequiredCallback"));
            return _field.Get();
        }
        static ::GlobalNamespace::MothershipBeginQuestCallback* GetBeginQuestCallback() {
            static BNM::Field<::GlobalNamespace::MothershipBeginQuestCallback*> _field = GetClass().GetField(O("beginQuestCallback"));
            return _field.Get();
        }
        static ::GlobalNamespace::MothershipBeginSteamCallback* GetBeginSteamCallback() {
            static BNM::Field<::GlobalNamespace::MothershipBeginSteamCallback*> _field = GetClass().GetField(O("beginSteamCallback"));
            return _field.Get();
        }
        static ::GlobalNamespace::MothershipClientApiClient* GetClient() {
            static BNM::Field<::GlobalNamespace::MothershipClientApiClient*> _field = GetClass().GetField(O("client"));
            return _field.Get();
        }
        static ::GlobalNamespace::MothershipCreateReportCallback* GetCreateReportCallback() {
            static BNM::Field<::GlobalNamespace::MothershipCreateReportCallback*> _field = GetClass().GetField(O("createReportCallback"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::String* GetDeploymentId() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("DeploymentId"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::String* GetEnvironmentId() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("EnvironmentId"));
            return _field.Get();
        }
        static ::GlobalNamespace::MothershipGetMySubscriptionCallback* GetGetMySubscriptionCallback() {
            static BNM::Field<::GlobalNamespace::MothershipGetMySubscriptionCallback*> _field = GetClass().GetField(O("getMySubscriptionCallback"));
            return _field.Get();
        }
        static ::GlobalNamespace::MothershipGetPlayerProgressionCallback* GetGetProgressionCallback() {
            static BNM::Field<::GlobalNamespace::MothershipGetPlayerProgressionCallback*> _field = GetClass().GetField(O("getProgressionCallback"));
            return _field.Get();
        }
        static ::GlobalNamespace::MothershipGetPlayerProgressionTressCallback* GetGetProgressionTreesCallback() {
            static BNM::Field<::GlobalNamespace::MothershipGetPlayerProgressionTressCallback*> _field = GetClass().GetField(O("getProgressionTreesCallback"));
            return _field.Get();
        }
        static ::GlobalNamespace::MothershipGetRoomPlayersSubscriptionsCallback* GetGetRoomPlayersSubscriptionsCallback() {
            static BNM::Field<::GlobalNamespace::MothershipGetRoomPlayersSubscriptionsCallback*> _field = GetClass().GetField(O("getRoomPlayersSubscriptionsCallback"));
            return _field.Get();
        }
        static ::GlobalNamespace::MothershipGetStorefrontCallback* GetGetStorefrontCallback() {
            static BNM::Field<::GlobalNamespace::MothershipGetStorefrontCallback*> _field = GetClass().GetField(O("getStorefrontCallback"));
            return _field.Get();
        }
        static ::GlobalNamespace::MothershipGetUserDataCallback* GetGetUserdataCallback() {
            static BNM::Field<::GlobalNamespace::MothershipGetUserDataCallback*> _field = GetClass().GetField(O("getUserdataCallback"));
            return _field.Get();
        }
        static ::GlobalNamespace::MothershipGetUserInventoryCallback* GetGetUserInventoryCallback() {
            static BNM::Field<::GlobalNamespace::MothershipGetUserInventoryCallback*> _field = GetClass().GetField(O("getUserInventoryCallback"));
            return _field.Get();
        }
        static ::GlobalNamespace::MothershipHttpClientUnity* GetHttp() {
            static BNM::Field<::GlobalNamespace::MothershipHttpClientUnity*> _field = GetClass().GetField(O("http"));
            return _field.Get();
        }
        static bool GetIsEnabled() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isEnabled"));
            return _field.Get();
        }
        static ::GlobalNamespace::MothershipListTitleDataCallback* GetListMothershipTitleDataCallback() {
            static BNM::Field<::GlobalNamespace::MothershipListTitleDataCallback*> _field = GetClass().GetField(O("listMothershipTitleDataCallback"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::String* GetMothershipBaseUrl() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("MothershipBaseUrl"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::String* GetMothershipWebSocketUrl() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("MothershipWebSocketUrl"));
            return _field.Get();
        }
        static ::GlobalNamespace::MothershipNotificationsWrapper* GetNotificationWrapper() {
            static BNM::Field<::GlobalNamespace::MothershipNotificationsWrapper*> _field = GetClass().GetField(O("notificationWrapper"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Action<::BNM::Types::nint>* GetOnCloseNotificationSocket() {
            static BNM::Field<::BNM::Structures::Mono::Action<::BNM::Types::nint>*> _field = GetClass().GetField(O("OnCloseNotificationSocket"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Action<::BNM::Types::nint>* GetOnErrorNotificationSocket() {
            static BNM::Field<::BNM::Structures::Mono::Action<::BNM::Types::nint>*> _field = GetClass().GetField(O("OnErrorNotificationSocket"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Action<::GlobalNamespace::NotificationsMessageResponse*, ::BNM::Types::nint>* GetOnMessageNotificationSocket() {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::NotificationsMessageResponse*, ::BNM::Types::nint>*> _field = GetClass().GetField(O("OnMessageNotificationSocket"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Action<::BNM::Types::nint>* GetOnOpenNotificationSocket() {
            static BNM::Field<::BNM::Structures::Mono::Action<::BNM::Types::nint>*> _field = GetClass().GetField(O("OnOpenNotificationSocket"));
            return _field.Get();
        }
        static ::GlobalNamespace::MothershipPurchaseOfferCallback* GetPurchaseOfferCallback() {
            static BNM::Field<::GlobalNamespace::MothershipPurchaseOfferCallback*> _field = GetClass().GetField(O("purchaseOfferCallback"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::String* GetSessionId() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("SessionId"));
            return _field.Get();
        }
        static ::GlobalNamespace::MothershipSetUserDataCallback* GetSetUserDataCallback() {
            static BNM::Field<::GlobalNamespace::MothershipSetUserDataCallback*> _field = GetClass().GetField(O("setUserDataCallback"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::String* GetTitleId() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("TitleId"));
            return _field.Get();
        }
        static ::GlobalNamespace::MothershipWebSocketWrapper* GetWebsocket() {
            static BNM::Field<::GlobalNamespace::MothershipWebSocketWrapper*> _field = GetClass().GetField(O("websocket"));
            return _field.Get();
        }
        static ::GlobalNamespace::MothershipWebSocketDispatcher* GetWebsocketDispatcher() {
            static BNM::Field<::GlobalNamespace::MothershipWebSocketDispatcher*> _field = GetClass().GetField(O("websocketDispatcher"));
            return _field.Get();
        }
        static ::GlobalNamespace::MothershipWriteEventsCallback* GetWriteEventsCallback() {
            static BNM::Field<::GlobalNamespace::MothershipWriteEventsCallback*> _field = GetClass().GetField(O("writeEventsCallback"));
            return _field.Get();
        }
        static void SetAuth(::GlobalNamespace::LoginCompleteDelegateWrapper* value) {
            static BNM::Field<::GlobalNamespace::LoginCompleteDelegateWrapper*> _field = GetClass().GetField(O("auth"));
            _field.Set(value);
        }
        static void SetAuthRefreshRequiredCallback(::GlobalNamespace::MothershipAuthRefreshRequiredCallback* value) {
            static BNM::Field<::GlobalNamespace::MothershipAuthRefreshRequiredCallback*> _field = GetClass().GetField(O("authRefreshRequiredCallback"));
            _field.Set(value);
        }
        static void SetBeginQuestCallback(::GlobalNamespace::MothershipBeginQuestCallback* value) {
            static BNM::Field<::GlobalNamespace::MothershipBeginQuestCallback*> _field = GetClass().GetField(O("beginQuestCallback"));
            _field.Set(value);
        }
        static void SetBeginSteamCallback(::GlobalNamespace::MothershipBeginSteamCallback* value) {
            static BNM::Field<::GlobalNamespace::MothershipBeginSteamCallback*> _field = GetClass().GetField(O("beginSteamCallback"));
            _field.Set(value);
        }
        static void SetClient(::GlobalNamespace::MothershipClientApiClient* value) {
            static BNM::Field<::GlobalNamespace::MothershipClientApiClient*> _field = GetClass().GetField(O("client"));
            _field.Set(value);
        }
        static void SetCreateReportCallback(::GlobalNamespace::MothershipCreateReportCallback* value) {
            static BNM::Field<::GlobalNamespace::MothershipCreateReportCallback*> _field = GetClass().GetField(O("createReportCallback"));
            _field.Set(value);
        }
        static void SetDeploymentId(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("DeploymentId"));
            _field.Set(value);
        }
        static void SetEnvironmentId(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("EnvironmentId"));
            _field.Set(value);
        }
        static void SetGetMySubscriptionCallback(::GlobalNamespace::MothershipGetMySubscriptionCallback* value) {
            static BNM::Field<::GlobalNamespace::MothershipGetMySubscriptionCallback*> _field = GetClass().GetField(O("getMySubscriptionCallback"));
            _field.Set(value);
        }
        static void SetGetProgressionCallback(::GlobalNamespace::MothershipGetPlayerProgressionCallback* value) {
            static BNM::Field<::GlobalNamespace::MothershipGetPlayerProgressionCallback*> _field = GetClass().GetField(O("getProgressionCallback"));
            _field.Set(value);
        }
        static void SetGetProgressionTreesCallback(::GlobalNamespace::MothershipGetPlayerProgressionTressCallback* value) {
            static BNM::Field<::GlobalNamespace::MothershipGetPlayerProgressionTressCallback*> _field = GetClass().GetField(O("getProgressionTreesCallback"));
            _field.Set(value);
        }
        static void SetGetRoomPlayersSubscriptionsCallback(::GlobalNamespace::MothershipGetRoomPlayersSubscriptionsCallback* value) {
            static BNM::Field<::GlobalNamespace::MothershipGetRoomPlayersSubscriptionsCallback*> _field = GetClass().GetField(O("getRoomPlayersSubscriptionsCallback"));
            _field.Set(value);
        }
        static void SetGetStorefrontCallback(::GlobalNamespace::MothershipGetStorefrontCallback* value) {
            static BNM::Field<::GlobalNamespace::MothershipGetStorefrontCallback*> _field = GetClass().GetField(O("getStorefrontCallback"));
            _field.Set(value);
        }
        static void SetGetUserdataCallback(::GlobalNamespace::MothershipGetUserDataCallback* value) {
            static BNM::Field<::GlobalNamespace::MothershipGetUserDataCallback*> _field = GetClass().GetField(O("getUserdataCallback"));
            _field.Set(value);
        }
        static void SetGetUserInventoryCallback(::GlobalNamespace::MothershipGetUserInventoryCallback* value) {
            static BNM::Field<::GlobalNamespace::MothershipGetUserInventoryCallback*> _field = GetClass().GetField(O("getUserInventoryCallback"));
            _field.Set(value);
        }
        static void SetHttp(::GlobalNamespace::MothershipHttpClientUnity* value) {
            static BNM::Field<::GlobalNamespace::MothershipHttpClientUnity*> _field = GetClass().GetField(O("http"));
            _field.Set(value);
        }
        static void SetIsEnabled(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isEnabled"));
            _field.Set(value);
        }
        static void SetListMothershipTitleDataCallback(::GlobalNamespace::MothershipListTitleDataCallback* value) {
            static BNM::Field<::GlobalNamespace::MothershipListTitleDataCallback*> _field = GetClass().GetField(O("listMothershipTitleDataCallback"));
            _field.Set(value);
        }
        static void SetMothershipBaseUrl(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("MothershipBaseUrl"));
            _field.Set(value);
        }
        static void SetMothershipWebSocketUrl(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("MothershipWebSocketUrl"));
            _field.Set(value);
        }
        static void SetNotificationWrapper(::GlobalNamespace::MothershipNotificationsWrapper* value) {
            static BNM::Field<::GlobalNamespace::MothershipNotificationsWrapper*> _field = GetClass().GetField(O("notificationWrapper"));
            _field.Set(value);
        }
        static void SetOnCloseNotificationSocket(::BNM::Structures::Mono::Action<::BNM::Types::nint>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::BNM::Types::nint>*> _field = GetClass().GetField(O("OnCloseNotificationSocket"));
            _field.Set(value);
        }
        static void SetOnErrorNotificationSocket(::BNM::Structures::Mono::Action<::BNM::Types::nint>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::BNM::Types::nint>*> _field = GetClass().GetField(O("OnErrorNotificationSocket"));
            _field.Set(value);
        }
        static void SetOnMessageNotificationSocket(::BNM::Structures::Mono::Action<::GlobalNamespace::NotificationsMessageResponse*, ::BNM::Types::nint>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::NotificationsMessageResponse*, ::BNM::Types::nint>*> _field = GetClass().GetField(O("OnMessageNotificationSocket"));
            _field.Set(value);
        }
        static void SetOnOpenNotificationSocket(::BNM::Structures::Mono::Action<::BNM::Types::nint>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::BNM::Types::nint>*> _field = GetClass().GetField(O("OnOpenNotificationSocket"));
            _field.Set(value);
        }
        static void SetPurchaseOfferCallback(::GlobalNamespace::MothershipPurchaseOfferCallback* value) {
            static BNM::Field<::GlobalNamespace::MothershipPurchaseOfferCallback*> _field = GetClass().GetField(O("purchaseOfferCallback"));
            _field.Set(value);
        }
        static void SetSessionId(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("SessionId"));
            _field.Set(value);
        }
        static void SetSetUserDataCallback(::GlobalNamespace::MothershipSetUserDataCallback* value) {
            static BNM::Field<::GlobalNamespace::MothershipSetUserDataCallback*> _field = GetClass().GetField(O("setUserDataCallback"));
            _field.Set(value);
        }
        static void SetTitleId(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("TitleId"));
            _field.Set(value);
        }
        static void SetWebsocket(::GlobalNamespace::MothershipWebSocketWrapper* value) {
            static BNM::Field<::GlobalNamespace::MothershipWebSocketWrapper*> _field = GetClass().GetField(O("websocket"));
            _field.Set(value);
        }
        static void SetWebsocketDispatcher(::GlobalNamespace::MothershipWebSocketDispatcher* value) {
            static BNM::Field<::GlobalNamespace::MothershipWebSocketDispatcher*> _field = GetClass().GetField(O("websocketDispatcher"));
            _field.Set(value);
        }
        static void SetWriteEventsCallback(::GlobalNamespace::MothershipWriteEventsCallback* value) {
            static BNM::Field<::GlobalNamespace::MothershipWriteEventsCallback*> _field = GetClass().GetField(O("writeEventsCallback"));
            _field.Set(value);
        }
        static void add_OnCloseNotificationSocket_1(::BNM::Structures::Mono::Action<::BNM::Types::nint>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnCloseNotificationSocket"), {"value"});
            _m.Call(value);
        }
        static void add_OnErrorNotificationSocket_1(::BNM::Structures::Mono::Action<::BNM::Types::nint>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnErrorNotificationSocket"), {"value"});
            _m.Call(value);
        }
        static void add_OnMessageNotificationSocket_1(::BNM::Structures::Mono::Action<::GlobalNamespace::NotificationsMessageResponse*, ::BNM::Types::nint>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnMessageNotificationSocket"), {"value"});
            _m.Call(value);
        }
        static void add_OnOpenNotificationSocket_1(::BNM::Structures::Mono::Action<::BNM::Types::nint>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnOpenNotificationSocket"), {"value"});
            _m.Call(value);
        }
        static void CloseWebSockets() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CloseWebSockets"));
            _m.Call();
        }
        static bool CompleteLogInWithQuest(::BNM::Structures::Mono::String* userId, ::BNM::Structures::Mono::String* attestationToken, ::BNM::Structures::Mono::String* nonce, ::BNM::Structures::Mono::Action<::GlobalNamespace::LoginResponse*>* successAction, ::BNM::Structures::Mono::Action<::GlobalNamespace::MothershipError*, int>* errorAction) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CompleteLogInWithQuest"), {"userId", "attestationToken", "nonce", "successAction", "errorAction"});
            return _m.Call(userId, attestationToken, nonce, successAction, errorAction);
        }
        static bool CompleteLoginWithSteam(::BNM::Structures::Mono::String* nonce, ::BNM::Structures::Mono::String* steamTicket, ::BNM::Structures::Mono::Action<::GlobalNamespace::LoginResponse*>* successAction, ::BNM::Structures::Mono::Action<::GlobalNamespace::MothershipError*, int>* errorAction) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CompleteLoginWithSteam"), {"nonce", "steamTicket", "successAction", "errorAction"});
            return _m.Call(nonce, steamTicket, successAction, errorAction);
        }
        static bool CreateReport(::BNM::Structures::Mono::String* reportedUserId, int category, bool moddedClient, ::BNM::Structures::Mono::String* metadata, ::BNM::Structures::Mono::Action<::GlobalNamespace::CreateReportResponse*>* successAction, ::BNM::Structures::Mono::Action<::GlobalNamespace::MothershipError*, int>* errorAction) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CreateReport"), {"reportedUserId", "category", "moddedClient", "metadata", "successAction", "errorAction"});
            return _m.Call(reportedUserId, category, moddedClient, metadata, successAction, errorAction);
        }
        static void ForgetAllCredentials() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ForgetAllCredentials"));
            _m.Call();
        }
        static bool GetAndRefreshMySubscriptions(::BNM::Structures::Mono::Action<::GlobalNamespace::GetMySubscriptionsResponse*>* successAction, ::BNM::Structures::Mono::Action<::GlobalNamespace::MothershipError*, int>* errorAction) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("GetAndRefreshMySubscriptions"), {"successAction", "errorAction"});
            return _m.Call(successAction, errorAction);
        }
        static bool GetPlayerProgressionData(::BNM::Structures::Mono::Action<::GlobalNamespace::GetProgressionTrackValuesForPlayerResponse*>* successAction, ::BNM::Structures::Mono::Action<::GlobalNamespace::MothershipError*, int>* errorAction) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("GetPlayerProgressionData"), {"successAction", "errorAction"});
            return _m.Call(successAction, errorAction);
        }
        static bool GetPlayerProgressionTreesData(::BNM::Structures::Mono::Action<::GlobalNamespace::GetProgressionTreesForPlayerResponse*>* successAction, ::BNM::Structures::Mono::Action<::GlobalNamespace::MothershipError*, int>* errorAction) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("GetPlayerProgressionTreesData"), {"successAction", "errorAction"});
            return _m.Call(successAction, errorAction);
        }
        static bool GetRoomPlayerSubscriptions(::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* playerIds, ::BNM::Structures::Mono::Action<::GlobalNamespace::BulkGetSubscriptionsResponse*>* successAction, ::BNM::Structures::Mono::Action<::GlobalNamespace::MothershipError*, int>* errorAction) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("GetRoomPlayerSubscriptions"), {"playerIds", "successAction", "errorAction"});
            return _m.Call(playerIds, successAction, errorAction);
        }
        static ::GlobalNamespace::MothershipSharedSettings* GetSharedSettingsObject() {
            static BNM::Method<::GlobalNamespace::MothershipSharedSettings*> _m = GetClass().GetMethod(O("GetSharedSettingsObject"));
            return _m.Call();
        }
        static bool GetStorefront(::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* offerDisplays, ::BNM::Structures::Mono::Action<::GlobalNamespace::MothershipGetStorefrontResponse*>* successAction, ::BNM::Structures::Mono::Action<::GlobalNamespace::MothershipError*, int>* errorAction) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("GetStorefront"), {"offerDisplays", "successAction", "errorAction"});
            return _m.Call(offerDisplays, successAction, errorAction);
        }
        static bool GetUserDataValue(::BNM::Structures::Mono::String* keyName, ::BNM::Structures::Mono::Action<::GlobalNamespace::MothershipUserData*>* successAction, ::BNM::Structures::Mono::Action<::GlobalNamespace::MothershipError*, int>* errorAction, ::BNM::Structures::Mono::String* targetId) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("GetUserDataValue"), {"keyName", "successAction", "errorAction", "targetId"});
            return _m.Call(keyName, successAction, errorAction, targetId);
        }
        static bool GetUserInventory(::BNM::Structures::Mono::Action<::GlobalNamespace::MothershipGetInventoryResponse*>* successAction, ::BNM::Structures::Mono::Action<::GlobalNamespace::MothershipError*, int>* errorAction) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("GetUserInventory"), {"successAction", "errorAction"});
            return _m.Call(successAction, errorAction);
        }
        static void InvokeCloseNotificationSocket(::BNM::Types::nint userData) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InvokeCloseNotificationSocket"), {"userData"});
            _m.Call(userData);
        }
        static void InvokeErrorNotificationSocket(::BNM::Types::nint userData) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InvokeErrorNotificationSocket"), {"userData"});
            _m.Call(userData);
        }
        static void InvokeMessageNotificationSocket(::GlobalNamespace::NotificationsMessageResponse* notification, ::BNM::Types::nint userData) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InvokeMessageNotificationSocket"), {"notification", "userData"});
            _m.Call(notification, userData);
        }
        static void InvokeOpenNotificationSocket(::BNM::Types::nint userData) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InvokeOpenNotificationSocket"), {"userData"});
            _m.Call(userData);
        }
        static bool IsClientLoggedIn() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsClientLoggedIn"));
            return _m.Call();
        }
        static bool IsEnabled() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsEnabled"));
            return _m.Call();
        }
        static bool ListMothershipTitleData(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* deploymentId, ::GlobalNamespace::StringVector* keys, ::BNM::Structures::Mono::Action<::GlobalNamespace::ListClientMothershipTitleDataResponse*>* successAction, ::BNM::Structures::Mono::Action<::GlobalNamespace::MothershipError*, int>* errorAction) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ListMothershipTitleData"), {"titleId", "envId", "deploymentId", "keys", "successAction", "errorAction"});
            return _m.Call(titleId, envId, deploymentId, keys, successAction, errorAction);
        }
        static bool LogInWithApple(::BNM::Structures::Mono::String* signature, ::BNM::Structures::Mono::String* gamePlayerId, ::BNM::Structures::Mono::String* teamPlayerId, ::BNM::Structures::Mono::String* certUri, ::BNM::Structures::Mono::String* salt, ::BNM::Structures::Mono::String* timestamp, ::BNM::Structures::Mono::Action<::GlobalNamespace::LoginResponse*>* successAction, ::BNM::Structures::Mono::Action<::GlobalNamespace::MothershipError*, int>* errorAction) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("LogInWithApple"), {"signature", "gamePlayerId", "teamPlayerId", "certUri", "salt", "timestamp", "successAction", "errorAction"});
            return _m.Call(signature, gamePlayerId, teamPlayerId, certUri, salt, timestamp, successAction, errorAction);
        }
        static bool LogInWithGoogle(::BNM::Structures::Mono::String* token, ::BNM::Structures::Mono::String* userId, ::BNM::Structures::Mono::Action<::GlobalNamespace::LoginResponse*>* successAction, ::BNM::Structures::Mono::Action<::GlobalNamespace::MothershipError*, int>* errorAction) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("LogInWithGoogle"), {"token", "userId", "successAction", "errorAction"});
            return _m.Call(token, userId, successAction, errorAction);
        }
        static bool LogInWithInsecure1(::BNM::Structures::Mono::String* Username, ::BNM::Structures::Mono::String* AccountId, ::BNM::Structures::Mono::Action<::GlobalNamespace::LoginResponse*>* successAction, ::BNM::Structures::Mono::Action<::GlobalNamespace::MothershipError*, int>* errorAction) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("LogInWithInsecure1"), {"Username", "AccountId", "successAction", "errorAction"});
            return _m.Call(Username, AccountId, successAction, errorAction);
        }
        static bool LogInWithQuest(::BNM::Structures::Mono::String* nonce, ::BNM::Structures::Mono::String* userId, ::BNM::Structures::Mono::Action<::GlobalNamespace::LoginResponse*>* successAction, ::BNM::Structures::Mono::Action<::GlobalNamespace::MothershipError*, int>* errorAction) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("LogInWithQuest"), {"nonce", "userId", "successAction", "errorAction"});
            return _m.Call(nonce, userId, successAction, errorAction);
        }
        static bool LogInWithRift(::BNM::Structures::Mono::String* nonce, ::BNM::Structures::Mono::String* userId, ::BNM::Structures::Mono::Action<::GlobalNamespace::LoginResponse*>* successAction, ::BNM::Structures::Mono::Action<::GlobalNamespace::MothershipError*, int>* errorAction) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("LogInWithRift"), {"nonce", "userId", "successAction", "errorAction"});
            return _m.Call(nonce, userId, successAction, errorAction);
        }
        static bool OpenNotificationsSocket() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("OpenNotificationsSocket"));
            return _m.Call();
        }
        static bool PurchaseOffer(::BNM::Structures::Mono::String* offerDisplayId, ::BNM::Structures::Mono::String* offerId, int displayIndex, ::BNM::Structures::Mono::Action<::GlobalNamespace::MothershipPurchaseOfferResponse*>* successAction, ::BNM::Structures::Mono::Action<::GlobalNamespace::MothershipError*, int>* errorAction) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("PurchaseOffer"), {"offerDisplayId", "offerId", "displayIndex", "successAction", "errorAction"});
            return _m.Call(offerDisplayId, offerId, displayIndex, successAction, errorAction);
        }
        static void remove_OnCloseNotificationSocket_1(::BNM::Structures::Mono::Action<::BNM::Types::nint>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnCloseNotificationSocket"), {"value"});
            _m.Call(value);
        }
        static void remove_OnErrorNotificationSocket_1(::BNM::Structures::Mono::Action<::BNM::Types::nint>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnErrorNotificationSocket"), {"value"});
            _m.Call(value);
        }
        static void remove_OnMessageNotificationSocket_1(::BNM::Structures::Mono::Action<::GlobalNamespace::NotificationsMessageResponse*, ::BNM::Types::nint>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnMessageNotificationSocket"), {"value"});
            _m.Call(value);
        }
        static void remove_OnOpenNotificationSocket_1(::BNM::Structures::Mono::Action<::BNM::Types::nint>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnOpenNotificationSocket"), {"value"});
            _m.Call(value);
        }
        static void SetAuthRefreshedCallback(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* callback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetAuthRefreshedCallback"), {"callback"});
            _m.Call(callback);
        }
        static void SetLanguage(::BNM::Structures::Mono::String* newLanguage) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetLanguage"), {"newLanguage"});
            _m.Call(newLanguage);
        }
        static bool SetUserDataValue(::BNM::Structures::Mono::String* keyName, ::BNM::Structures::Mono::String* value, ::BNM::Structures::Mono::Action<::GlobalNamespace::SetUserDataResponse*>* successAction, ::BNM::Structures::Mono::Action<::GlobalNamespace::MothershipError*, int>* errorAction, ::BNM::Structures::Mono::String* targetId) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("SetUserDataValue"), {"keyName", "value", "successAction", "errorAction", "targetId"});
            return _m.Call(keyName, value, successAction, errorAction, targetId);
        }
        static bool StartLogInWithQuest(::BNM::Structures::Mono::String* userId, ::BNM::Structures::Mono::Action<::GlobalNamespace::PlayerQuestBeginLoginV2Response*>* successAction, ::BNM::Structures::Mono::Action<::GlobalNamespace::MothershipError*, int>* errorAction) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("StartLogInWithQuest"), {"userId", "successAction", "errorAction"});
            return _m.Call(userId, successAction, errorAction);
        }
        static bool StartLoginWithSteam(::BNM::Structures::Mono::Action<::GlobalNamespace::PlayerSteamBeginLoginResponse*>* successAction, ::BNM::Structures::Mono::Action<::GlobalNamespace::MothershipError*, int>* errorAction) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("StartLoginWithSteam"), {"successAction", "errorAction"});
            return _m.Call(successAction, errorAction);
        }
        static void Tick(float deltaTime) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Tick"), {"deltaTime"});
            _m.Call(deltaTime);
        }
        static void TickWebSockets(float deltaTime) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TickWebSockets"), {"deltaTime"});
            _m.Call(deltaTime);
        }
        static bool WriteEvents(::BNM::Structures::Mono::String* callerId, ::GlobalNamespace::MothershipWriteEventsRequest* req, ::BNM::Structures::Mono::Action<::GlobalNamespace::MothershipWriteEventsResponse*>* successAction, ::BNM::Structures::Mono::Action<::GlobalNamespace::MothershipError*, int>* errorAction) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("WriteEvents"), {"callerId", "req", "successAction", "errorAction"});
            return _m.Call(callerId, req, successAction, errorAction);
        }
    };
}
