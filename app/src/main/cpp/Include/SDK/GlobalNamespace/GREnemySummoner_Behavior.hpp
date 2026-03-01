#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class GREnemySummoner_Behavior : int {
        Idle = 0,
        Wander = 1,
        Stagger = 2,
        Destroyed = 3,
        Summon = 4,
        KeepDistance = 5,
        MoveToTarget = 6,
        Investigate = 7,
        Jump = 8,
        Flashed = 9,
        Count = 10,
    };
}
