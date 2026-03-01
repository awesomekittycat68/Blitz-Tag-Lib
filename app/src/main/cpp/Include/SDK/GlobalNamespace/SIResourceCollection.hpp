#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SIResource_ResourceType.hpp"
#include "SIResourceCollection_FailReason.hpp"
#include "SIResourceCollection_ResourceCollectorTerminalState.hpp"
#include "SITouchscreenButton_SITouchscreenButtonType.hpp"
#include "../Photon_Pun/PhotonMessageInfo.hpp"

namespace GlobalNamespace {
    struct SIResourceCollection : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SIResourceCollection");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr int REFILL_PURCHASE_SHINY_ROCK_COST = 500;
        static constexpr const char* lineBreak = "
";
        static constexpr const char* appendToMax = " -> 20";
        static constexpr const char* failureFull = "YOU ARE ALREADY AT MAX RESOURCES! DONATE YOUR SHINY ROCKS TO A GOOD CAUSE INSTEAD OF US, KNUCKLEHEAD!";
        static constexpr const char* failureNotEnoughRocks = "NOT ENOUGH SHINY ROCKS! PLEASE TRY AGAIN LATER, OR PURCHASE MORE SHINY ROCKS!";
        static constexpr const char* failureUnknown = "UHHHHH SOMETHING WENT WRONG, I'M NOT SURE WHAT, SORRY TRY AGAIN LATER MAYBE!";
        ::GlobalNamespace::SIPlayer* GetActivePlayer() {
            static BNM::Method<::GlobalNamespace::SIPlayer*> _method = GetClass().GetMethod(O("get_ActivePlayer"));
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
        int GetCurrentHelpButtonPageIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("currentHelpButtonPageIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetCurrentResourceCountsLocal() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("currentResourceCountsLocal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetCurrentResourceCountsRemote() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("currentResourceCountsRemote"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetCurrentResourcesResourceCounts() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("currentResourcesResourceCounts"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetCurrentResourcesScreen() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("currentResourcesScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState GetCurrentState() {
            static BNM::Field<::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState> _field = GetClass().GetField(O("currentState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SIResourceCollection_FailReason GetFailureReason() {
            static BNM::Field<::GlobalNamespace::SIResourceCollection_FailReason> _field = GetClass().GetField(O("failureReason"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetFailureReasonText() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("failureReasonText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GameObject*>* GetHelpPopupScreens() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("helpPopupScreens"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetHelpScreen() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("helpScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetInitialized() {
            static BNM::Field<bool> _field = GetClass().GetField(O("initialized"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState GetLastState() {
            static BNM::Field<::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState> _field = GetClass().GetField(O("lastState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetNotActive() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("notActive"));
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
        ::GameObject* GetPurchaseInProgress() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("purchaseInProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetPurchasingFailure() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("purchasingFailure"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetPurchasingRemote() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("purchasingRemote"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetPurchasingStart() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("purchasingStart"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetPurchasingSuccess() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("purchasingSuccess"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetResourceDepositedCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("resourceDepositedCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::Sprite*>* GetResourceImageSprites() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Sprite*>*> _field = GetClass().GetField(O("resourceImageSprites"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState, ::GameObject*>* GetScreenData() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState, ::GameObject*>*> _field = GetClass().GetField(O("screenData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SIScreenRegion* GetScreenRegion_f() {
            static BNM::Field<::GlobalNamespace::SIScreenRegion*> _field = GetClass().GetField(O("screenRegion"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetShinyRockInfo() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("shinyRockInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SoundBankPlayer* GetSoundBankPlayer() {
            static BNM::Field<::GlobalNamespace::SoundBankPlayer*> _field = GetClass().GetField(O("soundBankPlayer"));
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
        void SetCurrentHelpButtonPageIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("currentHelpButtonPageIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentResourceCountsLocal(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("currentResourceCountsLocal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentResourceCountsRemote(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("currentResourceCountsRemote"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentResourcesResourceCounts(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("currentResourcesResourceCounts"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentResourcesScreen(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("currentResourcesScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentState(::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState value) {
            static BNM::Field<::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState> _field = GetClass().GetField(O("currentState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFailureReason(::GlobalNamespace::SIResourceCollection_FailReason value) {
            static BNM::Field<::GlobalNamespace::SIResourceCollection_FailReason> _field = GetClass().GetField(O("failureReason"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFailureReasonText(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("failureReasonText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHelpPopupScreens(::BNM::Structures::Mono::Array<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("helpPopupScreens"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHelpScreen(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("helpScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInitialized(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("initialized"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastState(::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState value) {
            static BNM::Field<::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState> _field = GetClass().GetField(O("lastState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNotActive(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("notActive"));
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
        void SetPurchaseInProgress(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("purchaseInProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPurchasingFailure(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("purchasingFailure"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPurchasingRemote(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("purchasingRemote"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPurchasingStart(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("purchasingStart"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPurchasingSuccess(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("purchasingSuccess"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetResourceDepositedCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("resourceDepositedCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetResourceImageSprites(::BNM::Structures::Mono::Array<::Sprite*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Sprite*>*> _field = GetClass().GetField(O("resourceImageSprites"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScreenData(::BNM::Structures::Mono::Dictionary<::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState, ::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState, ::GameObject*>*> _field = GetClass().GetField(O("screenData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScreenRegion(::GlobalNamespace::SIScreenRegion* value) {
            static BNM::Field<::GlobalNamespace::SIScreenRegion*> _field = GetClass().GetField(O("screenRegion"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShinyRockInfo(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("shinyRockInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSoundBankPlayer(::GlobalNamespace::SoundBankPlayer* value) {
            static BNM::Field<::GlobalNamespace::SoundBankPlayer*> _field = GetClass().GetField(O("soundBankPlayer"));
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
        ::BNM::Structures::Mono::String* FormattedPlayerResourceCount(::GlobalNamespace::SIPlayer* player) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("FormattedPlayerResourceCount"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(player);
        }
        ::BNM::Structures::Mono::String* FormattedPlayerResourceCountWithMax(::GlobalNamespace::SIPlayer* player) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("FormattedPlayerResourceCountWithMax"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(player);
        }
        ::GlobalNamespace::SIPlayer* get_ActivePlayer() {
            static BNM::Method<::GlobalNamespace::SIPlayer*> _m = GetClass().GetMethod(O("get_ActivePlayer"));
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
        ::BNM::Structures::Mono::String* GetFormattedResource(::GlobalNamespace::SIPlayer* player, ::GlobalNamespace::SIResource_ResourceType resource) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetFormattedResource"), {"player", "resource"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(player, resource);
        }
        bool HasHelpButton(::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState state) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("HasHelpButton"), {"state"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(state);
        }
        void Initialize() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Initialize"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool IsPopupState(::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState state) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsPopupState"), {"state"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(state);
        }
        void PlayerHandScanned(int actorNr) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayerHandScanned"), {"actorNr"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(actorNr);
        }
        bool PopupActive() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("PopupActive"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
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
        void SetNonPopupButtonsEnabled(bool enable) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetNonPopupButtonsEnabled"), {"enable"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(enable);
        }
        void SetScreenVisibility(::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState currentState, ::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState lastState) {
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
        void UpdateState(::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState newState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateState"), {"newState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newState);
        }
        void UpdateState(::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState newState, ::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState newLastState) {
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
