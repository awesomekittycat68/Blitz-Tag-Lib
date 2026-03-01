#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class NetworkingState : int {
        IsOwner = 0,
        IsBlindClient = 1,
        IsClient = 2,
        ForcefullyTakingOver = 3,
        RequestingOwnership = 4,
        RequestingOwnershipWaitingForSight = 5,
        ForcefullyTakingOverWaitingForSight = 6,
    };
}
