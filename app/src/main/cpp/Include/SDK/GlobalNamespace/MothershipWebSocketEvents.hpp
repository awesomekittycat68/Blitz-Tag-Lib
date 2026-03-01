#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class MothershipWebSocketEvents : int {
        OPEN = 0,
        MESSAGE = 1,
        CLOSE = 2,
        ERROR = 3,
    };
}
