#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Viveport {
    enum class UserStats_LeaderBoardScoreMethod : int {
        None = 0,
        KeepBest = 1,
        ForceUpdate = 2,
    };
}
