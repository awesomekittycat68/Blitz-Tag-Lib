#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class JoinTriggerVisualState : int {
        ConnectionError = 0,
        AlreadyInRoom = 1,
        InPrivateRoom = 2,
        NotConnectedSoloJoin = 3,
        LeaveRoomAndSoloJoin = 4,
        LeaveRoomAndPartyJoin = 5,
        AbandonPartyAndSoloJoin = 6,
        ChangingGameModeSoloJoin = 7,
    };
}
