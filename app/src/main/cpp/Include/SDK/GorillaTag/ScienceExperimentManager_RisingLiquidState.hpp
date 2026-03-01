#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTag {
    enum class ScienceExperimentManager_RisingLiquidState : int {
        Drained = 0,
        Erupting = 1,
        Rising = 2,
        Full = 3,
        PreDrainDelay = 4,
        Draining = 5,
    };
}
