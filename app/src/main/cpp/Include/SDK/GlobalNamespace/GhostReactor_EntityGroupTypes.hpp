#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class GhostReactor_EntityGroupTypes : int {
        EnemyChaser = 0,
        EnemyChaserArmored = 1,
        EnemyRanged = 2,
        EnemyRangedArmored = 3,
        CollectibleFlower = 4,
        BarrierEnergyCostGate = 5,
        BarrierSpectralWall = 6,
        HazardSpectralLiquid = 7,
    };
}
