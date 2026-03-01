#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GRTool_GRToolType.hpp"
#include "GRToolProgressionManager_EmployeeMetadata.hpp"
#include "GRToolProgressionManager_ToolParts.hpp"
#include "GRToolProgressionTree_EmployeeLevelRequirement.hpp"
#include "MonoBehaviourTick.hpp"
#include "ProgressionManager_DrillUpgradeLevel.hpp"

namespace GlobalNamespace {
    struct GRToolProgressionManager : ::GlobalNamespace::MonoBehaviourTick {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GRToolProgressionManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void add_OnProgressionUpdated(::BNM::Structures::Mono::Action<>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnProgressionUpdated"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnProgressionUpdated(::BNM::Structures::Mono::Action<>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnProgressionUpdated"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        ::BNM::Structures::Mono::Dictionary<::GlobalNamespace::GRToolProgressionTree_EmployeeLevelRequirement, ::GlobalNamespace::GRToolProgressionManager_EmployeeMetadata>* GetEmployeeLevelMetadata() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::GRToolProgressionTree_EmployeeLevelRequirement, ::GlobalNamespace::GRToolProgressionManager_EmployeeMetadata>*> _field = GetClass().GetField(O("employeeLevelMetadata"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<>* GetOnProgressionUpdated() {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnProgressionUpdated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::GlobalNamespace::GRToolProgressionManager_ToolParts, ::GlobalNamespace::GRToolProgressionManager_ToolProgressionMetaData*>* GetPartMetadata() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::GRToolProgressionManager_ToolParts, ::GlobalNamespace::GRToolProgressionManager_ToolProgressionMetaData*>*> _field = GetClass().GetField(O("partMetadata"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetPendingTreeToProcess() {
            static BNM::Field<bool> _field = GetClass().GetField(O("pendingTreeToProcess"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetPendingUpdateInventory() {
            static BNM::Field<bool> _field = GetClass().GetField(O("pendingUpdateInventory"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GhostReactor* GetReactor() {
            static BNM::Field<::GlobalNamespace::GhostReactor*> _field = GetClass().GetField(O("reactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GRResearchStation*>* GetResearchStations() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GRResearchStation*>*> _field = GetClass().GetField(O("researchStations"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetSendUpdate() {
            static BNM::Field<bool> _field = GetClass().GetField(O("sendUpdate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRToolProgressionTree* GetToolProgressionTree() {
            static BNM::Field<::GlobalNamespace::GRToolProgressionTree*> _field = GetClass().GetField(O("toolProgressionTree"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GRToolUpgradeStation*>* GetToolUpgradeStations() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GRToolUpgradeStation*>*> _field = GetClass().GetField(O("toolUpgradeStations"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetEmployeeLevelMetadata(::BNM::Structures::Mono::Dictionary<::GlobalNamespace::GRToolProgressionTree_EmployeeLevelRequirement, ::GlobalNamespace::GRToolProgressionManager_EmployeeMetadata>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::GRToolProgressionTree_EmployeeLevelRequirement, ::GlobalNamespace::GRToolProgressionManager_EmployeeMetadata>*> _field = GetClass().GetField(O("employeeLevelMetadata"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnProgressionUpdated(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnProgressionUpdated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPartMetadata(::BNM::Structures::Mono::Dictionary<::GlobalNamespace::GRToolProgressionManager_ToolParts, ::GlobalNamespace::GRToolProgressionManager_ToolProgressionMetaData*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::GRToolProgressionManager_ToolParts, ::GlobalNamespace::GRToolProgressionManager_ToolProgressionMetaData*>*> _field = GetClass().GetField(O("partMetadata"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPendingTreeToProcess(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("pendingTreeToProcess"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPendingUpdateInventory(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("pendingUpdateInventory"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReactor(::GlobalNamespace::GhostReactor* value) {
            static BNM::Field<::GlobalNamespace::GhostReactor*> _field = GetClass().GetField(O("reactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetResearchStations(::BNM::Structures::Mono::List<::GlobalNamespace::GRResearchStation*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GRResearchStation*>*> _field = GetClass().GetField(O("researchStations"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSendUpdate(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("sendUpdate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetToolProgressionTree(::GlobalNamespace::GRToolProgressionTree* value) {
            static BNM::Field<::GlobalNamespace::GRToolProgressionTree*> _field = GetClass().GetField(O("toolProgressionTree"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetToolUpgradeStations(::BNM::Structures::Mono::List<::GlobalNamespace::GRToolUpgradeStation*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GRToolUpgradeStation*>*> _field = GetClass().GetField(O("toolUpgradeStations"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void add_OnProgressionUpdated_1(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnProgressionUpdated"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void AttemptToUnlockPart(::GlobalNamespace::GRToolProgressionManager_ToolParts part) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AttemptToUnlockPart"), {"part"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(part);
        }
        ::GlobalNamespace::GRToolProgressionTree_EmployeeLevelRequirement GetCurrentEmployeeLevel() {
            static BNM::Method<::GlobalNamespace::GRToolProgressionTree_EmployeeLevelRequirement> _m = GetClass().GetMethod(O("GetCurrentEmployeeLevel"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::ProgressionManager_DrillUpgradeLevel GetDrillLevel() {
            static BNM::Method<::GlobalNamespace::ProgressionManager_DrillUpgradeLevel> _m = GetClass().GetMethod(O("GetDrillLevel"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int GetDropPodChasisLevel() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetDropPodChasisLevel"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int GetDropPodLevel() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetDropPodLevel"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* GetEmployeeLevelDisplayName(::GlobalNamespace::GRToolProgressionTree_EmployeeLevelRequirement employeeLevel) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetEmployeeLevelDisplayName"), {"employeeLevel"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(employeeLevel);
        }
        int GetJuiceCostForDrillUpgrade(::GlobalNamespace::ProgressionManager_DrillUpgradeLevel upgradeLevel) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetJuiceCostForDrillUpgrade"), {"upgradeLevel"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(upgradeLevel);
        }
        int GetNumberOfResearchPoints() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetNumberOfResearchPoints"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::GRToolProgressionManager_ToolProgressionMetaData* GetPartMetadata_1(::GlobalNamespace::GRToolProgressionManager_ToolParts part) {
            static BNM::Method<::GlobalNamespace::GRToolProgressionManager_ToolProgressionMetaData*> _m = GetClass().GetMethod(O("GetPartMetadata"), {"part"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(part);
        }
        bool GetPartUnlockEmployeeRequiredLevel(::GlobalNamespace::GRToolProgressionManager_ToolParts part, ::GlobalNamespace::GRToolProgressionTree_EmployeeLevelRequirement& level) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("GetPartUnlockEmployeeRequiredLevel"), {"part", "level"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(part, &level);
        }
        bool GetPartUnlockJuiceCost(::GlobalNamespace::GRToolProgressionManager_ToolParts part, int& juiceCost) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("GetPartUnlockJuiceCost"), {"part", "juiceCost"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(part, &juiceCost);
        }
        bool GetPartUnlockRequiredParentParts(::GlobalNamespace::GRToolProgressionManager_ToolParts part, ::BNM::IL2CPP::Il2CppObject*& requiredParts) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("GetPartUnlockRequiredParentParts"), {"part", "requiredParts"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(part, &requiredParts);
        }
        bool GetPlayerShiftCredit(int& playerShiftCredit) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("GetPlayerShiftCredit"), {"playerShiftCredit"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(&playerShiftCredit);
        }
        int GetRecycleShiftCredit(::GlobalNamespace::GRTool_GRToolType tool) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetRecycleShiftCredit"), {"tool"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(tool);
        }
        int GetRequiredEmployeeLevel(::GlobalNamespace::GRToolProgressionTree_EmployeeLevelRequirement employeeLevel) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetRequiredEmployeeLevel"), {"employeeLevel"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(employeeLevel);
        }
        bool GetShiftCreditCost(::GlobalNamespace::GRToolProgressionManager_ToolParts part, int& shiftCreditCost) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("GetShiftCreditCost"), {"part", "shiftCreditCost"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(part, &shiftCreditCost);
        }
        int GetSRCostForDrillUpgradeLevel(::GlobalNamespace::ProgressionManager_DrillUpgradeLevel level) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetSRCostForDrillUpgradeLevel"), {"level"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(level);
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GRTool_GRToolType>* GetSupportedTools() {
            static BNM::Method<::BNM::Structures::Mono::List<::GlobalNamespace::GRTool_GRToolType>*> _m = GetClass().GetMethod(O("GetSupportedTools"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*>* GetToolUpgrades(::GlobalNamespace::GRTool_GRToolType tool) {
            static BNM::Method<::BNM::Structures::Mono::List<::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*>*> _m = GetClass().GetMethod(O("GetToolUpgrades"), {"tool"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(tool);
        }
        ::BNM::Structures::Mono::String* GetTreeId() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetTreeId"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void Init(::GlobalNamespace::GhostReactor* ghostReactor) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Init"), {"ghostReactor"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(ghostReactor);
        }
        bool IsPartUnlocked(::GlobalNamespace::GRToolProgressionManager_ToolParts part, bool& unlocked) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsPartUnlocked"), {"part", "unlocked"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(part, &unlocked);
        }
        void NodeUnlocked() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("NodeUnlocked"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PopulateClubPartMetadata() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PopulateClubPartMetadata"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PopulateCollectorPartMetadata() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PopulateCollectorPartMetadata"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PopulateDirectionalShieldPartMetadata() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PopulateDirectionalShieldPartMetadata"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PopulateDockWristPartMetadata() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PopulateDockWristPartMetadata"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PopulateDropPodPartMetadata() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PopulateDropPodPartMetadata"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PopulateEmployeeLevelMetadata() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PopulateEmployeeLevelMetadata"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PopulateEnergyEfficiencyPartMetadata() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PopulateEnergyEfficiencyPartMetadata"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PopulateFlashPartMetadata() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PopulateFlashPartMetadata"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PopulateHocketStickMetadata() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PopulateHocketStickMetadata"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PopulateLanternPartMetadata() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PopulateLanternPartMetadata"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PopulateRevivePartMetadata() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PopulateRevivePartMetadata"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PopulateShieldGunPartMetadata() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PopulateShieldGunPartMetadata"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PopulateToolPartMetadata() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PopulateToolPartMetadata"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void remove_OnProgressionUpdated_1(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnProgressionUpdated"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SendMothershipUpdated() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendMothershipUpdated"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetPendingTreeToProcess_1() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetPendingTreeToProcess"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Tick() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Tick"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateInventory() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateInventory"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
