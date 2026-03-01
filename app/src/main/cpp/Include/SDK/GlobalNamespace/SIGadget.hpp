#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SIGadget_UpgradeVisual.hpp"
#include "SITechTreePageId.hpp"
#include "SIUpgradeSet.hpp"
#include "../Photon_Pun/PhotonMessageInfo.hpp"

namespace GlobalNamespace {
    struct SIGadget : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SIGadget");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::SITechTreePageId GetPageId() {
            static BNM::Method<::GlobalNamespace::SITechTreePageId> _method = GetClass().GetMethod(O("get_PageId"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetPageId(::GlobalNamespace::SITechTreePageId value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_PageId"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::List<void*>* GetGameStateReceivers() {
            static BNM::Field<::BNM::Structures::Mono::List<void*>*> _field = GetClass().GetField(O("_gameStateReceivers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetActivatedLocally() {
            static BNM::Field<bool> _field = GetClass().GetField(O("activatedLocally"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::GameEntity*>* GetAdditionalRequiredPrefabs() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GameEntity*>*> _field = GetClass().GetField(O("additionalRequiredPrefabs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::SIExclusionZone*>* GetAppliedExclusionZones() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::SIExclusionZone*>*> _field = GetClass().GetField(O("appliedExclusionZones"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDidApplyId() {
            static BNM::Field<bool> _field = GetClass().GetField(O("didApplyId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GameEntity* GetGameEntity() {
            static BNM::Field<::GlobalNamespace::GameEntity*> _field = GetClass().GetField(O("gameEntity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsSleeping() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isSleeping"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<::GlobalNamespace::SIUpgradeSet>* GetOnPostRefreshVisuals() {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::SIUpgradeSet>*> _field = GetClass().GetField(O("OnPostRefreshVisuals"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SITechTreePageId GetPageId_f() {
            static BNM::Field<::GlobalNamespace::SITechTreePageId> _field = GetClass().GetField(O("pageId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetShouldSleep() {
            static BNM::Field<bool> _field = GetClass().GetField(O("shouldSleep"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSleepTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("sleepTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTimeReleased() {
            static BNM::Field<float> _field = GetClass().GetField(O("timeReleased"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static int GetUniqueId() {
            static BNM::Field<int> _field = GetClass().GetField(O("uniqueId"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::SIGadget_UpgradeVisual>* GetUpgradeBasedVisuals() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::SIGadget_UpgradeVisual>*> _field = GetClass().GetField(O("UpgradeBasedVisuals"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetGameStateReceivers(::BNM::Structures::Mono::List<void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<void*>*> _field = GetClass().GetField(O("_gameStateReceivers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetActivatedLocally(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("activatedLocally"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAdditionalRequiredPrefabs(::BNM::Structures::Mono::Array<::GlobalNamespace::GameEntity*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GameEntity*>*> _field = GetClass().GetField(O("additionalRequiredPrefabs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDidApplyId(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("didApplyId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGameEntity(::GlobalNamespace::GameEntity* value) {
            static BNM::Field<::GlobalNamespace::GameEntity*> _field = GetClass().GetField(O("gameEntity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsSleeping(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isSleeping"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnPostRefreshVisuals(::BNM::Structures::Mono::Action<::GlobalNamespace::SIUpgradeSet>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::SIUpgradeSet>*> _field = GetClass().GetField(O("OnPostRefreshVisuals"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPageId_fs(::GlobalNamespace::SITechTreePageId value) {
            static BNM::Field<::GlobalNamespace::SITechTreePageId> _field = GetClass().GetField(O("pageId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShouldSleep(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("shouldSleep"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSleepTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("sleepTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimeReleased(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("timeReleased"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetUniqueId(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("uniqueId"));
            _field.Set(value);
        }
        void SetUpgradeBasedVisuals(::BNM::Structures::Mono::Array<::GlobalNamespace::SIGadget_UpgradeVisual>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::SIGadget_UpgradeVisual>*> _field = GetClass().GetField(O("UpgradeBasedVisuals"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void ApplyExclusionZone(::GlobalNamespace::SIExclusionZone* exclusionZone) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyExclusionZone"), {"exclusionZone"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(exclusionZone);
        }
        void ApplyUpgradeNodes(::GlobalNamespace::SIUpgradeSet withUpgrades) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyUpgradeNodes"), {"withUpgrades"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(withUpgrades);
        }
        ::GlobalNamespace::SIUpgradeSet FilterUpgradeNodes(::GlobalNamespace::SIUpgradeSet upgrades) {
            static BNM::Method<::GlobalNamespace::SIUpgradeSet> _m = GetClass().GetMethod(O("FilterUpgradeNodes"), {"upgrades"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(upgrades);
        }
        bool FindAttachedHand(bool& isLeft, bool checkHeld, bool checkSnapped) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("FindAttachedHand"), {"isLeft", "checkHeld", "checkSnapped"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(&isLeft, checkHeld, checkSnapped);
        }
        ::GlobalNamespace::SITechTreePageId get_PageId() {
            static BNM::Method<::GlobalNamespace::SITechTreePageId> _m = GetClass().GetMethod(O("get_PageId"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* get_RequiredPrefabs() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_RequiredPrefabs"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int GetAttachedPlayerActorNumber() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetAttachedPlayerActorNumber"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Unity::Vector2 GetJoystickInput() {
            static BNM::Method<::BNM::Structures::Unity::Vector2> _m = GetClass().GetMethod(O("GetJoystickInput"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void GrabInitialization() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GrabInitialization"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void HandleBlockedActionChanged(bool isBlocked) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleBlockedActionChanged"), {"isBlocked"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(isBlocked);
        }
        bool IsBlocked() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsBlocked"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool IsEquippedLocal() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsEquippedLocal"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void LeaveAllExclusionZones() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LeaveAllExclusionZones"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void LeaveExclusionZone(::GlobalNamespace::SIExclusionZone* exclusionZone) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LeaveExclusionZone"), {"exclusionZone"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(exclusionZone);
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
        void OnEntityDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEntityDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEntityInit() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEntityInit"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEntityStateChange(int64_t prevState, int64_t newState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEntityStateChange"), {"prevState", "newState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(prevState, newState);
        }
        void OnUpdateAuthority(float dt) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnUpdateAuthority"), {"dt"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(dt);
        }
        void OnUpdateRemote(float dt) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnUpdateRemote"), {"dt"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(dt);
        }
        void ProcessAuthorityToClientRPC(::Photon_Pun::PhotonMessageInfo info, int rpcID, ::BNM::Structures::Mono::Array<void*>* data) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ProcessAuthorityToClientRPC"), {"info", "rpcID", "data"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(info, rpcID, data);
        }
        void ProcessClientToAuthorityRPC(::Photon_Pun::PhotonMessageInfo info, int rpcID, ::BNM::Structures::Mono::Array<void*>* data) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ProcessClientToAuthorityRPC"), {"info", "rpcID", "data"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(info, rpcID, data);
        }
        void ProcessClientToClientRPC(::Photon_Pun::PhotonMessageInfo info, int rpcID, ::BNM::Structures::Mono::Array<void*>* data) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ProcessClientToClientRPC"), {"info", "rpcID", "data"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(info, rpcID, data);
        }
        void RefreshUpgradeVisuals(::GlobalNamespace::SIUpgradeSet withUpgrades) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RefreshUpgradeVisuals"), {"withUpgrades"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(withUpgrades);
        }
        void ReleaseInitialization() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReleaseInitialization"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SendAuthorityToClientRPC(int rpcID) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendAuthorityToClientRPC"), {"rpcID"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(rpcID);
        }
        void SendAuthorityToClientRPC(int rpcID, ::BNM::Structures::Mono::Array<void*>* data) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendAuthorityToClientRPC"), {"rpcID", "data"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(rpcID, data);
        }
        void SendClientToAuthorityRPC(int rpcID) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendClientToAuthorityRPC"), {"rpcID"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(rpcID);
        }
        void SendClientToAuthorityRPC(int rpcID, ::BNM::Structures::Mono::Array<void*>* data) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendClientToAuthorityRPC"), {"rpcID", "data"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(rpcID, data);
        }
        void SendClientToClientRPC(int rpcID) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendClientToClientRPC"), {"rpcID"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(rpcID);
        }
        void SendClientToClientRPC(int rpcID, ::BNM::Structures::Mono::Array<void*>* data) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendClientToClientRPC"), {"rpcID", "data"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(rpcID, data);
        }
        void set_PageId(::GlobalNamespace::SITechTreePageId value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_PageId"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        bool ShouldProcessInput() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ShouldProcessInput"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void SleepAfterDelay() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SleepAfterDelay"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
