#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Viveport_Internal {
    struct Deeplink_AndroidDeeplinkChecker : BNM::UnityEngine::Object {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Viveport.Internal", "Deeplink").GetInnerClass("AndroidDeeplinkChecker");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Viveport::Deeplink_DeeplinkChecker* GetChecker() {
            static BNM::Field<::Viveport::Deeplink_DeeplinkChecker*> _field = GetClass().GetField(O("checker"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetChecker(::Viveport::Deeplink_DeeplinkChecker* value) {
            static BNM::Field<::Viveport::Deeplink_DeeplinkChecker*> _field = GetClass().GetField(O("checker"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void onFailure(int errorCode, ::BNM::Structures::Mono::String* errorMessage) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("onFailure"), {"errorCode", "errorMessage"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(errorCode, errorMessage);
        }
        void onSuccess() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("onSuccess"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
