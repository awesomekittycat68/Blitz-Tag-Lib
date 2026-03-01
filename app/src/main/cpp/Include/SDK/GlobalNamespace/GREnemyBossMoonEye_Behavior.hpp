#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class GREnemyBossMoonEye_Behavior : int {
        Idle = 0,
        AttackLaser = 1,
        Closed = 2,
        GravityStart = 3,
        GravityEnd = 4,
        GravityIdle = 5,
        Dying = 6,
        None = 7,
        Count = 8,
    };
}
