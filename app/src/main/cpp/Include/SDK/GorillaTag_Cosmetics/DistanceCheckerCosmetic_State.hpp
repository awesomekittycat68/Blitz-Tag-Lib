#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTag_Cosmetics {
    enum class DistanceCheckerCosmetic_State : int {
        AboveThreshold = 0,
        BelowThreshold = 1,
        None = 2,
    };
}
