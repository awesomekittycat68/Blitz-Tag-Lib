#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class BuilderPiece_State : int {
        None = -1,
        AttachedAndPlaced = 0,
        AttachedToDropped = 1,
        Grabbed = 2,
        Dropped = 3,
        OnShelf = 4,
        Displayed = 5,
        GrabbedLocal = 6,
        OnConveyor = 7,
        AttachedToArm = 8,
    };
}
