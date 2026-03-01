#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTag_Reactions {
    struct FlameThrowerParticleCollisionHandler : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.Reactions", "FlameThrowerParticleCollisionHandler");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<void*>* GetCollisionEvents() {
            static BNM::Field<::BNM::Structures::Mono::List<void*>*> _field = GetClass().GetField(O("_collisionEvents"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetExtinguishAmount() {
            static BNM::Field<float> _field = GetClass().GetField(O("_extinguishAmount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasPrefabToSpawn() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_hasPrefabToSpawn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsPrefabInPool() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_isPrefabInPool"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetLastCollisionTime() {
            static BNM::Field<double> _field = GetClass().GetField(O("_lastCollisionTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxParticleHitReactionRate() {
            static BNM::Field<float> _field = GetClass().GetField(O("_maxParticleHitReactionRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ParticleSystem* GetParticleSystem() {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("_particleSystem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SinglePool* GetPool() {
            static BNM::Field<::GlobalNamespace::SinglePool*> _field = GetClass().GetField(O("_pool"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetPrefabToSpawn() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_prefabToSpawn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCollisionEvents(::BNM::Structures::Mono::List<void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<void*>*> _field = GetClass().GetField(O("_collisionEvents"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetExtinguishAmount(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_extinguishAmount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasPrefabToSpawn(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_hasPrefabToSpawn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsPrefabInPool(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_isPrefabInPool"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastCollisionTime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("_lastCollisionTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetParticleSystem(::ParticleSystem* value) {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("_particleSystem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPool(::GlobalNamespace::SinglePool* value) {
            static BNM::Field<::GlobalNamespace::SinglePool*> _field = GetClass().GetField(O("_pool"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPrefabToSpawn(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_prefabToSpawn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnParticleCollision(::GameObject* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnParticleCollision"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(other);
        }
    };
}
