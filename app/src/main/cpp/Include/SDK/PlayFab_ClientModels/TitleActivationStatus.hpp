#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace PlayFab_ClientModels {
    enum class TitleActivationStatus : int {
        None = 0,
        ActivatedTitleKey = 1,
        PendingSteam = 2,
        ActivatedSteam = 3,
        RevokedSteam = 4,
    };
}
