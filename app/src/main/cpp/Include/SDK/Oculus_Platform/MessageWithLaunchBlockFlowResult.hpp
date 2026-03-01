#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "Message$1.hpp"

namespace Oculus_Platform {
    struct MessageWithLaunchBlockFlowResult : ::Oculus_Platform::Message$1<::Oculus_Platform_Models::LaunchBlockFlowResult*> {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Oculus.Platform", "MessageWithLaunchBlockFlowResult");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Oculus_Platform_Models::LaunchBlockFlowResult* GetDataFromMessage(::BNM::Types::nint c_message) {
            static BNM::Method<::Oculus_Platform_Models::LaunchBlockFlowResult*> _m = GetClass().GetMethod(O("GetDataFromMessage"), {"c_message"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(c_message);
        }
        ::Oculus_Platform_Models::LaunchBlockFlowResult* GetLaunchBlockFlowResult() {
            static BNM::Method<::Oculus_Platform_Models::LaunchBlockFlowResult*> _m = GetClass().GetMethod(O("GetLaunchBlockFlowResult"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
