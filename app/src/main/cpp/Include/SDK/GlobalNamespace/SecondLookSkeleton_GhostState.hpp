#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class SecondLookSkeleton_GhostState : int {
        Unactivated = 0,
        Activated = 1,
        Patrolling = 2,
        Chasing = 3,
        CaughtPlayer = 4,
        PlayerThrown = 5,
        Reset = 6,
    };
}
