#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class GRFirstTimeUserExperience_TransitionState : int {
        Waiting = 0,
        Flicker = 1,
        Logo = 2,
        ZoneLoad = 3,
        Teleport = 4,
        Exit = 5,
    };
}
