#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GorillaNetworkJoinTrigger.hpp"

namespace GorillaNetworking {
    struct CustomMapNetworkJoinTrigger : ::GorillaNetworking::GorillaNetworkJoinTrigger {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaNetworking", "CustomMapNetworkJoinTrigger");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::String* GetFullDesiredGameModeString() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetFullDesiredGameModeString"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        uint8_t GetRoomSize(bool subscribed) {
            static BNM::Method<uint8_t> _m = GetClass().GetMethod(O("GetRoomSize"), {"subscribed"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(subscribed);
        }
    };
}
