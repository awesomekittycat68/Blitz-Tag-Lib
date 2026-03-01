#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GRTool_GRToolType.hpp"
#include "GRToolProgressionManager_ToolParts.hpp"
#include "GRToolProgressionTree_EmployeeLevelRequirement.hpp"

namespace GlobalNamespace {
    struct GRToolProgressionTree : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GRToolProgressionTree");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::String* GetAutoUnlockNodeId() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("autoUnlockNodeId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRToolProgressionTree_EmployeeLevelRequirement GetCurrentEmploymentLevel() {
            static BNM::Field<::GlobalNamespace::GRToolProgressionTree_EmployeeLevelRequirement> _field = GetClass().GetField(O("currentEmploymentLevel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCurrentResearchPoints() {
            static BNM::Field<int> _field = GetClass().GetField(O("currentResearchPoints"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetFullTimeEntitlement() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("fullTimeEntitlement"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetInternEntitlement() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("internEntitlement"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRToolProgressionManager* GetManager() {
            static BNM::Field<::GlobalNamespace::GRToolProgressionManager*> _field = GetClass().GetField(O("manager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::GlobalNamespace::GRToolProgressionTree_GRToolProgressionRawNode*>* GetNodeTree() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::GlobalNamespace::GRToolProgressionTree_GRToolProgressionRawNode*>*> _field = GetClass().GetField(O("nodeTree"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::GlobalNamespace::GRToolProgressionManager_ToolParts>* GetPartMapping() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::GlobalNamespace::GRToolProgressionManager_ToolParts>*> _field = GetClass().GetField(O("partMapping"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetPartTimeEntitlement() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("partTimeEntitlement"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::GlobalNamespace::GRToolProgressionManager_ToolParts, ::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*>* GetPartTree() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::GRToolProgressionManager_ToolParts, ::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*>*> _field = GetClass().GetField(O("partTree"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRToolProgressionManager_ToolParts GetPendingPartUnlock() {
            static BNM::Field<::GlobalNamespace::GRToolProgressionManager_ToolParts> _field = GetClass().GetField(O("pendingPartUnlock"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GhostReactor* GetReactor() {
            static BNM::Field<::GlobalNamespace::GhostReactor*> _field = GetClass().GetField(O("reactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetResearchPointsEntitlement() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("researchPointsEntitlement"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::GlobalNamespace::GRTool_GRToolType>* GetToolMapping() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::GlobalNamespace::GRTool_GRToolType>*> _field = GetClass().GetField(O("toolMapping"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::GlobalNamespace::GRTool_GRToolType, ::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*>* GetToolTree() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::GRTool_GRToolType, ::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*>*> _field = GetClass().GetField(O("toolTree"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetTreeId() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("treeId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetTreeName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("treeName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAutoUnlockNodeId(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("autoUnlockNodeId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentEmploymentLevel(::GlobalNamespace::GRToolProgressionTree_EmployeeLevelRequirement value) {
            static BNM::Field<::GlobalNamespace::GRToolProgressionTree_EmployeeLevelRequirement> _field = GetClass().GetField(O("currentEmploymentLevel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentResearchPoints(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("currentResearchPoints"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFullTimeEntitlement(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("fullTimeEntitlement"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInternEntitlement(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("internEntitlement"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetManager(::GlobalNamespace::GRToolProgressionManager* value) {
            static BNM::Field<::GlobalNamespace::GRToolProgressionManager*> _field = GetClass().GetField(O("manager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNodeTree(::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::GlobalNamespace::GRToolProgressionTree_GRToolProgressionRawNode*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::GlobalNamespace::GRToolProgressionTree_GRToolProgressionRawNode*>*> _field = GetClass().GetField(O("nodeTree"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPartMapping(::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::GlobalNamespace::GRToolProgressionManager_ToolParts>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::GlobalNamespace::GRToolProgressionManager_ToolParts>*> _field = GetClass().GetField(O("partMapping"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPartTimeEntitlement(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("partTimeEntitlement"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPartTree(::BNM::Structures::Mono::Dictionary<::GlobalNamespace::GRToolProgressionManager_ToolParts, ::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::GRToolProgressionManager_ToolParts, ::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*>*> _field = GetClass().GetField(O("partTree"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPendingPartUnlock(::GlobalNamespace::GRToolProgressionManager_ToolParts value) {
            static BNM::Field<::GlobalNamespace::GRToolProgressionManager_ToolParts> _field = GetClass().GetField(O("pendingPartUnlock"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReactor(::GlobalNamespace::GhostReactor* value) {
            static BNM::Field<::GlobalNamespace::GhostReactor*> _field = GetClass().GetField(O("reactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetResearchPointsEntitlement(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("researchPointsEntitlement"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetToolMapping(::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::GlobalNamespace::GRTool_GRToolType>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::GlobalNamespace::GRTool_GRToolType>*> _field = GetClass().GetField(O("toolMapping"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetToolTree(::BNM::Structures::Mono::Dictionary<::GlobalNamespace::GRTool_GRToolType, ::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::GRTool_GRToolType, ::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*>*> _field = GetClass().GetField(O("toolTree"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTreeId(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("treeId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTreeName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("treeName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AddFakeNodes() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddFakeNodes"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void AddToolProgressionChildren(::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode* currentNode, ::BNM::IL2CPP::Il2CppObject*& list) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddToolProgressionChildren"), {"currentNode", "list"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(currentNode, &list);
        }
        void AttemptToUnlockPart(::GlobalNamespace::GRToolProgressionManager_ToolParts part) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AttemptToUnlockPart"), {"part"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(part);
        }
        ::GlobalNamespace::GRToolProgressionTree_EmployeeLevelRequirement GetCurrentEmploymentLevel_1() {
            static BNM::Method<::GlobalNamespace::GRToolProgressionTree_EmployeeLevelRequirement> _m = GetClass().GetMethod(O("GetCurrentEmploymentLevel"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::GRToolProgressionTree_EmployeeLevelRequirement GetEmployeeLevel(::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* rawRequiredEntitlements) {
            static BNM::Method<::GlobalNamespace::GRToolProgressionTree_EmployeeLevelRequirement> _m = GetClass().GetMethod(O("GetEmployeeLevel"), {"rawRequiredEntitlements"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(rawRequiredEntitlements);
        }
        int GetNumberOfResearchPoints() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetNumberOfResearchPoints"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode* GetPartNode(::GlobalNamespace::GRToolProgressionManager_ToolParts part) {
            static BNM::Method<::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*> _m = GetClass().GetMethod(O("GetPartNode"), {"part"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(part);
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GRTool_GRToolType>* GetSupportedTools() {
            static BNM::Method<::BNM::Structures::Mono::List<::GlobalNamespace::GRTool_GRToolType>*> _m = GetClass().GetMethod(O("GetSupportedTools"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode* GetToolNode(::GlobalNamespace::GRTool_GRToolType tool) {
            static BNM::Method<::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*> _m = GetClass().GetMethod(O("GetToolNode"), {"tool"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(tool);
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*>* GetToolUpgrades(::GlobalNamespace::GRTool_GRToolType tool) {
            static BNM::Method<::BNM::Structures::Mono::List<::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*>*> _m = GetClass().GetMethod(O("GetToolUpgrades"), {"tool"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(tool);
        }
        ::BNM::Structures::Mono::String* GetTreeId_1() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetTreeId"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void Init(::GlobalNamespace::GhostReactor* ghostReactor, ::GlobalNamespace::GRToolProgressionManager* toolManager) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Init"), {"ghostReactor", "toolManager"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(ghostReactor, toolManager);
        }
        void InitializeClubPartMapping() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitializeClubPartMapping"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void InitializeCollectorPartMapping() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitializeCollectorPartMapping"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void InitializeDirectionalShieldPartMapping() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitializeDirectionalShieldPartMapping"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void InitializeDockWristPartMapping() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitializeDockWristPartMapping"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void InitializeDropPodPartMapping() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitializeDropPodPartMapping"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void InitializeEnergyEfficiencyPartMapping() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitializeEnergyEfficiencyPartMapping"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void InitializeFlashPartMapping() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitializeFlashPartMapping"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void InitializeLanternPartMapping() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitializeLanternPartMapping"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void InitializeRevivePartMapping() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitializeRevivePartMapping"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void InitializeShieldGunPartMapping() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitializeShieldGunPartMapping"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void InitializeToolMapping() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitializeToolMapping"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnInventoryUpdated() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnInventoryUpdated"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnProgressionTreeUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnProgressionTreeUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PopulateMetadata() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PopulateMetadata"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ProcessNodes() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ProcessNodes"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ProcessToolProgressionTree(::GlobalNamespace::UserHydratedProgressionTreeResponse* tree) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ProcessToolProgressionTree"), {"tree"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(tree);
        }
        void ProcessTreeNode(::GlobalNamespace::UserHydratedNodeDefinition* treeNode) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ProcessTreeNode"), {"treeNode"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(treeNode);
        }
        void RefreshProgressionTree() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RefreshProgressionTree"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RefreshUserInventory() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RefreshUserInventory"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
