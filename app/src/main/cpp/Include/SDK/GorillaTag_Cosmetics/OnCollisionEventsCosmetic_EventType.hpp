#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTag_Cosmetics {
    enum class OnCollisionEventsCosmetic_EventType : int {
        CollisionEnter = 0,
        CollisionStay = 1,
        CollisionExit = 2,
    };
}
