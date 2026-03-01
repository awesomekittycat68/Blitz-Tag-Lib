#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class GorillaTagCompetitiveManager_GameState : int {
        None = 0,
        WaitingForPlayers = 1,
        StartingCountdown = 2,
        Playing = 3,
        PostRound = 4,
    };
}
