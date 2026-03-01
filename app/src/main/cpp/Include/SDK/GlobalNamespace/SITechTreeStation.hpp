#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SIResource_ResourceType.hpp"
#include "SITechTreePageId.hpp"
#include "SITechTreeStation_NodePopupState.hpp"
#include "SITechTreeStation_TechTreeStationTerminalState.hpp"
#include "SITouchscreenButton_SITouchscreenButtonType.hpp"
#include "SIUpgradeType.hpp"
#include "../Photon_Pun/PhotonMessageInfo.hpp"

namespace GlobalNamespace {
    struct SITechTreeStation : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SITechTreeStation");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr const char* preLog = "[GT/SITechTreeStation]  ";
        static constexpr const char* preErr = "ERROR!!!  ";
        ::GlobalNamespace::SIPlayer* GetActivePlayer() {
            static BNM::Method<::GlobalNamespace::SIPlayer*> _method = GetClass().GetMethod(O("get_ActivePlayer"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::String* GetActivePlayerName() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_ActivePlayerName"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::SITechTreeNode* GetCurrentNode() {
            static BNM::Method<::GlobalNamespace::SITechTreeNode*> _method = GetClass().GetMethod(O("get_CurrentNode"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::SITechTreePage* GetCurrentPage() {
            static BNM::Method<::GlobalNamespace::SITechTreePage*> _method = GetClass().GetMethod(O("get_CurrentPage"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::GameEntityManager* GetGameEntityManager() {
            static BNM::Method<::GlobalNamespace::GameEntityManager*> _method = GetClass().GetMethod(O("get_GameEntityManager"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsAuthority() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsAuthority"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::SIScreenRegion* GetScreenRegion() {
            static BNM::Method<::GlobalNamespace::SIScreenRegion*> _method = GetClass().GetMethod(O("get_ScreenRegion"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::SuperInfectionManager* GetSIManager() {
            static BNM::Method<::GlobalNamespace::SuperInfectionManager*> _method = GetClass().GetMethod(O("get_SIManager"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::List<::Collider*>* GetNonPopupButtonColliders() {
            static BNM::Field<::BNM::Structures::Mono::List<::Collider*>*> _field = GetClass().GetField(O("_nonPopupButtonColliders"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetActive() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("active"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetBackground() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("background"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Sprite* GetBouncySandSprite() {
            static BNM::Field<::Sprite*> _field = GetClass().GetField(O("bouncySandSprite"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetCanAffordNode() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("canAffordNode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetCantAffordNode() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("cantAffordNode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCurrentNodeId() {
            static BNM::Field<int> _field = GetClass().GetField(O("currentNodeId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SITechTreeStation_TechTreeStationTerminalState GetCurrentState() {
            static BNM::Field<::GlobalNamespace::SITechTreeStation_TechTreeStationTerminalState> _field = GetClass().GetField(O("currentState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Sprite* GetFloppyMetalSprite() {
            static BNM::Field<::Sprite*> _field = GetClass().GetField(O("floppyMetalSprite"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GameObject*>* GetHelpPopupScreens() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("helpPopupScreens"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetHelpScreenIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("helpScreenIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetInitialized() {
            static BNM::Field<bool> _field = GetClass().GetField(O("initialized"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SITechTreeStation_TechTreeStationTerminalState GetLastState() {
            static BNM::Field<::GlobalNamespace::SITechTreeStation_TechTreeStationTerminalState> _field = GetClass().GetField(O("lastState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetNodeAvailable() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("nodeAvailable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetNodeDescriptionText() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("nodeDescriptionText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetNodeLocked() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("nodeLocked"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetNodeNameResearchMessageText() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("nodeNameResearchMessageText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetNodeNameText() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("nodeNameText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetNodePopupScreen() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("nodePopupScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GameObject*>* GetNodePopupScreens() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("nodePopupScreens"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SITechTreeStation_NodePopupState GetNodePopupState() {
            static BNM::Field<::GlobalNamespace::SITechTreeStation_NodePopupState> _field = GetClass().GetField(O("nodePopupState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetNodeResearchButton() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("nodeResearchButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetNodeResearched() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("nodeResearched"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetNodeResourceCostText() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("nodeResourceCostText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetNodeResourceTypeText() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("nodeResourceTypeText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetNotActive() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("notActive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::SIGadgetListEntry*>* GetPageButtons() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::SIGadgetListEntry*>*> _field = GetClass().GetField(O("pageButtons"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SIGadgetListEntry* GetPageListEntryPrefab() {
            static BNM::Field<::GlobalNamespace::SIGadgetListEntry*> _field = GetClass().GetField(O("pageListEntryPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetPageListParent() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("pageListParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetPageParent() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("pageParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SITechTreeUIPage* GetPagePrefab() {
            static BNM::Field<::GlobalNamespace::SITechTreeUIPage*> _field = GetClass().GetField(O("pagePrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetPageScreen() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("pageScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetPagesListScreen() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("pagesListScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SICombinedTerminal* GetParentTerminal() {
            static BNM::Field<::GlobalNamespace::SICombinedTerminal*> _field = GetClass().GetField(O("parentTerminal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetPlayerCurrentResourceAmountsText() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("playerCurrentResourceAmountsText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetPlayerNameText() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("playerNameText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetPopupScreen() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("popupScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetResourceCost() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("resourceCost"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::GlobalNamespace::SITechTreeStation_TechTreeStationTerminalState, ::GameObject*>* GetScreenData() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::SITechTreeStation_TechTreeStationTerminalState, ::GameObject*>*> _field = GetClass().GetField(O("screenData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetScreenDescriptionText() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("screenDescriptionText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SIScreenRegion* GetScreenRegion_f() {
            static BNM::Field<::GlobalNamespace::SIScreenRegion*> _field = GetClass().GetField(O("screenRegion"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SoundBankPlayer* GetSoundBankPlayer() {
            static BNM::Field<::GlobalNamespace::SoundBankPlayer*> _field = GetClass().GetField(O("soundBankPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::GlobalNamespace::SIResource_ResourceType, ::Sprite*>* GetSpriteByType() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::SIResource_ResourceType, ::Sprite*>*> _field = GetClass().GetField(O("spriteByType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Sprite* GetStrangeWoodSprite() {
            static BNM::Field<::Sprite*> _field = GetClass().GetField(O("strangeWoodSprite"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetTechPointCost() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("techPointCost"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Sprite* GetTechPointSprite() {
            static BNM::Field<::Sprite*> _field = GetClass().GetField(O("techPointSprite"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetTechTreeHelpScreen() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("techTreeHelpScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetTechTreeIcon() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("techTreeIcon"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::GlobalNamespace::SITechTreePageId, ::Sprite*>* GetTechTreeIconById() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::SITechTreePageId, ::Sprite*>*> _field = GetClass().GetField(O("techTreeIconById"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::SITechTreeUIPage*>* GetTechTreePages() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::SITechTreeUIPage*>*> _field = GetClass().GetField(O("techTreePages"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SITechTreeSO* GetTechTreeSO() {
            static BNM::Field<::GlobalNamespace::SITechTreeSO*> _field = GetClass().GetField(O("techTreeSO"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetUiCenter() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("uiCenter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Sprite* GetVibratingSpringSprite() {
            static BNM::Field<::Sprite*> _field = GetClass().GetField(O("vibratingSpringSprite"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetWaitingForScanScreen() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("waitingForScanScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Sprite* GetWeirdGearSprite() {
            static BNM::Field<::Sprite*> _field = GetClass().GetField(O("weirdGearSprite"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetNonPopupButtonColliders(::BNM::Structures::Mono::List<::Collider*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::Collider*>*> _field = GetClass().GetField(O("_nonPopupButtonColliders"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetActive(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("active"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBackground(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("background"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBouncySandSprite(::Sprite* value) {
            static BNM::Field<::Sprite*> _field = GetClass().GetField(O("bouncySandSprite"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCanAffordNode(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("canAffordNode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCantAffordNode(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("cantAffordNode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentNodeId(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("currentNodeId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentState(::GlobalNamespace::SITechTreeStation_TechTreeStationTerminalState value) {
            static BNM::Field<::GlobalNamespace::SITechTreeStation_TechTreeStationTerminalState> _field = GetClass().GetField(O("currentState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFloppyMetalSprite(::Sprite* value) {
            static BNM::Field<::Sprite*> _field = GetClass().GetField(O("floppyMetalSprite"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHelpPopupScreens(::BNM::Structures::Mono::Array<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("helpPopupScreens"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHelpScreenIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("helpScreenIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInitialized(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("initialized"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastState(::GlobalNamespace::SITechTreeStation_TechTreeStationTerminalState value) {
            static BNM::Field<::GlobalNamespace::SITechTreeStation_TechTreeStationTerminalState> _field = GetClass().GetField(O("lastState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNodeAvailable(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("nodeAvailable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNodeDescriptionText(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("nodeDescriptionText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNodeLocked(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("nodeLocked"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNodeNameResearchMessageText(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("nodeNameResearchMessageText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNodeNameText(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("nodeNameText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNodePopupScreen(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("nodePopupScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNodePopupScreens(::BNM::Structures::Mono::Array<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("nodePopupScreens"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNodePopupState(::GlobalNamespace::SITechTreeStation_NodePopupState value) {
            static BNM::Field<::GlobalNamespace::SITechTreeStation_NodePopupState> _field = GetClass().GetField(O("nodePopupState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNodeResearchButton(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("nodeResearchButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNodeResearched(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("nodeResearched"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNodeResourceCostText(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("nodeResourceCostText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNodeResourceTypeText(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("nodeResourceTypeText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNotActive(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("notActive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPageButtons(::BNM::Structures::Mono::List<::GlobalNamespace::SIGadgetListEntry*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::SIGadgetListEntry*>*> _field = GetClass().GetField(O("pageButtons"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPageListEntryPrefab(::GlobalNamespace::SIGadgetListEntry* value) {
            static BNM::Field<::GlobalNamespace::SIGadgetListEntry*> _field = GetClass().GetField(O("pageListEntryPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPageListParent(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("pageListParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPageParent(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("pageParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPagePrefab(::GlobalNamespace::SITechTreeUIPage* value) {
            static BNM::Field<::GlobalNamespace::SITechTreeUIPage*> _field = GetClass().GetField(O("pagePrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPageScreen(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("pageScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPagesListScreen(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("pagesListScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetParentTerminal(::GlobalNamespace::SICombinedTerminal* value) {
            static BNM::Field<::GlobalNamespace::SICombinedTerminal*> _field = GetClass().GetField(O("parentTerminal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerCurrentResourceAmountsText(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("playerCurrentResourceAmountsText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerNameText(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("playerNameText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPopupScreen(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("popupScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetResourceCost(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("resourceCost"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScreenData(::BNM::Structures::Mono::Dictionary<::GlobalNamespace::SITechTreeStation_TechTreeStationTerminalState, ::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::SITechTreeStation_TechTreeStationTerminalState, ::GameObject*>*> _field = GetClass().GetField(O("screenData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScreenDescriptionText(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("screenDescriptionText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScreenRegion(::GlobalNamespace::SIScreenRegion* value) {
            static BNM::Field<::GlobalNamespace::SIScreenRegion*> _field = GetClass().GetField(O("screenRegion"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSoundBankPlayer(::GlobalNamespace::SoundBankPlayer* value) {
            static BNM::Field<::GlobalNamespace::SoundBankPlayer*> _field = GetClass().GetField(O("soundBankPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpriteByType(::BNM::Structures::Mono::Dictionary<::GlobalNamespace::SIResource_ResourceType, ::Sprite*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::SIResource_ResourceType, ::Sprite*>*> _field = GetClass().GetField(O("spriteByType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStrangeWoodSprite(::Sprite* value) {
            static BNM::Field<::Sprite*> _field = GetClass().GetField(O("strangeWoodSprite"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTechPointCost(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("techPointCost"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTechPointSprite(::Sprite* value) {
            static BNM::Field<::Sprite*> _field = GetClass().GetField(O("techPointSprite"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTechTreeHelpScreen(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("techTreeHelpScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTechTreeIcon(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("techTreeIcon"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTechTreeIconById(::BNM::Structures::Mono::Dictionary<::GlobalNamespace::SITechTreePageId, ::Sprite*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::SITechTreePageId, ::Sprite*>*> _field = GetClass().GetField(O("techTreeIconById"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTechTreePages(::BNM::Structures::Mono::List<::GlobalNamespace::SITechTreeUIPage*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::SITechTreeUIPage*>*> _field = GetClass().GetField(O("techTreePages"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTechTreeSO(::GlobalNamespace::SITechTreeSO* value) {
            static BNM::Field<::GlobalNamespace::SITechTreeSO*> _field = GetClass().GetField(O("techTreeSO"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUiCenter(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("uiCenter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVibratingSpringSprite(::Sprite* value) {
            static BNM::Field<::Sprite*> _field = GetClass().GetField(O("vibratingSpringSprite"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWaitingForScanScreen(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("waitingForScanScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWeirdGearSprite(::Sprite* value) {
            static BNM::Field<::Sprite*> _field = GetClass().GetField(O("weirdGearSprite"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void _RefreshButtonsUsableState() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_RefreshButtonsUsableState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void AddButton(::GlobalNamespace::SITouchscreenButton* button, bool isPopupButton) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddButton"), {"button", "isPopupButton"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(button, isPopupButton);
        }
        void CollectButtonColliders() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CollectButtonColliders"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Structures::Mono::String* FormattedCurrentResourceAmountsForNode(::GlobalNamespace::SITechTreeNode* node) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("FormattedCurrentResourceAmountsForNode"), {"node"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(node);
        }
        ::BNM::Structures::Mono::String* FormattedCurrentResourceTypesForNode(::GlobalNamespace::SITechTreeNode* node) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("FormattedCurrentResourceTypesForNode"), {"node"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(node);
        }
        ::BNM::Structures::Mono::String* FormattedResearchCost(::GlobalNamespace::SITechTreeNode* node) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("FormattedResearchCost"), {"node"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(node);
        }
        ::GlobalNamespace::SIPlayer* get_ActivePlayer() {
            static BNM::Method<::GlobalNamespace::SIPlayer*> _m = GetClass().GetMethod(O("get_ActivePlayer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* get_ActivePlayerName() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_ActivePlayerName"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::SITechTreeNode* get_CurrentNode() {
            static BNM::Method<::GlobalNamespace::SITechTreeNode*> _m = GetClass().GetMethod(O("get_CurrentNode"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::SITechTreePage* get_CurrentPage() {
            static BNM::Method<::GlobalNamespace::SITechTreePage*> _m = GetClass().GetMethod(O("get_CurrentPage"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::GameEntityManager* get_GameEntityManager() {
            static BNM::Method<::GlobalNamespace::GameEntityManager*> _m = GetClass().GetMethod(O("get_GameEntityManager"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsAuthority() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsAuthority"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::SIScreenRegion* get_ScreenRegion() {
            static BNM::Method<::GlobalNamespace::SIScreenRegion*> _m = GetClass().GetMethod(O("get_ScreenRegion"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::SuperInfectionManager* get_SIManager() {
            static BNM::Method<::GlobalNamespace::SuperInfectionManager*> _m = GetClass().GetMethod(O("get_SIManager"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void Initialize() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Initialize"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool IsPopupState(::GlobalNamespace::SITechTreeStation_TechTreeStationTerminalState state) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsPopupState"), {"state"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(state);
        }
        bool IsValidPage(int pageId) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsValidPage"), {"pageId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(pageId);
        }
        void OnDisable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnProgressionUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnProgressionUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnProgressionUpdateNode(::GlobalNamespace::SIUpgradeType type) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnProgressionUpdateNode"), {"type"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(type);
        }
        void PlayerHandScanned(int actorNr) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayerHandScanned"), {"actorNr"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(actorNr);
        }
        void ReadDataPUN(::Photon_Pun::PhotonStream* stream, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReadDataPUN"), {"stream", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, info);
        }
        void Reset() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Reset"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetActivePage() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetActivePage"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetNonPopupButtonsEnabled(bool enable) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetNonPopupButtonsEnabled"), {"enable"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(enable);
        }
        void SetScreenVisibility(::GlobalNamespace::SITechTreeStation_TechTreeStationTerminalState currentState, ::GlobalNamespace::SITechTreeStation_TechTreeStationTerminalState lastState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetScreenVisibility"), {"currentState", "lastState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(currentState, lastState);
        }
        void TouchscreenButtonPressed(::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType buttonType, int data, int actorNr) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TouchscreenButtonPressed"), {"buttonType", "data", "actorNr"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(buttonType, data, actorNr);
        }
        void TouchscreenToggleButtonPressed(::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType buttonType, int data, int actorNr, bool isToggledOn) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TouchscreenToggleButtonPressed"), {"buttonType", "data", "actorNr", "isToggledOn"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(buttonType, data, actorNr, isToggledOn);
        }
        void UpdateHelpButtonPage(int helpButtonPageIndex) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateHelpButtonPage"), {"helpButtonPageIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(helpButtonPageIndex);
        }
        void UpdateNodeData(::GlobalNamespace::SIPlayer* player) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateNodeData"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(player);
        }
        void UpdateNodePopupPage() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateNodePopupPage"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateState(::GlobalNamespace::SITechTreeStation_TechTreeStationTerminalState newState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateState"), {"newState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newState);
        }
        void UpdateState(::GlobalNamespace::SITechTreeStation_TechTreeStationTerminalState newState, ::GlobalNamespace::SITechTreeStation_TechTreeStationTerminalState newLastState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateState"), {"newState", "newLastState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newState, newLastState);
        }
        void WriteDataPUN(::Photon_Pun::PhotonStream* stream, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteDataPUN"), {"stream", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, info);
        }
        void ZoneDataSerializeRead(::BNM::IL2CPP::Il2CppObject* reader) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ZoneDataSerializeRead"), {"reader"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(reader);
        }
        void ZoneDataSerializeWrite(::BNM::IL2CPP::Il2CppObject* writer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ZoneDataSerializeWrite"), {"writer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(writer);
        }
    };
}
