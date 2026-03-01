#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace PlayFab_MultiplayerModels {
    enum class AttributeNotSpecifiedBehavior : int {
        UseDefault = 0,
        MatchAny = 1,
    };
}
