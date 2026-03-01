#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Viveport_Internal {
    enum class ELeaderboardDataTimeRange : int {
        k_ELeaderboardDataScropeAllTime = 0,
        k_ELeaderboardDataScropeDaily = 1,
        k_ELeaderboardDataScropeWeekly = 2,
        k_ELeaderboardDataScropeMonthly = 3,
    };
}
