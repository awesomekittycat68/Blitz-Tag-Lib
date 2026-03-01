#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class ArcadeButtons : int {
        GRAB = 1,
        UP = 2,
        DOWN = 4,
        LEFT = 8,
        RIGHT = 16,
        B0 = 32,
        B1 = 64,
        TRIGGER = 128,
    };
}
