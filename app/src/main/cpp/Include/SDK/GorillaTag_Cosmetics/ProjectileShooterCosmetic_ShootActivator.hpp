#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTag_Cosmetics {
    enum class ProjectileShooterCosmetic_ShootActivator : int {
        ButtonReleased = 0,
        ButtonPressed = 1,
        ButtonStayed = 2,
        VelocityEstimatorThreshold = 3,
        ButtonReleasedFullCharge = 4,
    };
}
