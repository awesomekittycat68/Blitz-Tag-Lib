#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class FortuneResults_FortuneCategoryType : int {
        Invalid = 0,
        Positive = 1,
        Neutral = 2,
        Negative = 3,
        Seasonal = 4,
    };
}
