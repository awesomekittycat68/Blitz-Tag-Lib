#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class GorillaPropHuntGameManager_EPropHuntGameState : int {
        Invalid = 0,
        StoppedGameMode = 1,
        StartingGameMode = 2,
        WaitingForMorePlayers = 3,
        WaitingForRoundToStart = 4,
        Hiding = 5,
        Playing = 6,
    };
}
