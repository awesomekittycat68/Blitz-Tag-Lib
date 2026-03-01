#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class GameAgentManager_RPC : int {
        ApplyDestination = 0,
        ApplyState = 1,
        ApplyBehaviour = 2,
        ApplyImpact = 3,
        ApplyTarget = 4,
    };
}
