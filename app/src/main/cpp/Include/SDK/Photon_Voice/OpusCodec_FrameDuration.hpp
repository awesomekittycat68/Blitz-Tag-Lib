#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Voice {
    enum class OpusCodec_FrameDuration : int {
        Frame2dot5ms = 2500,
        Frame5ms = 5000,
        Frame10ms = 10000,
        Frame20ms = 20000,
        Frame40ms = 40000,
        Frame60ms = 60000,
    };
}
