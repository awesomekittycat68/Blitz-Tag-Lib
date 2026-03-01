#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SIUpgradeSet.hpp"

namespace GlobalNamespace {
    struct SIGadgetCooldownBlaster : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SIGadgetCooldownBlaster");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetAvailableToFireHapticDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("availableToFireHapticDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetAvailableToFireHapticStrength() {
            static BNM::Field<float> _field = GetClass().GetField(O("availableToFireHapticStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SIGadgetBlaster* GetBlaster() {
            static BNM::Field<::GlobalNamespace::SIGadgetBlaster*> _field = GetClass().GetField(O("blaster"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetCooldownClip() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("cooldownClip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::MeshRenderer* GetCooldownIndicator() {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("cooldownIndicator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCooldownVolume() {
            static BNM::Field<float> _field = GetClass().GetField(O("cooldownVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFireCooldown() {
            static BNM::Field<float> _field = GetClass().GetField(O("fireCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ParticleSystem* GetFireFX() {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("fireFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFireRateGracePercentage() {
            static BNM::Field<float> _field = GetClass().GetField(O("fireRateGracePercentage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetFiringClip() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("firingClip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFiringHapticDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("firingHapticDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFiringHapticStrength() {
            static BNM::Field<float> _field = GetClass().GetField(O("firingHapticStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFiringVolume() {
            static BNM::Field<float> _field = GetClass().GetField(O("firingVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetOnCooldownMaterial() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("onCooldownMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SIGadgetBlasterProjectile* GetProjectilePrefab() {
            static BNM::Field<::GlobalNamespace::SIGadgetBlasterProjectile*> _field = GetClass().GetField(O("projectilePrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetReadyToFireMaterial() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("readyToFireMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetTriggerHeldDown() {
            static BNM::Field<bool> _field = GetClass().GetField(O("triggerHeldDown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAvailableToFireHapticDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("availableToFireHapticDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAvailableToFireHapticStrength(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("availableToFireHapticStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBlaster(::GlobalNamespace::SIGadgetBlaster* value) {
            static BNM::Field<::GlobalNamespace::SIGadgetBlaster*> _field = GetClass().GetField(O("blaster"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCooldownClip(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("cooldownClip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCooldownIndicator(::MeshRenderer* value) {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("cooldownIndicator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCooldownVolume(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("cooldownVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFireCooldown(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("fireCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFireFX(::ParticleSystem* value) {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("fireFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFireRateGracePercentage(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("fireRateGracePercentage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFiringClip(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("firingClip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFiringHapticDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("firingHapticDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFiringHapticStrength(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("firingHapticStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFiringVolume(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("firingVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnCooldownMaterial(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("onCooldownMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProjectilePrefab(::GlobalNamespace::SIGadgetBlasterProjectile* value) {
            static BNM::Field<::GlobalNamespace::SIGadgetBlasterProjectile*> _field = GetClass().GetField(O("projectilePrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReadyToFireMaterial(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("readyToFireMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTriggerHeldDown(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("triggerHeldDown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void ApplyUpgradeNodes(::GlobalNamespace::SIUpgradeSet withUpgrades) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyUpgradeNodes"), {"withUpgrades"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(withUpgrades);
        }
        bool CheckInput() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CheckInput"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void FireProjectile(int fireId, ::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Quaternion rotation) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FireProjectile"), {"fireId", "position", "rotation"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(fireId, position, rotation);
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
