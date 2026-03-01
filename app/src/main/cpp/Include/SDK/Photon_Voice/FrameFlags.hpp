#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Voice {
    enum class FrameFlags : uint8_t {
        Config = 1,
        KeyFrame = 2,
        PartialFrame = 4,
        EndOfStream = 8,
    };
}
