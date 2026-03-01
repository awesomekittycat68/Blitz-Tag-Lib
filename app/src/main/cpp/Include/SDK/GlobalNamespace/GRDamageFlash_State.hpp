#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class GRDamageFlash_State : int {
        Idle = 0,
        Playing = 1,
        Cooldown = 2,
    };
}
