#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class GhostReactorSoak_State : int {
        Disconnected = 0,
        Connecting = 1,
        Active = 2,
    };
}
