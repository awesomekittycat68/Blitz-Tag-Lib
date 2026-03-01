#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTag_Cosmetics_Summer {
    struct Projectile : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.Cosmetics.Summer", "Projectile");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::AudioSource* GetAudioSource() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetCollisionLayerMasks() {
            static BNM::Field<void*> _field = GetClass().GetField(O("collisionLayerMasks"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* GetCollisionTags() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("collisionTags"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDestroyDelay() {
            static BNM::Field<float> _field = GetClass().GetField(O("destroyDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDestroyOnCollisionEnter() {
            static BNM::Field<bool> _field = GetClass().GetField(O("destroyOnCollisionEnter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetForceComponent() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("forceComponent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetImpactEffect() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("impactEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetImpactEffectOffset() {
            static BNM::Field<float> _field = GetClass().GetField(O("impactEffectOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetImpactEffectSpawned() {
            static BNM::Field<bool> _field = GetClass().GetField(O("impactEffectSpawned"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetLaunchAudio() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("launchAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetOnImpactShared() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("onImpactShared"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetOnLaunchShared() {
            static BNM::Field<void*> _field = GetClass().GetField(O("onLaunchShared"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Rigidbody* GetRigidbody() {
            static BNM::Field<::Rigidbody*> _field = GetClass().GetField(O("rigidbody"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Reactions::SpawnWorldEffects* GetSpawnWorldEffects() {
            static BNM::Field<::GorillaTag_Reactions::SpawnWorldEffects*> _field = GetClass().GetField(O("spawnWorldEffects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAudioSource(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCollisionLayerMasks(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("collisionLayerMasks"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCollisionTags(::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("collisionTags"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDestroyDelay(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("destroyDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDestroyOnCollisionEnter(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("destroyOnCollisionEnter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetForceComponent(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("forceComponent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetImpactEffect(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("impactEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetImpactEffectOffset(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("impactEffectOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetImpactEffectSpawned(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("impactEffectSpawned"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLaunchAudio(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("launchAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnImpactShared(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("onImpactShared"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnLaunchShared(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("onLaunchShared"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRigidbody(::Rigidbody* value) {
            static BNM::Field<::Rigidbody*> _field = GetClass().GetField(O("rigidbody"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpawnWorldEffects(::GorillaTag_Reactions::SpawnWorldEffects* value) {
            static BNM::Field<::GorillaTag_Reactions::SpawnWorldEffects*> _field = GetClass().GetField(O("spawnWorldEffects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void DestroyProjectile() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DestroyProjectile"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void GetColliderHitInfo(::Collider* other, ::BNM::Structures::Unity::Vector3& position, ::BNM::Structures::Unity::Vector3& normal) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetColliderHitInfo"), {"other", "position", "normal"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(other, &position, &normal);
        }
        void HandleImpact(::GameObject* hitObject, ::BNM::Structures::Unity::Vector3 hitPosition, ::BNM::Structures::Unity::Vector3 hitNormal) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleImpact"), {"hitObject", "hitPosition", "hitNormal"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(hitObject, hitPosition, hitNormal);
        }
        bool IsTagValid(::GameObject* obj) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsTagValid"), {"obj"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(obj);
        }
        void Launch(::BNM::Structures::Unity::Vector3 startPosition, ::BNM::Structures::Unity::Quaternion startRotation, ::BNM::Structures::Unity::Vector3 velocity, float chargeFrac, ::GlobalNamespace::VRRig* ownerRig, int progressStep) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Launch"), {"startPosition", "startRotation", "velocity", "chargeFrac", "ownerRig", "progressStep"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(startPosition, startRotation, velocity, chargeFrac, ownerRig, progressStep);
        }
        void OnCollisionEnter(::BNM::IL2CPP::Il2CppObject* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnCollisionEnter"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(other);
        }
        void OnCollisionStay(::BNM::IL2CPP::Il2CppObject* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnCollisionStay"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(other);
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnTriggerEnter(::Collider* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTriggerEnter"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(other);
        }
        void OnTriggerStay(::Collider* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTriggerStay"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(other);
        }
        void SpawnImpactEffect(::GameObject* prefab, ::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Vector3 normal) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SpawnImpactEffect"), {"prefab", "position", "normal"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(prefab, position, normal);
        }
    };
}
