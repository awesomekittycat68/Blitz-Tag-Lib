#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class MonkeBallGame_RPC : int {
        SetGameState = 0,
        RequestSetGameState = 1,
        RequestResetGame = 2,
        SetScore = 3,
        RequestSetTeam = 4,
        SetTeam = 5,
        SetRestrictBallToTeam = 6,
        SetResetButton = 7,
        Count = 8,
    };
}
