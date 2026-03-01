#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class RoomSystem_StatusEffects : int {
        TaggedTime = 0,
        JoinedTaggedTime = 1,
        SetSlowedTime = 2,
        UnTagged = 3,
        FrozenTime = 4,
    };
}
