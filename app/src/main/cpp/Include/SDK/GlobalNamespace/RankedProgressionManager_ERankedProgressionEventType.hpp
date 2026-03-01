#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class RankedProgressionManager_ERankedProgressionEventType : int {
        None = 0,
        Progress = 1,
        Promotion = 2,
        Relegation = 3,
    };
}
