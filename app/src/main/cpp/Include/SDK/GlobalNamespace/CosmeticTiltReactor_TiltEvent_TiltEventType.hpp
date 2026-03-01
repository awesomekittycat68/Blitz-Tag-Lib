#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class CosmeticTiltReactor_TiltEvent_TiltEventType : int {
        LessThanThreshold = 0,
        GreaterThanThreshold = 1,
        LessThanThresholdForDuration = 2,
        GreaterThanThresholdForDuration = 3,
    };
}
