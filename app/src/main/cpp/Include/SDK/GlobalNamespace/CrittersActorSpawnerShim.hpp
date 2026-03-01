#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "CrittersActor_CrittersActorType.hpp"

namespace GlobalNamespace {
    struct CrittersActorSpawnerShim : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CrittersActorSpawnerShim");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::CrittersActor_CrittersActorType GetActorType() {
            static BNM::Field<::GlobalNamespace::CrittersActor_CrittersActorType> _field = GetClass().GetField(O("actorType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetApplyImpulseOnSpawn() {
            static BNM::Field<bool> _field = GetClass().GetField(O("applyImpulseOnSpawn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetAttachSpawnedObjectToSpawnLocation() {
            static BNM::Field<bool> _field = GetClass().GetField(O("attachSpawnedObjectToSpawnLocation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BoxCollider* GetColliderTrigger() {
            static BNM::Field<::BoxCollider*> _field = GetClass().GetField(O("colliderTrigger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BoxCollider* GetInsideSpawnerBounds() {
            static BNM::Field<::BoxCollider*> _field = GetClass().GetField(O("insideSpawnerBounds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSpawnDelay() {
            static BNM::Field<int> _field = GetClass().GetField(O("spawnDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetSpawnerPointTransform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("spawnerPointTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSubActorIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("subActorIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetActorType(::GlobalNamespace::CrittersActor_CrittersActorType value) {
            static BNM::Field<::GlobalNamespace::CrittersActor_CrittersActorType> _field = GetClass().GetField(O("actorType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetApplyImpulseOnSpawn(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("applyImpulseOnSpawn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAttachSpawnedObjectToSpawnLocation(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("attachSpawnedObjectToSpawnLocation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetColliderTrigger(::BoxCollider* value) {
            static BNM::Field<::BoxCollider*> _field = GetClass().GetField(O("colliderTrigger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInsideSpawnerBounds(::BoxCollider* value) {
            static BNM::Field<::BoxCollider*> _field = GetClass().GetField(O("insideSpawnerBounds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpawnDelay(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("spawnDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpawnerPointTransform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("spawnerPointTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSubActorIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("subActorIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        ::Critters_Scripts::CrittersActorSpawner* CopySpawnerDataInPrefab() {
            static BNM::Method<::Critters_Scripts::CrittersActorSpawner*> _m = GetClass().GetMethod(O("CopySpawnerDataInPrefab"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void ReplaceSpawnerWithShim() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReplaceSpawnerWithShim"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
