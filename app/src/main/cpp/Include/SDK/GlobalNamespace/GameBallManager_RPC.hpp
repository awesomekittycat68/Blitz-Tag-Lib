#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class GameBallManager_RPC : int {
        RequestGrabBall = 0,
        GrabBall = 1,
        RequestThrowBall = 2,
        ThrowBall = 3,
        RequestLaunchBall = 4,
        LaunchBall = 5,
        TeleportBall = 6,
        RequestSetBallPosition = 7,
        Count = 8,
    };
}
