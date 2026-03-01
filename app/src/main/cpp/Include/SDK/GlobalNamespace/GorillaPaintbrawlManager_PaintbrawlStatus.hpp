#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class GorillaPaintbrawlManager_PaintbrawlStatus : int {
        RedTeam = 1,
        BlueTeam = 2,
        Normal = 4,
        Hit = 8,
        Stunned = 16,
        Grace = 32,
        Eliminated = 64,
        None = 0,
    };
}
