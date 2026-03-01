#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class ESuperInfectionGameState : int16_t {
        Uninitialized = 0,
        Stopped = 1,
        Starting = 2,
        WaitingForMorePlayers = 3,
        Playing = 4,
        RoundRestarting = 5,
    };
}
