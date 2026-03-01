#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class GTShaderColorSource : int {
        Color = 0,
        Texture = 1,
        TextureAsMask = 2,
    };
}
