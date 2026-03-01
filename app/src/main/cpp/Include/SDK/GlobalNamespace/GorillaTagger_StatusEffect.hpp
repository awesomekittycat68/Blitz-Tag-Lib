#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class GorillaTagger_StatusEffect : int {
        None = 0,
        Frozen = 1,
        Slowed = 2,
        Dead = 3,
        Infected = 4,
        It = 5,
    };
}
