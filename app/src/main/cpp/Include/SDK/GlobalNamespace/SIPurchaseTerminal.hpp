#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SIPurchaseTerminal_PurchaseTerminalState.hpp"
#include "SITouchscreenButton_SITouchscreenButtonType.hpp"

namespace GlobalNamespace {
    struct SIPurchaseTerminal : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SIPurchaseTerminal");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::SIScreenRegion* GetScreenRegion() {
            static BNM::Method<::GlobalNamespace::SIScreenRegion*> _method = GetClass().GetMethod(O("get_ScreenRegion"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GameObject* GetConfirmPurchasePopupScreen() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("ConfirmPurchasePopupScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetConfirmPurchaseShinyRockCount() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("ConfirmPurchaseShinyRockCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetConfirmPurchaseTechPointCount() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("ConfirmPurchaseTechPointCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCostPerTechPoint() {
            static BNM::Field<int> _field = GetClass().GetField(O("costPerTechPoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SIPurchaseTerminal_PurchaseTerminalState GetCurrentState() {
            static BNM::Field<::GlobalNamespace::SIPurchaseTerminal_PurchaseTerminalState> _field = GetClass().GetField(O("currentState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetInsufficientFundsPopupScreen() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("InsufficientFundsPopupScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMaxPurchaseSize() {
            static BNM::Field<int> _field = GetClass().GetField(O("maxPurchaseSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMinPurchaseSize() {
            static BNM::Field<int> _field = GetClass().GetField(O("minPurchaseSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetPendingPurchasePopupScreen() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("PendingPurchasePopupScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetPopupBackgroundScreen() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("PopupBackgroundScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetPurchaseAmountCurrentShinyRockCount() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("PurchaseAmountCurrentShinyRockCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetPurchaseAmountCurrentTechPointsCount() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("PurchaseAmountCurrentTechPointsCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetPurchaseAmountShinyRockCount() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("PurchaseAmountShinyRockCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetPurchaseAmountTechPointCount() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("PurchaseAmountTechPointCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetPurchaseCompletePopupScreen() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("PurchaseCompletePopupScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetPurchasedTechPointCount() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("PurchasedTechPointCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPurchaseSize() {
            static BNM::Field<int> _field = GetClass().GetField(O("purchaseSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SIScreenRegion* GetScreenRegion_f() {
            static BNM::Field<::GlobalNamespace::SIScreenRegion*> _field = GetClass().GetField(O("screenRegion"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetUnableToCompletePurchasePopupScreen() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("UnableToCompletePurchasePopupScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetConfirmPurchasePopupScreen(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("ConfirmPurchasePopupScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetConfirmPurchaseShinyRockCount(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("ConfirmPurchaseShinyRockCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetConfirmPurchaseTechPointCount(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("ConfirmPurchaseTechPointCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCostPerTechPoint(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("costPerTechPoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentState(::GlobalNamespace::SIPurchaseTerminal_PurchaseTerminalState value) {
            static BNM::Field<::GlobalNamespace::SIPurchaseTerminal_PurchaseTerminalState> _field = GetClass().GetField(O("currentState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInsufficientFundsPopupScreen(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("InsufficientFundsPopupScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxPurchaseSize(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("maxPurchaseSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMinPurchaseSize(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("minPurchaseSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPendingPurchasePopupScreen(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("PendingPurchasePopupScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPopupBackgroundScreen(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("PopupBackgroundScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPurchaseAmountCurrentShinyRockCount(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("PurchaseAmountCurrentShinyRockCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPurchaseAmountCurrentTechPointsCount(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("PurchaseAmountCurrentTechPointsCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPurchaseAmountShinyRockCount(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("PurchaseAmountShinyRockCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPurchaseAmountTechPointCount(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("PurchaseAmountTechPointCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPurchaseCompletePopupScreen(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("PurchaseCompletePopupScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPurchasedTechPointCount(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("PurchasedTechPointCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPurchaseSize(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("purchaseSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScreenRegion(::GlobalNamespace::SIScreenRegion* value) {
            static BNM::Field<::GlobalNamespace::SIScreenRegion*> _field = GetClass().GetField(O("screenRegion"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUnableToCompletePurchasePopupScreen(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("UnableToCompletePurchasePopupScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AddButton(::GlobalNamespace::SITouchscreenButton* button, bool isPopupButton) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddButton"), {"button", "isPopupButton"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(button, isPopupButton);
        }
        void ConfirmPurchase() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ConfirmPurchase"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void DecreasePurcahse() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DecreasePurcahse"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void DelayedOnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DelayedOnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::GlobalNamespace::SIScreenRegion* get_ScreenRegion() {
            static BNM::Method<::GlobalNamespace::SIScreenRegion*> _m = GetClass().GetMethod(O("get_ScreenRegion"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void IncreasePurchase() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("IncreasePurchase"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
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
        void OnUpdateCurrencyBalance() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnUpdateCurrencyBalance"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ReturnToBaseScreen() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReturnToBaseScreen"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SelectPurchase() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SelectPurchase"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetScreenVisibility(::GlobalNamespace::SIPurchaseTerminal_PurchaseTerminalState screenState, bool isEnabled) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetScreenVisibility"), {"screenState", "isEnabled"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(screenState, isEnabled);
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
        void UpdateCurrentTechPoints() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateCurrentTechPoints"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdatePurchaseAmount() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdatePurchaseAmount"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateState(::GlobalNamespace::SIPurchaseTerminal_PurchaseTerminalState newState, bool forceUpdate) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateState"), {"newState", "forceUpdate"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newState, forceUpdate);
        }
    };
}
