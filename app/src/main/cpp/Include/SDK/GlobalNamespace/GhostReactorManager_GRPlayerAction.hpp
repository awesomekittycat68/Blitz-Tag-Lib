#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class GhostReactorManager_GRPlayerAction : int {
        ButtonShiftStart = 0,
        DelveDeeper = 1,
        DelveState = 2,
        ShuttleOpen = 3,
        ShuttleClose = 4,
        ShuttleLaunch = 5,
        ShuttleArrive = 6,
        ShuttleTargetLevelUp = 7,
        ShuttleTargetLevelDown = 8,
        SetPodLevel = 9,
        SetPodChassisLevel = 10,
        SeedExtractorOpenStation = 11,
        SeedExtractorCloseStation = 12,
        SeedExtractorCardSwipeFail = 13,
        SeedExtractorTryDepositSeed = 14,
        SeedExtractorDepositSeedSucceeded = 15,
        SeedExtractorDepositSeedFailed = 16,
        DEBUG_ResetDepth = 17,
        DEBUG_DelveDeeper = 18,
        DEBUG_DelveShallower = 19,
    };
}
