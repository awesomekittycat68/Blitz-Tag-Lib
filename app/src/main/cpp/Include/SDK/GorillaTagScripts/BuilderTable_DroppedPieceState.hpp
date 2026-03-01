#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTagScripts {
    enum class BuilderTable_DroppedPieceState : int {
        None = -1,
        Light = 0,
        Heavy = 1,
        Frozen = 2,
    };
}
