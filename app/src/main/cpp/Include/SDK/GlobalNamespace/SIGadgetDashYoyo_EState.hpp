#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class SIGadgetDashYoyo_EState : int {
        Idle = 0,
        OnCooldown = 1,
        PreparedToThrow = 2,
        Thrown = 3,
        PreparedToDash = 4,
        DashUsed = 5,
        Count = 6,
    };
}
