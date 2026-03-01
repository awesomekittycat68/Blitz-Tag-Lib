#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "LckEntitlementsManager_FeatureState.hpp"

namespace GlobalNamespace {
    struct LckEntitlementsManager : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "LckEntitlementsManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::LckEntitlementsManager* get_Instance() {
            static BNM::Method<::GlobalNamespace::LckEntitlementsManager*> method = GetClass().GetMethod(O("get_Instance"));
            return method.Call();
        }
        static constexpr int MAX_API_CALL_ATTEMPTS = 2;
        static constexpr int MAX_CONSECUTIVE_ATTEMPTS = 3;
        static constexpr float ABUSE_TIMEOUT_MINUTES = 1.0f;
        static constexpr float BATCH_GET_ENTITLEMENTS_INTERVAL_SECONDS = 15.0f;
        static constexpr float STALE_PLAYER_TIMEOUT_MINUTES = 5.0f;
        static constexpr const char* DEFAULT_SESSION_ID = "DefaultSessionId";
        ::GlobalNamespace::LckEntitlementsManager* GetInstance() {
            static BNM::Method<::GlobalNamespace::LckEntitlementsManager*> _method = GetClass().GetMethod(O("get_Instance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetInstance(::GlobalNamespace::LckEntitlementsManager* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Instance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetLckEntitlementsEnabled() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_LckEntitlementsEnabled"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetLckEntitlementsEnabled(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_LckEntitlementsEnabled"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::IL2CPP::Il2CppObject* GetCleanupProcessedPlayersCoroutine() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_cleanupProcessedPlayersCoroutine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::LckEntitlementsManager_FeatureState GetCurrentState() {
            static BNM::Field<::GlobalNamespace::LckEntitlementsManager_FeatureState> _field = GetClass().GetField(O("_currentState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetFeatureFlagManager() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_featureFlagManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetGetEntitlementsBatchingCoroutine() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_getEntitlementsBatchingCoroutine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsProcessingBatch() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_isProcessingBatch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetLckCosmeticsCoordinator() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_lckCosmeticsCoordinator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::GlobalNamespace::LckEntitlementsManager_PlayerProcessRecord*>* GetProcessedPlayers() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::GlobalNamespace::LckEntitlementsManager_PlayerProcessRecord*>*> _field = GetClass().GetField(O("_processedPlayers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetRemotePlayersToGetEntitlementsFor() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_remotePlayersToGetEntitlementsFor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCleanupProcessedPlayersCoroutine(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_cleanupProcessedPlayersCoroutine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentState(::GlobalNamespace::LckEntitlementsManager_FeatureState value) {
            static BNM::Field<::GlobalNamespace::LckEntitlementsManager_FeatureState> _field = GetClass().GetField(O("_currentState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFeatureFlagManager(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("_featureFlagManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGetEntitlementsBatchingCoroutine(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_getEntitlementsBatchingCoroutine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsProcessingBatch(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_isProcessingBatch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLckCosmeticsCoordinator(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("_lckCosmeticsCoordinator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        ::BNM::Coroutine::IEnumerator* AnnouncePlayerPresenceForSession(::BNM::Structures::Mono::String* localPlayerId) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("AnnouncePlayerPresenceForSession"), {"localPlayerId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(localPlayerId);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Coroutine::IEnumerator* CleanupProcessedPlayersCoroutine() {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("CleanupProcessedPlayersCoroutine"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static ::GlobalNamespace::LckEntitlementsManager* get_Instance_1() {
            static BNM::Method<::GlobalNamespace::LckEntitlementsManager*> _m = GetClass().GetMethod(O("get_Instance"));
            return _m.Call();
        }
        static bool get_LckEntitlementsEnabled() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_LckEntitlementsEnabled"));
            return _m.Call();
        }
        ::BNM::IL2CPP::Il2CppObject* GetCosmeticsForPlayersAsync(::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* userIdList, ::BNM::Structures::Mono::String* methodNameForLogging) {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("GetCosmeticsForPlayersAsync"), {"userIdList", "methodNameForLogging"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(userIdList, methodNameForLogging);
        }
        ::BNM::IL2CPP::Il2CppObject* InitializeFeatureAsync() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("InitializeFeatureAsync"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
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
        void OnLocalPlayerSpawned(::BNM::Structures::Mono::String* localUserId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnLocalPlayerSpawned"), {"localUserId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(localUserId);
        }
        void OnRemotePlayerSpawned(::BNM::Structures::Mono::String* remoteUserId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnRemotePlayerSpawned"), {"remoteUserId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(remoteUserId);
        }
        ::BNM::Coroutine::IEnumerator* ProcessBatchedRemotePlayersCoroutine() {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("ProcessBatchedRemotePlayersCoroutine"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Coroutine::IEnumerator* ProcessLocalPlayerSpawn(::BNM::Structures::Mono::String* userId) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("ProcessLocalPlayerSpawn"), {"userId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(userId);
        }
        static void set_Instance(::GlobalNamespace::LckEntitlementsManager* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Instance"), {"value"});
            _m.Call(value);
        }
        static void set_LckEntitlementsEnabled(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_LckEntitlementsEnabled"), {"value"});
            _m.Call(value);
        }
        bool ShouldProcessPlayer(::BNM::Structures::Mono::String* userId) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ShouldProcessPlayer"), {"userId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(userId);
        }
    };
}
