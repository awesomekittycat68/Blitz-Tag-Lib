#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class GameStateFx_StateReaction_EOptions : int {
        Delay = 1,
        Sound = 2,
        GameObjects = 4,
        Behaviours = 8,
        Renderers = 16,
        Materials = 32,
    };
}
