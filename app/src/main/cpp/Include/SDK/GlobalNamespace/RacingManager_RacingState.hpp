#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class RacingManager_RacingState : int {
        Inactive = 0,
        Countdown = 1,
        InProgress = 2,
        Results = 3,
    };
}
