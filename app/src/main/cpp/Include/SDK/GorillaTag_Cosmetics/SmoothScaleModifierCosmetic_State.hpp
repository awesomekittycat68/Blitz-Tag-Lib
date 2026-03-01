#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTag_Cosmetics {
    enum class SmoothScaleModifierCosmetic_State : int {
        None = 0,
        Reset = 1,
        Scaling = 2,
        Scaled = 3,
    };
}
