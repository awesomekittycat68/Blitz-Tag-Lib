#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTag_Cosmetics {
    enum class MedusaEyeLantern_State : int {
        SLOSHING = 0,
        DORMANT = 1,
        TRACKING = 2,
        WARMUP = 3,
        PRIMING = 4,
        PETRIFICATION = 5,
        COOLDOWN = 6,
        RESET = 7,
    };
}
