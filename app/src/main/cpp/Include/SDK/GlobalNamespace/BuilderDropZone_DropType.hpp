#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class BuilderDropZone_DropType : int {
        Invalid = -1,
        Repel = 0,
        ReturnToShelf = 1,
        BreakApart = 2,
        Recycle = 3,
    };
}
