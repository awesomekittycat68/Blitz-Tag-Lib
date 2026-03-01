#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTagScripts_Builder {
    enum class SharedBlocksTerminal_TerminalState : int {
        NoStatus = 0,
        Searching = 1,
        NotFound = 2,
        Found = 3,
        Loading = 4,
        LoadSuccess = 5,
        LoadFail = 6,
    };
}
