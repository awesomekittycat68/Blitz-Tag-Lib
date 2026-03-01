#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class HeldItemButtonMode : int {
        OneShot = 0,
        ResetAfterDelay = 1,
        Toggle = 2,
    };
}
