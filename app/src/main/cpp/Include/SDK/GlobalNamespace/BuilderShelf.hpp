#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct BuilderShelf : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "BuilderShelf");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetBuildPieceSpawnIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("buildPieceSpawnIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::BuilderShelf_BuildPieceSpawn*>* GetBuildPieceSpawns() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderShelf_BuildPieceSpawn*>*> _field = GetClass().GetField(O("buildPieceSpawns"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetCenter() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("center"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("count"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSeparation() {
            static BNM::Field<float> _field = GetClass().GetField(O("separation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetShelfSlot() {
            static BNM::Field<int> _field = GetClass().GetField(O("shelfSlot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::BuilderResources*>* GetSpawnCosts() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderResources*>*> _field = GetClass().GetField(O("spawnCosts"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSpawnCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("spawnCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBuildPieceSpawnIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("buildPieceSpawnIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBuildPieceSpawns(::BNM::Structures::Mono::List<::GlobalNamespace::BuilderShelf_BuildPieceSpawn*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderShelf_BuildPieceSpawn*>*> _field = GetClass().GetField(O("buildPieceSpawns"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCenter(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("center"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("count"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSeparation(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("separation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShelfSlot(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("shelfSlot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpawnCosts(::BNM::Structures::Mono::List<::GlobalNamespace::BuilderResources*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderResources*>*> _field = GetClass().GetField(O("spawnCosts"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpawnCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("spawnCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void BuildItems(::GorillaTagScripts::BuilderTable* table) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("BuildItems"), {"table"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(table);
        }
        void BuildNextPiece(::GorillaTagScripts::BuilderTable* table) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("BuildNextPiece"), {"table"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(table);
        }
        void GetSpawnLocation(int slot, ::GlobalNamespace::BuilderShelf_BuildPieceSpawn* spawn, ::BNM::Structures::Unity::Vector3& spawnPosition, ::BNM::Structures::Unity::Quaternion& spawnRotation) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetSpawnLocation"), {"slot", "spawn", "spawnPosition", "spawnRotation"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(slot, spawn, &spawnPosition, &spawnRotation);
        }
        bool HasOpenSlot() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("HasOpenSlot"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void Init() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Init"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void InitCount() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitCount"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
