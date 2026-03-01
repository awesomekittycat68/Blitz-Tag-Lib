#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace PlayFab_ClientModels {
    enum class MatchmakeStatus : int {
        Complete = 0,
        Waiting = 1,
        GameNotFound = 2,
        NoAvailableSlots = 3,
        SessionClosed = 4,
    };
}
