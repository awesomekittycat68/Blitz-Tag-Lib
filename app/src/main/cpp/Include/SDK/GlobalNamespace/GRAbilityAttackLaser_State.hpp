#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class GRAbilityAttackLaser_State : int {
        Tell = 0,
        Attack = 1,
        FollowThrough = 2,
        Done = 3,
    };
}
