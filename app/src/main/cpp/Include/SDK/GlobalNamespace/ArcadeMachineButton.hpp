#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GorillaPressableButton.hpp"

namespace GlobalNamespace {
    struct ArcadeMachineButton : ::GlobalNamespace::GorillaPressableButton {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ArcadeMachineButton");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void add_OnStateChange(::GlobalNamespace::ArcadeMachineButton_ArcadeMachineButtonEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnStateChange"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnStateChange(::GlobalNamespace::ArcadeMachineButton_ArcadeMachineButtonEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnStateChange"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        int GetButtonID() {
            static BNM::Field<int> _field = GetClass().GetField(O("ButtonID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::ArcadeMachineButton_ArcadeMachineButtonEvent* GetOnStateChange() {
            static BNM::Field<::GlobalNamespace::ArcadeMachineButton_ArcadeMachineButtonEvent*> _field = GetClass().GetField(O("OnStateChange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetState() {
            static BNM::Field<bool> _field = GetClass().GetField(O("state"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetButtonID(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("ButtonID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnStateChange(::GlobalNamespace::ArcadeMachineButton_ArcadeMachineButtonEvent* value) {
            static BNM::Field<::GlobalNamespace::ArcadeMachineButton_ArcadeMachineButtonEvent*> _field = GetClass().GetField(O("OnStateChange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetState(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("state"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void add_OnStateChange_1(::GlobalNamespace::ArcadeMachineButton_ArcadeMachineButtonEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnStateChange"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void ButtonActivation() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ButtonActivation"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnTriggerExit(::Collider* collider) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTriggerExit"), {"collider"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(collider);
        }
        void remove_OnStateChange_1(::GlobalNamespace::ArcadeMachineButton_ArcadeMachineButtonEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnStateChange"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
