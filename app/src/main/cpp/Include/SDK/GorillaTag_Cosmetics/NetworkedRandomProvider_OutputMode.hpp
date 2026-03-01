#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTag_Cosmetics {
    enum class NetworkedRandomProvider_OutputMode : int {
        Float01 = 0,
        Double01 = 1,
        FloatRange = 2,
        DoubleRange = 3,
    };
}
