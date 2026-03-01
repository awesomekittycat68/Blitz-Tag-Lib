#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class LckEntitlementsManager_FeatureState : int {
        Checking = 0,
        Enabled = 1,
        Disabled = 2,
    };
}
