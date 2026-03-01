#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class GRToolShieldGun_State : int {
        Idle = 0,
        Charging = 1,
        Firing = 2,
        Cooldown = 3,
        Count = 4,
    };
}
