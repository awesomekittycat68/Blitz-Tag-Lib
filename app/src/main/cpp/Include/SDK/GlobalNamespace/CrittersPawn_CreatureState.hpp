#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class CrittersPawn_CreatureState : int {
        Idle = 0,
        Eating = 1,
        AttractedTo = 2,
        Running = 3,
        Grabbed = 4,
        Sleeping = 5,
        SeekingFood = 6,
        Captured = 7,
        Stunned = 8,
        WaitingToDespawn = 9,
        Despawning = 10,
        Spawning = 11,
    };
}
