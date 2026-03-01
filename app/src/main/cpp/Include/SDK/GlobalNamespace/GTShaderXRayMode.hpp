#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class GTShaderXRayMode : int {
        None = 0,
        RevealsXRay = 1,
        VisibleToXRay = 2,
        InvisibleToXRay = 3,
    };
}
