#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace BuildSafe {
    template <typename T>
    struct Reflection$1 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("BuildSafe", "Reflection`1");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>* GetEvents() {
            static BNM::Method<::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>*> _method = GetClass().GetMethod(O("get_Events"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>* GetFields() {
            static BNM::Method<::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>*> _method = GetClass().GetMethod(O("get_Fields"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>* GetMethods() {
            static BNM::Method<::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>*> _method = GetClass().GetMethod(O("get_Methods"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>* GetProperties() {
            static BNM::Method<::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>*> _method = GetClass().GetMethod(O("get_Properties"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::MonoType* GetType_pg() {
            static BNM::Method<::BNM::MonoType*> _method = GetClass().GetMethod(O("get_Type"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        static ::BNM::MonoType* GetGCachedType() {
            static BNM::Field<::BNM::MonoType*> _field = GetClass().GetField(O("gCachedType"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>* GetGEventsCache() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("gEventsCache"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>* GetGFieldsCache() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("gFieldsCache"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>* GetGMethodsCache() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("gMethodsCache"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>* GetGPropertiesCache() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("gPropertiesCache"));
            return _field.Get();
        }
        static void SetGCachedType(::BNM::MonoType* value) {
            static BNM::Field<::BNM::MonoType*> _field = GetClass().GetField(O("gCachedType"));
            _field.Set(value);
        }
        static void SetGEventsCache(::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("gEventsCache"));
            _field.Set(value);
        }
        static void SetGFieldsCache(::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("gFieldsCache"));
            _field.Set(value);
        }
        static void SetGMethodsCache(::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("gMethodsCache"));
            _field.Set(value);
        }
        static void SetGPropertiesCache(::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("gPropertiesCache"));
            _field.Set(value);
        }
        static ::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>* get_Events() {
            static BNM::Method<::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>*> _m = GetClass().GetMethod(O("get_Events"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>* get_Fields() {
            static BNM::Method<::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>*> _m = GetClass().GetMethod(O("get_Fields"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>* get_Methods() {
            static BNM::Method<::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>*> _m = GetClass().GetMethod(O("get_Methods"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>* get_Properties() {
            static BNM::Method<::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>*> _m = GetClass().GetMethod(O("get_Properties"));
            return _m.Call();
        }
        static ::BNM::MonoType* get_Type() {
            static BNM::Method<::BNM::MonoType*> _m = GetClass().GetMethod(O("get_Type"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>* PreFetchEvents() {
            static BNM::Method<::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>*> _m = GetClass().GetMethod(O("PreFetchEvents"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>* PreFetchFields() {
            static BNM::Method<::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>*> _m = GetClass().GetMethod(O("PreFetchFields"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>* PreFetchMethods() {
            static BNM::Method<::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>*> _m = GetClass().GetMethod(O("PreFetchMethods"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>* PreFetchProperties() {
            static BNM::Method<::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>*> _m = GetClass().GetMethod(O("PreFetchProperties"));
            return _m.Call();
        }
    };
}
