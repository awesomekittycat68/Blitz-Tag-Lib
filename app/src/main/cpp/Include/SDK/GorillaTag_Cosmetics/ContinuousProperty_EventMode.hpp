#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTag_Cosmetics {
    enum class ContinuousProperty_EventMode : int {
        Passthrough = 4194304,
        Frequency = 8388608,
        AveragePerSecond = 12582912,
    };
}
