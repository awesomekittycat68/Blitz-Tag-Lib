#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTagScripts {
    enum class BuilderTable_BuilderCommandType : int {
        Create = 0,
        Place = 1,
        Grab = 2,
        Drop = 3,
        Remove = 4,
        Paint = 5,
        Recycle = 6,
        ClaimPlot = 7,
        FreePlot = 8,
        CreateArmShelf = 9,
        PlayerLeftRoom = 10,
        FunctionalStateChange = 11,
        SetSelection = 12,
        Repel = 13,
    };
}
