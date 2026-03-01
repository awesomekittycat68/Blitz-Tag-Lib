#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class SIGadgetSlashDash_EState : int {
        Idle = 0,
        TriggerPressHold = 1,
        DashUsed = 2,
        Count = 3,
    };
}
