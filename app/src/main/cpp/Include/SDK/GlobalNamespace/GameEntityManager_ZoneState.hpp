#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class GameEntityManager_ZoneState : int {
        WaitingToEnterZone = 0,
        WaitingToRequestState = 1,
        WaitingForState = 2,
        Active = 3,
    };
}
