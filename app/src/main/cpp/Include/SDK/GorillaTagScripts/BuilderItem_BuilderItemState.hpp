#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTagScripts {
    enum class BuilderItem_BuilderItemState : int {
        isHeld = 1,
        dropped = 2,
        placed = 4,
        unused0 = 8,
        none = 16,
    };
}
