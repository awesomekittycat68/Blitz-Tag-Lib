#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "VirtualStumpOptionsTerminal_ETerminalState.hpp"
#include "../GorillaTagScripts_VirtualStumpCustomMaps_UI/CustomMapKeyboardBinding.hpp"

namespace GlobalNamespace {
    struct VirtualStumpOptionsTerminal : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "VirtualStumpOptionsTerminal");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::String* GetAccountLinkingPromptString() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("accountLinkingPromptString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetAlreadyLinkedAccountString() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("alreadyLinkedAccountString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GameObject*>* GetButtonsToShowMODIO() {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("buttonsToShow_MODIO"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GameObject*>* GetButtonsToShowROOMSIZE() {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("buttonsToShow_ROOMSIZE"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetCachedError() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("cachedError"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetCachedLinkCode() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("cachedLinkCode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetCachedLinkURL() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("cachedLinkURL"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GameObject*>* GetContextualButtons() {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("contextualButtons"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::VirtualStumpOptionsTerminal_ETerminalState GetCurrentState() {
            static BNM::Field<::GlobalNamespace::VirtualStumpOptionsTerminal_ETerminalState> _field = GetClass().GetField(O("currentState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts_VirtualStumpCustomMaps_UI::CustomMapsKeyboard* GetKeyboard() {
            static BNM::Field<::GorillaTagScripts_VirtualStumpCustomMaps_UI::CustomMapsKeyboard*> _field = GetClass().GetField(O("keyboard"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetLinkAccountPromptString() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("linkAccountPromptString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetLinkCodeLabelString() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("linkCodeLabelString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetLoggedInAsString() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("loggedInAsString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetLoggingInString() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("loggingInString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetLoggingOutString() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("loggingOutString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetLoginPromptString() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("loginPromptString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetMainScreenText() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("mainScreenText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetNotLoggedInString() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("notLoggedInString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetOKButton() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("OKButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetOptionList() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("optionList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* GetOptionStrings() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("optionStrings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetProcessingAccountLink() {
            static BNM::Field<bool> _field = GetClass().GetField(O("processingAccountLink"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetRoomSizeDescriptionString() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("roomSizeDescriptionString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetRoomSizeLabelString() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("roomSizeLabelString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetUrlLabelString() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("urlLabelString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAccountLinkingPromptString(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("accountLinkingPromptString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAlreadyLinkedAccountString(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("alreadyLinkedAccountString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetButtonsToShowMODIO(::BNM::Structures::Mono::List<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("buttonsToShow_MODIO"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetButtonsToShowROOMSIZE(::BNM::Structures::Mono::List<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("buttonsToShow_ROOMSIZE"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCachedError(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("cachedError"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCachedLinkCode(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("cachedLinkCode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCachedLinkURL(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("cachedLinkURL"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetContextualButtons(::BNM::Structures::Mono::List<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("contextualButtons"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentState(::GlobalNamespace::VirtualStumpOptionsTerminal_ETerminalState value) {
            static BNM::Field<::GlobalNamespace::VirtualStumpOptionsTerminal_ETerminalState> _field = GetClass().GetField(O("currentState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetKeyboard(::GorillaTagScripts_VirtualStumpCustomMaps_UI::CustomMapsKeyboard* value) {
            static BNM::Field<::GorillaTagScripts_VirtualStumpCustomMaps_UI::CustomMapsKeyboard*> _field = GetClass().GetField(O("keyboard"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLinkAccountPromptString(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("linkAccountPromptString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLinkCodeLabelString(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("linkCodeLabelString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLoggedInAsString(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("loggedInAsString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLoggingInString(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("loggingInString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLoggingOutString(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("loggingOutString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLoginPromptString(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("loginPromptString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMainScreenText(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("mainScreenText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNotLoggedInString(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("notLoggedInString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOKButton(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("OKButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOptionList(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("optionList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOptionStrings(::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("optionStrings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProcessingAccountLink(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("processingAccountLink"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRoomSizeDescriptionString(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("roomSizeDescriptionString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRoomSizeLabelString(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("roomSizeLabelString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUrlLabelString(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("urlLabelString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void ChangeState(::GlobalNamespace::VirtualStumpOptionsTerminal_ETerminalState newState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ChangeState"), {"newState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newState);
        }
        void DecrementRoomSize() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DecrementRoomSize"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void IncrementRoomSize() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("IncrementRoomSize"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnKeyPressed(::GorillaTagScripts_VirtualStumpCustomMaps_UI::CustomMapKeyboardBinding pressedButton) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnKeyPressed"), {"pressedButton"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pressedButton);
        }
        void OnKeyPressed_ModIOAccount(::GorillaTagScripts_VirtualStumpCustomMaps_UI::CustomMapKeyboardBinding pressedButton) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnKeyPressed_ModIOAccount"), {"pressedButton"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pressedButton);
        }
        void OnKeyPressed_RoomSize(::GorillaTagScripts_VirtualStumpCustomMaps_UI::CustomMapKeyboardBinding pressedButton) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnKeyPressed_RoomSize"), {"pressedButton"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pressedButton);
        }
        void OnModIOLoggedIn() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnModIOLoggedIn"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnModIOLoggedOut() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnModIOLoggedOut"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnModIOLoginFailed(::BNM::Structures::Mono::String* error) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnModIOLoginFailed"), {"error"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(error);
        }
        void OnModIOLoginStarted() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnModIOLoginStarted"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnModIOUserChanged(::BNM::IL2CPP::Il2CppObject* user) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnModIOUserChanged"), {"user"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(user);
        }
        void RefreshButtonState() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RefreshButtonState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ShowPrompt(::BNM::Structures::Mono::String* url, ::BNM::Structures::Mono::String* code) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ShowPrompt"), {"url", "code"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(url, code);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::IL2CPP::Il2CppObject* StartAccountLinkingProcess() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("StartAccountLinkingProcess"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void UpdateOptionListForCurrentState() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateOptionListForCurrentState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateScreen() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateScreen"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Structures::Mono::String* UpdateScreen_ModIOAccount() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("UpdateScreen_ModIOAccount"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* UpdateScreen_RoomSize() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("UpdateScreen_RoomSize"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
