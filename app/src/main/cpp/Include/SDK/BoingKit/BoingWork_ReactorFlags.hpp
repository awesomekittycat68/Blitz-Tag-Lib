#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace BoingKit {
    enum class BoingWork_ReactorFlags : int {
        TwoDDistanceCheck = 0,
        TwoDPositionInfluence = 1,
        TwoDRotationInfluence = 2,
        EnablePositionEffect = 3,
        EnableRotationEffect = 4,
        EnableScaleEffect = 5,
        GlobalReactionUpVector = 6,
        EnablePropagation = 7,
        AnchorPropagationAtBorder = 8,
        FixedUpdate = 9,
        EarlyUpdate = 10,
        LateUpdate = 11,
    };
}
