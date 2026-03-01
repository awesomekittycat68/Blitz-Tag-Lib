#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "CrystalVisualsPreset_VisualState.hpp"

namespace GorillaTagScripts {
    struct CrystalVisualsPreset : BNM::UnityEngine::Object {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts", "CrystalVisualsPreset");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GorillaTagScripts::CrystalVisualsPreset_VisualState GetStateA() {
            static BNM::Field<::GorillaTagScripts::CrystalVisualsPreset_VisualState> _field = GetClass().GetField(O("stateA"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts::CrystalVisualsPreset_VisualState GetStateB() {
            static BNM::Field<::GorillaTagScripts::CrystalVisualsPreset_VisualState> _field = GetClass().GetField(O("stateB"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetStateA(::GorillaTagScripts::CrystalVisualsPreset_VisualState value) {
            static BNM::Field<::GorillaTagScripts::CrystalVisualsPreset_VisualState> _field = GetClass().GetField(O("stateA"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStateB(::GorillaTagScripts::CrystalVisualsPreset_VisualState value) {
            static BNM::Field<::GorillaTagScripts::CrystalVisualsPreset_VisualState> _field = GetClass().GetField(O("stateB"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        int GetHashCode_1() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetHashCode"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void Save() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Save"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
