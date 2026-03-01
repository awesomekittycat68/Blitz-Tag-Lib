#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class GRElevator_ElevatorState : int {
        DoorBeginClosing = 0,
        DoorMovingClosing = 1,
        DoorEndClosing = 2,
        DoorClosed = 3,
        DoorBeginOpening = 4,
        DoorMovingOpening = 5,
        DoorEndOpening = 6,
        DoorOpen = 7,
        None = 8,
    };
}
