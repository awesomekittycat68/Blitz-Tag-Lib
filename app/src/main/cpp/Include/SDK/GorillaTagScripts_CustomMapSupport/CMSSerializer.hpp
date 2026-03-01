#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GlobalNamespace/GorillaSerializer.hpp"
#include "../Photon_Pun/PhotonMessageInfo.hpp"

namespace GorillaTagScripts_CustomMapSupport {
    struct CMSSerializer : ::GlobalNamespace::GorillaSerializer {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts.CustomMapSupport", "CMSSerializer");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GorillaTagScripts_CustomMapSupport::CMSSerializer* GetInstance() {
            static BNM::Field<::GorillaTagScripts_CustomMapSupport::CMSSerializer*> field = GetClass().GetField("instance");
            return field.Get();
        }
        static ::GlobalNamespace::CallLimiter* GetActivateTriggerCallLimiter() {
            static BNM::Field<::GlobalNamespace::CallLimiter*> _field = GetClass().GetField(O("ActivateTriggerCallLimiter"));
            return _field.Get();
        }
        static bool GetHasInstance() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasInstance"));
            return _field.Get();
        }
        static ::GorillaTagScripts_CustomMapSupport::CMSSerializer* GetInstance_f() {
            static BNM::Field<::GorillaTagScripts_CustomMapSupport::CMSSerializer*> _field = GetClass().GetField(O("instance"));
            return _field.Get();
        }
        static void* GetOnTriggerHistoryProcessedForScene() {
            static BNM::Field<void*> _field = GetClass().GetField(O("OnTriggerHistoryProcessedForScene"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::Dictionary<uint8_t, ::GorillaTagScripts_CustomMapSupport::CMSTrigger*>*>* GetRegisteredTriggersPerScene() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::Dictionary<uint8_t, ::GorillaTagScripts_CustomMapSupport::CMSTrigger*>*>*> _field = GetClass().GetField(O("registeredTriggersPerScene"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* GetScenesWaitingForTriggerCounts() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("scenesWaitingForTriggerCounts"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* GetScenesWaitingForTriggerHistory() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("scenesWaitingForTriggerHistory"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<uint8_t, uint8_t>* GetTriggerCounts() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<uint8_t, uint8_t>*> _field = GetClass().GetField(O("triggerCounts"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<uint8_t>* GetTriggerHistory() {
            static BNM::Field<::BNM::Structures::Mono::List<uint8_t>*> _field = GetClass().GetField(O("triggerHistory"));
            return _field.Get();
        }
        static bool GetWaitingForTriggerCounts() {
            static BNM::Field<bool> _field = GetClass().GetField(O("waitingForTriggerCounts"));
            return _field.Get();
        }
        static bool GetWaitingForTriggerHistory() {
            static BNM::Field<bool> _field = GetClass().GetField(O("waitingForTriggerHistory"));
            return _field.Get();
        }
        static void SetActivateTriggerCallLimiter(::GlobalNamespace::CallLimiter* value) {
            static BNM::Field<::GlobalNamespace::CallLimiter*> _field = GetClass().GetField(O("ActivateTriggerCallLimiter"));
            _field.Set(value);
        }
        static void SetHasInstance(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasInstance"));
            _field.Set(value);
        }
        static void SetInstance(::GorillaTagScripts_CustomMapSupport::CMSSerializer* value) {
            static BNM::Field<::GorillaTagScripts_CustomMapSupport::CMSSerializer*> _field = GetClass().GetField(O("instance"));
            _field.Set(value);
        }
        static void SetOnTriggerHistoryProcessedForScene(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("OnTriggerHistoryProcessedForScene"));
            _field.Set(value);
        }
        static void SetRegisteredTriggersPerScene(::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::Dictionary<uint8_t, ::GorillaTagScripts_CustomMapSupport::CMSTrigger*>*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::Dictionary<uint8_t, ::GorillaTagScripts_CustomMapSupport::CMSTrigger*>*>*> _field = GetClass().GetField(O("registeredTriggersPerScene"));
            _field.Set(value);
        }
        static void SetScenesWaitingForTriggerCounts(::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("scenesWaitingForTriggerCounts"));
            _field.Set(value);
        }
        static void SetScenesWaitingForTriggerHistory(::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("scenesWaitingForTriggerHistory"));
            _field.Set(value);
        }
        static void SetTriggerCounts(::BNM::Structures::Mono::Dictionary<uint8_t, uint8_t>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<uint8_t, uint8_t>*> _field = GetClass().GetField(O("triggerCounts"));
            _field.Set(value);
        }
        static void SetTriggerHistory(::BNM::Structures::Mono::List<uint8_t>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<uint8_t>*> _field = GetClass().GetField(O("triggerHistory"));
            _field.Set(value);
        }
        static void SetWaitingForTriggerCounts(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("waitingForTriggerCounts"));
            _field.Set(value);
        }
        static void SetWaitingForTriggerHistory(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("waitingForTriggerHistory"));
            _field.Set(value);
        }
        void ActivateTrigger(uint8_t triggerID, double triggerTime, bool originatedLocally) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ActivateTrigger"), {"triggerID", "triggerTime", "originatedLocally"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(triggerID, triggerTime, originatedLocally);
        }
        void ActivateTrigger_RPC(uint8_t triggerID, int originatingPlayer, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ActivateTrigger_RPC"), {"triggerID", "originatingPlayer", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(triggerID, originatingPlayer, info);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnCustomMapLoaded(bool success) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnCustomMapLoaded"), {"success"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(success);
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
        static void ProcessSceneLoad(::BNM::Structures::Mono::String* sceneName) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ProcessSceneLoad"), {"sceneName"});
            _m.Call(sceneName);
        }
        static void ProcessTriggerCounts(::BNM::Structures::Mono::String* forScene) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ProcessTriggerCounts"), {"forScene"});
            _m.Call(forScene);
        }
        static void ProcessTriggerHistory(::BNM::Structures::Mono::String* forScene) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ProcessTriggerHistory"), {"forScene"});
            _m.Call(forScene);
        }
        static void RegisterTrigger(::BNM::Structures::Mono::String* sceneName, ::GorillaTagScripts_CustomMapSupport::CMSTrigger* trigger) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RegisterTrigger"), {"sceneName", "trigger"});
            _m.Call(sceneName, trigger);
        }
        static void RequestSyncTriggerHistory() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestSyncTriggerHistory"));
            _m.Call();
        }
        void RequestSyncTriggerHistory_RPC(::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestSyncTriggerHistory_RPC"), {"info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(info);
        }
        static void RequestTrigger(uint8_t triggerID) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestTrigger"), {"triggerID"});
            _m.Call(triggerID);
        }
        void RequestTrigger_RPC(uint8_t triggerID, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestTrigger_RPC"), {"triggerID", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(triggerID, info);
        }
        static void ResetSyncedMapObjects() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetSyncedMapObjects"));
            _m.Call();
        }
        static void ResetTrigger(uint8_t triggerID) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetTrigger"), {"triggerID"});
            _m.Call(triggerID);
        }
        void SyncTriggerCounts_RPC(::BNM::Structures::Mono::Dictionary<uint8_t, uint8_t>* syncedTriggerCounts, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SyncTriggerCounts_RPC"), {"syncedTriggerCounts", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(syncedTriggerCounts, info);
        }
        void SyncTriggerHistory_RPC(::BNM::Structures::Mono::Array<uint8_t>* syncedTriggerHistory, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SyncTriggerHistory_RPC"), {"syncedTriggerHistory", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(syncedTriggerHistory, info);
        }
        static bool TryGetRegisteredTrigger(uint8_t triggerID, ::GorillaTagScripts_CustomMapSupport::CMSTrigger*& trigger) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryGetRegisteredTrigger"), {"triggerID", "trigger"});
            return _m.Call(triggerID, &trigger);
        }
        static void UnregisterTriggers(::BNM::Structures::Mono::String* forScene) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnregisterTriggers"), {"forScene"});
            _m.Call(forScene);
        }
    };
}
