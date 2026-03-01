#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class GhostLab_EntranceDoorsState : int {
        BothClosed = 0,
        InnerDoorOpen = 1,
        OuterDoorOpen = 2,
    };
}
