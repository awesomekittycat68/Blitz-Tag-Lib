#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class BuilderActionType : int {
        AttachToPlayer = 0,
        DetachFromPlayer = 1,
        AttachToPiece = 2,
        DetachFromPiece = 3,
        MakePieceRoot = 4,
        DropPiece = 5,
        AttachToShelf = 6,
    };
}
