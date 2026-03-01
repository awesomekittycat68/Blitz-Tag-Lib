#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class GorillaPaintbrawlManager_PaintbrawlState : int {
        NotEnoughPlayers = 0,
        GameEnd = 1,
        GameEndWaiting = 2,
        StartCountdown = 3,
        CountingDownToStart = 4,
        GameStart = 5,
        GameRunning = 6,
    };
}
