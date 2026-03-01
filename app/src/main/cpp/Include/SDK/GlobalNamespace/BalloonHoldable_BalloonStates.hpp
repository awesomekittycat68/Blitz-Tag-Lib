#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class BalloonHoldable_BalloonStates : int {
        Normal = 0,
        Pop = 1,
        Waiting = 2,
        WaitForOwnershipTransfer = 3,
        WaitForReDock = 4,
        Refilling = 5,
        Returning = 6,
    };
}
