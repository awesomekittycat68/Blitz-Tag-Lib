#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTag_Cosmetics {
    enum class ContinuousProperty_DataFlags : int {
        None = 0,
        HasCurve = 1,
        HasColor = 2,
        HasAxis = 4,
        HasInteger = 8,
        HasInterpolation = 16,
        IsShaderProperty = 32,
        IsAnimatorParameter = 64,
        HasThreshold = 128,
    };
}
