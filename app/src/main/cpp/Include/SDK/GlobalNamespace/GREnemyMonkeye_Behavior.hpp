#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class GREnemyMonkeye_Behavior : int {
        Idle = 0,
        Patrol = 1,
        Stagger = 2,
        Dying = 3,
        Chase = 4,
        Search = 5,
        Attack = 6,
        AttackDisco = 7,
        AttackSlamdown = 8,
        Investigate = 9,
        Jump = 10,
        Count = 11,
    };
}
