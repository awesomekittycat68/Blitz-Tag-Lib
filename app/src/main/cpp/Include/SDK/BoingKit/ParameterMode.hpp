#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace BoingKit {
    enum class ParameterMode : int {
        Exponential = 0,
        OscillationByHalfLife = 1,
        OscillationByDampingRatio = 2,
    };
}
