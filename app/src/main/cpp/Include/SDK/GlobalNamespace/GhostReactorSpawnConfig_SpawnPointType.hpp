#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class GhostReactorSpawnConfig_SpawnPointType : int {
        Enemy = 0,
        Collectible = 1,
        Barrier = 2,
        HazardLiquid = 3,
        Phantom = 4,
        Pest = 5,
        Crate = 6,
        Tool = 7,
        ChaosSeed = 8,
        HazardTower = 9,
        MiniBoss = 10,
        SpawnPointTypeCount = 11,
    };
}
