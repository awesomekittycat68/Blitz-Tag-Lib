#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GlobalNamespace/SITouchscreenButton_SITouchscreenButtonType.hpp"
#include "../GorillaTagScripts/SubscriptionManager_SubscriptionTerm.hpp"
#include "SubscriptionKiosk_PurchaseResult.hpp"
#include "SubscriptionKiosk_ScreenState.hpp"

namespace GorillaTagScripts_Subscription {
    struct SubscriptionKiosk : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts.Subscription", "SubscriptionKiosk");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr const char* SUBSCRIPTION_KIOSK_PREFIX = "SUBKIOSK";
        static constexpr const char* PURCHASE_SUCCESS_KEY = "SUBKIOSKPURCHASE_SUCCESS";
        static constexpr const char* PURCHASE_CANCEL_KEY = "SUBKIOSKPURCHASE_CANCEL";
        static constexpr const char* PURCHASE_FAIL_KEY = "SUBKIOSKPURCHASE_FAIL";
        static constexpr const char* subSKU = "fan_club";
        ::GlobalNamespace::SIScreenRegion* GetScreenRegion() {
            static BNM::Method<::GlobalNamespace::SIScreenRegion*> _method = GetClass().GetMethod(O("get_ScreenRegion"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GorillaTagScripts_Subscription::SubscriptionKiosk_ScreenState GetCurrentState() {
            static BNM::Field<::GorillaTagScripts_Subscription::SubscriptionKiosk_ScreenState> _field = GetClass().GetField(O("currentState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts_Subscription::SubscriptionKiosk_PurchaseResult GetLastPurchase() {
            static BNM::Field<::GorillaTagScripts_Subscription::SubscriptionKiosk_PurchaseResult> _field = GetClass().GetField(O("lastPurchase"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts_Subscription::SubscriptionKiosk_ScreenState GetLastState() {
            static BNM::Field<::GorillaTagScripts_Subscription::SubscriptionKiosk_ScreenState> _field = GetClass().GetField(O("lastState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetMainMenuSubscribedScreen() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("mainMenuSubscribedScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetMainMenuUnsubscribedScreen() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("mainMenuUnsubscribedScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetPurchaseProgressScreen() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("purchaseProgressScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetPurchaseResultScreen() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("purchaseResultScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TextMeshPro* GetPurchaseResultText() {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("purchaseResultText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetPurchaseSubScreen() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("purchaseSubScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetSafeAccountScreen() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("safeAccountScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetScanningScreen() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("scanningScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::GorillaTagScripts_Subscription::SubscriptionKiosk_ScreenState, ::GameObject*>* GetScreensByState() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GorillaTagScripts_Subscription::SubscriptionKiosk_ScreenState, ::GameObject*>*> _field = GetClass().GetField(O("screensByState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetSteamComingSoon() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("steamComingSoon"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TextMeshPro* GetSubDataAutoRenew() {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("subDataAutoRenew"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TextMeshPro* GetSubDataDaysAccrued() {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("subDataDaysAccrued"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TextMeshPro* GetSubDataDaysRemaining() {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("subDataDaysRemaining"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TextMeshPro* GetSubDataPlayerName() {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("subDataPlayerName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TextMeshPro* GetSubDataRenewDate() {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("subDataRenewDate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetSubDataScreen() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("subDataScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetSubDataSubscribeButton() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("subDataSubscribeButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TextMeshPro* GetSubDataSubscriptionTerm() {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("subDataSubscriptionTerm"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TextMeshPro* GetSubMenuDaysAccrued() {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("subMenuDaysAccrued"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TextMeshPro* GetSubMenuPlayerName() {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("subMenuPlayerName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetSubStatusUnknownScreen() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("subStatusUnknownScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::SITouchscreenButtonContainer*>* GetToggleButtonContainers() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::SITouchscreenButtonContainer*>*> _field = GetClass().GetField(O("toggleButtonContainers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TextMeshPro* GetUnsubscribedMenuPlayerName() {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("unsubscribedMenuPlayerName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetWaitingForScanScreen() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("waitingForScanScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCurrentState(::GorillaTagScripts_Subscription::SubscriptionKiosk_ScreenState value) {
            static BNM::Field<::GorillaTagScripts_Subscription::SubscriptionKiosk_ScreenState> _field = GetClass().GetField(O("currentState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastPurchase(::GorillaTagScripts_Subscription::SubscriptionKiosk_PurchaseResult value) {
            static BNM::Field<::GorillaTagScripts_Subscription::SubscriptionKiosk_PurchaseResult> _field = GetClass().GetField(O("lastPurchase"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastState(::GorillaTagScripts_Subscription::SubscriptionKiosk_ScreenState value) {
            static BNM::Field<::GorillaTagScripts_Subscription::SubscriptionKiosk_ScreenState> _field = GetClass().GetField(O("lastState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMainMenuSubscribedScreen(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("mainMenuSubscribedScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMainMenuUnsubscribedScreen(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("mainMenuUnsubscribedScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPurchaseProgressScreen(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("purchaseProgressScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPurchaseResultScreen(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("purchaseResultScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPurchaseResultText(::TextMeshPro* value) {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("purchaseResultText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPurchaseSubScreen(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("purchaseSubScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSafeAccountScreen(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("safeAccountScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScanningScreen(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("scanningScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScreensByState(::BNM::Structures::Mono::Dictionary<::GorillaTagScripts_Subscription::SubscriptionKiosk_ScreenState, ::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GorillaTagScripts_Subscription::SubscriptionKiosk_ScreenState, ::GameObject*>*> _field = GetClass().GetField(O("screensByState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSteamComingSoon(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("steamComingSoon"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSubDataAutoRenew(::TextMeshPro* value) {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("subDataAutoRenew"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSubDataDaysAccrued(::TextMeshPro* value) {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("subDataDaysAccrued"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSubDataDaysRemaining(::TextMeshPro* value) {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("subDataDaysRemaining"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSubDataPlayerName(::TextMeshPro* value) {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("subDataPlayerName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSubDataRenewDate(::TextMeshPro* value) {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("subDataRenewDate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSubDataScreen(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("subDataScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSubDataSubscribeButton(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("subDataSubscribeButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSubDataSubscriptionTerm(::TextMeshPro* value) {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("subDataSubscriptionTerm"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSubMenuDaysAccrued(::TextMeshPro* value) {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("subMenuDaysAccrued"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSubMenuPlayerName(::TextMeshPro* value) {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("subMenuPlayerName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSubStatusUnknownScreen(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("subStatusUnknownScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetToggleButtonContainers(::BNM::Structures::Mono::List<::GlobalNamespace::SITouchscreenButtonContainer*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::SITouchscreenButtonContainer*>*> _field = GetClass().GetField(O("toggleButtonContainers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUnsubscribedMenuPlayerName(::TextMeshPro* value) {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("unsubscribedMenuPlayerName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWaitingForScanScreen(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("waitingForScanScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void ActivateScreen(::GorillaTagScripts_Subscription::SubscriptionKiosk_ScreenState activeScreen) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ActivateScreen"), {"activeScreen"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(activeScreen);
        }
        void AddButton(::GlobalNamespace::SITouchscreenButton* button, bool isPopupButton) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddButton"), {"button", "isPopupButton"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(button, isPopupButton);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::GlobalNamespace::SIScreenRegion* get_ScreenRegion() {
            static BNM::Method<::GlobalNamespace::SIScreenRegion*> _m = GetClass().GetMethod(O("get_ScreenRegion"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool GetSubscriptionFeatureState(int buttonData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("GetSubscriptionFeatureState"), {"buttonData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(buttonData);
        }
        void HandleSubscriptionToggle(int buttonData, bool requestedState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleSubscriptionToggle"), {"buttonData", "requestedState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(buttonData, requestedState);
        }
        void HandScanAborted() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandScanAborted"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void HandScanned() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandScanned"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void HandScanStarted() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandScanStarted"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void KioskAbandoned() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("KioskAbandoned"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void LocalSubscriptionDataUpdated() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LocalSubscriptionDataUpdated"));
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
        void PurchaseSubscription(::GorillaTagScripts::SubscriptionManager_SubscriptionTerm subTerm) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PurchaseSubscription"), {"subTerm"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(subTerm);
        }
        void SliceUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SliceUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
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
        void UpdateExperimentalFeature(bool state) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateExperimentalFeature"), {"state"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(state);
        }
        void UpdateGoldNameTag(bool state) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateGoldNameTag"), {"state"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(state);
        }
        void UpdatePurchaseResultScreen(::GorillaTagScripts_Subscription::SubscriptionKiosk_PurchaseResult result) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdatePurchaseResultScreen"), {"result"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(result);
        }
        void UpdateState(::GorillaTagScripts_Subscription::SubscriptionKiosk_ScreenState newState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateState"), {"newState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newState);
        }
        void UpdateSubscribedMenu() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateSubscribedMenu"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateSubscriptionData() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateSubscriptionData"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool UpdateSubscriptionFeatureState(int buttonData, bool newState) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("UpdateSubscriptionFeatureState"), {"buttonData", "newState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(buttonData, newState);
        }
        void UpdateToggleButtonState(int buttonData, bool state) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateToggleButtonState"), {"buttonData", "state"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(buttonData, state);
        }
        void UpdateUnsubscribedMenu() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateUnsubscribedMenu"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
