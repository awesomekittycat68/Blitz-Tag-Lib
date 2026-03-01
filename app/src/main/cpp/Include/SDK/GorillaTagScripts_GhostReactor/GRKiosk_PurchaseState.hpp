#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTagScripts_GhostReactor {
    enum class GRKiosk_PurchaseState : int {
        Initialize = 0,
        AlreadyOwned = 1,
        AvailableForPurchase = 2,
        CheckoutPressed = 3,
        CheckoutConfirmation = 4,
    };
}
