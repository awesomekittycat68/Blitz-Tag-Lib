#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTagScripts_GhostReactor {
    enum class GREnemyType : int {
        None = 0,
        Chaser = 1,
        Pest = 2,
        Phantom = 3,
        Ranged = 4,
        Summoner = 5,
        Monkeye = 6,
        ArmoredPest = 7,
        ArmoredRanged = 8,
        ArmoredChaser = 9,
        ArmoredSummoner = 10,
        BigChaser = 11,
        BigPest = 12,
        MoonBoss = 13,
        MoonBoss_Phase1 = 14,
        MoonBoss_Phase2 = 15,
    };
}
