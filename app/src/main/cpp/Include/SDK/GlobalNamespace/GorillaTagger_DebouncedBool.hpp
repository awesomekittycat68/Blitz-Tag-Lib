#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct GorillaTagger_DebouncedBool : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GorillaTagger").GetInnerClass("DebouncedBool");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetJustEnabled() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_JustEnabled"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetJustEnabled(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_JustEnabled"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetValue() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_Value"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetValue(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Value"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetWasStablyEnabled() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_WasStablyEnabled"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetWasStablyEnabled(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_WasStablyEnabled"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetCallsSinceDisable() {
            static BNM::Field<int> _field = GetClass().GetField(O("_callsSinceDisable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCallsSinceEnable() {
            static BNM::Field<int> _field = GetClass().GetField(O("_callsSinceEnable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCallsUntilStable() {
            static BNM::Field<int> _field = GetClass().GetField(O("_callsUntilStable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetLastValue() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_lastValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCallsSinceDisable(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_callsSinceDisable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCallsSinceEnable(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_callsSinceEnable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastValue(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_lastValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool get_JustEnabled() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_JustEnabled"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_Value() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_Value"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_WasStablyEnabled() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_WasStablyEnabled"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void Set(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Set"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_JustEnabled(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_JustEnabled"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_Value(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Value"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_WasStablyEnabled(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_WasStablyEnabled"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
