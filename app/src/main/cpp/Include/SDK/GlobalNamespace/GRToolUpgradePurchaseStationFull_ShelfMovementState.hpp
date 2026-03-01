#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class GRToolUpgradePurchaseStationFull_ShelfMovementState : int {
        Idle = 0,
        MoveCurrentShelfBackward = 1,
        MoveCurrentShelfForward = 2,
        MoveNextShelfUpward = 3,
        MoveNextShelfDownward = 4,
        Count = 5,
    };
}
