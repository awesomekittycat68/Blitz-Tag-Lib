#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class GRPlayer_GRPlayerState : int {
        Alive = 0,
        Ghost = 1,
        Shielded = 2,
    };
}
