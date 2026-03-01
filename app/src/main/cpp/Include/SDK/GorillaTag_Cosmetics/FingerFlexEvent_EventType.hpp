#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTag_Cosmetics {
    enum class FingerFlexEvent_EventType : int {
        OnFingerFlexed = 0,
        OnFingerReleased = 1,
        OnFingerFlexStayed = 2,
    };
}
