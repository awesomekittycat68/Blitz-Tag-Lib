#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class Slingshot_SlingshotState : int {
        NoState = 1,
        OnChest = 2,
        LeftHandDrawing = 4,
        RightHandDrawing = 8,
    };
}
