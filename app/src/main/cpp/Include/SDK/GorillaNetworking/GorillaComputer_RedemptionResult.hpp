#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaNetworking {
    enum class GorillaComputer_RedemptionResult : int {
        Empty = 0,
        Invalid = 1,
        Checking = 2,
        AlreadyUsed = 3,
        TooEarly = 4,
        TooLate = 5,
        Success = 6,
    };
}
