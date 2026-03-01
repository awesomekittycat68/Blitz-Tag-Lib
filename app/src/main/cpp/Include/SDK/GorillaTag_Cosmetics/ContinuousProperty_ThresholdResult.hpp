#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTag_Cosmetics {
    enum class ContinuousProperty_ThresholdResult : int {
        Null = 0,
        RisingEdge = 1048576,
        FallingEdge = 2097152,
        Unchanged = 3145728,
    };
}
