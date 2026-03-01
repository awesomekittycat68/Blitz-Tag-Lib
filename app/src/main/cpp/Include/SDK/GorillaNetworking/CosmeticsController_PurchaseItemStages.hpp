#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaNetworking {
    enum class CosmeticsController_PurchaseItemStages : int {
        Start = 0,
        CheckoutButtonPressed = 1,
        ItemSelected = 2,
        ItemOwned = 3,
        FinalPurchaseAcknowledgement = 4,
        Buying = 5,
        Success = 6,
        Failure = 7,
    };
}
