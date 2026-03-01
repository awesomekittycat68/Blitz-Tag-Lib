#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTagScripts {
    enum class SubscriptionManager_SubscriptionTerm : int {
        MONTHLY = 0,
        QUARTERLY = 1,
        SEMIANNUAL = 2,
        ANNUAL = 3,
    };
}
