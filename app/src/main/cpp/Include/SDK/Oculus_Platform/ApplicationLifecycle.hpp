#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "LaunchResult.hpp"

namespace Oculus_Platform {
    struct ApplicationLifecycle : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Oculus.Platform", "ApplicationLifecycle");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::Oculus_Platform_Models::LaunchDetails* GetLaunchDetails() {
            static BNM::Method<::Oculus_Platform_Models::LaunchDetails*> _m = GetClass().GetMethod(O("GetLaunchDetails"));
            return _m.Call();
        }
        static void LogDeeplinkResult(::BNM::Structures::Mono::String* trackingID, ::Oculus_Platform::LaunchResult result) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LogDeeplinkResult"), {"trackingID", "result"});
            _m.Call(trackingID, result);
        }
    };
}
