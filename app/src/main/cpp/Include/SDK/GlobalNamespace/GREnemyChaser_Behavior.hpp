#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class GREnemyChaser_Behavior : int {
        Idle = 0,
        Patrol = 1,
        Wander = 2,
        Stagger = 3,
        Dying = 4,
        Chase = 5,
        Search = 6,
        Attack = 7,
        Flashed = 8,
        Investigate = 9,
        Jump = 10,
        Count = 11,
    };
}
