#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class HalloweenGhostChaser_ChaseState : int {
        Dormant = 1,
        InitialRise = 2,
        Gong = 4,
        Chasing = 8,
        Grabbing = 16,
    };
}
