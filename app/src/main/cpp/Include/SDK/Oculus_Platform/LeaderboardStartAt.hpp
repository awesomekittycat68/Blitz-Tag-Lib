#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Oculus_Platform {
    enum class LeaderboardStartAt : int {
        Top = 0,
        CenteredOnViewer = 1,
        CenteredOnViewerOrTop = 2,
        Unknown = 3,
    };
}
