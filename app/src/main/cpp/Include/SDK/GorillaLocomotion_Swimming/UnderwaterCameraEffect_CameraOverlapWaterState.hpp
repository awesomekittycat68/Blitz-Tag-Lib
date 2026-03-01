#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaLocomotion_Swimming {
    enum class UnderwaterCameraEffect_CameraOverlapWaterState : int {
        Uninitialized = 0,
        OutOfWater = 1,
        PartiallySubmerged = 2,
        FullySubmerged = 3,
    };
}
