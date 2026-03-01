#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Viveport_Internal {
    enum class ESubscriptionTransactionType : int {
        UNKNOWN = 0,
        PAID = 1,
        REDEEM = 2,
        FREEE_TRIAL = 3,
    };
}
