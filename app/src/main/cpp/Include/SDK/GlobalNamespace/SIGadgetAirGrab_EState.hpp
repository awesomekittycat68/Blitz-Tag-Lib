#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class SIGadgetAirGrab_EState : int {
        Idle = 0,
        StartAirGrabbing = 1,
        PreparedToDash = 2,
        DashUsed = 3,
        Count = 4,
    };
}
