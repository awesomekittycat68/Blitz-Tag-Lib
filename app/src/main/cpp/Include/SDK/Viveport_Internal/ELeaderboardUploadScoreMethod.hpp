#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Viveport_Internal {
    enum class ELeaderboardUploadScoreMethod : int {
        k_ELeaderboardUploadScoreMethodNone = 0,
        k_ELeaderboardUploadScoreMethodKeepBest = 1,
        k_ELeaderboardUploadScoreMethodForceUpdate = 2,
    };
}
