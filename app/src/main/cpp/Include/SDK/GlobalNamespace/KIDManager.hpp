#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "EKIDFeatures.hpp"
#include "SessionStatus.hpp"

namespace GlobalNamespace {
    struct KIDManager : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "KIDManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::KIDManager* get_Instance() {
            static BNM::Method<::GlobalNamespace::KIDManager*> method = GetClass().GetMethod(O("get_Instance"));
            return method.Call();
        }
        static ::GlobalNamespace::KIDManager* GetInstance() {
            static BNM::Field<::GlobalNamespace::KIDManager*> field = GetClass().GetField("_instance");
            return field.Get();
        }
        static constexpr const char* MULTIPLAYER_PERMISSION_NAME = "multiplayer";
        static constexpr const char* UGC_PERMISSION_NAME = "mods";
        static constexpr const char* PRIVATE_ROOM_PERMISSION_NAME = "join-groups";
        static constexpr const char* VOICE_CHAT_PERMISSION_NAME = "voice-chat";
        static constexpr const char* CUSTOM_USERNAME_PERMISSION_NAME = "custom-username";
        static constexpr const char* PREVIOUS_STATUS_PREF_KEY_PREFIX = "previous-status-";
        static constexpr const char* KID_DATA_KEY = "KIDData";
        static constexpr const char* KID_EMAIL_KEY = "k-id_EmailAddress";
        static constexpr int SECONDS_BETWEEN_UPDATE_ATTEMPTS = 30;
        static constexpr const char* KID_SETUP_FLAG = "KID-Setup-";
        static constexpr const char* KID_GET_SESSION = "GetPlayerData";
        static constexpr const char* KID_VERIFY_AGE = "VerifyAge";
        static constexpr const char* KID_UPGRADE_SESSION = "UpgradeSession";
        static constexpr const char* KID_SEND_CHALLENGE_EMAIL = "SendChallengeEmail";
        static constexpr const char* KID_ATTEMPT_AGE_UPDATE = "AttemptAgeUpdate";
        static constexpr const char* KID_APPEAL_AGE = "AppealAge";
        static constexpr const char* KID_OPT_IN = "OptIn";
        static constexpr const char* KID_GET_REQUIREMENTS = "GetRequirements";
        static constexpr const char* KID_SET_CONFIRMED_STATUS = "SetConfirmedStatus";
        static constexpr const char* KID_SET_OPT_IN_PERMISSIONS = "SetOptInPermissions";
        static constexpr const char* KID_FORCE_REFRESH = "sessionRefresh";
        static constexpr int MAX_RETRIES_FOR_CRITICAL_KID_SERVER_REQUESTS = 3;
        static constexpr int MAX_RETRIES_FOR_NORMAL_KID_SERVER_REQUESTS = 2;
        static constexpr const char* KID_PERMISSION__VOICE_CHAT = "voice-chat";
        static constexpr const char* KID_PERMISSION__CUSTOM_NAMES = "custom-username";
        static constexpr const char* KID_PERMISSION__PRIVATE_ROOMS = "join-groups";
        static constexpr const char* KID_PERMISSION__MULTIPLAYER = "multiplayer";
        static constexpr const char* KID_PERMISSION__UGC = "mods";
        static constexpr float MAX_SESSION_UPDATE_TIME = 600.0f;
        static constexpr int TIME_BETWEEN_SESSION_UPDATE_ATTEMPTS = 30;
        ::GlobalNamespace::GetRequirementsData* GetAgeGateRequirements() {
            static BNM::Method<::GlobalNamespace::GetRequirementsData*> _method = GetClass().GetMethod(O("get__ageGateRequirements"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetAgeGateRequirements(::GlobalNamespace::GetRequirementsData* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set__ageGateRequirements"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GlobalNamespace::TMPSession* GetCurrentSession() {
            static BNM::Method<::GlobalNamespace::TMPSession*> _method = GetClass().GetMethod(O("get_CurrentSession"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetCurrentSession(::GlobalNamespace::TMPSession* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_CurrentSession"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::String* GetDbgLocale() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_DbgLocale"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetDbgLocale(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_DbgLocale"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::String* GetDebugKIDLocalePlayerPrefRef() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_DebugKIDLocalePlayerPrefRef"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::String* GetGetChallengedBeforePlayerPrefRef() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_GetChallengedBeforePlayerPrefRef"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::String* GetGetEmailForUserPlayerPrefRef() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_GetEmailForUserPlayerPrefRef"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetHasOptedInToKID() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_HasOptedInToKID"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetHasOptedInToKID(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_HasOptedInToKID"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetHasSession() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_HasSession"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetInitialisationComplete() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_InitialisationComplete"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetInitialisationComplete(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_InitialisationComplete"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetInitialisationSuccessful() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_InitialisationSuccessful"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetInitialisationSuccessful(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_InitialisationSuccessful"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GlobalNamespace::KIDManager* GetInstance_pg() {
            static BNM::Method<::GlobalNamespace::KIDManager*> _method = GetClass().GetMethod(O("get_Instance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetKidEnabled() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_KidEnabled"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetKidEnabledAndReady() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_KidEnabledAndReady"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::String* GetKIDSetupPlayerPref() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_KIDSetupPlayerPref"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetKidTitleDataReady() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_KidTitleDataReady"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::SessionStatus GetPreviousStatus() {
            static BNM::Method<::GlobalNamespace::SessionStatus> _method = GetClass().GetMethod(O("get_PreviousStatus"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetPreviousStatus(::GlobalNamespace::SessionStatus value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_PreviousStatus"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::String* GetPreviousStatusPlayerPrefRef() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_PreviousStatusPlayerPrefRef"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        static ::BNM::Structures::Mono::String* GetDebugKIDLocalePlayerPrefRef_f() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_debugKIDLocalePlayerPrefRef"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::String* GetEmailAddress() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_emailAddress"));
            return _field.Get();
        }
        static ::GlobalNamespace::KIDManager* GetInstance_f() {
            static BNM::Field<::GlobalNamespace::KIDManager*> _field = GetClass().GetField(O("_instance"));
            return _field.Get();
        }
        static bool GetIsUpdatingNewSession() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_isUpdatingNewSession"));
            return _field.Get();
        }
        static void* GetKIDNewPlayerDateTime() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_kIDNewPlayerDateTime"));
            return _field.Get();
        }
        static int GetKIDPhase() {
            static BNM::Field<int> _field = GetClass().GetField(O("_kIDPhase"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Action<>* GetOnKIDInitialisationComplete() {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("_onKIDInitialisationComplete"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Action<>* GetOnSessionUpdatedAnyPermission() {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("_onSessionUpdated_AnyPermission"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Action<bool, void*>* GetOnSessionUpdatedCustomUsernames() {
            static BNM::Field<::BNM::Structures::Mono::Action<bool, void*>*> _field = GetClass().GetField(O("_onSessionUpdated_CustomUsernames"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Action<bool, void*>* GetOnSessionUpdatedMultiplayer() {
            static BNM::Field<::BNM::Structures::Mono::Action<bool, void*>*> _field = GetClass().GetField(O("_onSessionUpdated_Multiplayer"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Action<bool, void*>* GetOnSessionUpdatedPrivateRooms() {
            static BNM::Field<::BNM::Structures::Mono::Action<bool, void*>*> _field = GetClass().GetField(O("_onSessionUpdated_PrivateRooms"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Action<bool, void*>* GetOnSessionUpdatedUGC() {
            static BNM::Field<::BNM::Structures::Mono::Action<bool, void*>*> _field = GetClass().GetField(O("_onSessionUpdated_UGC"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Action<bool, void*>* GetOnSessionUpdatedVoiceChat() {
            static BNM::Field<::BNM::Structures::Mono::Action<bool, void*>*> _field = GetClass().GetField(O("_onSessionUpdated_VoiceChat"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::IL2CPP::Il2CppObject*>* GetPreviousPermissionSettings() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("_previousPermissionSettings"));
            return _field.Get();
        }
        static ::BNM::IL2CPP::Il2CppObject* GetRequestCancellationSource() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_requestCancellationSource"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Action<>* GetSessionUpdatedCallback() {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("_sessionUpdatedCallback"));
            return _field.Get();
        }
        static bool GetTitleDataReady() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_titleDataReady"));
            return _field.Get();
        }
        static bool GetUseKid() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_useKid"));
            return _field.Get();
        }
        static ::GlobalNamespace::KIDManager_OnEmailResultReceived* GetOnEmailResultReceived() {
            static BNM::Field<::GlobalNamespace::KIDManager_OnEmailResultReceived*> _field = GetClass().GetField(O("onEmailResultReceived"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::String* GetParentEmailForUserPlayerPrefRef() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("parentEmailForUserPlayerPrefRef"));
            return _field.Get();
        }
        static void SetDebugKIDLocalePlayerPrefRef(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_debugKIDLocalePlayerPrefRef"));
            _field.Set(value);
        }
        static void SetEmailAddress(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_emailAddress"));
            _field.Set(value);
        }
        static void SetInstance(::GlobalNamespace::KIDManager* value) {
            static BNM::Field<::GlobalNamespace::KIDManager*> _field = GetClass().GetField(O("_instance"));
            _field.Set(value);
        }
        static void SetIsUpdatingNewSession(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_isUpdatingNewSession"));
            _field.Set(value);
        }
        static void SetKIDNewPlayerDateTime(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("_kIDNewPlayerDateTime"));
            _field.Set(value);
        }
        static void SetKIDPhase(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_kIDPhase"));
            _field.Set(value);
        }
        static void SetOnKIDInitialisationComplete(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("_onKIDInitialisationComplete"));
            _field.Set(value);
        }
        static void SetOnSessionUpdatedAnyPermission(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("_onSessionUpdated_AnyPermission"));
            _field.Set(value);
        }
        static void SetOnSessionUpdatedCustomUsernames(::BNM::Structures::Mono::Action<bool, void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<bool, void*>*> _field = GetClass().GetField(O("_onSessionUpdated_CustomUsernames"));
            _field.Set(value);
        }
        static void SetOnSessionUpdatedMultiplayer(::BNM::Structures::Mono::Action<bool, void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<bool, void*>*> _field = GetClass().GetField(O("_onSessionUpdated_Multiplayer"));
            _field.Set(value);
        }
        static void SetOnSessionUpdatedPrivateRooms(::BNM::Structures::Mono::Action<bool, void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<bool, void*>*> _field = GetClass().GetField(O("_onSessionUpdated_PrivateRooms"));
            _field.Set(value);
        }
        static void SetOnSessionUpdatedUGC(::BNM::Structures::Mono::Action<bool, void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<bool, void*>*> _field = GetClass().GetField(O("_onSessionUpdated_UGC"));
            _field.Set(value);
        }
        static void SetOnSessionUpdatedVoiceChat(::BNM::Structures::Mono::Action<bool, void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<bool, void*>*> _field = GetClass().GetField(O("_onSessionUpdated_VoiceChat"));
            _field.Set(value);
        }
        static void SetPreviousPermissionSettings(::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("_previousPermissionSettings"));
            _field.Set(value);
        }
        static void SetRequestCancellationSource(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_requestCancellationSource"));
            _field.Set(value);
        }
        static void SetSessionUpdatedCallback(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("_sessionUpdatedCallback"));
            _field.Set(value);
        }
        static void SetTitleDataReady(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_titleDataReady"));
            _field.Set(value);
        }
        static void SetUseKid(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_useKid"));
            _field.Set(value);
        }
        static void SetOnEmailResultReceived(::GlobalNamespace::KIDManager_OnEmailResultReceived* value) {
            static BNM::Field<::GlobalNamespace::KIDManager_OnEmailResultReceived*> _field = GetClass().GetField(O("onEmailResultReceived"));
            _field.Set(value);
        }
        static void SetParentEmailForUserPlayerPrefRef(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("parentEmailForUserPlayerPrefRef"));
            _field.Set(value);
        }
        static void* AgeGateFlow(::GlobalNamespace::GetPlayerData_Data* newPlayerData) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("AgeGateFlow"), {"newPlayerData"});
            return _m.Call(newPlayerData);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void CancelToken() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CancelToken"));
            _m.Call();
        }
        static void* CheckFeatureOptIn(::GlobalNamespace::EKIDFeatures feature, ::BNM::IL2CPP::Il2CppObject* permissionData) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("CheckFeatureOptIn"), {"feature", "permissionData"});
            return _m.Call(feature, permissionData);
        }
        static bool CheckFeatureSettingEnabled(::GlobalNamespace::EKIDFeatures feature) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CheckFeatureSettingEnabled"), {"feature"});
            return _m.Call(feature);
        }
        static void* CheckKIDNewPlayerDateTime() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("CheckKIDNewPlayerDateTime"));
            return _m.Call();
        }
        static void* CheckKIDPhase() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("CheckKIDPhase"));
            return _m.Call();
        }
        static void* CheckWarningScreensOptedIn() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("CheckWarningScreensOptedIn"));
            return _m.Call();
        }
        static void ClearSession() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearSession"));
            _m.Call();
        }
        static void DeleteStoredPermissions() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DeleteStoredPermissions"));
            _m.Call();
        }
        static ::GlobalNamespace::GetRequirementsData* get__ageGateRequirements() {
            static BNM::Method<::GlobalNamespace::GetRequirementsData*> _m = GetClass().GetMethod(O("get__ageGateRequirements"));
            return _m.Call();
        }
        static ::GlobalNamespace::TMPSession* get_CurrentSession() {
            static BNM::Method<::GlobalNamespace::TMPSession*> _m = GetClass().GetMethod(O("get_CurrentSession"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::String* get_DbgLocale() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_DbgLocale"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::String* get_DebugKIDLocalePlayerPrefRef() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_DebugKIDLocalePlayerPrefRef"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::String* get_GetChallengedBeforePlayerPrefRef() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_GetChallengedBeforePlayerPrefRef"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::String* get_GetEmailForUserPlayerPrefRef() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_GetEmailForUserPlayerPrefRef"));
            return _m.Call();
        }
        static bool get_HasOptedInToKID() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_HasOptedInToKID"));
            return _m.Call();
        }
        static bool get_HasSession() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_HasSession"));
            return _m.Call();
        }
        static bool get_InitialisationComplete() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_InitialisationComplete"));
            return _m.Call();
        }
        static bool get_InitialisationSuccessful() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_InitialisationSuccessful"));
            return _m.Call();
        }
        static ::GlobalNamespace::KIDManager* get_Instance_1() {
            static BNM::Method<::GlobalNamespace::KIDManager*> _m = GetClass().GetMethod(O("get_Instance"));
            return _m.Call();
        }
        static bool get_KidEnabled() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_KidEnabled"));
            return _m.Call();
        }
        static bool get_KidEnabledAndReady() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_KidEnabledAndReady"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::String* get_KIDSetupPlayerPref() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_KIDSetupPlayerPref"));
            return _m.Call();
        }
        static bool get_KidTitleDataReady() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_KidTitleDataReady"));
            return _m.Call();
        }
        static ::GlobalNamespace::SessionStatus get_PreviousStatus() {
            static BNM::Method<::GlobalNamespace::SessionStatus> _m = GetClass().GetMethod(O("get_PreviousStatus"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::String* get_PreviousStatusPlayerPrefRef() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_PreviousStatusPlayerPrefRef"));
            return _m.Call();
        }
        static void* GetActiveAccountStatus() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("GetActiveAccountStatus"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::String* GetActiveAccountStatusNiceString() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetActiveAccountStatusNiceString"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>* GetAllPermissionsData() {
            static BNM::Method<::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>*> _m = GetClass().GetMethod(O("GetAllPermissionsData"));
            return _m.Call();
        }
        static bool GetIsEnabled(::BNM::Structures::Mono::String* jsonTxt) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("GetIsEnabled"), {"jsonTxt"});
            return _m.Call(jsonTxt);
        }
        static void* GetNewPlayerDateTime(::BNM::Structures::Mono::String* jsonTxt) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("GetNewPlayerDateTime"), {"jsonTxt"});
            return _m.Call(jsonTxt);
        }
        static ::BNM::Structures::Mono::String* GetOptInKey(::GlobalNamespace::EKIDFeatures feature) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetOptInKey"), {"feature"});
            return _m.Call(feature);
        }
        static ::BNM::IL2CPP::Il2CppObject* GetPermissionDataByFeature(::GlobalNamespace::EKIDFeatures feature) {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("GetPermissionDataByFeature"), {"feature"});
            return _m.Call(feature);
        }
        static int GetPhase(::BNM::Structures::Mono::String* jsonTxt) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetPhase"), {"jsonTxt"});
            return _m.Call(jsonTxt);
        }
        static bool HasAllPermissions() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("HasAllPermissions"));
            return _m.Call();
        }
        static bool HasPermissionChanged(::BNM::IL2CPP::Il2CppObject* newValue) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("HasPermissionChanged"), {"newValue"});
            return _m.Call(newValue);
        }
        static bool HasPermissionToUseFeature(::GlobalNamespace::EKIDFeatures feature) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("HasPermissionToUseFeature"), {"feature"});
            return _m.Call(feature);
        }
        static bool HasSessionChanged(::GlobalNamespace::TMPSession* newSession) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("HasSessionChanged"), {"newSession"});
            return _m.Call(newSession);
        }
        static void InitialiseBootFlow() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitialiseBootFlow"));
            _m.Call();
        }
        static void InitialiseKID() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitialiseKID"));
            _m.Call();
        }
        static bool IsAdult() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsAdult"));
            return _m.Call();
        }
        template <typename T, typename Q>
        static void* KIDServerWebRequest(::BNM::Structures::Mono::String* endpoint, ::BNM::Structures::Mono::String* operationType, Q requestData, ::BNM::Structures::Mono::String* queryParams, int maxRetries, ::BNM::Structures::Mono::Func<int64_t, bool>* responseCodeIsRetryable) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("KIDServerWebRequest"), {"endpoint", "operationType", "requestData", "queryParams", "maxRetries", "responseCodeIsRetryable"});
            return _m.Call(endpoint, operationType, requestData, queryParams, maxRetries, responseCodeIsRetryable);
        }
        template <typename Q>
        static void* KIDServerWebRequestNoResponse(::BNM::Structures::Mono::String* endpoint, ::BNM::Structures::Mono::String* operationType, Q requestData, int maxRetries, ::BNM::Structures::Mono::Func<int64_t, bool>* responseCodeIsRetryable) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("KIDServerWebRequestNoResponse"), {"endpoint", "operationType", "requestData", "maxRetries", "responseCodeIsRetryable"});
            return _m.Call(endpoint, operationType, requestData, maxRetries, responseCodeIsRetryable);
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void OnSessionUpdated() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSessionUpdated"));
            _m.Call();
        }
        static void* ProcessAgeGate() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("ProcessAgeGate"));
            return _m.Call();
        }
        static void RegisterSessionUpdateCallback_AnyPermission(::BNM::Structures::Mono::Action<>* callback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RegisterSessionUpdateCallback_AnyPermission"), {"callback"});
            _m.Call(callback);
        }
        static void RegisterSessionUpdatedCallback_CustomUsernames(::BNM::Structures::Mono::Action<bool, void*>* callback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RegisterSessionUpdatedCallback_CustomUsernames"), {"callback"});
            _m.Call(callback);
        }
        static void RegisterSessionUpdatedCallback_Multiplayer(::BNM::Structures::Mono::Action<bool, void*>* callback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RegisterSessionUpdatedCallback_Multiplayer"), {"callback"});
            _m.Call(callback);
        }
        static void RegisterSessionUpdatedCallback_PrivateRooms(::BNM::Structures::Mono::Action<bool, void*>* callback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RegisterSessionUpdatedCallback_PrivateRooms"), {"callback"});
            _m.Call(callback);
        }
        static void RegisterSessionUpdatedCallback_UGC(::BNM::Structures::Mono::Action<bool, void*>* callback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RegisterSessionUpdatedCallback_UGC"), {"callback"});
            _m.Call(callback);
        }
        static void RegisterSessionUpdatedCallback_VoiceChat(::BNM::Structures::Mono::Action<bool, void*>* callback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RegisterSessionUpdatedCallback_VoiceChat"), {"callback"});
            _m.Call(callback);
        }
        static ::BNM::IL2CPP::Il2CppObject* ResetCancellationToken() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("ResetCancellationToken"));
            return _m.Call();
        }
        static void* SendOptInPermissions() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("SendOptInPermissions"));
            return _m.Call();
        }
        static void* Server_AppealAge(::GlobalNamespace::AppealAgeRequest* request, ::BNM::Structures::Mono::Action<>* failureCallback) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("Server_AppealAge"), {"request", "failureCallback"});
            return _m.Call(request, failureCallback);
        }
        static void* Server_AttemptAgeUpdate(::GlobalNamespace::AttemptAgeUpdateRequest* request, ::BNM::Structures::Mono::Action<>* failureCallback) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("Server_AttemptAgeUpdate"), {"request", "failureCallback"});
            return _m.Call(request, failureCallback);
        }
        static void* Server_GetPlayerData(bool forceRefresh, ::BNM::Structures::Mono::Action<>* failureCallback) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("Server_GetPlayerData"), {"forceRefresh", "failureCallback"});
            return _m.Call(forceRefresh, failureCallback);
        }
        static void* Server_GetRequirements() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("Server_GetRequirements"));
            return _m.Call();
        }
        static void* Server_OptIn() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("Server_OptIn"));
            return _m.Call();
        }
        static void* Server_SendChallengeEmail(::GlobalNamespace::SendChallengeEmailRequest* request) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("Server_SendChallengeEmail"), {"request"});
            return _m.Call(request);
        }
        static void* Server_SetConfirmedStatus() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("Server_SetConfirmedStatus"));
            return _m.Call();
        }
        static void* Server_SetOptInPermissions(::GlobalNamespace::SetOptInPermissionsRequest* request, ::BNM::Structures::Mono::Action<>* failureCallback) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("Server_SetOptInPermissions"), {"request", "failureCallback"});
            return _m.Call(request, failureCallback);
        }
        static void* Server_UpgradeSession(::GlobalNamespace::UpgradeSessionRequest* request) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("Server_UpgradeSession"), {"request"});
            return _m.Call(request);
        }
        static void* Server_VerifyAge(::GlobalNamespace::VerifyAgeRequest* request, ::BNM::Structures::Mono::Action<>* failureCallback) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("Server_VerifyAge"), {"request", "failureCallback"});
            return _m.Call(request, failureCallback);
        }
        static void set__ageGateRequirements(::GlobalNamespace::GetRequirementsData* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set__ageGateRequirements"), {"value"});
            _m.Call(value);
        }
        static void set_CurrentSession(::GlobalNamespace::TMPSession* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_CurrentSession"), {"value"});
            _m.Call(value);
        }
        static void set_DbgLocale(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_DbgLocale"), {"value"});
            _m.Call(value);
        }
        static void set_HasOptedInToKID(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_HasOptedInToKID"), {"value"});
            _m.Call(value);
        }
        static void set_InitialisationComplete(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_InitialisationComplete"), {"value"});
            _m.Call(value);
        }
        static void set_InitialisationSuccessful(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_InitialisationSuccessful"), {"value"});
            _m.Call(value);
        }
        static void set_PreviousStatus(::GlobalNamespace::SessionStatus value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_PreviousStatus"), {"value"});
            _m.Call(value);
        }
        static void* SetAndSendEmail(::BNM::Structures::Mono::String* email) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("SetAndSendEmail"), {"email"});
            return _m.Call(email);
        }
        static void SetFeatureOptIn(::GlobalNamespace::EKIDFeatures feature, bool optedIn) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetFeatureOptIn"), {"feature", "optedIn"});
            _m.Call(feature, optedIn);
        }
        static void* SetKIDOptIn() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("SetKIDOptIn"));
            return _m.Call();
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void* TryAppealAge(::BNM::Structures::Mono::String* email, int newAge) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("TryAppealAge"), {"email", "newAge"});
            return _m.Call(email, newAge);
        }
        static void* TryAttemptAgeUpdate(int age) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("TryAttemptAgeUpdate"), {"age"});
            return _m.Call(age);
        }
        static bool TryGetAgeStatusTypeFromAge(int age, void*& ageType) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryGetAgeStatusTypeFromAge"), {"age", "ageType"});
            return _m.Call(age, &ageType);
        }
        static void* TryGetPlayerData(bool forceRefresh) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("TryGetPlayerData"), {"forceRefresh"});
            return _m.Call(forceRefresh);
        }
        static void* TryGetRequirements() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("TryGetRequirements"));
            return _m.Call();
        }
        static void* TrySendChallengeEmailRequest() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("TrySendChallengeEmailRequest"));
            return _m.Call();
        }
        static void* TrySendOptInPermissions() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("TrySendOptInPermissions"));
            return _m.Call();
        }
        static void* TrySendUpgradeSessionChallengeEmail() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("TrySendUpgradeSessionChallengeEmail"));
            return _m.Call();
        }
        static void* TrySetHasConfirmedStatus() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("TrySetHasConfirmedStatus"));
            return _m.Call();
        }
        static void* TryUpgradeSession(::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* requestedPermissions) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("TryUpgradeSession"), {"requestedPermissions"});
            return _m.Call(requestedPermissions);
        }
        static void* TryVerifyAgeResponse() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("TryVerifyAgeResponse"));
            return _m.Call();
        }
        static void UnregisterSessionUpdateCallback_AnyPermission(::BNM::Structures::Mono::Action<>* callback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnregisterSessionUpdateCallback_AnyPermission"), {"callback"});
            _m.Call(callback);
        }
        static void UnregisterSessionUpdatedCallback_CustomUsernames(::BNM::Structures::Mono::Action<bool, void*>* callback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnregisterSessionUpdatedCallback_CustomUsernames"), {"callback"});
            _m.Call(callback);
        }
        static void UnregisterSessionUpdatedCallback_Multiplayer(::BNM::Structures::Mono::Action<bool, void*>* callback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnregisterSessionUpdatedCallback_Multiplayer"), {"callback"});
            _m.Call(callback);
        }
        static void UnregisterSessionUpdatedCallback_PrivateRooms(::BNM::Structures::Mono::Action<bool, void*>* callback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnregisterSessionUpdatedCallback_PrivateRooms"), {"callback"});
            _m.Call(callback);
        }
        static void UnregisterSessionUpdatedCallback_VoiceChat(::BNM::Structures::Mono::Action<bool, void*>* callback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnregisterSessionUpdatedCallback_VoiceChat"), {"callback"});
            _m.Call(callback);
        }
        static bool UpdatePermissions(::GlobalNamespace::TMPSession* newSession) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("UpdatePermissions"), {"newSession"});
            return _m.Call(newSession);
        }
        static ::BNM::IL2CPP::Il2CppObject* UpdateSession(::BNM::Structures::Mono::Action<bool>* getDataCompleted) {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("UpdateSession"), {"getDataCompleted"});
            return _m.Call(getDataCompleted);
        }
        static void* UseKID() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("UseKID"));
            return _m.Call();
        }
        static void* WaitForAndUpdateNewSession(bool forceRefresh) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("WaitForAndUpdateNewSession"), {"forceRefresh"});
            return _m.Call(forceRefresh);
        }
        static void* WaitForAuthentication() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("WaitForAuthentication"));
            return _m.Call();
        }
    };
}
