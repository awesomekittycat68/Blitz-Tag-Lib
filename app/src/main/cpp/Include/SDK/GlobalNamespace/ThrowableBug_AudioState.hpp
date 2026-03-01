#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class ThrowableBug_AudioState : int {
        JustGrabbed = 0,
        ContinuallyGrabbed = 1,
        JustReleased = 2,
        NotHeld = 3,
    };
}
