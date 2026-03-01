#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class ForceVolume_AudioState : int {
        None = 0,
        Enter = 1,
        Crescendo = 2,
        Loop = 3,
        Exit = 4,
    };
}
