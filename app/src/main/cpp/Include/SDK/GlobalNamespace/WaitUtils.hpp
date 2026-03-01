#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct WaitUtils : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "WaitUtils");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::BNM::IL2CPP::Il2CppObject* GetParam() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_param"));
            return _field.Get();
        }
        static ::BNM::IL2CPP::Il2CppObject* GetWaitForSeconds() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_waitForSeconds"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Action<float>* GetWaitForSecondsSetter() {
            static BNM::Field<::BNM::Structures::Mono::Action<float>*> _field = GetClass().GetField(O("_waitForSecondsSetter"));
            return _field.Get();
        }
        static void SetParam(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_param"));
            _field.Set(value);
        }
        static void SetWaitForSeconds(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_waitForSeconds"));
            _field.Set(value);
        }
        static void SetWaitForSecondsSetter(::BNM::Structures::Mono::Action<float>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<float>*> _field = GetClass().GetField(O("_waitForSecondsSetter"));
            _field.Set(value);
        }
        static ::BNM::IL2CPP::Il2CppObject* WaitForSeconds(float seconds) {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("WaitForSeconds"), {"seconds"});
            return _m.Call(seconds);
        }
    };
}
