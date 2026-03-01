#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class GhostReactorShiftManager_State : int {
        WaitingForConnect = 0,
        WaitingForShiftStart = 1,
        WaitingForFirstShiftStart = 2,
        ReadyForShift = 3,
        ShiftActive = 4,
        PostShift = 5,
        PreparingToDrill = 6,
        Drilling = 7,
    };
}
