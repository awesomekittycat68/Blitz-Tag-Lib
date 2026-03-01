#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class GRToolCollector_State : int {
        Idle = 0,
        Vacuuming = 1,
        Collect = 2,
        Cooldown = 3,
    };
}
