#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class PlayerPrefFlags_Flag : int {
        SHOW_1P_COSMETICS = 1,
        SWAP_HELD_COSMETICS = 2,
        GAME_MODE_SELECTOR_IS_SUPER = 4,
    };
}
