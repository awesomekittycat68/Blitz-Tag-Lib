#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class GRAbilitySummon_State : int {
        Charge = 0,
        Spawn = 1,
        Done = 2,
    };
}
