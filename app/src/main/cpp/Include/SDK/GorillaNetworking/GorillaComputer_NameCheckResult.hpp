#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaNetworking {
    enum class GorillaComputer_NameCheckResult : int {
        Success = 0,
        Warning = 1,
        Ban = 2,
    };
}
