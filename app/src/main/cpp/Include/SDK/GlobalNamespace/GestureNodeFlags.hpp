#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class GestureNodeFlags : uint32_t {
        None = 0,
        HandLeft = 1,
        HandRight = 2,
        HandOpen = 4,
        HandClosed = 8,
        DigitOpen = 16,
        DigitClosed = 32,
        DigitBent = 64,
        TowardFace = 128,
        AwayFromFace = 256,
        AxisWorldUp = 512,
        AxisWorldDown = 1024,
    };
}
