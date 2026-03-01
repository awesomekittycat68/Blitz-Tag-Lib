#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTag_Cosmetics {
    enum class Dreidel_State : int {
        Idle = 0,
        FindingSurface = 1,
        Spinning = 2,
        Falling = 3,
        Fallen = 4,
    };
}
