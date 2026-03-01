#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class NetSystemState : int {
        Initialization = 0,
        PingRecon = 1,
        Idle = 2,
        Connecting = 3,
        InGame = 4,
        Disconnecting = 5,
    };
}
