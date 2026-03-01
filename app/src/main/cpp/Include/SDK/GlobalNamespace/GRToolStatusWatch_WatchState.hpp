#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class GRToolStatusWatch_WatchState : int {
        Dropped = 0,
        SnappedLocal = 1,
        SnappedRemote = 2,
    };
}
