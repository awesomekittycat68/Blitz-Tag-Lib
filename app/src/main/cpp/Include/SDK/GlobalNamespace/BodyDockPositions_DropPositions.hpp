#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class BodyDockPositions_DropPositions : int {
        LeftArm = 1,
        RightArm = 2,
        Chest = 4,
        LeftBack = 8,
        RightBack = 16,
        MaxDropPostions = 5,
        All = 31,
        None = 0,
    };
}
