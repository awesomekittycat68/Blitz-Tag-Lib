#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct SIAutoPressButtonOnAwake : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SIAutoPressButtonOnAwake");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetAwakeTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("awakeTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SITouchscreenButton* GetButton() {
            static BNM::Field<::GlobalNamespace::SITouchscreenButton*> _field = GetClass().GetField(O("button"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetButtonPressed() {
            static BNM::Field<bool> _field = GetClass().GetField(O("buttonPressed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDelay() {
            static BNM::Field<float> _field = GetClass().GetField(O("delay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SICombinedTerminal* GetTerminalParent() {
            static BNM::Field<::GlobalNamespace::SICombinedTerminal*> _field = GetClass().GetField(O("terminalParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAwakeTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("awakeTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetButton(::GlobalNamespace::SITouchscreenButton* value) {
            static BNM::Field<::GlobalNamespace::SITouchscreenButton*> _field = GetClass().GetField(O("button"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetButtonPressed(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("buttonPressed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDelay(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("delay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTerminalParent(::GlobalNamespace::SICombinedTerminal* value) {
            static BNM::Field<::GlobalNamespace::SICombinedTerminal*> _field = GetClass().GetField(O("terminalParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
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
