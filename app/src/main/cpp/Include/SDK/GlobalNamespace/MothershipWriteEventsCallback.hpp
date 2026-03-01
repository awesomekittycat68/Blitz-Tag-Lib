#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "WriteEventsCompleteClientDelegateWrapper.hpp"

namespace GlobalNamespace {
    struct MothershipWriteEventsCallback : ::GlobalNamespace::WriteEventsCompleteClientDelegateWrapper {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "MothershipWriteEventsCallback");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void OnCompleteCallback(::GlobalNamespace::MothershipResponse* response, bool wasSuccess, ::GlobalNamespace::MothershipError* error, ::BNM::Types::nint userData) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnCompleteCallback"), {"response", "wasSuccess", "error", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(response, wasSuccess, error, userData);
        }
    };
}
