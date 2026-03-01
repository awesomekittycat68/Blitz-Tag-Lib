#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class GREnemyRanged_Behavior : int {
        Idle = 0,
        Patrol = 1,
        Search = 2,
        Stagger = 3,
        Dying = 4,
        SeekRangedAttackPosition = 5,
        RangedAttack = 6,
        RangedAttackCooldown = 7,
        Flashed = 8,
        Investigate = 9,
        Jump = 10,
        Count = 11,
    };
}
