#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTagScripts_Builder {
    enum class BuilderPieceDoorSwinging_SwingingDoorState : int {
        Closed = 0,
        ClosingOut = 1,
        OpenOut = 2,
        OpeningOut = 3,
        HeldOpenOut = 4,
        ClosingIn = 5,
        OpenIn = 6,
        OpeningIn = 7,
        HeldOpenIn = 8,
    };
}
