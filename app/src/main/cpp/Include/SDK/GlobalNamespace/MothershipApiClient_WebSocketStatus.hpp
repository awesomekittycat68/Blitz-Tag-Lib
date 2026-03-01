#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class MothershipApiClient_WebSocketStatus : int {
        INACTIVE = 0,
        ACTIVE = 1,
        CLOSING = 2,
    };
}
