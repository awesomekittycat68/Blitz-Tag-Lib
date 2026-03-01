#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct SpawnPooledObject : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SpawnPooledObject");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GameObject* GetPooledObject() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_pooledObject"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPooledObjectHash() {
            static BNM::Field<int> _field = GetClass().GetField(O("_pooledObjectHash"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetSpawnLocation() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_spawnLocation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetChanceToSpawn() {
            static BNM::Field<int> _field = GetClass().GetField(O("chanceToSpawn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetFacePlayer() {
            static BNM::Field<bool> _field = GetClass().GetField(O("facePlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetOffset() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("offset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetUpright() {
            static BNM::Field<bool> _field = GetClass().GetField(O("upright"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetPooledObject(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_pooledObject"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPooledObjectHash(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_pooledObjectHash"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpawnLocation(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_spawnLocation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetChanceToSpawn(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("chanceToSpawn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFacePlayer(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("facePlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOffset(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("offset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUpright(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("upright"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool ShouldSpawn() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ShouldSpawn"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Unity::Vector3 SpawnLocation() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("SpawnLocation"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void SpawnObject() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SpawnObject"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Structures::Unity::Quaternion SpawnRotation() {
            static BNM::Method<::BNM::Structures::Unity::Quaternion> _m = GetClass().GetMethod(O("SpawnRotation"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
