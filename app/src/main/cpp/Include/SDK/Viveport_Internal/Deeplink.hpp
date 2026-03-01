#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Viveport_Internal {
    struct Deeplink : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Viveport.Internal", "Deeplink");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::BNM::Structures::Mono::String* GetAppLaunchData() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetAppLaunchData"));
            return _m.Call();
        }
        static void GoToApp(::Viveport::Deeplink_DeeplinkChecker* checker, ::BNM::Structures::Mono::String* appId, ::BNM::Structures::Mono::String* launchData) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GoToApp"), {"checker", "appId", "launchData"});
            _m.Call(checker, appId, launchData);
        }
        static void GoToAppOrGoToStore(::Viveport::Deeplink_DeeplinkChecker* checker, ::BNM::Structures::Mono::String* appId, ::BNM::Structures::Mono::String* launchData) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GoToAppOrGoToStore"), {"checker", "appId", "launchData"});
            _m.Call(checker, appId, launchData);
        }
        static void GoToStore(::Viveport::Deeplink_DeeplinkChecker* checker, ::BNM::Structures::Mono::String* appId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GoToStore"), {"checker", "appId"});
            _m.Call(checker, appId);
        }
        static void IsReady(::Viveport_Internal::StatusCallback* callback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("IsReady"), {"callback"});
            _m.Call(callback);
        }
    };
}
