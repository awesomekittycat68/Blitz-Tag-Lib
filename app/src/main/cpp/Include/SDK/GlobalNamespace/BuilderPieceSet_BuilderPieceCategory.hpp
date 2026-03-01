#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class BuilderPieceSet_BuilderPieceCategory : int {
        FLAT = 0,
        TALL = 1,
        HALF_HEIGHT = 2,
        BEAM = 3,
        SLOPE = 4,
        OVERSIZED = 5,
        SPECIAL_DISPLAY = 6,
        FUNCTIONAL = 18,
        DECORATIVE = 19,
        MISC = 20,
    };
}
