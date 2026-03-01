#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Voice {
    enum class ImageFormat : int {
        Undefined = 0,
        I420 = 1,
        YV12 = 2,
        Android420 = 3,
        ABGR = 4,
        BGRA = 5,
        ARGB = 6,
        NV12 = 7,
    };
}
