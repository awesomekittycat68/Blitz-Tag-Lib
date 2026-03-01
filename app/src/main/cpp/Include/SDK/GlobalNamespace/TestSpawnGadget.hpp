#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SIUpgradeSet.hpp"
#include "TestSpawnGadget_SpawnTypeWithUpgrades.hpp"

namespace GlobalNamespace {
    struct TestSpawnGadget : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "TestSpawnGadget");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::GlobalNamespace::GameEntity*>* GetSkipEntityList() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GameEntity*>*> _field = GetClass().GetField(O("skipEntityList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetSpawnAllGadgets() {
            static BNM::Field<bool> _field = GetClass().GetField(O("spawnAllGadgets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSpawnBatchSize() {
            static BNM::Field<int> _field = GetClass().GetField(O("spawnBatchSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::TestSpawnGadget_SpawnTypeWithUpgrades>* GetTestSpawnList() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::TestSpawnGadget_SpawnTypeWithUpgrades>*> _field = GetClass().GetField(O("testSpawnList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetSkipEntityList(::BNM::Structures::Mono::List<::GlobalNamespace::GameEntity*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GameEntity*>*> _field = GetClass().GetField(O("skipEntityList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpawnAllGadgets(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("spawnAllGadgets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpawnBatchSize(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("spawnBatchSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTestSpawnList(::BNM::Structures::Mono::List<::GlobalNamespace::TestSpawnGadget_SpawnTypeWithUpgrades>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::TestSpawnGadget_SpawnTypeWithUpgrades>*> _field = GetClass().GetField(O("testSpawnList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Spawn(::GlobalNamespace::GameEntityManager* gameEntityManager) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Spawn"), {"gameEntityManager"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(gameEntityManager);
        }
        void SpawnGadgetBatch(::GlobalNamespace::GameEntityManager* gameEntityManager, ::GlobalNamespace::GameEntity* entityToSpawn, ::GlobalNamespace::SIUpgradeSet upgrades) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SpawnGadgetBatch"), {"gameEntityManager", "entityToSpawn", "upgrades"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(gameEntityManager, entityToSpawn, upgrades);
        }
    };
}
