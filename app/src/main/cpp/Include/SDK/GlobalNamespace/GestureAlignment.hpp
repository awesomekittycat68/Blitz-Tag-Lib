#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class GestureAlignment : uint32_t {
        None = 0,
        TowardFace = 128,
        AwayFromFace = 256,
        WorldUp = 512,
        WorldDown = 1024,
    };
}
