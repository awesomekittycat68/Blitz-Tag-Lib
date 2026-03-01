#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class GRToolUpgradeStation_UpgradeStationState : int {
        Idle = 0,
        ItemInserted = 1,
        Upgrading = 2,
        Complete = 3,
    };
}
