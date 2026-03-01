#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class MagicCauldron_CauldronState : int {
        notReady = 0,
        ready = 1,
        recipeCollecting = 2,
        recipeActivated = 3,
        summoned = 4,
        failed = 5,
        cooldown = 6,
    };
}
