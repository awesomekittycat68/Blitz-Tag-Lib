#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SIUpgradeSet.hpp"

namespace GlobalNamespace {
    struct SIGadgetPumpBlaster : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SIGadgetPumpBlaster");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::SIGadgetBlaster* GetBlaster() {
            static BNM::Field<::GlobalNamespace::SIGadgetBlaster*> _field = GetClass().GetField(O("blaster"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetChargePerPump() {
            static BNM::Field<float> _field = GetClass().GetField(O("chargePerPump"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetCooldownClip() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("cooldownClip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCooldownVolume() {
            static BNM::Field<float> _field = GetClass().GetField(O("cooldownVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCurrentPumpChargeAmount() {
            static BNM::Field<float> _field = GetClass().GetField(O("currentPumpChargeAmount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ParticleSystem* GetFireFX() {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("fireFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetFiringClip() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("firingClip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFiringVolume() {
            static BNM::Field<float> _field = GetClass().GetField(O("firingVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetIdleClip() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("idleClip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetIdleVolume() {
            static BNM::Field<float> _field = GetClass().GetField(O("idleVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxPumpCharge() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxPumpCharge"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxPumpDiff() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxPumpDiff"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SIGadgetBlasterProjectile* GetProjectilePrefab() {
            static BNM::Field<::GlobalNamespace::SIGadgetBlasterProjectile*> _field = GetClass().GetField(O("projectilePrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetPumpFullyClosed() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("pumpFullyClosed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetPumpFullyOpen() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("pumpFullyOpen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetPumpFullyOpened() {
            static BNM::Field<bool> _field = GetClass().GetField(O("pumpFullyOpened"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetPumpHandlePosition() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("pumpHandlePosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetPumpingTransform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("pumpingTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPumpThresholdPercent() {
            static BNM::Field<float> _field = GetClass().GetField(O("pumpThresholdPercent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRemotePumpChargePerSecond() {
            static BNM::Field<float> _field = GetClass().GetField(O("remotePumpChargePerSecond"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetStrokeLength() {
            static BNM::Field<float> _field = GetClass().GetField(O("strokeLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GameTriggerInteractable* GetTriggerInteractable() {
            static BNM::Field<::GlobalNamespace::GameTriggerInteractable*> _field = GetClass().GetField(O("triggerInteractable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBlaster(::GlobalNamespace::SIGadgetBlaster* value) {
            static BNM::Field<::GlobalNamespace::SIGadgetBlaster*> _field = GetClass().GetField(O("blaster"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetChargePerPump(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("chargePerPump"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCooldownClip(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("cooldownClip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCooldownVolume(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("cooldownVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentPumpChargeAmount(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("currentPumpChargeAmount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFireFX(::ParticleSystem* value) {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("fireFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFiringClip(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("firingClip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFiringVolume(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("firingVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIdleClip(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("idleClip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIdleVolume(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("idleVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxPumpCharge(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxPumpCharge"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxPumpDiff(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxPumpDiff"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProjectilePrefab(::GlobalNamespace::SIGadgetBlasterProjectile* value) {
            static BNM::Field<::GlobalNamespace::SIGadgetBlasterProjectile*> _field = GetClass().GetField(O("projectilePrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPumpFullyClosed(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("pumpFullyClosed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPumpFullyOpen(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("pumpFullyOpen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPumpFullyOpened(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("pumpFullyOpened"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPumpHandlePosition(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("pumpHandlePosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPumpingTransform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("pumpingTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPumpThresholdPercent(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("pumpThresholdPercent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRemotePumpChargePerSecond(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("remotePumpChargePerSecond"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStrokeLength(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("strokeLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTriggerInteractable(::GlobalNamespace::GameTriggerInteractable* value) {
            static BNM::Field<::GlobalNamespace::GameTriggerInteractable*> _field = GetClass().GetField(O("triggerInteractable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void ApplyUpgradeNodes(::GlobalNamespace::SIUpgradeSet withUpgrades) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyUpgradeNodes"), {"withUpgrades"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(withUpgrades);
        }
        void AttemptFireProjectile(int fireId, float pumpChargeAmount, ::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Quaternion rotation) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AttemptFireProjectile"), {"fireId", "pumpChargeAmount", "position", "rotation"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(fireId, pumpChargeAmount, position, rotation);
        }
        bool CheckInput() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CheckInput"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void NetworkFireProjectile(::BNM::Structures::Mono::Array<void*>* data) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("NetworkFireProjectile"), {"data"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(data);
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
        void SetStateShared() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetStateShared"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
