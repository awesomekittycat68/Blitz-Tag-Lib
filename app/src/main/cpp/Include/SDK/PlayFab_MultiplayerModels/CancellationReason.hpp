#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace PlayFab_MultiplayerModels {
    enum class CancellationReason : int {
        Requested = 0,
        Internal = 1,
        Timeout = 2,
    };
}
