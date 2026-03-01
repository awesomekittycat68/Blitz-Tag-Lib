#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class WarningButtonResult : int {
        None = 0,
        CloseWarning = 1,
        Continue = 2,
        OptIn = 3,
    };
}
