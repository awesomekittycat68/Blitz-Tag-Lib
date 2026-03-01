#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SIGadget.hpp"
#include "SIGadgetBlasterState.hpp"
#include "SIUpgradeSet.hpp"
#include "../Photon_Pun/PhotonMessageInfo.hpp"

namespace GlobalNamespace {
    struct SIGadgetBlaster : ::GlobalNamespace::SIGadget {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SIGadgetBlaster");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr float PROJECTILE_MAX_LATENCY = 1.0f;
        bool GetLocalEquippedOrActivated() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_LocalEquippedOrActivated"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetTickRunning() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_TickRunning"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetTickRunning(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_TickRunning"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::SIGadgetBlasterProjectile*>* GetActiveProjectiles() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::SIGadgetBlasterProjectile*>*> _field = GetClass().GetField(O("activeProjectiles"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<int, ::BNM::Structures::Mono::List<::GameObject*>*>* GetBlasterProjectilePools() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BNM::Structures::Mono::List<::GameObject*>*>*> _field = GetClass().GetField(O("blasterProjectilePools"));
            return _field.Get();
        }
        ::AudioSource* GetBlasterSource() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("blasterSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetBlasterType() {
            static BNM::Field<void*> _field = GetClass().GetField(O("blasterType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GameButtonActivatable* GetButtonActivatable() {
            static BNM::Field<::GlobalNamespace::GameButtonActivatable*> _field = GetClass().GetField(O("buttonActivatable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SIGadgetBlasterState GetCurrentState() {
            static BNM::Field<::GlobalNamespace::SIGadgetBlasterState> _field = GetClass().GetField(O("currentState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetEnvironmentLayerMask() {
            static BNM::Field<void*> _field = GetClass().GetField(O("environmentLayerMask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetFiringPosition() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("firingPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetFiringSource() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("firingSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetInputActivateThreshold() {
            static BNM::Field<float> _field = GetClass().GetField(O("inputActivateThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetInputDeactivateThreshold() {
            static BNM::Field<float> _field = GetClass().GetField(O("inputDeactivateThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLastFired() {
            static BNM::Field<float> _field = GetClass().GetField(O("lastFired"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxLagDistance() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxLagDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMaxProjectileCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("maxProjectileCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetProjectileCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("projectileCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetProjectileId() {
            static BNM::Field<int> _field = GetClass().GetField(O("projectileId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetProjectilesToDespawn() {
            static BNM::Field<void*> _field = GetClass().GetField(O("projectilesToDespawn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetProjectilesToDespawnTimes() {
            static BNM::Field<void*> _field = GetClass().GetField(O("projectilesToDespawnTimes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetWasActivated() {
            static BNM::Field<bool> _field = GetClass().GetField(O("wasActivated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetActiveProjectiles(::BNM::Structures::Mono::List<::GlobalNamespace::SIGadgetBlasterProjectile*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::SIGadgetBlasterProjectile*>*> _field = GetClass().GetField(O("activeProjectiles"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetBlasterProjectilePools(::BNM::Structures::Mono::Dictionary<int, ::BNM::Structures::Mono::List<::GameObject*>*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BNM::Structures::Mono::List<::GameObject*>*>*> _field = GetClass().GetField(O("blasterProjectilePools"));
            _field.Set(value);
        }
        void SetBlasterSource(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("blasterSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBlasterType(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("blasterType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetButtonActivatable(::GlobalNamespace::GameButtonActivatable* value) {
            static BNM::Field<::GlobalNamespace::GameButtonActivatable*> _field = GetClass().GetField(O("buttonActivatable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentState(::GlobalNamespace::SIGadgetBlasterState value) {
            static BNM::Field<::GlobalNamespace::SIGadgetBlasterState> _field = GetClass().GetField(O("currentState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEnvironmentLayerMask(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("environmentLayerMask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFiringPosition(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("firingPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFiringSource(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("firingSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInputActivateThreshold(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("inputActivateThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInputDeactivateThreshold(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("inputDeactivateThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastFired(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lastFired"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxLagDistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxLagDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxProjectileCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("maxProjectileCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProjectileCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("projectileCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProjectileId(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("projectileId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProjectilesToDespawn(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("projectilesToDespawn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProjectilesToDespawnTimes(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("projectilesToDespawnTimes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWasActivated(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("wasActivated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void ApplyUpgradeNodes(::GlobalNamespace::SIUpgradeSet withUpgrades) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyUpgradeNodes"), {"withUpgrades"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(withUpgrades);
        }
        static bool CanChangeState(int64_t newStateIndex) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CanChangeState"), {"newStateIndex"});
            return _m.Call(newStateIndex);
        }
        bool CheckInput() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CheckInput"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float CurrentFireRate() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("CurrentFireRate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void DespawnProjectile(::GlobalNamespace::SIGadgetBlasterProjectile* projectile) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DespawnProjectile"), {"projectile"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(projectile);
        }
        void FireProjectileHaptics(float strength, float duration) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FireProjectileHaptics"), {"strength", "duration"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(strength, duration);
        }
        bool get_LocalEquippedOrActivated() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_LocalEquippedOrActivated"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_TickRunning() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_TickRunning"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GameObject* InstantiateProjectile(::GlobalNamespace::SIGadgetBlasterProjectile* projectilePrefab, ::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Quaternion rotation, int thisFireId) {
            static BNM::Method<::GameObject*> _m = GetClass().GetMethod(O("InstantiateProjectile"), {"projectilePrefab", "position", "rotation", "thisFireId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(projectilePrefab, position, rotation, thisFireId);
        }
        int NextFireId() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("NextFireId"));
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
        void ProcessClientToClientRPC(::Photon_Pun::PhotonMessageInfo info, int rpcID, ::BNM::Structures::Mono::Array<void*>* data) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ProcessClientToClientRPC"), {"info", "rpcID", "data"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(info, rpcID, data);
        }
        void set_TickRunning(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_TickRunning"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetStateAuthority(::GlobalNamespace::SIGadgetBlasterState newState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetStateAuthority"), {"newState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newState);
        }
        void SetStateShared(::GlobalNamespace::SIGadgetBlasterState newState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetStateShared"), {"newState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newState);
        }
        void StartGrabbing() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StartGrabbing"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void StopGrabbing() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StopGrabbing"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Tick() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Tick"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
