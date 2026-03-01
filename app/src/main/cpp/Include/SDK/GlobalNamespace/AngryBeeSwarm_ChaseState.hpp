#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class AngryBeeSwarm_ChaseState : int {
        Dormant = 1,
        InitialEmerge = 2,
        Chasing = 4,
        Grabbing = 8,
    };
}
