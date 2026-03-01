#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTag_Cosmetics {
    enum class StickyCosmetic_ObjectState : int {
        Extending = 0,
        Retracting = 1,
        Stuck = 2,
        JustRetracted = 3,
        Idle = 4,
        AutoUnstuck = 5,
        AutoRetract = 6,
    };
}
