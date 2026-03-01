#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class GREnemyPest_Behavior : int {
        Idle = 0,
        Wander = 1,
        Chase = 2,
        Attack = 3,
        Stagger = 4,
        Grabbed = 5,
        Thrown = 6,
        Destroyed = 7,
        Investigate = 8,
        Jump = 9,
        Flashed = 10,
        Count = 11,
    };
}
