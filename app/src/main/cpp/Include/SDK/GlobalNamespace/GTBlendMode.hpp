#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class GTBlendMode : int {
        Normal = 0,
        Darken = 1,
        Multiply = 2,
        ColorBurn = 3,
        LinearBurn = 4,
        Lighten = 5,
        Screen = 6,
        ColorDodge = 7,
        LinearDodge = 8,
        Overlay = 9,
        SoftLight = 10,
        HardLight = 11,
        VividLight = 12,
        LinearLight = 13,
        PinLight = 14,
        Difference = 15,
        Exclusion = 16,
    };
}
