#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class VODPlayer_State : int {
        INITIALIZING = 0,
        IDLE = 1,
        RUNNING = 2,
        CRASHED = 3,
    };
}
