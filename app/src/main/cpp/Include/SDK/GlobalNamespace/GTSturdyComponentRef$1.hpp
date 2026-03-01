#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    template <typename T>
    struct GTSturdyComponentRef$1 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GTSturdyComponentRef`1");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Transform* GetBaseXform() {
            static BNM::Method<::Transform*> _method = GetClass().GetMethod(O("get_BaseXform"));
            return _method.Call();
        }
        void SetBaseXform(::Transform* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_BaseXform"));
            _method.Call(value);
        }
        T GetValue() {
            static BNM::Method<T> _method = GetClass().GetMethod(O("get_Value"));
            return _method.Call();
        }
        void SetValue(T value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Value"));
            _method.Call(value);
        }
        ::Transform* GetBaseXform_f() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_baseXform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetRelativePath() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_relativePath"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        T GetValue_f() {
            static BNM::Field<T> _field = GetClass().GetField(O("_value"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBaseXform_fs(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_baseXform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRelativePath(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_relativePath"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetValue_fs(T value) {
            static BNM::Field<T> _field = GetClass().GetField(O("_value"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        ::Transform* get_BaseXform() {
            static BNM::Method<::Transform*> _m = GetClass().GetMethod(O("get_BaseXform"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        T get_Value() {
            static BNM::Method<T> _m = GetClass().GetMethod(O("get_Value"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void set_BaseXform(::Transform* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_BaseXform"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_Value(T value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Value"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
