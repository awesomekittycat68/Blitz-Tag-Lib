#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Viveport {
    struct Api_LicenseChecker : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Viveport", "Api").GetInnerClass("LicenseChecker");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void OnFailure(int errorCode, ::BNM::Structures::Mono::String* errorMessage) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnFailure"), {"errorCode", "errorMessage"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(errorCode, errorMessage);
        }
        void OnSuccess(int64_t issueTime, int64_t expirationTime, int latestVersion, bool updateRequired) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSuccess"), {"issueTime", "expirationTime", "latestVersion", "updateRequired"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(issueTime, expirationTime, latestVersion, updateRequired);
        }
    };
}
