#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SIUpgradeType.hpp"

namespace GlobalNamespace {
    struct TestSpawnGadget_SpawnTypeWithUpgrades : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "TestSpawnGadget").GetInnerClass("SpawnTypeWithUpgrades");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::GameEntity* GetPrefab() {
            static BNM::Field<::GlobalNamespace::GameEntity*> _field = GetClass().GetField(O("prefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::SIUpgradeType>* GetUpgrades() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::SIUpgradeType>*> _field = GetClass().GetField(O("upgrades"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetPrefab(::GlobalNamespace::GameEntity* value) {
            static BNM::Field<::GlobalNamespace::GameEntity*> _field = GetClass().GetField(O("prefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUpgrades(::BNM::Structures::Mono::Array<::GlobalNamespace::SIUpgradeType>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::SIUpgradeType>*> _field = GetClass().GetField(O("upgrades"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
