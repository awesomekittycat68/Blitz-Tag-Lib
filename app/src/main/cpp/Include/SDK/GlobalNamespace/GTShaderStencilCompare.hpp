#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class GTShaderStencilCompare : int {
        Disabled = 0,
        Never = 1,
        Less = 2,
        Equal = 3,
        LEqual = 4,
        Greater = 5,
        NotEqual = 6,
        GEqual = 7,
        Always = 8,
    };
}
