#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class GRShiftStatType : int {
        EnemyDeaths = 0,
        PlayerDeaths = 1,
        CoresCollected = 2,
        SentientCoresCollected = 3,
    };
}
