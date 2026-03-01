#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTagScripts {
    struct WhackAMole_$$c__DisplayClass85_0 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts", "WhackAMole").GetInnerClass("<>c__DisplayClass85_0");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetHazardMoleChance() {
            static BNM::Field<float> _field = GetClass().GetField(O("hazardMoleChance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxMoleCount() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxMoleCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMinMoleCount() {
            static BNM::Field<float> _field = GetClass().GetField(O("minMoleCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetHazardMoleChance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("hazardMoleChance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxMoleCount(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxMoleCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMinMoleCount(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("minMoleCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
