#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class MovingPlatform_PlatformType : int {
        PointToPoint = 0,
        Arc = 1,
        Rotation = 2,
        Child = 3,
        ContinuousRotation = 4,
    };
}
