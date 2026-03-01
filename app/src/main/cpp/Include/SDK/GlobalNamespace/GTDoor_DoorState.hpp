#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class GTDoor_DoorState : int {
        Closed = 0,
        ClosingWaitingOnRPC = 1,
        Closing = 2,
        Open = 3,
        OpeningWaitingOnRPC = 4,
        Opening = 5,
        HeldOpen = 6,
        HeldOpenLocally = 7,
    };
}
