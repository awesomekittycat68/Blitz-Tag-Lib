#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GlobalNamespace/CrittersActor_CrittersActorType.hpp"

namespace Critters_Scripts {
    struct CrittersActorSpawner : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Critters.Scripts", "CrittersActorSpawner");
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
        ::GlobalNamespace::CrittersActor* GetCurrentSpawnedObject() {
            static BNM::Field<::GlobalNamespace::CrittersActor*> _field = GetClass().GetField(O("currentSpawnedObject"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Collider* GetInsideSpawnerCheck() {
            static BNM::Field<::Collider*> _field = GetClass().GetField(O("insideSpawnerCheck"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetNextSpawnTime() {
            static BNM::Field<double> _field = GetClass().GetField(O("nextSpawnTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSpawnDelay() {
            static BNM::Field<int> _field = GetClass().GetField(O("spawnDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CrittersActorSpawnerPoint* GetSpawnPoint() {
            static BNM::Field<::GlobalNamespace::CrittersActorSpawnerPoint*> _field = GetClass().GetField(O("spawnPoint"));
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
        void SetCurrentSpawnedObject(::GlobalNamespace::CrittersActor* value) {
            static BNM::Field<::GlobalNamespace::CrittersActor*> _field = GetClass().GetField(O("currentSpawnedObject"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInsideSpawnerCheck(::Collider* value) {
            static BNM::Field<::Collider*> _field = GetClass().GetField(O("insideSpawnerCheck"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNextSpawnTime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("nextSpawnTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpawnDelay(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("spawnDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpawnPoint(::GlobalNamespace::CrittersActorSpawnerPoint* value) {
            static BNM::Field<::GlobalNamespace::CrittersActorSpawnerPoint*> _field = GetClass().GetField(O("spawnPoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSubActorIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("subActorIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void DoReset() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DoReset"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void HandleSpawnedActor(::GlobalNamespace::CrittersActor* spawnedActor) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleSpawnedActor"), {"spawnedActor"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(spawnedActor);
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
        void ProcessLocal() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ProcessLocal"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SpawnActor() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SpawnActor"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool VerifySpawnAttached() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("VerifySpawnAttached"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
