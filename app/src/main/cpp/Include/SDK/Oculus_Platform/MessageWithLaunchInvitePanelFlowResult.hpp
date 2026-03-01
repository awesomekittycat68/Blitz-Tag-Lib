#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "Message$1.hpp"

namespace Oculus_Platform {
    struct MessageWithLaunchInvitePanelFlowResult : ::Oculus_Platform::Message$1<::Oculus_Platform_Models::LaunchInvitePanelFlowResult*> {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Oculus.Platform", "MessageWithLaunchInvitePanelFlowResult");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Oculus_Platform_Models::LaunchInvitePanelFlowResult* GetDataFromMessage(::BNM::Types::nint c_message) {
            static BNM::Method<::Oculus_Platform_Models::LaunchInvitePanelFlowResult*> _m = GetClass().GetMethod(O("GetDataFromMessage"), {"c_message"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(c_message);
        }
        ::Oculus_Platform_Models::LaunchInvitePanelFlowResult* GetLaunchInvitePanelFlowResult() {
            static BNM::Method<::Oculus_Platform_Models::LaunchInvitePanelFlowResult*> _m = GetClass().GetMethod(O("GetLaunchInvitePanelFlowResult"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
