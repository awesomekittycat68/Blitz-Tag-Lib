#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTagScripts_Builder {
    enum class SharedBlocksTerminal_ScreenType : int {
        NO_DRIVER = 0,
        SEARCH = 1,
        LOADING = 2,
        ERROR = 3,
        SCAN_INFO = 4,
        OTHER_DRIVER = 5,
    };
}
