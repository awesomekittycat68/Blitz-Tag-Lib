#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Viveport {
    enum class UserStats_LeaderBoardRequestType : int {
        GlobalData = 0,
        GlobalDataAroundUser = 1,
        LocalData = 2,
        LocalDataAroundUser = 3,
    };
}
