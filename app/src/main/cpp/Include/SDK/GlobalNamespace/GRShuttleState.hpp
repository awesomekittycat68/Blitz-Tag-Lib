#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class GRShuttleState : int {
        Docking = 0,
        Docked = 1,
        PreMove = 2,
        Moving = 3,
        PostMove = 4,
        Arriving = 5,
        PostArrive = 6,
        Count = 7,
    };
}
