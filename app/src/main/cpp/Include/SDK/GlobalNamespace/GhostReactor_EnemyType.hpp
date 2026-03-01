#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class GhostReactor_EnemyType : int {
        Chaser = 0,
        Ranged = 1,
        Phantom = 2,
        Environment = 3,
        CustomMapsEnemy = 4,
    };
}
