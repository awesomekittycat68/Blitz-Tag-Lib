#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class GTShaderVolumeType : uint32_t {
        None = 0,
        Fog = 1,
        Tint = 2,
        Decal = 4,
    };
}
