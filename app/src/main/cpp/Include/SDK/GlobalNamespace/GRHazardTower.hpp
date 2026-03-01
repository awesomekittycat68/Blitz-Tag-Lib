#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct GRHazardTower : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GRHazardTower");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetFireChargeTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("fireChargeTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFireCooldownTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("fireCooldownTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetFireFrom() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("fireFrom"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GameEntity* GetGameEntity() {
            static BNM::Field<::GlobalNamespace::GameEntity*> _field = GetClass().GetField(O("gameEntity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetNextFireTime() {
            static BNM::Field<double> _field = GetClass().GetField(O("nextFireTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GameEntity* GetProjectilePrefab() {
            static BNM::Field<::GlobalNamespace::GameEntity*> _field = GetClass().GetField(O("projectilePrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetProjectileSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("projectileSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRSenseLineOfSight* GetSenseLineOfSight() {
            static BNM::Field<::GlobalNamespace::GRSenseLineOfSight*> _field = GetClass().GetField(O("senseLineOfSight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRSenseNearby* GetSenseNearby() {
            static BNM::Field<::GlobalNamespace::GRSenseNearby*> _field = GetClass().GetField(O("senseNearby"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>* GetTempRigs() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>*> _field = GetClass().GetField(O("tempRigs"));
            return _field.Get();
        }
        void SetFireChargeTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("fireChargeTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFireCooldownTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("fireCooldownTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFireFrom(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("fireFrom"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGameEntity(::GlobalNamespace::GameEntity* value) {
            static BNM::Field<::GlobalNamespace::GameEntity*> _field = GetClass().GetField(O("gameEntity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNextFireTime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("nextFireTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProjectilePrefab(::GlobalNamespace::GameEntity* value) {
            static BNM::Field<::GlobalNamespace::GameEntity*> _field = GetClass().GetField(O("projectilePrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProjectileSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("projectileSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSenseLineOfSight(::GlobalNamespace::GRSenseLineOfSight* value) {
            static BNM::Field<::GlobalNamespace::GRSenseLineOfSight*> _field = GetClass().GetField(O("senseLineOfSight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSenseNearby(::GlobalNamespace::GRSenseNearby* value) {
            static BNM::Field<::GlobalNamespace::GRSenseNearby*> _field = GetClass().GetField(O("senseNearby"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetTempRigs(::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>*> _field = GetClass().GetField(O("tempRigs"));
            _field.Set(value);
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
        void OnEntityStateChange(int64_t prevState, int64_t nextState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEntityStateChange"), {"prevState", "nextState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(prevState, nextState);
        }
        void OnFire(::BNM::Structures::Unity::Vector3 fireFromPos, ::BNM::Structures::Unity::Vector3 fireAtPos, double fireAtTime) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnFire"), {"fireFromPos", "fireAtPos", "fireAtTime"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(fireFromPos, fireAtPos, fireAtTime);
        }
        void OnProjectileHit(::GlobalNamespace::GRRangedEnemyProjectile* projectile, ::BNM::IL2CPP::Il2CppObject* collision) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnProjectileHit"), {"projectile", "collision"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(projectile, collision);
        }
        void OnProjectileInit(::GlobalNamespace::GRRangedEnemyProjectile* projectile) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnProjectileInit"), {"projectile"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(projectile);
        }
        void OnThink() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnThink"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
