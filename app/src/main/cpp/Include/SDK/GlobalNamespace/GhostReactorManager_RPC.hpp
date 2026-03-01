#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class GhostReactorManager_RPC : int {
        ApplyCollectItem = 0,
        ApplyChargeTool = 1,
        ApplyDepositCurrency = 2,
        ApplyPlayerRevived = 3,
        GrantPlayerShield = 4,
        RequestFireProjectile = 5,
        ApplyShiftStart = 6,
        ApplyShiftEnd = 7,
        ToolPurchaseResponse = 8,
        ApplyBreakableBroken = 9,
        EntityEnteredDropZone = 10,
        PromotionBotResponse = 11,
        DistillItem = 12,
        ApplySentientCoreDestination = 13,
        Handprint = 14,
        ApplyRecycleItem = 15,
        ApplRecycleScanItem = 16,
        SeedExtractorAction = 17,
        ToolUpgradeStationAction = 18,
        SendMothershipId = 19,
        RefreshShiftCredit = 20,
    };
}
