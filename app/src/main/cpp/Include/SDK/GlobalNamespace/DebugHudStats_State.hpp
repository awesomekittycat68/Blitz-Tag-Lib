#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class DebugHudStats_State : int {
        Inactive = 0,
        Active = 1,
        ShowLog = 2,
        ShowError = 3,
        ShowStats = 4,
        ShowRBs = 5,
        timeAdjust = 6,
    };
}
