#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class MonkeyeAI_ReplState_EStates : int {
        Sleeping = 0,
        Patrolling = 1,
        Chasing = 2,
        ReturnToSleepPt = 3,
        GoToSleep = 4,
        BeginAttack = 5,
        OpenFloor = 6,
        DropPlayer = 7,
        CloseFloor = 8,
    };
}
