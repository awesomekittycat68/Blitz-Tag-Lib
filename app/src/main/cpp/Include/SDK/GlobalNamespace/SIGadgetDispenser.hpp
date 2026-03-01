#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SIGadgetDispenser_GadgetDispenserTerminalState.hpp"
#include "SITouchscreenButton_SITouchscreenButtonType.hpp"
#include "../Photon_Pun/PhotonMessageInfo.hpp"

namespace GlobalNamespace {
    struct SIGadgetDispenser : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SIGadgetDispenser");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

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
        ::GlobalNamespace::SITechTreeSO* GetTechTreeSO() {
            static BNM::Method<::GlobalNamespace::SITechTreeSO*> _method = GetClass().GetMethod(O("get_TechTreeSO"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetCurrentNode_f() {
            static BNM::Field<int> _field = GetClass().GetField(O("_currentNode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
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
        ::GlobalNamespace::SIGadgetDispenser_GadgetDispenserTerminalState GetCurrentState() {
            static BNM::Field<::GlobalNamespace::SIGadgetDispenser_GadgetDispenserTerminalState> _field = GetClass().GetField(O("currentState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SoundBankPlayer* GetDispenseSoundBankPlayer() {
            static BNM::Field<::GlobalNamespace::SoundBankPlayer*> _field = GetClass().GetField(O("dispenseSoundBankPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetGadgetDescriptionText() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("gadgetDescriptionText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetGadgetDispensedScreen() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("gadgetDispensedScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetGadgetDispensedText() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("gadgetDispensedText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetGadgetDispensePosition() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("gadgetDispensePosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::SIDispenserGadgetListEntry*>* GetGadgetEntries() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::SIDispenserGadgetListEntry*>*> _field = GetClass().GetField(O("gadgetEntries"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetGadgetInformationScreen() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("gadgetInformationScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SIDispenserGadgetListEntry* GetGadgetListEntryPrefab() {
            static BNM::Field<::GlobalNamespace::SIDispenserGadgetListEntry*> _field = GetClass().GetField(O("gadgetListEntryPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::RectTransform* GetGadgetListParent() {
            static BNM::Field<::RectTransform*> _field = GetClass().GetField(O("gadgetListParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetGadgetListScreen() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("gadgetListScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::SIGadgetListEntry*>* GetGadgetPages() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::SIGadgetListEntry*>*> _field = GetClass().GetField(O("gadgetPages"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetGadgetsHelpScreen() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("gadgetsHelpScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetGadgetTypeScreen() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("gadgetTypeScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SIGadgetDispenser_GadgetDispenserTerminalState GetHandScannedState() {
            static BNM::Field<::GlobalNamespace::SIGadgetDispenser_GadgetDispenserTerminalState> _field = GetClass().GetField(O("handScannedState"));
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
        ::GlobalNamespace::SIGadgetDispenser_GadgetDispenserTerminalState GetLastState() {
            static BNM::Field<::GlobalNamespace::SIGadgetDispenser_GadgetDispenserTerminalState> _field = GetClass().GetField(O("lastState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetNoDispensableGadgetsMessage() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("noDispensableGadgetsMessage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetNotActive() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("notActive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SIGadgetListEntry* GetPageListEntryPrefab() {
            static BNM::Field<::GlobalNamespace::SIGadgetListEntry*> _field = GetClass().GetField(O("pageListEntryPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::RectTransform* GetPageListParent() {
            static BNM::Field<::RectTransform*> _field = GetClass().GetField(O("pageListParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SICombinedTerminal* GetParentTerminal() {
            static BNM::Field<::GlobalNamespace::SICombinedTerminal*> _field = GetClass().GetField(O("parentTerminal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetPopupScreen() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("popupScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::GlobalNamespace::SIGadgetDispenser_GadgetDispenserTerminalState, ::GameObject*>* GetScreenData() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::SIGadgetDispenser_GadgetDispenserTerminalState, ::GameObject*>*> _field = GetClass().GetField(O("screenData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetScreenDescription() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("screenDescription"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SIScreenRegion* GetScreenRegion_f() {
            static BNM::Field<::GlobalNamespace::SIScreenRegion*> _field = GetClass().GetField(O("screenRegion"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SoundBankPlayer* GetTouchSoundBankPlayer() {
            static BNM::Field<::GlobalNamespace::SoundBankPlayer*> _field = GetClass().GetField(O("touchSoundBankPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetUiCenter() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("uiCenter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetWaitingForScanScreen() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("waitingForScanScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCurrentNode(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_currentNode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
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
        void SetCurrentState(::GlobalNamespace::SIGadgetDispenser_GadgetDispenserTerminalState value) {
            static BNM::Field<::GlobalNamespace::SIGadgetDispenser_GadgetDispenserTerminalState> _field = GetClass().GetField(O("currentState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDispenseSoundBankPlayer(::GlobalNamespace::SoundBankPlayer* value) {
            static BNM::Field<::GlobalNamespace::SoundBankPlayer*> _field = GetClass().GetField(O("dispenseSoundBankPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGadgetDescriptionText(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("gadgetDescriptionText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGadgetDispensedScreen(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("gadgetDispensedScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGadgetDispensedText(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("gadgetDispensedText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGadgetDispensePosition(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("gadgetDispensePosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGadgetEntries(::BNM::Structures::Mono::List<::GlobalNamespace::SIDispenserGadgetListEntry*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::SIDispenserGadgetListEntry*>*> _field = GetClass().GetField(O("gadgetEntries"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGadgetInformationScreen(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("gadgetInformationScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGadgetListEntryPrefab(::GlobalNamespace::SIDispenserGadgetListEntry* value) {
            static BNM::Field<::GlobalNamespace::SIDispenserGadgetListEntry*> _field = GetClass().GetField(O("gadgetListEntryPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGadgetListParent(::RectTransform* value) {
            static BNM::Field<::RectTransform*> _field = GetClass().GetField(O("gadgetListParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGadgetListScreen(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("gadgetListScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGadgetPages(::BNM::Structures::Mono::List<::GlobalNamespace::SIGadgetListEntry*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::SIGadgetListEntry*>*> _field = GetClass().GetField(O("gadgetPages"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGadgetsHelpScreen(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("gadgetsHelpScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGadgetTypeScreen(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("gadgetTypeScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHandScannedState(::GlobalNamespace::SIGadgetDispenser_GadgetDispenserTerminalState value) {
            static BNM::Field<::GlobalNamespace::SIGadgetDispenser_GadgetDispenserTerminalState> _field = GetClass().GetField(O("handScannedState"));
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
        void SetLastState(::GlobalNamespace::SIGadgetDispenser_GadgetDispenserTerminalState value) {
            static BNM::Field<::GlobalNamespace::SIGadgetDispenser_GadgetDispenserTerminalState> _field = GetClass().GetField(O("lastState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNoDispensableGadgetsMessage(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("noDispensableGadgetsMessage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNotActive(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("notActive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPageListEntryPrefab(::GlobalNamespace::SIGadgetListEntry* value) {
            static BNM::Field<::GlobalNamespace::SIGadgetListEntry*> _field = GetClass().GetField(O("pageListEntryPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPageListParent(::RectTransform* value) {
            static BNM::Field<::RectTransform*> _field = GetClass().GetField(O("pageListParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetParentTerminal(::GlobalNamespace::SICombinedTerminal* value) {
            static BNM::Field<::GlobalNamespace::SICombinedTerminal*> _field = GetClass().GetField(O("parentTerminal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPopupScreen(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("popupScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScreenData(::BNM::Structures::Mono::Dictionary<::GlobalNamespace::SIGadgetDispenser_GadgetDispenserTerminalState, ::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::SIGadgetDispenser_GadgetDispenserTerminalState, ::GameObject*>*> _field = GetClass().GetField(O("screenData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScreenDescription(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("screenDescription"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScreenRegion(::GlobalNamespace::SIScreenRegion* value) {
            static BNM::Field<::GlobalNamespace::SIScreenRegion*> _field = GetClass().GetField(O("screenRegion"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTouchSoundBankPlayer(::GlobalNamespace::SoundBankPlayer* value) {
            static BNM::Field<::GlobalNamespace::SoundBankPlayer*> _field = GetClass().GetField(O("touchSoundBankPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUiCenter(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("uiCenter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWaitingForScanScreen(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("waitingForScanScreen"));
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
        void DispenseGadgetForPlayer(::GlobalNamespace::SIPlayer* player) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DispenseGadgetForPlayer"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(player);
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
        ::GlobalNamespace::SITechTreeSO* get_TechTreeSO() {
            static BNM::Method<::GlobalNamespace::SITechTreeSO*> _m = GetClass().GetMethod(O("get_TechTreeSO"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void Initialize() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Initialize"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool IsPopupState(::GlobalNamespace::SIGadgetDispenser_GadgetDispenserTerminalState state) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsPopupState"), {"state"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(state);
        }
        bool IsValidPage(int pageId) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsValidPage"), {"pageId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(pageId);
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
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
        void SetScreenVisibility(::GlobalNamespace::SIGadgetDispenser_GadgetDispenserTerminalState currentState, ::GlobalNamespace::SIGadgetDispenser_GadgetDispenserTerminalState lastState) {
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
        void UpdateGadgetListVisibility() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateGadgetListVisibility"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateHelpButtonPage(int helpButtonPageIndex) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateHelpButtonPage"), {"helpButtonPageIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(helpButtonPageIndex);
        }
        void UpdateState(::GlobalNamespace::SIGadgetDispenser_GadgetDispenserTerminalState newState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateState"), {"newState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newState);
        }
        void UpdateState(::GlobalNamespace::SIGadgetDispenser_GadgetDispenserTerminalState newState, ::GlobalNamespace::SIGadgetDispenser_GadgetDispenserTerminalState newLastState) {
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
