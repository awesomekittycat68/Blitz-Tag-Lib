#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class SuperInfectionManager_AuthorityToClientRPC : int {
        TechPointGranted = 0,
        ResourceDepositTechPointGranted = 1,
        ResourceDepositTechPointRejected = 2,
        CallEntityRPC = 3,
        CallEntityRPCData = 4,
        TriggerMonkeIdolDepositCelebration = 5,
        StartUnderwaterFX = 6,
    };
}
