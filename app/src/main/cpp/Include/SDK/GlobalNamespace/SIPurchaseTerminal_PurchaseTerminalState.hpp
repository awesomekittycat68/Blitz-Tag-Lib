#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class SIPurchaseTerminal_PurchaseTerminalState : int {
        PurchaseAmountSelection = 0,
        ConfirmPurchasePopup = 1,
        PendingPurchasePopup = 2,
        PurchaseCompletePopup = 3,
        InsufficientFundsPopup = 4,
        UnableToCompletePurchasePopup = 5,
    };
}
