#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class TransferrableObject_PositionState : int {
        OnLeftArm = 1,
        OnRightArm = 2,
        InLeftHand = 4,
        InRightHand = 8,
        OnChest = 16,
        OnLeftShoulder = 32,
        OnRightShoulder = 64,
        Dropped = 128,
        None = 0,
    };
}
