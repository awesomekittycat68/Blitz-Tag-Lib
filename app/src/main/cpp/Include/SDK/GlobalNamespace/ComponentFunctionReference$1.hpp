#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "ComponentFunctionReference$1_MethodRef.hpp"

namespace GlobalNamespace {
    template <typename TResult>
    struct ComponentFunctionReference$1 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ComponentFunctionReference`1");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetIsValid() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsValid"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::Func<TResult>* GetCached() {
            static BNM::Field<::BNM::Structures::Mono::Func<TResult>*> _field = GetClass().GetField(O("_cached"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetTarget() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_target"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCached(::BNM::Structures::Mono::Func<TResult>* value) {
            static BNM::Field<::BNM::Structures::Mono::Func<TResult>*> _field = GetClass().GetField(O("_cached"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTarget(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_target"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Cache() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Cache"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool get_IsValid() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsValid"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* GetMethodOptions() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("GetMethodOptions"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        TResult Invoke() {
            static BNM::Method<TResult> _m = GetClass().GetMethod(O("Invoke"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
