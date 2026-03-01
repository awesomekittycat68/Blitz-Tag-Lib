#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GRTool_GRToolType.hpp"

namespace GlobalNamespace {
    struct GRResearchStation : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GRResearchStation");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::String* GetCostString() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_costString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetLevelString() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_levelString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetRequiredLevelString() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_requiredLevelString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetResearchPointsString() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_researchPointsString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetBonusText() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("BonusText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetCostText() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("CostText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode* GetCurrentlySelectedToolUpgrade() {
            static BNM::Field<::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*> _field = GetClass().GetField(O("currentlySelectedToolUpgrade"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRToolProgressionManager_ToolProgressionMetaData* GetCurrentlySelectedUpgradeMetadata() {
            static BNM::Field<::GlobalNamespace::GRToolProgressionManager_ToolProgressionMetaData*> _field = GetClass().GetField(O("currentlySelectedUpgradeMetadata"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetDescriptionText() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("DescriptionText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetLevelText() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("LevelText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>* GetLockedImage() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("LockedImage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetLockedToolColor() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("lockedToolColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GhostReactor* GetReactor() {
            static BNM::Field<::GlobalNamespace::GhostReactor*> _field = GetClass().GetField(O("reactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetRequiredLevelText() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("RequiredLevelText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetResearchPointsTex() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("ResearchPointsTex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::IDCardScanner* GetScanner() {
            static BNM::Field<::GlobalNamespace::IDCardScanner*> _field = GetClass().GetField(O("scanner"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSelectedToolIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("selectedToolIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*>* GetSelectedToolUpgrades() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*>*> _field = GetClass().GetField(O("selectedToolUpgrades"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetSelectedUpgradeColor() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("selectedUpgradeColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSelectedUpgradeIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("selectedUpgradeIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GRTool_GRToolType>* GetSupportedTools() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GRTool_GRToolType>*> _field = GetClass().GetField(O("supportedTools"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetToolNameText() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("ToolNameText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRToolProgressionManager* GetToolProgressionManager() {
            static BNM::Field<::GlobalNamespace::GRToolProgressionManager*> _field = GetClass().GetField(O("toolProgressionManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetTotalTools() {
            static BNM::Field<int> _field = GetClass().GetField(O("totalTools"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetUnlockedText() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("UnlockedText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetUnlockedToolColor() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("unlockedToolColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetUnselectedUpgradeColor() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("unselectedUpgradeColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::GorillaPressableButton*>* GetUpgradeButton() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GorillaPressableButton*>*> _field = GetClass().GetField(O("UpgradeButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::TMP_Text*>* GetUpgradePointerText() {
            static BNM::Field<::BNM::Structures::Mono::Array<::TMP_Text*>*> _field = GetClass().GetField(O("UpgradePointerText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::TMP_Text*>* GetUpgradeTitlesText() {
            static BNM::Field<::BNM::Structures::Mono::Array<::TMP_Text*>*> _field = GetClass().GetField(O("UpgradeTitlesText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCostString(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_costString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLevelString(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_levelString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRequiredLevelString(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_requiredLevelString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetResearchPointsString(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_researchPointsString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBonusText(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("BonusText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCostText(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("CostText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentlySelectedToolUpgrade(::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode* value) {
            static BNM::Field<::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*> _field = GetClass().GetField(O("currentlySelectedToolUpgrade"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentlySelectedUpgradeMetadata(::GlobalNamespace::GRToolProgressionManager_ToolProgressionMetaData* value) {
            static BNM::Field<::GlobalNamespace::GRToolProgressionManager_ToolProgressionMetaData*> _field = GetClass().GetField(O("currentlySelectedUpgradeMetadata"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDescriptionText(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("DescriptionText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLevelText(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("LevelText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLockedImage(::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("LockedImage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLockedToolColor(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("lockedToolColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReactor(::GlobalNamespace::GhostReactor* value) {
            static BNM::Field<::GlobalNamespace::GhostReactor*> _field = GetClass().GetField(O("reactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRequiredLevelText(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("RequiredLevelText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetResearchPointsTex(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("ResearchPointsTex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScanner(::GlobalNamespace::IDCardScanner* value) {
            static BNM::Field<::GlobalNamespace::IDCardScanner*> _field = GetClass().GetField(O("scanner"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSelectedToolIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("selectedToolIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSelectedToolUpgrades(::BNM::Structures::Mono::List<::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*>*> _field = GetClass().GetField(O("selectedToolUpgrades"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSelectedUpgradeColor(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("selectedUpgradeColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSelectedUpgradeIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("selectedUpgradeIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSupportedTools(::BNM::Structures::Mono::List<::GlobalNamespace::GRTool_GRToolType>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GRTool_GRToolType>*> _field = GetClass().GetField(O("supportedTools"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetToolNameText(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("ToolNameText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetToolProgressionManager(::GlobalNamespace::GRToolProgressionManager* value) {
            static BNM::Field<::GlobalNamespace::GRToolProgressionManager*> _field = GetClass().GetField(O("toolProgressionManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTotalTools(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("totalTools"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUnlockedText(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("UnlockedText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUnlockedToolColor(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("unlockedToolColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUnselectedUpgradeColor(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("unselectedUpgradeColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUpgradeButton(::BNM::Structures::Mono::Array<::GlobalNamespace::GorillaPressableButton*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GorillaPressableButton*>*> _field = GetClass().GetField(O("UpgradeButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUpgradePointerText(::BNM::Structures::Mono::Array<::TMP_Text*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::TMP_Text*>*> _field = GetClass().GetField(O("UpgradePointerText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUpgradeTitlesText(::BNM::Structures::Mono::Array<::TMP_Text*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::TMP_Text*>*> _field = GetClass().GetField(O("UpgradeTitlesText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Init(::GlobalNamespace::GRToolProgressionManager* tree, ::GlobalNamespace::GhostReactor* ghostReactor) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Init"), {"tree", "ghostReactor"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(tree, ghostReactor);
        }
        void MFDButton0Pressed() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("MFDButton0Pressed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void MFDButton1Pressed() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("MFDButton1Pressed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void MFDButton2Pressed() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("MFDButton2Pressed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void MFDButton3Pressed() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("MFDButton3Pressed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void MFDButton4Pressed() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("MFDButton4Pressed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void MFDButton5Pressed() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("MFDButton5Pressed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void NextToolButtonPressed() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("NextToolButtonPressed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PreviousToolButtonPressed() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PreviousToolButtonPressed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ResearchCompleted(bool success, ::BNM::Structures::Mono::String* researchID) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResearchCompleted"), {"success", "researchID"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(success, researchID);
        }
        void ResearchTreeUpdated() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResearchTreeUpdated"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SelectTool(int index) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SelectTool"), {"index"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(index);
        }
        void SelectUpgrade(int UpgradeIndex) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SelectUpgrade"), {"UpgradeIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(UpgradeIndex);
        }
        void SetUpgradeTextColors(int index) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetUpgradeTextColors"), {"index"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(index);
        }
        void UpdateCost() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateCost"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateDescriptionText(::BNM::Structures::Mono::String* description) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateDescriptionText"), {"description"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(description);
        }
        void UpdateLocked() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateLocked"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateRequiredLevel() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateRequiredLevel"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateResearchPoints(int ResearchPoints) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateResearchPoints"), {"ResearchPoints"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(ResearchPoints);
        }
        void UpdateToolName() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateToolName"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateUI() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateUI"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateUpgradeTitles() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateUpgradeTitles"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpgradeButtonPressed() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpgradeButtonPressed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
