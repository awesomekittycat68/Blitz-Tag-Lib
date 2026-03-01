#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Viveport_Internal {
    enum class ELeaderboardDataRequest : int {
        k_ELeaderboardDataRequestGlobal = 0,
        k_ELeaderboardDataRequestGlobalAroundUser = 1,
        k_ELeaderboardDataRequestLocal = 2,
        k_ELeaderboardDataRequestLocaleAroundUser = 3,
    };
}
