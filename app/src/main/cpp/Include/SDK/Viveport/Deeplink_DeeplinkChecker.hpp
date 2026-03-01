#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Viveport {
    struct Deeplink_DeeplinkChecker : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Viveport", "Deeplink").GetInnerClass("DeeplinkChecker");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void OnFailure(int errorCode, ::BNM::Structures::Mono::String* errorMessage) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnFailure"), {"errorCode", "errorMessage"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(errorCode, errorMessage);
        }
        void OnSuccess() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSuccess"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
