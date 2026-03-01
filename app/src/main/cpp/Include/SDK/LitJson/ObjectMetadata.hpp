#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "PropertyMetadata.hpp"

namespace LitJson {
    struct ObjectMetadata : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("LitJson", "ObjectMetadata");
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
        bool GetIsDictionary() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsDictionary"));
            return _method.Call();
        }
        void SetIsDictionary(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_IsDictionary"));
            _method.Call(value);
        }
        ::BNM::MonoType* GetElementType_f() {
            static BNM::Field<::BNM::MonoType*> _field = GetClass().GetField(O("element_type"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsDictionary_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("is_dictionary"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetProperties() {
            static BNM::Field<void*> _field = GetClass().GetField(O("properties"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetElementType_fs(::BNM::MonoType* value) {
            static BNM::Field<::BNM::MonoType*> _field = GetClass().GetField(O("element_type"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsDictionary_fs(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("is_dictionary"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProperties(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("properties"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        ::BNM::MonoType* get_ElementType() {
            static BNM::Method<::BNM::MonoType*> _m = GetClass().GetMethod(O("get_ElementType"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsDictionary() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsDictionary"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* get_Properties() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_Properties"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void set_ElementType(::BNM::MonoType* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_ElementType"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_IsDictionary(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_IsDictionary"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        template <typename TP0 = void*>
        void set_Properties(TP0 value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Properties"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
