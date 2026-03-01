#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class TriggerCondition : int {
        None = 0,
        TimeElapsed = 1,
        Proximity = 2,
    };
}
