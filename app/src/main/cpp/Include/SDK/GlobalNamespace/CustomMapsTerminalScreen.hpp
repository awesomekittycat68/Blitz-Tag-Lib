#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GorillaTagScripts_VirtualStumpCustomMaps_UI/CustomMapKeyboardBinding.hpp"

namespace GlobalNamespace {
    struct CustomMapsTerminalScreen : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CustomMapsTerminalScreen");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetActivationTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("activationTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetShowTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("showTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts_VirtualStumpCustomMaps_UI::CustomMapsKeyboard* GetTerminalKeyboard() {
            static BNM::Field<::GorillaTagScripts_VirtualStumpCustomMaps_UI::CustomMapsKeyboard*> _field = GetClass().GetField(O("terminalKeyboard"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetActivationTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("activationTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShowTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("showTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTerminalKeyboard(::GorillaTagScripts_VirtualStumpCustomMaps_UI::CustomMapsKeyboard* value) {
            static BNM::Field<::GorillaTagScripts_VirtualStumpCustomMaps_UI::CustomMapsKeyboard*> _field = GetClass().GetField(O("terminalKeyboard"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Hide() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Hide"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Initialize() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Initialize"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PressButton(::GorillaTagScripts_VirtualStumpCustomMaps_UI::CustomMapKeyboardBinding pressedButton) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PressButton"), {"pressedButton"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pressedButton);
        }
        void Show() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Show"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
