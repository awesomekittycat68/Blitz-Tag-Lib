#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Critters_Scripts {
    struct CrittersSpawningData : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Critters.Scripts", "CrittersSpawningData");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::Critters_Scripts::CrittersSpawningData_CreatureSpawnParameters*>* GetSpawnParametersList() {
            static BNM::Field<::BNM::Structures::Mono::List<::Critters_Scripts::CrittersSpawningData_CreatureSpawnParameters*>*> _field = GetClass().GetField(O("SpawnParametersList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<int>* GetTemplateCollection() {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("templateCollection"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetSpawnParametersList(::BNM::Structures::Mono::List<::Critters_Scripts::CrittersSpawningData_CreatureSpawnParameters*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::Critters_Scripts::CrittersSpawningData_CreatureSpawnParameters*>*> _field = GetClass().GetField(O("SpawnParametersList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTemplateCollection(::BNM::Structures::Mono::List<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("templateCollection"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        int GetRandomTemplate() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetRandomTemplate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void InitializeSpawnCollection() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitializeSpawnCollection"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
