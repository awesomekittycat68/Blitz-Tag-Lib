#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "DevButtonType.hpp"
#include "GorillaPressableButton.hpp"

namespace GlobalNamespace {
    struct GorillaDevButton : ::GlobalNamespace::GorillaPressableButton {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GorillaDevButton");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetOn() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_on"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetOn(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_on"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        float GetHoldForSeconds() {
            static BNM::Field<float> _field = GetClass().GetField(O("holdForSeconds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetLevelType() {
            static BNM::Field<void*> _field = GetClass().GetField(O("levelType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLineNumber() {
            static BNM::Field<int> _field = GetClass().GetField(O("lineNumber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetPressCoroutine() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("pressCoroutine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRepeatIfHeld() {
            static BNM::Field<bool> _field = GetClass().GetField(O("repeatIfHeld"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::DevConsoleInstance* GetTargetConsole() {
            static BNM::Field<::GlobalNamespace::DevConsoleInstance*> _field = GetClass().GetField(O("targetConsole"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::DevButtonType GetType_f() {
            static BNM::Field<::GlobalNamespace::DevButtonType> _field = GetClass().GetField(O("Type"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetHoldForSeconds(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("holdForSeconds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLevelType(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("levelType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLineNumber(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("lineNumber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPressCoroutine(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("pressCoroutine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRepeatIfHeld(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("repeatIfHeld"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTargetConsole(::GlobalNamespace::DevConsoleInstance* value) {
            static BNM::Field<::GlobalNamespace::DevConsoleInstance*> _field = GetClass().GetField(O("targetConsole"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetType(::GlobalNamespace::DevButtonType value) {
            static BNM::Field<::GlobalNamespace::DevButtonType> _field = GetClass().GetField(O("Type"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool get_on() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_on"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void set_on(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_on"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
