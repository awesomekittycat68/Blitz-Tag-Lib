#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTagScripts {
    enum class PlayerTimerManager_RPC : int {
        InitTimersMaster = 0,
        ToggleTimerMaster = 1,
        Count = 2,
    };
}
