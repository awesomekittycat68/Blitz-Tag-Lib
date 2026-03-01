#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTagScripts_Subscription {
    enum class SubscriptionKiosk_PurchaseResult : int {
        Success = 0,
        Failure = 1,
        Cancel = 2,
    };
}
