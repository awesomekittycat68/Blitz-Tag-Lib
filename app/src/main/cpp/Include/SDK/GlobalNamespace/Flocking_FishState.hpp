#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class Flocking_FishState : int {
        flock = 0,
        patrol = 1,
        followFood = 2,
    };
}
