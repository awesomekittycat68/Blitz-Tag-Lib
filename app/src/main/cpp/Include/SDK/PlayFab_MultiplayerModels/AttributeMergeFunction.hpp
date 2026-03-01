#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace PlayFab_MultiplayerModels {
    enum class AttributeMergeFunction : int {
        Min = 0,
        Max = 1,
        Average = 2,
    };
}
