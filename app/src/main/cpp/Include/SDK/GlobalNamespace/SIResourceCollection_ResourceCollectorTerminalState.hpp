#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class SIResourceCollection_ResourceCollectorTerminalState : int {
        WaitingForScan = 0,
        CurrentResources = 1,
        HelpScreen = 2,
        PurchaseRemote = 3,
        PurchaseStart = 4,
        PurchaseInProgress = 5,
        PurchaseSuccess = 6,
        PurchaseFailure = 7,
    };
}
