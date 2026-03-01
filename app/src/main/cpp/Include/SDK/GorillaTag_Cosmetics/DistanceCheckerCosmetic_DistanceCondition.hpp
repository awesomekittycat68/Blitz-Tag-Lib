#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTag_Cosmetics {
    enum class DistanceCheckerCosmetic_DistanceCondition : int {
        None = 0,
        Owner = 1,
        Others = 2,
        Everyone = 3,
    };
}
