#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class GRSentientCore_SentientCoreState : int {
        Asleep = 0,
        Awake = 1,
        JumpInitiated = 2,
        JumpAnticipation = 3,
        Jumping = 4,
        Held = 5,
        HeldAlert = 6,
        AttachedToPlayer = 7,
        Dropped = 8,
    };
}
