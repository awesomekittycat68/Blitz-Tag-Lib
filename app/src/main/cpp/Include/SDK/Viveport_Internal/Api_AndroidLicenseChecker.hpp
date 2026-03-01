#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Viveport_Internal {
    struct Api_AndroidLicenseChecker : BNM::UnityEngine::Object {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Viveport.Internal", "Api").GetInnerClass("AndroidLicenseChecker");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Viveport::Api_LicenseChecker* GetChecker() {
            static BNM::Field<::Viveport::Api_LicenseChecker*> _field = GetClass().GetField(O("checker"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetChecker(::Viveport::Api_LicenseChecker* value) {
            static BNM::Field<::Viveport::Api_LicenseChecker*> _field = GetClass().GetField(O("checker"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void onFailure(int errorCode, ::BNM::Structures::Mono::String* errorMessage) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("onFailure"), {"errorCode", "errorMessage"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(errorCode, errorMessage);
        }
        void onSuccess(int64_t issueTime, int64_t expirationTime, int latestVersion, bool updateRequired) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("onSuccess"), {"issueTime", "expirationTime", "latestVersion", "updateRequired"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(issueTime, expirationTime, latestVersion, updateRequired);
        }
    };
}
