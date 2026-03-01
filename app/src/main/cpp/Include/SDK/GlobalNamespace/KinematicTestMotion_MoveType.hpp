#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class KinematicTestMotion_MoveType : int {
        TransformPosition = 0,
        RigidbodyMovePosition = 1,
    };
}
