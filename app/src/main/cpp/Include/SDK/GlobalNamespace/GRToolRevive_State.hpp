#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class GRToolRevive_State : int {
        Idle = 0,
        Reviving = 1,
        Cooldown = 2,
    };
}
