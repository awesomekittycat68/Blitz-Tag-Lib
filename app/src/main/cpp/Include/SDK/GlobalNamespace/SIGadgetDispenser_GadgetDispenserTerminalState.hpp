#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class SIGadgetDispenser_GadgetDispenserTerminalState : int {
        WaitingForScan = 0,
        GadgetType = 1,
        GadgetList = 2,
        GadgetInformation = 3,
        GadgetDispensed = 4,
        HelpScreen = 5,
    };
}
