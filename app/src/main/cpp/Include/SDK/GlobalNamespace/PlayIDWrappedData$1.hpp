#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "EnterPlayID.hpp"

namespace GlobalNamespace {
    template <typename T>
    struct PlayIDWrappedData$1 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "PlayIDWrappedData`1");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        T GetValue() {
            static BNM::Method<T> _method = GetClass().GetMethod(O("get_Value"));
            return _method.Call();
        }
        void SetValue(T value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Value"));
            _method.Call(value);
        }
        T GetCurrentValue() {
            static BNM::Field<T> _field = GetClass().GetField(O("currentValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::EnterPlayID GetId() {
            static BNM::Field<::GlobalNamespace::EnterPlayID> _field = GetClass().GetField(O("id"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        T GetInitialValue() {
            static BNM::Field<T> _field = GetClass().GetField(O("initialValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCurrentValue(T value) {
            static BNM::Field<T> _field = GetClass().GetField(O("currentValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetId(::GlobalNamespace::EnterPlayID value) {
            static BNM::Field<::GlobalNamespace::EnterPlayID> _field = GetClass().GetField(O("id"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInitialValue(T value) {
            static BNM::Field<T> _field = GetClass().GetField(O("initialValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        T get_Value() {
            static BNM::Method<T> _m = GetClass().GetMethod(O("get_Value"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void set_Value(T value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Value"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
