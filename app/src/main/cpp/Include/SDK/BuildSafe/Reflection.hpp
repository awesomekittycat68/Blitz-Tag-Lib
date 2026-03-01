#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace BuildSafe {
    struct Reflection : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("BuildSafe", "Reflection");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>* GetAllAssemblies() {
            static BNM::Method<::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>*> _method = GetClass().GetMethod(O("get_AllAssemblies"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::Array<::BNM::MonoType*>* GetAllTypes() {
            static BNM::Method<::BNM::Structures::Mono::Array<::BNM::MonoType*>*> _method = GetClass().GetMethod(O("get_AllTypes"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        static ::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>* GetGAssemblyCache() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("gAssemblyCache"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<::BNM::MonoType*>* GetGTypeCache() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::MonoType*>*> _field = GetClass().GetField(O("gTypeCache"));
            return _field.Get();
        }
        static void SetGAssemblyCache(::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("gAssemblyCache"));
            _field.Set(value);
        }
        static void SetGTypeCache(::BNM::Structures::Mono::Array<::BNM::MonoType*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::MonoType*>*> _field = GetClass().GetField(O("gTypeCache"));
            _field.Set(value);
        }
        static ::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>* get_AllAssemblies() {
            static BNM::Method<::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>*> _m = GetClass().GetMethod(O("get_AllAssemblies"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::Array<::BNM::MonoType*>* get_AllTypes() {
            static BNM::Method<::BNM::Structures::Mono::Array<::BNM::MonoType*>*> _m = GetClass().GetMethod(O("get_AllTypes"));
            return _m.Call();
        }
        template <typename T>
        static ::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>* GetMethodsWithAttribute() {
            static BNM::Method<::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>*> _m = GetClass().GetMethod(O("GetMethodsWithAttribute"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>* PreFetchAllAssemblies() {
            static BNM::Method<::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>*> _m = GetClass().GetMethod(O("PreFetchAllAssemblies"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::Array<::BNM::MonoType*>* PreFetchAllTypes() {
            static BNM::Method<::BNM::Structures::Mono::Array<::BNM::MonoType*>*> _m = GetClass().GetMethod(O("PreFetchAllTypes"));
            return _m.Call();
        }
    };
}
