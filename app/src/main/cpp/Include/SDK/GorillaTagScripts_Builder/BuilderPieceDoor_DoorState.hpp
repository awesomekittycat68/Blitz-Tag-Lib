#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTagScripts_Builder {
    enum class BuilderPieceDoor_DoorState : int {
        Closed = 0,
        Closing = 1,
        Open = 2,
        Opening = 3,
        HeldOpen = 4,
    };
}
