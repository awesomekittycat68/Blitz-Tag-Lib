#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Oculus_Platform {
    enum class LeaderboardFilterType : int {
        None = 0,
        Friends = 1,
        Unknown = 2,
        UserIds = 3,
    };
}
