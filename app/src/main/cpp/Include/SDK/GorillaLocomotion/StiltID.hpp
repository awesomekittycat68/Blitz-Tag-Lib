#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaLocomotion {
    enum class StiltID : int {
        None = -1,
        Held_Left = 0,
        Held_Right = 1,
        Snapped_Left = 2,
        Snapped_Right = 3,
        Held_Left2 = 4,
        Held_Left3 = 5,
        Snapped_Left2 = 6,
        Snapped_Left3 = 7,
        Held_Right2 = 8,
        Held_Right3 = 9,
        Snapped_Right2 = 10,
        Snapped_Right3 = 11,
        _COUNT = 12,
    };
}
