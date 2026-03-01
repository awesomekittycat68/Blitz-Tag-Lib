#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class ProgressionManager_RequestType : int {
        GetProgression = 0,
        SetProgression = 1,
        UnlockProgressionTreeNode = 2,
        IncrementSIResource = 3,
        CompleteSIQuest = 4,
        CompleteSIBonus = 5,
        CollectSIIdol = 6,
        GetActiveSIQuests = 7,
        GetSIQuestsStatus = 8,
        ResetSIQuestsStatus = 9,
        PurchaseTechPoints = 10,
        PurchaseResources = 11,
        PurchaseShiftCreditCapIncrease = 12,
        PurchaseShiftCredit = 13,
        RegisterToGRShift = 14,
        GetJuicerStatus = 15,
        DepositCore = 16,
        PurchaseOverdrive = 17,
        GetShiftCredit = 18,
        SubtractShiftCredit = 19,
        AdvanceDockWristUpgrade = 20,
        GetDockWristUpgradeStatus = 21,
        PurchaseDrillUpgrade = 22,
        RecycleTool = 23,
        StartOfShift = 24,
        EndOfShiftReward = 25,
        GetGhostReactorStats = 26,
        GetGhostReactorInventory = 27,
        SetGhostReactorInventory = 28,
    };
}
