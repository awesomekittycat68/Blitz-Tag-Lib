#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "MonoBehaviourTick.hpp"

namespace GlobalNamespace {
    struct SIGadgetBlasterProjectile : ::GlobalNamespace::MonoBehaviourTick {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SIGadgetBlasterProjectile");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr float EXCLUSION_ZONE_MINIMUM_LIFETIME = 0.02f;
        ::AudioSource* GetAudioSource() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<int, ::BNM::Structures::Mono::List<::GameObject*>*>* GetBlasterProjectileExplosionPools() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BNM::Structures::Mono::List<::GameObject*>*>*> _field = GetClass().GetField(O("blasterProjectileExplosionPools"));
            return _field.Get();
        }
        ::GameObject* GetExclusionZoneDespawnEffect() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("exclusionZoneDespawnEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<::GameObject*, int>* GetExplosionTypeKey() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GameObject*, int>*> _field = GetClass().GetField(O("explosionTypeKey"));
            return _field.Get();
        }
        ::GlobalNamespace::SIPlayer* GetFiredByPlayer() {
            static BNM::Field<::GlobalNamespace::SIPlayer*> _field = GetClass().GetField(O("firedByPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHapticHitDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("hapticHitDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHapticHitStrength() {
            static BNM::Field<float> _field = GetClass().GetField(O("hapticHitStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetHitEffect() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("hitEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetHitEffectPlayer() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("hitEffectPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxLifetime() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxLifetime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SIGadgetBlaster* GetParentBlaster() {
            static BNM::Field<::GlobalNamespace::SIGadgetBlaster*> _field = GetClass().GetField(O("parentBlaster"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPoolId() {
            static BNM::Field<int> _field = GetClass().GetField(O("poolId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetProjectileId() {
            static BNM::Field<int> _field = GetClass().GetField(O("projectileId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetProjectileType() {
            static BNM::Field<void*> _field = GetClass().GetField(O("projectileType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Rigidbody* GetRb() {
            static BNM::Field<::Rigidbody*> _field = GetClass().GetField(O("rb"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetStartingVelocity() {
            static BNM::Field<float> _field = GetClass().GetField(O("startingVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTimeSpawned() {
            static BNM::Field<float> _field = GetClass().GetField(O("timeSpawned"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAudioSource(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetBlasterProjectileExplosionPools(::BNM::Structures::Mono::Dictionary<int, ::BNM::Structures::Mono::List<::GameObject*>*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BNM::Structures::Mono::List<::GameObject*>*>*> _field = GetClass().GetField(O("blasterProjectileExplosionPools"));
            _field.Set(value);
        }
        void SetExclusionZoneDespawnEffect(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("exclusionZoneDespawnEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetExplosionTypeKey(::BNM::Structures::Mono::Dictionary<::GameObject*, int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GameObject*, int>*> _field = GetClass().GetField(O("explosionTypeKey"));
            _field.Set(value);
        }
        void SetFiredByPlayer(::GlobalNamespace::SIPlayer* value) {
            static BNM::Field<::GlobalNamespace::SIPlayer*> _field = GetClass().GetField(O("firedByPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHapticHitDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("hapticHitDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHapticHitStrength(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("hapticHitStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHitEffect(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("hitEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHitEffectPlayer(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("hitEffectPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxLifetime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxLifetime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetParentBlaster(::GlobalNamespace::SIGadgetBlaster* value) {
            static BNM::Field<::GlobalNamespace::SIGadgetBlaster*> _field = GetClass().GetField(O("parentBlaster"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPoolId(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("poolId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProjectileId(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("projectileId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProjectileType(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("projectileType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRb(::Rigidbody* value) {
            static BNM::Field<::Rigidbody*> _field = GetClass().GetField(O("rb"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartingVelocity(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("startingVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimeSpawned(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("timeSpawned"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void DespawnExplosion(::GameObject* explosion) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DespawnExplosion"), {"explosion"});
            _m.Call(explosion);
        }
        void DespawnProjectile() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DespawnProjectile"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void InitializeProjectile() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitializeProjectile"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void KnockbackWithHaptics(::BNM::Structures::Unity::Vector3 directionAndMagnitude, bool adjustForDirection) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("KnockbackWithHaptics"), {"directionAndMagnitude", "adjustForDirection"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(directionAndMagnitude, adjustForDirection);
        }
        void KnockbackWithHaptics(::BNM::Structures::Unity::Vector3 directionAndMagnitude, float hapticStrength, float hapticDuration, bool adjustForDirection) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("KnockbackWithHaptics"), {"directionAndMagnitude", "hapticStrength", "hapticDuration", "adjustForDirection"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(directionAndMagnitude, hapticStrength, hapticDuration, adjustForDirection);
        }
        void OnCollisionEnter(::BNM::IL2CPP::Il2CppObject* collision) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnCollisionEnter"), {"collision"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(collision);
        }
        void OnTriggerEnter(::Collider* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTriggerEnter"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(other);
        }
        static ::GameObject* SpawnExplosion(::GameObject* explosionPrefab, ::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Quaternion rotation) {
            static BNM::Method<::GameObject*> _m = GetClass().GetMethod(O("SpawnExplosion"), {"explosionPrefab", "position", "rotation"});
            return _m.Call(explosionPrefab, position, rotation);
        }
        void Tick() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Tick"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
