#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class EdibleHoldable_EdibleHoldableStates : int {
        EatingState0 = 1,
        EatingState1 = 2,
        EatingState2 = 4,
        EatingState3 = 8,
    };
}
