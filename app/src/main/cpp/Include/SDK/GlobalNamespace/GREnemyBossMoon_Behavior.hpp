#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class GREnemyBossMoon_Behavior : int {
        HiddenIdle = 0,
        Idle = 1,
        Reveal = 2,
        Exposed = 3,
        ExposedIdle = 4,
        Stagger = 5,
        Dying = 6,
        AttackTentacle00 = 7,
        AttackTentacle01 = 8,
        AttackTentacle02 = 9,
        AttackTentacle03 = 10,
        AttackTentacle04 = 11,
        AttackTentacle05 = 12,
        AttackQuickTentacle00 = 13,
        AttackQuickTentacle01 = 14,
        AttackQuickTentacle02 = 15,
        AttackQuickTentacle03 = 16,
        AttackTongue = 17,
        SummonStart = 18,
        SummonEnd = 19,
        Summon01 = 20,
        Summon02 = 21,
        Summon03 = 22,
        Summon04 = 23,
        RetreatStart = 24,
        RetreatEnd = 25,
        RetreatIdle = 26,
        DyingIdle = 27,
        Runaway = 28,
        AttackTongueSwipe = 29,
        NextPhase = 30,
        None = 31,
        Count = 32,
    };
}
