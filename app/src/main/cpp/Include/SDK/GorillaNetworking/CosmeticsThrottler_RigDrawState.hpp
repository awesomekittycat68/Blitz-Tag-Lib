#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaNetworking {
    enum class CosmeticsThrottler_RigDrawState : int {
        All = 0,
        Partial = 1,
        Min = 2,
        Startup = -1,
    };
}
