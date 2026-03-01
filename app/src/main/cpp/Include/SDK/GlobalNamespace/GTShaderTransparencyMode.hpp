#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class GTShaderTransparencyMode : int {
        Opaque = 0,
        AlphaTest = 1,
        Transparent = 2,
        Premultiplied = 3,
        Add = 4,
        Multiply = 5,
        DitherBlueLive = 6,
    };
}
