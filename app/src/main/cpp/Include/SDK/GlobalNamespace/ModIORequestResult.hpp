#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct ModIORequestResult : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ModIORequestResult");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::String* GetMessage() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("message"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetSuccess() {
            static BNM::Field<bool> _field = GetClass().GetField(O("success"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetMessage(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("message"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSuccess(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("success"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static ::GlobalNamespace::ModIORequestResult CreateFailureResult(::BNM::Structures::Mono::String* inMessage) {
            static BNM::Method<::GlobalNamespace::ModIORequestResult> _m = GetClass().GetMethod(O("CreateFailureResult"), {"inMessage"});
            return _m.Call(inMessage);
        }
        static ::GlobalNamespace::ModIORequestResult CreateFromError(::BNM::IL2CPP::Il2CppObject* error) {
            static BNM::Method<::GlobalNamespace::ModIORequestResult> _m = GetClass().GetMethod(O("CreateFromError"), {"error"});
            return _m.Call(error);
        }
        static ::GlobalNamespace::ModIORequestResult CreateSuccessResult() {
            static BNM::Method<::GlobalNamespace::ModIORequestResult> _m = GetClass().GetMethod(O("CreateSuccessResult"));
            return _m.Call();
        }
    };
}
