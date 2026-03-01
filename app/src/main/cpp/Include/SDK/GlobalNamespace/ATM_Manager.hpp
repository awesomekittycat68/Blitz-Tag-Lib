#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "ATM_Manager_ATMStages.hpp"
#include "../GorillaNetworking/GorillaATMKeyBindings.hpp"

namespace GlobalNamespace {
    struct ATM_Manager : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ATM_Manager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::ATM_Manager* GetInstance() {
            static BNM::Field<::GlobalNamespace::ATM_Manager*> field = GetClass().GetField("instance");
            return field.Get();
        }
        static constexpr const char* ATM_STARTUP_KEY = "ATM_STARTUP";
        static constexpr const char* ATM_SCREEN_KEY = "ATM_SCREEN";
        static constexpr const char* ATM_NOT_AVAILABLE_KEY = "ATM_NOT_AVAILABLE";
        static constexpr const char* ATM_BEGIN_KEY = "ATM_BEGIN";
        static constexpr const char* ATM_MAIN_SCREEN_KEY = "ATM_MAIN_SCREEN";
        static constexpr const char* ATM_CHECK_YOUR_BALANCE_KEY = "ATM_CHECK_YOUR_BALANCE";
        static constexpr const char* ATM_PURCHASING_DISABLED_OUT_OF_ORDER_KEY = "ATM_PURCHASING_DISABLED_OUT_OF_ORDER";
        static constexpr const char* ATM_CURRENT_BALANCE_KEY = "ATM_CURRENT_BALANCE";
        static constexpr const char* ATM_MODDED_CLIENT_KEY = "ATM_MODDED_CLIENT";
        static constexpr const char* ATM_CHOOSE_PURCHASE_KEY = "ATM_CHOOSE_PURCHASE";
        static constexpr const char* ATM_PURCHASE_CONFIRMATION_KEY = "ATM_PURCHASE_CONFIRMATION";
        static constexpr const char* ATM_PURCHASE_CONFIRMATION_STEAM_KEY = "ATM_PURCHASE_CONFIRMATION_STEAM";
        static constexpr const char* ATM_PURCHASING_KEY = "ATM_PURCHASING";
        static constexpr const char* ATM_SUCCESS_NEW_BALANCE_KEY = "ATM_SUCCESS_NEW_BALANCE";
        static constexpr const char* ATM_PURCHASE_CANCELLED_KEY = "ATM_PURCHASE_CANCELLED";
        static constexpr const char* ATM_LOCKED_KEY = "ATM_LOCKED";
        static constexpr const char* ATM_RETURN_KEY = "ATM_RETURN";
        static constexpr const char* ATM_BACK_KEY = "ATM_BACK";
        static constexpr const char* ATM_CONFIRM_KEY = "ATM_CONFIRM";
        static constexpr const char* ATM_IAP_NOT_AVAILABLE_KEY = "ATM_IAP_NOT_AVAILABLE";
        static constexpr const char* ATM_BALANCE_KEY = "ATM_BALANCE";
        static constexpr const char* ATM_PURCHASE_KEY = "ATM_PURCHASE";
        static constexpr const char* ATM_CREATOR_CODE_KEY = "ATM_CREATOR_CODE";
        static constexpr const char* ATM_CREATOR_CODE_VALIDATING_KEY = "ATM_CREATOR_CODE_VALIDATING";
        static constexpr const char* ATM_CREATOR_CODE_VALID_KEY = "ATM_CREATOR_CODE_VALID";
        static constexpr const char* ATM_CREATOR_CODE_INVALID_KEY = "ATM_CREATOR_CODE_INVALID";
        static constexpr const char* ATM_PURCHASE_OPTION_FIRST_KEY = "ATM_PURCHASE_OPTION_FIRST";
        static constexpr const char* ATM_PURCHASE_OPTION_SECOND_KEY = "ATM_PURCHASE_OPTION_SECOND";
        static constexpr const char* ATM_PURCHASE_OPTION_THIRD_KEY = "ATM_PURCHASE_OPTION_THIRD";
        static constexpr const char* ATM_PURCHASE_OPTION_FOURTH_KEY = "ATM_PURCHASE_OPTION_FOURTH";
        static constexpr int MAX_CODE_LENGTH = 10;
        ::GlobalNamespace::ATM_Manager_ATMStages GetCurrentATMStage() {
            static BNM::Method<::GlobalNamespace::ATM_Manager_ATMStages> _method = GetClass().GetMethod(O("get_CurrentATMStage"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::String* GetTempCreatorCodeOveride() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_tempCreatorCodeOveride"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetAlreadyBegan() {
            static BNM::Field<bool> _field = GetClass().GetField(O("alreadyBegan"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetATMTERMINALID() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("ATM_TERMINAL_ID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GorillaNetworking_Store::ATM_UI*>* GetAtmUIs() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaNetworking_Store::ATM_UI*>*> _field = GetClass().GetField(O("atmUIs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::ATM_Manager_ATMStages GetCurrentATMStage_f() {
            static BNM::Field<::GlobalNamespace::ATM_Manager_ATMStages> _field = GetClass().GetField(O("currentATMStage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GlobalNamespace::ATM_Manager* GetInstance_f() {
            static BNM::Field<::GlobalNamespace::ATM_Manager*> _field = GetClass().GetField(O("instance"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::NexusGroupId*>* GetNexusGroups() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::NexusGroupId*>*> _field = GetClass().GetField(O("nexusGroups"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetNumShinyRocksToBuy() {
            static BNM::Field<int> _field = GetClass().GetField(O("numShinyRocksToBuy"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetShinyRocksCost() {
            static BNM::Field<float> _field = GetClass().GetField(O("shinyRocksCost"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::CreatorCodeSmallDisplay*>* GetSmallDisplays() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::CreatorCodeSmallDisplay*>*> _field = GetClass().GetField(O("smallDisplays"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetTempCreatorCodeOveride(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_tempCreatorCodeOveride"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAlreadyBegan(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("alreadyBegan"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetATMTERMINALID(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("ATM_TERMINAL_ID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAtmUIs(::BNM::Structures::Mono::List<::GorillaNetworking_Store::ATM_UI*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaNetworking_Store::ATM_UI*>*> _field = GetClass().GetField(O("atmUIs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentATMStage(::GlobalNamespace::ATM_Manager_ATMStages value) {
            static BNM::Field<::GlobalNamespace::ATM_Manager_ATMStages> _field = GetClass().GetField(O("currentATMStage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetInstance(::GlobalNamespace::ATM_Manager* value) {
            static BNM::Field<::GlobalNamespace::ATM_Manager*> _field = GetClass().GetField(O("instance"));
            _field.Set(value);
        }
        void SetNexusGroups(::BNM::Structures::Mono::Array<::GlobalNamespace::NexusGroupId*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::NexusGroupId*>*> _field = GetClass().GetField(O("nexusGroups"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNumShinyRocksToBuy(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("numShinyRocksToBuy"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShinyRocksCost(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("shinyRocksCost"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSmallDisplays(::BNM::Structures::Mono::List<::GlobalNamespace::CreatorCodeSmallDisplay*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::CreatorCodeSmallDisplay*>*> _field = GetClass().GetField(O("smallDisplays"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AddATM(::GorillaNetworking_Store::ATM_UI* newATM) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddATM"), {"newATM"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newATM);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Coroutine::IEnumerator* CheckIfQuitPurchase() {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("CheckIfQuitPurchase"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void CreatorCodesInitialized() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CreatorCodesInitialized"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CreatorCodeValid() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CreatorCodeValid"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CreatorCodeValidating() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CreatorCodeValidating"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::GlobalNamespace::ATM_Manager_ATMStages get_CurrentATMStage() {
            static BNM::Method<::GlobalNamespace::ATM_Manager_ATMStages> _m = GetClass().GetMethod(O("get_CurrentATMStage"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void HookupToCreatorCodes() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HookupToCreatorCodes"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void LeaveSystemMenu() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LeaveSystemMenu"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnCreatorCodeChanged(::BNM::Structures::Mono::String* id) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnCreatorCodeChanged"), {"id"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(id);
        }
        void OnCreatorCodeInvalid(::BNM::Structures::Mono::String* id) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnCreatorCodeInvalid"), {"id"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(id);
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
        void OnLanguageChanged() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnLanguageChanged"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnOnCreatorCodeFailureEvent(::BNM::Structures::Mono::String* id) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnOnCreatorCodeFailureEvent"), {"id"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(id);
        }
        void PressButton(::GorillaNetworking::GorillaATMKeyBindings buttonPressed) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PressButton"), {"buttonPressed"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(buttonPressed);
        }
        void PressCurrencyPurchaseButton(::BNM::Structures::Mono::String* currencyPurchaseSize) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PressCurrencyPurchaseButton"), {"currencyPurchaseSize"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(currencyPurchaseSize);
        }
        void ProcessATMState(::BNM::Structures::Mono::String* currencyButton) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ProcessATMState"), {"currencyButton"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(currencyButton);
        }
        void RemoveATM(::GorillaNetworking_Store::ATM_UI* atmToRemove) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveATM"), {"atmToRemove"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(atmToRemove);
        }
        void SetATMText(::BNM::Structures::Mono::String* newText) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetATMText"), {"newText"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newText);
        }
        void SetTemporaryCreatorCode(::BNM::Structures::Mono::String* code) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetTemporaryCreatorCode"), {"code"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(code);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SwitchToStage(::GlobalNamespace::ATM_Manager_ATMStages newStage) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SwitchToStage"), {"newStage"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newStage);
        }
    };
}
