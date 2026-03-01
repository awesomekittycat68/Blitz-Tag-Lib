#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class EControllerInputPressFlags : int {
        None = 0,
        Index = 1,
        Grip = 2,
        Primary = 4,
        Secondary = 8,
    };
}
