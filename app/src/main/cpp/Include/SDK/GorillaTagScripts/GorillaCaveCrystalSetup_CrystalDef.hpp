#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTagScripts {
    struct GorillaCaveCrystalSetup_CrystalDef : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts", "GorillaCaveCrystalSetup").GetInnerClass("CrystalDef");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetHigh() {
            static BNM::Field<int> _field = GetClass().GetField(O("high"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetKeyMaterial() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("keyMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLow() {
            static BNM::Field<int> _field = GetClass().GetField(O("low"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMid() {
            static BNM::Field<int> _field = GetClass().GetField(O("mid"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts::CrystalVisualsPreset* GetVisualPreset() {
            static BNM::Field<::GorillaTagScripts::CrystalVisualsPreset*> _field = GetClass().GetField(O("visualPreset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetHigh(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("high"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetKeyMaterial(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("keyMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLow(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("low"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMid(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("mid"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVisualPreset(::GorillaTagScripts::CrystalVisualsPreset* value) {
            static BNM::Field<::GorillaTagScripts::CrystalVisualsPreset*> _field = GetClass().GetField(O("visualPreset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
