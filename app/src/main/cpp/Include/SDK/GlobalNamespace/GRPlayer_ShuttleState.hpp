#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class GRPlayer_ShuttleState : int {
        Idle = 0,
        Moving = 1,
        WaitForLeaveRoom = 2,
        JoinRoom = 3,
        WaitForLeadPlayer = 4,
        Teleport = 5,
        TeleportToMyShuttleSafety = 6,
        PostTeleport = 7,
    };
}
