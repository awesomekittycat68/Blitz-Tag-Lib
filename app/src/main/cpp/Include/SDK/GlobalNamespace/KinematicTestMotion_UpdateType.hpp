#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class KinematicTestMotion_UpdateType : int {
        Update = 0,
        LateUpdate = 1,
        FixedUpdate = 2,
    };
}
