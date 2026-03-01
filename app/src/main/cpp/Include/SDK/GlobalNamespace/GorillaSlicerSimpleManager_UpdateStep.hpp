#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class GorillaSlicerSimpleManager_UpdateStep : int {
        FixedUpdate = 0,
        Update = 1,
        LateUpdate = 2,
    };
}
