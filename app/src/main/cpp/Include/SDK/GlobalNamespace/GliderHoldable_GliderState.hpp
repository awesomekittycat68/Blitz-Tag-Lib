#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class GliderHoldable_GliderState : int {
        LocallyHeld = 0,
        LocallyDropped = 1,
        RemoteSyncing = 2,
    };
}
