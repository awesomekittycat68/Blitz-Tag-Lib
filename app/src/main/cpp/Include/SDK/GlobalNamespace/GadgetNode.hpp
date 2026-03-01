#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "EAssetReleaseTier.hpp"
#include "ESuperGameModes.hpp"
#include "SIResource_ResourceCost.hpp"
#include "SIUpgradeType.hpp"
#include "TechTreeNodeBase.hpp"

namespace GlobalNamespace {
    struct GadgetNode : ::GlobalNamespace::TechTreeNodeBase {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GadgetNode");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetInEditor() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_InEditor"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsDispensableGadget() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsDispensableGadget"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsValid() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsValid"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetShowExcludedGameModes() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_ShowExcludedGameModes"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetShowGadgetPrefab() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_ShowGadgetPrefab"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetShowReleaseTier() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_ShowReleaseTier"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetCostOverride() {
            static BNM::Field<bool> _field = GetClass().GetField(O("costOverride"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetDescription() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("description"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::ESuperGameModes GetExcludedGameModes() {
            static BNM::Field<::GlobalNamespace::ESuperGameModes> _field = GetClass().GetField(O("excludedGameModes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::TechTreeNodeBase_Empty* GetInput() {
            static BNM::Field<::GlobalNamespace::TechTreeNodeBase_Empty*> _field = GetClass().GetField(O("input"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetNickName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("nickName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::SIResource_ResourceCost>* GetNodeCost() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::SIResource_ResourceCost>*> _field = GetClass().GetField(O("nodeCost"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::TechTreeNodeBase_Empty* GetOutput() {
            static BNM::Field<::GlobalNamespace::TechTreeNodeBase_Empty*> _field = GetClass().GetField(O("output"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::EAssetReleaseTier GetReleaseTier() {
            static BNM::Field<::GlobalNamespace::EAssetReleaseTier> _field = GetClass().GetField(O("releaseTier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GameEntity* GetUnlockedGadgetPrefab() {
            static BNM::Field<::GlobalNamespace::GameEntity*> _field = GetClass().GetField(O("unlockedGadgetPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SIUpgradeType GetUpgradeType() {
            static BNM::Field<::GlobalNamespace::SIUpgradeType> _field = GetClass().GetField(O("upgradeType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCostOverride(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("costOverride"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDescription(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("description"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetExcludedGameModes(::GlobalNamespace::ESuperGameModes value) {
            static BNM::Field<::GlobalNamespace::ESuperGameModes> _field = GetClass().GetField(O("excludedGameModes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInput(::GlobalNamespace::TechTreeNodeBase_Empty* value) {
            static BNM::Field<::GlobalNamespace::TechTreeNodeBase_Empty*> _field = GetClass().GetField(O("input"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNickName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("nickName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNodeCost(::BNM::Structures::Mono::Array<::GlobalNamespace::SIResource_ResourceCost>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::SIResource_ResourceCost>*> _field = GetClass().GetField(O("nodeCost"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOutput(::GlobalNamespace::TechTreeNodeBase_Empty* value) {
            static BNM::Field<::GlobalNamespace::TechTreeNodeBase_Empty*> _field = GetClass().GetField(O("output"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReleaseTier(::GlobalNamespace::EAssetReleaseTier value) {
            static BNM::Field<::GlobalNamespace::EAssetReleaseTier> _field = GetClass().GetField(O("releaseTier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUnlockedGadgetPrefab(::GlobalNamespace::GameEntity* value) {
            static BNM::Field<::GlobalNamespace::GameEntity*> _field = GetClass().GetField(O("unlockedGadgetPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUpgradeType(::GlobalNamespace::SIUpgradeType value) {
            static BNM::Field<::GlobalNamespace::SIUpgradeType> _field = GetClass().GetField(O("upgradeType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AssignParentUpgrades(::BNM::Structures::Mono::Array<::GlobalNamespace::SIUpgradeType>* prerequisites) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AssignParentUpgrades"), {"prerequisites"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(prerequisites);
        }
        void ConfigureFrom(::GlobalNamespace::SITechTreeNode* sourceNode) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ConfigureFrom"), {"sourceNode"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(sourceNode);
        }
        bool CostEquals(::BNM::Structures::Mono::Array<::GlobalNamespace::SIResource_ResourceCost>* cost) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CostEquals"), {"cost"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(cost);
        }
        ::GlobalNamespace::SITechTreeNode* GenerateTechTreeNode() {
            static BNM::Method<::GlobalNamespace::SITechTreeNode*> _m = GetClass().GetMethod(O("GenerateTechTreeNode"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static bool get_InEditor() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_InEditor"));
            return _m.Call();
        }
        bool get_IsDispensableGadget() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsDispensableGadget"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsValid() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsValid"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_ShowExcludedGameModes() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_ShowExcludedGameModes"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_ShowGadgetPrefab() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_ShowGadgetPrefab"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_ShowReleaseTier() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_ShowReleaseTier"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GadgetNode*>* GetChildNodes() {
            static BNM::Method<::BNM::Structures::Mono::List<::GlobalNamespace::GadgetNode*>*> _m = GetClass().GetMethod(O("GetChildNodes"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int GetDepth() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetDepth"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GadgetNode*>* GetParentNodes() {
            static BNM::Method<::BNM::Structures::Mono::List<::GlobalNamespace::GadgetNode*>*> _m = GetClass().GetMethod(O("GetParentNodes"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::SIUpgradeType>* GetParentUpgradeTypes() {
            static BNM::Method<::BNM::Structures::Mono::List<::GlobalNamespace::SIUpgradeType>*> _m = GetClass().GetMethod(O("GetParentUpgradeTypes"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int GetTreeDepth() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetTreeDepth"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GadgetNode*>* GetTreeNodes() {
            static BNM::Method<::BNM::Structures::Mono::List<::GlobalNamespace::GadgetNode*>*> _m = GetClass().GetMethod(O("GetTreeNodes"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void GetTreeNodes(::BNM::Structures::Mono::List<::GlobalNamespace::GadgetNode*>* nodes) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetTreeNodes"), {"nodes"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(nodes);
        }
        int GetTreeWidth() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetTreeWidth"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
