#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class ShadeRevealer_State : int {
        OFF = 0,
        SCANNING = 1,
        TRACKING = 2,
        LOCKED = 3,
        PRIMED = 4,
    };
}
