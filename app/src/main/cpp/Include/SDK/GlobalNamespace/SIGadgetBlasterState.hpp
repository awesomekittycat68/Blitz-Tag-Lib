#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class SIGadgetBlasterState : int {
        Idle = 0,
        Charging = 1,
        Cooldown = 2,
        Pumping = 3,
        Count = 4,
    };
}
