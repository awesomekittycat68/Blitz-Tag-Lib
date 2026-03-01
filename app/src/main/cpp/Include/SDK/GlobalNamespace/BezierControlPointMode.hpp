#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class BezierControlPointMode : int {
        Free = 0,
        Aligned = 1,
        Mirrored = 2,
    };
}
