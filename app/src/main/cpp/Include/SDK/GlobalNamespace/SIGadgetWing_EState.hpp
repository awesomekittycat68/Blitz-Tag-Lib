#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class SIGadgetWing_EState : int {
        Idle = 0,
        TriggerPressed = 1,
        Count = 2,
    };
}
