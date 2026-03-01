#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GRToolShieldGun_State.hpp"

namespace GlobalNamespace {
    struct GRToolShieldGun : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GRToolShieldGun");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetActivatedLocally() {
            static BNM::Field<bool> _field = GetClass().GetField(O("activatedLocally"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetAeoHitRadius() {
            static BNM::Field<float> _field = GetClass().GetField(O("aeoHitRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetAllowAoeHits() {
            static BNM::Field<bool> _field = GetClass().GetField(O("allowAoeHits"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRAttributes* GetAttributes() {
            static BNM::Field<::GlobalNamespace::GRAttributes*> _field = GetClass().GetField(O("attributes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetAudioSource() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetChargeDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("chargeDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetChargeSound() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("chargeSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetChargeSoundVolume() {
            static BNM::Field<float> _field = GetClass().GetField(O("chargeSoundVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::Collider*>* GetColliders() {
            static BNM::Field<::BNM::Structures::Mono::List<::Collider*>*> _field = GetClass().GetField(O("colliders"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCooldownDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("cooldownDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCooldownMinimum() {
            static BNM::Field<float> _field = GetClass().GetField(O("cooldownMinimum"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SlingshotProjectile* GetFiredProjectile() {
            static BNM::Field<::GlobalNamespace::SlingshotProjectile*> _field = GetClass().GetField(O("firedProjectile"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetFiringSound() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("firingSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFiringSoundVolume() {
            static BNM::Field<float> _field = GetClass().GetField(O("firingSoundVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetFiringTransform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("firingTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFlashDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("flashDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GameEntity* GetGameEntity() {
            static BNM::Field<::GlobalNamespace::GameEntity*> _field = GetClass().GetField(O("gameEntity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::AbilityHaptic* GetOnHaptic() {
            static BNM::Field<::GlobalNamespace::AbilityHaptic*> _field = GetClass().GetField(O("onHaptic"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetProjectileColor() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("projectileColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetProjectilePrefab() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("projectilePrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetProjectileSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("projectileSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetProjectileTrailPrefab() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("projectileTrailPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRToolShieldGun_State GetState() {
            static BNM::Field<::GlobalNamespace::GRToolShieldGun_State> _field = GetClass().GetField(O("state"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetStateTimeRemaining() {
            static BNM::Field<float> _field = GetClass().GetField(O("stateTimeRemaining"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTimeLastFired() {
            static BNM::Field<float> _field = GetClass().GetField(O("timeLastFired"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRTool* GetTool() {
            static BNM::Field<::GlobalNamespace::GRTool*> _field = GetClass().GetField(O("tool"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetUpgrade1FiringSound() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("upgrade1FiringSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetUpgrade2FiringSound() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("upgrade2FiringSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetUpgrade3FiringSound() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("upgrade3FiringSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>* GetVrRigs() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>*> _field = GetClass().GetField(O("vrRigs"));
            return _field.Get();
        }
        bool GetWaitingForButtonRelease() {
            static BNM::Field<bool> _field = GetClass().GetField(O("waitingForButtonRelease"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetActivatedLocally(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("activatedLocally"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAeoHitRadius(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("aeoHitRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAllowAoeHits(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("allowAoeHits"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAttributes(::GlobalNamespace::GRAttributes* value) {
            static BNM::Field<::GlobalNamespace::GRAttributes*> _field = GetClass().GetField(O("attributes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAudioSource(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetChargeDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("chargeDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetChargeSound(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("chargeSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetChargeSoundVolume(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("chargeSoundVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetColliders(::BNM::Structures::Mono::List<::Collider*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::Collider*>*> _field = GetClass().GetField(O("colliders"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCooldownDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("cooldownDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCooldownMinimum(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("cooldownMinimum"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFiredProjectile(::GlobalNamespace::SlingshotProjectile* value) {
            static BNM::Field<::GlobalNamespace::SlingshotProjectile*> _field = GetClass().GetField(O("firedProjectile"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFiringSound(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("firingSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFiringSoundVolume(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("firingSoundVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFiringTransform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("firingTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFlashDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("flashDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGameEntity(::GlobalNamespace::GameEntity* value) {
            static BNM::Field<::GlobalNamespace::GameEntity*> _field = GetClass().GetField(O("gameEntity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnHaptic(::GlobalNamespace::AbilityHaptic* value) {
            static BNM::Field<::GlobalNamespace::AbilityHaptic*> _field = GetClass().GetField(O("onHaptic"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProjectileColor(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("projectileColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProjectilePrefab(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("projectilePrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProjectileSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("projectileSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProjectileTrailPrefab(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("projectileTrailPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetState(::GlobalNamespace::GRToolShieldGun_State value) {
            static BNM::Field<::GlobalNamespace::GRToolShieldGun_State> _field = GetClass().GetField(O("state"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStateTimeRemaining(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("stateTimeRemaining"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimeLastFired(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("timeLastFired"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTool(::GlobalNamespace::GRTool* value) {
            static BNM::Field<::GlobalNamespace::GRTool*> _field = GetClass().GetField(O("tool"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUpgrade1FiringSound(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("upgrade1FiringSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUpgrade2FiringSound(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("upgrade2FiringSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUpgrade3FiringSound(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("upgrade3FiringSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetVrRigs(::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>*> _field = GetClass().GetField(O("vrRigs"));
            _field.Set(value);
        }
        void SetWaitingForButtonRelease(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("waitingForButtonRelease"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AttachTrail(int trailHash, ::GameObject* newProjectile, ::BNM::Structures::Unity::Vector3 location, bool blueTeam, bool orangeTeam) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AttachTrail"), {"trailHash", "newProjectile", "location", "blueTeam", "orangeTeam"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(trailHash, newProjectile, location, blueTeam, orangeTeam);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool CanChangeState(int64_t newStateIndex) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CanChangeState"), {"newStateIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(newStateIndex);
        }
        bool IsButtonHeld() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsButtonHeld"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool IsHeldLocal() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsHeldLocal"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnProjectileImpact(::GlobalNamespace::SlingshotProjectile* projectile, ::BNM::Structures::Unity::Vector3 impactPos, ::GlobalNamespace::NetPlayer* hitPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnProjectileImpact"), {"projectile", "impactPos", "hitPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(projectile, impactPos, hitPlayer);
        }
        void OnToolUpgraded(::GlobalNamespace::GRTool* tool) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnToolUpgraded"), {"tool"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(tool);
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
        void PlayVibration(float strength, float duration) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayVibration"), {"strength", "duration"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(strength, duration);
        }
        void SetState_1(::GlobalNamespace::GRToolShieldGun_State newState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetState"), {"newState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newState);
        }
        void SetStateAuthority(::GlobalNamespace::GRToolShieldGun_State newState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetStateAuthority"), {"newState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newState);
        }
        void StartCharge() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StartCharge"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void StartFiring() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StartFiring"));
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
