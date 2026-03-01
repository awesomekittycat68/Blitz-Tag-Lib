#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class GhostReactorManager_ToolPurchaseStationResponse : int {
        SelectionUpdate = 0,
        PurchaseSucceeded = 1,
        PurchaseFailed = 2,
    };
}
