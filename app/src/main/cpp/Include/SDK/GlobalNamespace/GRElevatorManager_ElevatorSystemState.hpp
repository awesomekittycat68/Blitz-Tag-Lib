#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class GRElevatorManager_ElevatorSystemState : int {
        Dormant = 0,
        InLocation = 1,
        DestinationPressed = 2,
        WaitingToTeleport = 3,
        Teleporting = 4,
        None = 5,
    };
}
