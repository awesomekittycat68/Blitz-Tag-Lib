#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTag_Cosmetics {
    enum class RCVehicle_State : int {
        Disabled = 0,
        DockedLeft = 1,
        DockedRight = 2,
        Mobilized = 3,
        Crashed = 4,
    };
}
