#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Viveport_Internal {
    struct Api : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Viveport.Internal", "Api");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static void GetLicense(::Viveport::Api_LicenseChecker* checker, ::BNM::Structures::Mono::String* appId, ::BNM::Structures::Mono::String* appKey) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetLicense"), {"checker", "appId", "appKey"});
            _m.Call(checker, appId, appKey);
        }
        static int Init(::Viveport_Internal::StatusCallback* callback, ::BNM::Structures::Mono::String* pchAppKey) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Init"), {"callback", "pchAppKey"});
            return _m.Call(callback, pchAppKey);
        }
        static int Shutdown(::Viveport_Internal::StatusCallback* callback) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Shutdown"), {"callback"});
            return _m.Call(callback);
        }
        static ::BNM::Structures::Mono::String* Version() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("Version"));
            return _m.Call();
        }
    };
}
