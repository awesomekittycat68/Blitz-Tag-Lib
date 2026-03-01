#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTagScripts {
    enum class BuilderTable_TableState : int {
        WaitingForZoneAndRoom = 0,
        WaitingForInitalBuild = 1,
        ReceivingInitialBuild = 2,
        WaitForInitialBuildMaster = 3,
        WaitForMasterResync = 4,
        ReceivingMasterResync = 5,
        InitialBuild = 6,
        ExecuteQueuedCommands = 7,
        Ready = 8,
        BadData = 9,
        WaitingForSharedMapLoad = 10,
    };
}
