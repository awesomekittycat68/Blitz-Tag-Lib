#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Oculus_Platform {
    struct Entitlements : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Oculus.Platform", "Entitlements");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::Oculus_Platform::Request* IsUserEntitledToApplication() {
            static BNM::Method<::Oculus_Platform::Request*> _m = GetClass().GetMethod(O("IsUserEntitledToApplication"));
            return _m.Call();
        }
    };
}
