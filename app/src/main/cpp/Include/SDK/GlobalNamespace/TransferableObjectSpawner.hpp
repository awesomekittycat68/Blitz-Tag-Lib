#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "TransferableObjectSpawner_SpawnMode.hpp"
#include "TransferableObjectSpawner_SpawnTrigger.hpp"

namespace GlobalNamespace {
    struct TransferableObjectSpawner : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "TransferableObjectSpawner");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void* GetGroundRaycastMask() {
            static BNM::Field<void*> _field = GetClass().GetField(O("groundRaycastMask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetLastSpawnTime() {
            static BNM::Field<double> _field = GetClass().GetField(O("lastSpawnTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::TransferrableObject*>* GetObjectsToSpawn() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::TransferrableObject*>*> _field = GetClass().GetField(O("objectsToSpawn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetSpawnDelay() {
            static BNM::Field<double> _field = GetClass().GetField(O("SpawnDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::TransferableObjectSpawner_SpawnMode GetSpawnMode() {
            static BNM::Field<::GlobalNamespace::TransferableObjectSpawner_SpawnMode> _field = GetClass().GetField(O("spawnMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetSpawnPosition() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("spawnPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSpawnRadius() {
            static BNM::Field<float> _field = GetClass().GetField(O("spawnRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Quaternion GetSpawnRotation() {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("spawnRotation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::TransferableObjectSpawner_SpawnTrigger GetSpawnTrigger() {
            static BNM::Field<::GlobalNamespace::TransferableObjectSpawner_SpawnTrigger> _field = GetClass().GetField(O("spawnTrigger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GameObject*>* GetTransferrableObjectsToSpawn() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("TransferrableObjectsToSpawn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetGroundRaycastMask(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("groundRaycastMask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastSpawnTime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("lastSpawnTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetObjectsToSpawn(::BNM::Structures::Mono::List<::GlobalNamespace::TransferrableObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::TransferrableObject*>*> _field = GetClass().GetField(O("objectsToSpawn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpawnDelay(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("SpawnDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpawnMode(::GlobalNamespace::TransferableObjectSpawner_SpawnMode value) {
            static BNM::Field<::GlobalNamespace::TransferableObjectSpawner_SpawnMode> _field = GetClass().GetField(O("spawnMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpawnPosition(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("spawnPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpawnRadius(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("spawnRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpawnRotation(::BNM::Structures::Unity::Quaternion value) {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("spawnRotation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpawnTrigger(::GlobalNamespace::TransferableObjectSpawner_SpawnTrigger value) {
            static BNM::Field<::GlobalNamespace::TransferableObjectSpawner_SpawnTrigger> _field = GetClass().GetField(O("spawnTrigger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTransferrableObjectsToSpawn(::BNM::Structures::Mono::Array<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("TransferrableObjectsToSpawn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnValidate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnValidate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SpawnAtCurrentLocation() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SpawnAtCurrentLocation"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool SpawnOnGround() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("SpawnOnGround"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void SpawnTransferrableObject() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SpawnTransferrableObject"));
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
