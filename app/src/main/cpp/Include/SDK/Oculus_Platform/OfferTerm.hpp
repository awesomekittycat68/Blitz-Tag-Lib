#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Oculus_Platform {
    enum class OfferTerm : int {
        Unknown = 0,
        WEEKLY = 1,
        BIWEEKLY = 2,
        MONTHLY = 3,
        QUARTERLY = 4,
        SEMIANNUAL = 5,
        ANNUAL = 6,
        BIANNUAL = 7,
    };
}
