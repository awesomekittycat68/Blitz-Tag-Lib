#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct KIDUI_AgeAppealEmailConfirmation : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "KIDUI_AgeAppealEmailConfirmation");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::KIDUI_AgeAppealEmailScreen* GetAgeAppealEmailScreen() {
            static BNM::Field<::GlobalNamespace::KIDUI_AgeAppealEmailScreen*> _field = GetClass().GetField(O("_ageAppealEmailScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetConfirmText() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("_confirmText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetEmailText() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("_emailText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::KIDUI_AgeAppealEmailError* GetErrorScreen() {
            static BNM::Field<::GlobalNamespace::KIDUI_AgeAppealEmailError*> _field = GetClass().GetField(O("_errorScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasCompletedSendEmailRequest() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_hasCompletedSendEmailRequest"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMinimumDelay() {
            static BNM::Field<int> _field = GetClass().GetField(O("_minimumDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::KIDUI_EmailSuccess* GetSuccessScreen() {
            static BNM::Field<::GlobalNamespace::KIDUI_EmailSuccess*> _field = GetClass().GetField(O("_successScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetCONFIRMPARENTEMAIL() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("CONFIRM_PARENT_EMAIL"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetCONFIRMYOUREMAIL() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("CONFIRM_YOUR_EMAIL"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasChallenge() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasChallenge"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetNewAgeToAppeal() {
            static BNM::Field<int> _field = GetClass().GetField(O("newAgeToAppeal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAgeAppealEmailScreen(::GlobalNamespace::KIDUI_AgeAppealEmailScreen* value) {
            static BNM::Field<::GlobalNamespace::KIDUI_AgeAppealEmailScreen*> _field = GetClass().GetField(O("_ageAppealEmailScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetConfirmText(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("_confirmText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEmailText(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("_emailText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetErrorScreen(::GlobalNamespace::KIDUI_AgeAppealEmailError* value) {
            static BNM::Field<::GlobalNamespace::KIDUI_AgeAppealEmailError*> _field = GetClass().GetField(O("_errorScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasCompletedSendEmailRequest(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_hasCompletedSendEmailRequest"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMinimumDelay(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_minimumDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSuccessScreen(::GlobalNamespace::KIDUI_EmailSuccess* value) {
            static BNM::Field<::GlobalNamespace::KIDUI_EmailSuccess*> _field = GetClass().GetField(O("_successScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCONFIRMPARENTEMAIL(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("CONFIRM_PARENT_EMAIL"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCONFIRMYOUREMAIL(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("CONFIRM_YOUR_EMAIL"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasChallenge(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasChallenge"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNewAgeToAppeal(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("newAgeToAppeal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void NotifyOfEmailResult(bool success) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("NotifyOfEmailResult"), {"success"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(success);
        }
        void OnBackPressed() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnBackPressed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnConfirmPressed() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnConfirmPressed"));
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
        void ShowAgeAppealConfirmationScreen(bool hasChallenge, int newAge, ::BNM::Structures::Mono::String* emailToConfirm) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ShowAgeAppealConfirmationScreen"), {"hasChallenge", "newAge", "emailToConfirm"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(hasChallenge, newAge, emailToConfirm);
        }
        void ShowErrorScreen() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ShowErrorScreen"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void StartAgeAppealChallengeEmail() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StartAgeAppealChallengeEmail"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::IL2CPP::Il2CppObject* StartAgeAppealEmail() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("StartAgeAppealEmail"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
