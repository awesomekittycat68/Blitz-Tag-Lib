#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class BarrelCannon_BarrelCannonState : int {
        Idle = 0,
        Loaded = 1,
        MovingToFirePosition = 2,
        Firing = 3,
        PostFireCooldown = 4,
        ReturningToIdlePosition = 5,
    };
}
