#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace BoingKit {
    enum class BoingManager_UpdateMode : int {
        FixedUpdate = 0,
        EarlyUpdate = 1,
        LateUpdate = 2,
    };
}
