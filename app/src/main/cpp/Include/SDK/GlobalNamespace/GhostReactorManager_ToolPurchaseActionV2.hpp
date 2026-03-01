#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class GhostReactorManager_ToolPurchaseActionV2 : int {
        RequestPurchaseAuthority = 0,
        SelectShelfAndItem = 1,
        NotifyPurchaseFail = 2,
        NotifyPurchaseSuccess = 3,
        RequestStationExclusivityAuthority = 4,
        SetToolStationActivePlayer = 5,
        SetHandleAndSelectionWheelPosition = 6,
        SetToolStationHackedDebug = 7,
    };
}
