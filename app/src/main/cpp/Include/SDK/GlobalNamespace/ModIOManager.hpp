#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "ModIOManager_ModIOAuthMethod.hpp"
#include "ModIORequestResultAnd$1.hpp"

namespace GlobalNamespace {
    struct ModIOManager : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ModIOManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::ModIOManager* GetInstance() {
            static BNM::Field<::GlobalNamespace::ModIOManager*> field = GetClass().GetField("instance");
            return field.Get();
        }
        static constexpr const char* MODIO_ACCEPTED_TERMS_KEY = "modIOAcceptedTermsHash";
        static constexpr const char* MODIO_ACCEPTED_TERMS_OF_USE_ID_KEY = "modIOAcceptedTermsOfUseId";
        static constexpr const char* MODIO_ACCEPTED_PRIVACY_POLICY_ID_KEY = "modIOAcceptedPrivacyPolicyId";
        static constexpr const char* MODIO_LAST_AUTH_METHOD_KEY = "modIOLassSuccessfulAuthMethod";
        static constexpr const char* FAVORITES_FILE_NAME = "favoriteMods.json";
        static constexpr float REFRESH_RATE_LIMIT = 5.0f;
        static ::BNM::IL2CPP::Il2CppObject* GetAccountLinkingAuthService() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("accountLinkingAuthService"));
            return _field.Get();
        }
        static int GetAssociationMaxRetries() {
            static BNM::Field<int> _field = GetClass().GetField(O("associationMaxRetries"));
            return _field.Get();
        }
        static int GetCurrentAssociationRetries() {
            static BNM::Field<int> _field = GetClass().GetField(O("currentAssociationRetries"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::BNM::Structures::Mono::Action<bool>*>* GetCurrentRefreshCallbacks() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::Action<bool>*>*> _field = GetClass().GetField(O("currentRefreshCallbacks"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<void*, ::BNM::IL2CPP::Il2CppObject*>* GetFavoriteMods() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<void*, ::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("favoriteMods"));
            return _field.Get();
        }
        static bool GetFavoriteModsLoaded() {
            static BNM::Field<bool> _field = GetClass().GetField(O("favoriteModsLoaded"));
            return _field.Get();
        }
        static bool GetHasInstance() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasInstance"));
            return _field.Get();
        }
        static bool GetInitialized() {
            static BNM::Field<bool> _field = GetClass().GetField(O("initialized"));
            return _field.Get();
        }
        static ::GlobalNamespace::ModIOManager* GetInstance_f() {
            static BNM::Field<::GlobalNamespace::ModIOManager*> _field = GetClass().GetField(O("instance"));
            return _field.Get();
        }
        static float GetLastRefreshTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("lastRefreshTime"));
            return _field.Get();
        }
        static bool GetLoggingIn() {
            static BNM::Field<bool> _field = GetClass().GetField(O("loggingIn"));
            return _field.Get();
        }
        static bool GetLoggingOut() {
            static BNM::Field<bool> _field = GetClass().GetField(O("loggingOut"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::String* GetModIODirectory() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("ModIODirectory"));
            return _field.Get();
        }
        ::GameObject* GetModIOTermsOfUsePrefab() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("modIOTermsOfUsePrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static bool GetModManagementEnabled() {
            static BNM::Field<bool> _field = GetClass().GetField(O("modManagementEnabled"));
            return _field.Get();
        }
        int64_t GetNewMapsModId() {
            static BNM::Field<int64_t> _field = GetClass().GetField(O("newMapsModId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::IL2CPP::Il2CppObject* GetOculusAuthService() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("oculusAuthService"));
            return _field.Get();
        }
        static ::BNM::IL2CPP::Il2CppObject* GetOnModIOCacheRefreshed() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("OnModIOCacheRefreshed"));
            return _field.Get();
        }
        static ::BNM::IL2CPP::Il2CppObject* GetOnModIOCacheRefreshing() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("OnModIOCacheRefreshing"));
            return _field.Get();
        }
        static ::BNM::IL2CPP::Il2CppObject* GetOnModIOLoggedIn() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("OnModIOLoggedIn"));
            return _field.Get();
        }
        static ::BNM::IL2CPP::Il2CppObject* GetOnModIOLoggedOut() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("OnModIOLoggedOut"));
            return _field.Get();
        }
        static void* GetOnModIOLoginFailed() {
            static BNM::Field<void*> _field = GetClass().GetField(O("OnModIOLoginFailed"));
            return _field.Get();
        }
        static ::BNM::IL2CPP::Il2CppObject* GetOnModIOLoginStarted() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("OnModIOLoginStarted"));
            return _field.Get();
        }
        static void* GetOnModIOUserChanged() {
            static BNM::Field<void*> _field = GetClass().GetField(O("OnModIOUserChanged"));
            return _field.Get();
        }
        static void* GetOnModManagementEvent() {
            static BNM::Field<void*> _field = GetClass().GetField(O("OnModManagementEvent"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<void*, int>* GetOutdatedModCMSVersions() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<void*, int>*> _field = GetClass().GetField(O("outdatedModCMSVersions"));
            return _field.Get();
        }
        static ::BNM::IL2CPP::Il2CppObject* GetRefreshDisabledCoroutine() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("refreshDisabledCoroutine"));
            return _field.Get();
        }
        static bool GetRefreshing() {
            static BNM::Field<bool> _field = GetClass().GetField(O("refreshing"));
            return _field.Get();
        }
        static bool GetRefreshingModCache() {
            static BNM::Field<bool> _field = GetClass().GetField(O("refreshingModCache"));
            return _field.Get();
        }
        static bool GetRestartRefreshModCache() {
            static BNM::Field<bool> _field = GetClass().GetField(O("restartRefreshModCache"));
            return _field.Get();
        }
        static void SetAccountLinkingAuthService(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("accountLinkingAuthService"));
            _field.Set(value);
        }
        static void SetAssociationMaxRetries(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("associationMaxRetries"));
            _field.Set(value);
        }
        static void SetCurrentAssociationRetries(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("currentAssociationRetries"));
            _field.Set(value);
        }
        static void SetCurrentRefreshCallbacks(::BNM::Structures::Mono::List<::BNM::Structures::Mono::Action<bool>*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::Action<bool>*>*> _field = GetClass().GetField(O("currentRefreshCallbacks"));
            _field.Set(value);
        }
        static void SetFavoriteMods(::BNM::Structures::Mono::Dictionary<void*, ::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<void*, ::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("favoriteMods"));
            _field.Set(value);
        }
        static void SetFavoriteModsLoaded(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("favoriteModsLoaded"));
            _field.Set(value);
        }
        static void SetHasInstance(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasInstance"));
            _field.Set(value);
        }
        static void SetInitialized(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("initialized"));
            _field.Set(value);
        }
        static void SetInstance(::GlobalNamespace::ModIOManager* value) {
            static BNM::Field<::GlobalNamespace::ModIOManager*> _field = GetClass().GetField(O("instance"));
            _field.Set(value);
        }
        static void SetLastRefreshTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lastRefreshTime"));
            _field.Set(value);
        }
        static void SetLoggingIn(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("loggingIn"));
            _field.Set(value);
        }
        static void SetLoggingOut(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("loggingOut"));
            _field.Set(value);
        }
        static void SetModIODirectory(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("ModIODirectory"));
            _field.Set(value);
        }
        void SetModIOTermsOfUsePrefab(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("modIOTermsOfUsePrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetModManagementEnabled(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("modManagementEnabled"));
            _field.Set(value);
        }
        void SetNewMapsModId(int64_t value) {
            static BNM::Field<int64_t> _field = GetClass().GetField(O("newMapsModId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetOculusAuthService(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("oculusAuthService"));
            _field.Set(value);
        }
        static void SetOnModIOCacheRefreshed(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("OnModIOCacheRefreshed"));
            _field.Set(value);
        }
        static void SetOnModIOCacheRefreshing(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("OnModIOCacheRefreshing"));
            _field.Set(value);
        }
        static void SetOnModIOLoggedIn(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("OnModIOLoggedIn"));
            _field.Set(value);
        }
        static void SetOnModIOLoggedOut(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("OnModIOLoggedOut"));
            _field.Set(value);
        }
        static void SetOnModIOLoginFailed(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("OnModIOLoginFailed"));
            _field.Set(value);
        }
        static void SetOnModIOLoginStarted(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("OnModIOLoginStarted"));
            _field.Set(value);
        }
        static void SetOnModIOUserChanged(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("OnModIOUserChanged"));
            _field.Set(value);
        }
        static void SetOnModManagementEvent(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("OnModManagementEvent"));
            _field.Set(value);
        }
        static void SetOutdatedModCMSVersions(::BNM::Structures::Mono::Dictionary<void*, int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<void*, int>*> _field = GetClass().GetField(O("outdatedModCMSVersions"));
            _field.Set(value);
        }
        static void SetRefreshDisabledCoroutine(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("refreshDisabledCoroutine"));
            _field.Set(value);
        }
        static void SetRefreshing(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("refreshing"));
            _field.Set(value);
        }
        static void SetRefreshingModCache(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("refreshingModCache"));
            _field.Set(value);
        }
        static void SetRestartRefreshModCache(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("restartRefreshModCache"));
            _field.Set(value);
        }
        template <typename TP0 = void*>
        static void* AddFavorite(TP0 modId, ::BNM::Structures::Mono::Action<::BNM::IL2CPP::Il2CppObject*>* callback) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("AddFavorite"), {"modId", "callback"});
            return _m.Call(modId, callback);
        }
        static ::BNM::Coroutine::IEnumerator* AssociateMothershipAndModIOAccounts(::GlobalNamespace::AssociateMotherhsipAndModIOAccountsRequest* data, ::BNM::Structures::Mono::Action<::GlobalNamespace::AssociateMotherhsipAndModIOAccountsResponse*>* callback) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("AssociateMothershipAndModIOAccounts"), {"data", "callback"});
            return _m.Call(data, callback);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void CancelExternalAuthentication() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CancelExternalAuthentication"));
            _m.Call();
        }
        void* ContinuePlatformLogin() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("ContinuePlatformLogin"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static void DisableModManagement() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DisableModManagement"));
            _m.Call();
        }
        template <typename TP0 = void*>
        static void* DownloadMod(TP0 modId, ::BNM::Structures::Mono::Action<bool>* callback) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("DownloadMod"), {"modId", "callback"});
            return _m.Call(modId, callback);
        }
        static void EnableModManagement() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EnableModManagement"));
            _m.Call();
        }
        static ::BNM::Structures::Mono::String* GetCurrentAuthToken() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetCurrentAuthToken"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::String* GetCurrentUserId() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetCurrentUserId"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::String* GetCurrentUsername() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetCurrentUsername"));
            return _m.Call();
        }
        static void* GetFavoriteMods_1(bool forceRefresh) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("GetFavoriteMods"), {"forceRefresh"});
            return _m.Call(forceRefresh);
        }
        static void* GetInstalledMods(bool forceRefresh) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("GetInstalledMods"), {"forceRefresh"});
            return _m.Call(forceRefresh);
        }
        static ::GlobalNamespace::ModIOManager_ModIOAuthMethod GetLastAuthMethod() {
            static BNM::Method<::GlobalNamespace::ModIOManager_ModIOAuthMethod> _m = GetClass().GetMethod(O("GetLastAuthMethod"));
            return _m.Call();
        }
        template <typename TP0 = void*>
        static void* GetMod(TP0 modId, bool forceUpdate, ::BNM::Structures::Mono::Action<::BNM::IL2CPP::Il2CppObject*, ::BNM::IL2CPP::Il2CppObject*>* callback) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("GetMod"), {"modId", "forceUpdate", "callback"});
            return _m.Call(modId, forceUpdate, callback);
        }
        static void* GetModLogo(::BNM::IL2CPP::Il2CppObject* mod, ::BNM::Structures::Mono::Action<::BNM::IL2CPP::Il2CppObject*, ::Texture2D*>* callback) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("GetModLogo"), {"mod", "callback"});
            return _m.Call(mod, callback);
        }
        static void* GetMods(::BNM::IL2CPP::Il2CppObject* searchFilter) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("GetMods"), {"searchFilter"});
            return _m.Call(searchFilter);
        }
        template <typename TP0 = void*>
        static void* GetMods(TP0 modIds, bool forceRefresh, ::BNM::Structures::Mono::Action<::BNM::IL2CPP::Il2CppObject*, void*>* callback) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("GetMods"), {"modIds", "forceRefresh", "callback"});
            return _m.Call(modIds, forceRefresh, callback);
        }
        template <typename TP0 = void*>
        static void* GetModStatus(TP0 modId) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("GetModStatus"), {"modId"});
            return _m.Call(modId);
        }
        void* GetOculusAccessToken() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("GetOculusAccessToken"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* GetOculusDevice() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetOculusDevice"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* GetOculusUserId() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("GetOculusUserId"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* GetOculusUserProof() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("GetOculusUserProof"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        template <typename TP0 = void*>
        static void* GetSubscribedModProfile(TP0 modId, ::BNM::Structures::Mono::Action<bool, ::BNM::IL2CPP::Il2CppObject*>* callback) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("GetSubscribedModProfile"), {"modId", "callback"});
            return _m.Call(modId, callback);
        }
        static void* GetSubscribedMods() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("GetSubscribedMods"));
            return _m.Call();
        }
        template <typename TP0 = void*>
        static void* GetSubscribedModStatus(TP0 modId) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("GetSubscribedModStatus"), {"modId"});
            return _m.Call(modId);
        }
        template <typename TP2 = void*, typename TP3 = void*>
        static void HandleModManagementEvent(::BNM::IL2CPP::Il2CppObject* mod, ::BNM::IL2CPP::Il2CppObject* modfile, TP2 jobType, TP3 jobPhase) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleModManagementEvent"), {"mod", "modfile", "jobType", "jobPhase"});
            _m.Call(mod, modfile, jobType, jobPhase);
        }
        void* HasAcceptedLatestTerms() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("HasAcceptedLatestTerms"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static void* Initialize() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("Initialize"));
            return _m.Call();
        }
        void* InitiatePlatformLogin() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("InitiatePlatformLogin"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static void* InitInternal() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("InitInternal"));
            return _m.Call();
        }
        static bool IsAuthenticated(bool sendEvents) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsAuthenticated"), {"sendEvents"});
            return _m.Call(sendEvents);
        }
        static bool IsInitialized() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsInitialized"));
            return _m.Call();
        }
        static void* IsInstalledModOutdated(::BNM::IL2CPP::Il2CppObject* mod) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("IsInstalledModOutdated"), {"mod"});
            return _m.Call(mod);
        }
        static bool IsLoggedIn() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsLoggedIn"));
            return _m.Call();
        }
        static bool IsLoggingIn() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsLoggingIn"));
            return _m.Call();
        }
        static bool IsLoggingOut() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsLoggingOut"));
            return _m.Call();
        }
        template <typename TP0 = void*>
        static bool IsModFavorited(TP0 modId) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsModFavorited"), {"modId"});
            return _m.Call(modId);
        }
        template <typename TP0 = void*>
        static void* IsModOutdated(TP0 modId) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("IsModOutdated"), {"modId"});
            return _m.Call(modId);
        }
        static void* IsModOutdated(::BNM::IL2CPP::Il2CppObject* mod) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("IsModOutdated"), {"mod"});
            return _m.Call(mod);
        }
        static bool IsRefreshing() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsRefreshing"));
            return _m.Call();
        }
        static void LogoutFromModIO() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LogoutFromModIO"));
            _m.Call();
        }
        static void ModIOUserChanged(::BNM::IL2CPP::Il2CppObject* currentUser) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ModIOUserChanged"), {"currentUser"});
            _m.Call(currentUser);
        }
        static void ModIOUserSyncComplete() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ModIOUserSyncComplete"));
            _m.Call();
        }
        static void OnAuthenticationComplete(::BNM::IL2CPP::Il2CppObject* error) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnAuthenticationComplete"), {"error"});
            _m.Call(error);
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnJoinedRoom() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnJoinedRoom"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnModIOTermsOfUseAcknowledged(bool accepted) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnModIOTermsOfUseAcknowledged"), {"accepted"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(accepted);
        }
        static void OnUGCDisabled() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnUGCDisabled"));
            _m.Call();
        }
        static void OnUGCEnabled() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnUGCEnabled"));
            _m.Call();
        }
        static ::BNM::IL2CPP::Il2CppObject* RefreshModCache() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("RefreshModCache"));
            return _m.Call();
        }
        static ::BNM::IL2CPP::Il2CppObject* RefreshUserProfile(::BNM::Structures::Mono::Action<bool>* callback, bool force) {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("RefreshUserProfile"), {"callback", "force"});
            return _m.Call(callback, force);
        }
        template <typename TP0 = void*>
        static ::BNM::IL2CPP::Il2CppObject* RemoveFavorite(TP0 modId) {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("RemoveFavorite"), {"modId"});
            return _m.Call(modId);
        }
        static void* RequestAccountLinkCode() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("RequestAccountLinkCode"));
            return _m.Call();
        }
        void RequestEncryptedAppTicket(::BNM::Structures::Mono::Action<bool, ::BNM::Structures::Mono::String*>* callback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestEncryptedAppTicket"), {"callback"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(callback);
        }
        static void* RequestPlatformLogin() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("RequestPlatformLogin"));
            return _m.Call();
        }
        static void SaveFavoriteMods() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SaveFavoriteMods"));
            _m.Call();
        }
        template <typename TP0 = void*>
        static void SetAccountLinkPrompter(TP0 prompter) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetAccountLinkPrompter"), {"prompter"});
            _m.Call(prompter);
        }
        void* ShowModIOTermsOfUse() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("ShowModIOTermsOfUse"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        template <typename TP0 = void*>
        static void* SubscribeToMod(TP0 modId, ::BNM::Structures::Mono::Action<::BNM::IL2CPP::Il2CppObject*>* callback) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("SubscribeToMod"), {"modId", "callback"});
            return _m.Call(modId, callback);
        }
        static bool TryGetNewMapsModId(void*& newMapsModId) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryGetNewMapsModId"), {"newMapsModId"});
            return _m.Call(&newMapsModId);
        }
        template <typename TP0 = void*>
        static void* UnsubscribeFromMod(TP0 modId, ::BNM::Structures::Mono::Action<::BNM::IL2CPP::Il2CppObject*>* callback) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("UnsubscribeFromMod"), {"modId", "callback"});
            return _m.Call(modId, callback);
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static bool ValidateInstalledMod(::BNM::IL2CPP::Il2CppObject* mod) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ValidateInstalledMod"), {"mod"});
            return _m.Call(mod);
        }
    };
}
