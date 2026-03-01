#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTagScripts {
    enum class DecorativeItem_DecorativeItemState : int {
        isHeld = 1,
        dropped = 2,
        snapped = 4,
        respawn = 8,
        none = 16,
    };
}
