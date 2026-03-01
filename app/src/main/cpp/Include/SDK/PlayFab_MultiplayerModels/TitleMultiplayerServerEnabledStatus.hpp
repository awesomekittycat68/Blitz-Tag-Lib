#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace PlayFab_MultiplayerModels {
    enum class TitleMultiplayerServerEnabledStatus : int {
        Initializing = 0,
        Enabled = 1,
        Disabled = 2,
    };
}
