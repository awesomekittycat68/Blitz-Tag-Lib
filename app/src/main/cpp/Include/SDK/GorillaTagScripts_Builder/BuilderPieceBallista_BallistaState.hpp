#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTagScripts_Builder {
    enum class BuilderPieceBallista_BallistaState : int {
        Idle = 0,
        Loading = 1,
        WaitingForTrigger = 2,
        PlayerInTrigger = 3,
        PrepareForLaunch = 4,
        PrepareForLaunchLocal = 5,
        Launching = 6,
        LaunchingLocal = 7,
        Count = 8,
    };
}
