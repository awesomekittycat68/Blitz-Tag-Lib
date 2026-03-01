#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace LitJson {
    struct ArrayMetadata : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("LitJson", "ArrayMetadata");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::MonoType* GetElementType() {
            static BNM::Method<::BNM::MonoType*> _method = GetClass().GetMethod(O("get_ElementType"));
            return _method.Call();
        }
        void SetElementType(::BNM::MonoType* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_ElementType"));
            _method.Call(value);
        }
        bool GetIsArray() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsArray"));
            return _method.Call();
        }
        void SetIsArray(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_IsArray"));
            _method.Call(value);
        }
        bool GetIsList() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsList"));
            return _method.Call();
        }
        void SetIsList(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_IsList"));
            _method.Call(value);
        }
        ::BNM::MonoType* GetElementType_f() {
            static BNM::Field<::BNM::MonoType*> _field = GetClass().GetField(O("element_type"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsArray_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("is_array"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsList_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("is_list"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetElementType_fs(::BNM::MonoType* value) {
            static BNM::Field<::BNM::MonoType*> _field = GetClass().GetField(O("element_type"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsArray_fs(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("is_array"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsList_fs(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("is_list"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        ::BNM::MonoType* get_ElementType() {
            static BNM::Method<::BNM::MonoType*> _m = GetClass().GetMethod(O("get_ElementType"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsArray() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsArray"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsList() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsList"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void set_ElementType(::BNM::MonoType* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_ElementType"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_IsArray(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_IsArray"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_IsList(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_IsList"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
