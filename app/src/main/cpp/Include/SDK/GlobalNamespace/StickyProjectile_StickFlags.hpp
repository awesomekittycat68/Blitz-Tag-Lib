#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class StickyProjectile_StickFlags : int {
        Wall = 1,
        LocalPlayer = 2,
        RemotePlayer = 4,
        LocalHeadZone = 8,
        RemoteHeadZone = 16,
    };
}
