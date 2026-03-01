#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class SITechTreeStation_TechTreeStationTerminalState : int {
        WaitingForScan = 0,
        TechTreePagesList = 1,
        TechTreePage = 2,
        TechTreeNodePopup = 3,
        HelpScreen = 4,
    };
}
