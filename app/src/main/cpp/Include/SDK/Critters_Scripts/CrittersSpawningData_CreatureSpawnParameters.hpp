#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Critters_Scripts {
    struct CrittersSpawningData_CreatureSpawnParameters : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Critters.Scripts", "CrittersSpawningData").GetInnerClass("CreatureSpawnParameters");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetChancesToSpawn() {
            static BNM::Field<int> _field = GetClass().GetField(O("ChancesToSpawn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetStartingIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("StartingIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CritterTemplate* GetTemplate() {
            static BNM::Field<::GlobalNamespace::CritterTemplate*> _field = GetClass().GetField(O("Template"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetChancesToSpawn(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("ChancesToSpawn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartingIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("StartingIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTemplate(::GlobalNamespace::CritterTemplate* value) {
            static BNM::Field<::GlobalNamespace::CritterTemplate*> _field = GetClass().GetField(O("Template"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
