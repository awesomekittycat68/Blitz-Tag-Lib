#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class SIGadgetSlipMitt_EState : int {
        Idle = 0,
        Slip = 1,
        DashUsed = 2,
        Count = 3,
    };
}
