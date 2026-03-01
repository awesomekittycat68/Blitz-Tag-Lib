#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GlobalNamespace/SlingshotProjectile_AOEKnockbackConfig.hpp"

namespace GorillaTagScripts_Builder {
    struct BuilderProjectile : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts.Builder", "BuilderProjectile");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Unity::Vector3 GetLaunchPosition() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _method = GetClass().GetMethod(O("get_launchPosition"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetLaunchPosition(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_launchPosition"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        void add_OnImpact(::GorillaTagScripts_Builder::BuilderProjectile_ProjectileImpactEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnImpact"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnImpact(::GorillaTagScripts_Builder::BuilderProjectile_ProjectileImpactEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnImpact"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void* GetAoeKnockbackConfig() {
            static BNM::Field<void*> _field = GetClass().GetField(O("aoeKnockbackConfig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetFaceDirectionOfTravel() {
            static BNM::Field<bool> _field = GetClass().GetField(O("faceDirectionOfTravel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetForceComponent() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("forceComponent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetGravityMultiplier() {
            static BNM::Field<float> _field = GetClass().GetField(O("gravityMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetImpactEffectOffset() {
            static BNM::Field<float> _field = GetClass().GetField(O("impactEffectOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetImpactEffectScaleMultiplier() {
            static BNM::Field<float> _field = GetClass().GetField(O("impactEffectScaleMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetImpactSoundPitchOverride() {
            static BNM::Field<void*> _field = GetClass().GetField(O("impactSoundPitchOverride"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetImpactSoundVolumeOverride() {
            static BNM::Field<void*> _field = GetClass().GetField(O("impactSoundVolumeOverride"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetInitialScale() {
            static BNM::Field<float> _field = GetClass().GetField(O("initialScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLifeTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("lifeTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts_Builder::BuilderProjectile_ProjectileImpactEvent* GetOnImpact() {
            static BNM::Field<::GorillaTagScripts_Builder::BuilderProjectile_ProjectileImpactEvent*> _field = GetClass().GetField(O("OnImpact"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetParticleLaunched() {
            static BNM::Field<bool> _field = GetClass().GetField(O("particleLaunched"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetPreviousPosition() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("previousPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetProjectileId() {
            static BNM::Field<int> _field = GetClass().GetField(O("projectileId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Rigidbody* GetProjectileRigidbody() {
            static BNM::Field<::Rigidbody*> _field = GetClass().GetField(O("projectileRigidbody"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts_Builder::BuilderProjectileLauncher* GetProjectileSource() {
            static BNM::Field<::GorillaTagScripts_Builder::BuilderProjectileLauncher*> _field = GetClass().GetField(O("projectileSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetSurfaceImpactEffectPrefab() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("surfaceImpactEffectPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTimeCreated() {
            static BNM::Field<float> _field = GetClass().GetField(O("timeCreated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAoeKnockbackConfig(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("aoeKnockbackConfig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFaceDirectionOfTravel(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("faceDirectionOfTravel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetForceComponent(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("forceComponent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGravityMultiplier(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("gravityMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetImpactEffectOffset(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("impactEffectOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetImpactEffectScaleMultiplier(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("impactEffectScaleMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetImpactSoundPitchOverride(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("impactSoundPitchOverride"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetImpactSoundVolumeOverride(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("impactSoundVolumeOverride"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInitialScale(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("initialScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLifeTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lifeTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnImpact(::GorillaTagScripts_Builder::BuilderProjectile_ProjectileImpactEvent* value) {
            static BNM::Field<::GorillaTagScripts_Builder::BuilderProjectile_ProjectileImpactEvent*> _field = GetClass().GetField(O("OnImpact"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetParticleLaunched(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("particleLaunched"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPreviousPosition(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("previousPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProjectileId(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("projectileId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProjectileRigidbody(::Rigidbody* value) {
            static BNM::Field<::Rigidbody*> _field = GetClass().GetField(O("projectileRigidbody"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProjectileSource(::GorillaTagScripts_Builder::BuilderProjectileLauncher* value) {
            static BNM::Field<::GorillaTagScripts_Builder::BuilderProjectileLauncher*> _field = GetClass().GetField(O("projectileSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSurfaceImpactEffectPrefab(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("surfaceImpactEffectPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimeCreated(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("timeCreated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void add_OnImpact_1(::GorillaTagScripts_Builder::BuilderProjectile_ProjectileImpactEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnImpact"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void ApplyHitKnockback(::BNM::Structures::Unity::Vector3 hitNormal) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyHitKnockback"), {"hitNormal"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(hitNormal);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Deactivate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Deactivate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Structures::Unity::Vector3 get_launchPosition() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("get_launchPosition"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void Launch(::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Vector3 velocity, ::GorillaTagScripts_Builder::BuilderProjectileLauncher* sourceObject, int projectileCount, float scale, int timeStamp) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Launch"), {"position", "velocity", "sourceObject", "projectileCount", "scale", "timeStamp"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(position, velocity, sourceObject, projectileCount, scale, timeStamp);
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
        void OnTriggerEnter(::Collider* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTriggerEnter"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(other);
        }
        void remove_OnImpact_1(::GorillaTagScripts_Builder::BuilderProjectile_ProjectileImpactEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnImpact"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_launchPosition(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_launchPosition"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SpawnImpactEffect(::GameObject* prefab, ::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Vector3 normal) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SpawnImpactEffect"), {"prefab", "position", "normal"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(prefab, position, normal);
        }
        void UpdateProjectile() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateProjectile"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
