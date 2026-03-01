#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class GRPlayer_SynchronizedSessionStat : int {
        CoresDeposited = 0,
        EarnedCredits = 1,
        SpentCredits = 2,
        DistanceTraveled = 3,
        Deaths = 4,
        Kills = 5,
        Assists = 6,
        TimeChaosExposure = 7,
        Count = 8,
    };
}
