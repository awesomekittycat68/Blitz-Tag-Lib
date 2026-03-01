#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTag_Reactions {
    struct SpawnWorldEffects : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.Reactions", "SpawnWorldEffects");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

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
        void RequestSpawn(::BNM::Structures::Unity::Vector3 worldPosition) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestSpawn"), {"worldPosition"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(worldPosition);
        }
        void RequestSpawn(::BNM::Structures::Unity::Vector3 worldPosition, ::BNM::Structures::Unity::Vector3 normal) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestSpawn"), {"worldPosition", "normal"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(worldPosition, normal);
        }
    };
}
