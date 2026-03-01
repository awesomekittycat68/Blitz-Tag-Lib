#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Viveport {
    enum class SubscriptionStatus_TransactionType : int {
        Unknown = 0,
        Paid = 1,
        Redeem = 2,
        FreeTrial = 3,
    };
}
