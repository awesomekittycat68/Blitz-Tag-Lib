#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class GTShaderLightingType : int {
        Unlit = 0,
        Lightmapped = 1,
        Specular = 2,
    };
}
