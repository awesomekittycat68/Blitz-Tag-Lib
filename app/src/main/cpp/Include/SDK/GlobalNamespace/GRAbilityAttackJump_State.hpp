#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class GRAbilityAttackJump_State : int {
        Tell = 0,
        Jump = 1,
        Return = 2,
        Done = 3,
    };
}
