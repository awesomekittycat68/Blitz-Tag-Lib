#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class SuperInfectionManager_ClientToAuthorityRPC : int {
        CombinedTerminalButtonPress = 0,
        CombinedTerminalHandScan = 1,
        ResourceDepositDeposited = 2,
        CallEntityRPC = 3,
        CallEntityRPCData = 4,
    };
}
