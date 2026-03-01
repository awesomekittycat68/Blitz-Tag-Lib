#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "MothershipSendHTTPRequestDelegateWrapper.hpp"

namespace GlobalNamespace {
    struct MothershipHttpClientUnity : ::GlobalNamespace::MothershipSendHTTPRequestDelegateWrapper {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "MothershipHttpClientUnity");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::MothershipClientApiClient* GetClient() {
            static BNM::Field<::GlobalNamespace::MothershipClientApiClient*> _field = GetClass().GetField(O("client"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsRequestLoggingEnabled() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isRequestLoggingEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetClient(::GlobalNamespace::MothershipClientApiClient* value) {
            static BNM::Field<::GlobalNamespace::MothershipClientApiClient*> _field = GetClass().GetField(O("client"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsRequestLoggingEnabled(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isRequestLoggingEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool SendRequest(::GlobalNamespace::MothershipHTTPRequest* request) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("SendRequest"), {"request"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(request);
        }
    };
}
