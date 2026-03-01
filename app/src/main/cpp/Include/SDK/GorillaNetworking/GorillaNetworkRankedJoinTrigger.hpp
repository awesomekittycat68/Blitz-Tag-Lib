#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GorillaNetworkJoinTrigger.hpp"

namespace GorillaNetworking {
    struct GorillaNetworkRankedJoinTrigger : ::GorillaNetworking::GorillaNetworkJoinTrigger {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaNetworking", "GorillaNetworkRankedJoinTrigger");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::String* GetFullDesiredGameModeString() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetFullDesiredGameModeString"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnBoxTriggered() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnBoxTriggered"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
