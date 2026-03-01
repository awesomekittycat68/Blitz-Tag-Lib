#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class ThrowableBugBeaconActivation_ActivationMode : int {
        CALL = 0,
        DISMISS = 1,
        LOCK = 2,
    };
}
