#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class SIGadgetGrenadeGravity_State : int {
        Idle = 0,
        Activated = 1,
        Triggered = 2,
        Count = 3,
    };
}
