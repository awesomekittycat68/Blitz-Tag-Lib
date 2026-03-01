#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class BuilderPieceInteractor_HandState : int {
        Invalid = -1,
        Empty = 0,
        Grabbed = 1,
        PotentialGrabbed = 2,
        WaitForGrabbed = 3,
        WaitingForSnap = 4,
        WaitingForUnSnap = 5,
    };
}
