#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Viveport_Internal {
    enum class ELeaderboardDisplayType : int {
        k_ELeaderboardDisplayTypeNone = 0,
        k_ELeaderboardDisplayTypeNumeric = 1,
        k_ELeaderboardDisplayTypeTimeSeconds = 2,
        k_ELeaderboardDisplayTypeTimeMilliSeconds = 3,
    };
}
