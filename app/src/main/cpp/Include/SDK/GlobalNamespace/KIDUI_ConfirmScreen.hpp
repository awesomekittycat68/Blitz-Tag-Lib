#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct KIDUI_ConfirmScreen : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "KIDUI_ConfirmScreen");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::KIDUI_AnimatedEllipsis* GetAnimatedEllipsis() {
            static BNM::Field<::GlobalNamespace::KIDUI_AnimatedEllipsis*> _field = GetClass().GetField(O("_animatedEllipsis"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::KIDUIButton* GetBackButton() {
            static BNM::Field<::GlobalNamespace::KIDUIButton*> _field = GetClass().GetField(O("_backButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetCancellationTokenSource() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_cancellationTokenSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::KIDUIButton* GetConfirmButton() {
            static BNM::Field<::GlobalNamespace::KIDUIButton*> _field = GetClass().GetField(O("_confirmButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetEmailRequestResult() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_emailRequestResult"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetEmailToConfirmTxt() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("_emailToConfirmTxt"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::KIDUI_ErrorScreen* GetErrorScreen() {
            static BNM::Field<::GlobalNamespace::KIDUI_ErrorScreen*> _field = GetClass().GetField(O("_errorScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasCompletedSendEmailRequest() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_hasCompletedSendEmailRequest"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::KIDUI_MainScreen* GetMainScreen() {
            static BNM::Field<::GlobalNamespace::KIDUI_MainScreen*> _field = GetClass().GetField(O("_mainScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMinimumDelay() {
            static BNM::Field<int> _field = GetClass().GetField(O("_minimumDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::KIDUI_SetupScreen* GetSetupScreen() {
            static BNM::Field<::GlobalNamespace::KIDUI_SetupScreen*> _field = GetClass().GetField(O("_setupScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetSubmittedEmailAddress() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_submittedEmailAddress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::KIDUI_EmailSuccess* GetSuccessScreen() {
            static BNM::Field<::GlobalNamespace::KIDUI_EmailSuccess*> _field = GetClass().GetField(O("_successScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAnimatedEllipsis(::GlobalNamespace::KIDUI_AnimatedEllipsis* value) {
            static BNM::Field<::GlobalNamespace::KIDUI_AnimatedEllipsis*> _field = GetClass().GetField(O("_animatedEllipsis"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBackButton(::GlobalNamespace::KIDUIButton* value) {
            static BNM::Field<::GlobalNamespace::KIDUIButton*> _field = GetClass().GetField(O("_backButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCancellationTokenSource(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_cancellationTokenSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetConfirmButton(::GlobalNamespace::KIDUIButton* value) {
            static BNM::Field<::GlobalNamespace::KIDUIButton*> _field = GetClass().GetField(O("_confirmButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEmailRequestResult(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_emailRequestResult"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEmailToConfirmTxt(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("_emailToConfirmTxt"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetErrorScreen(::GlobalNamespace::KIDUI_ErrorScreen* value) {
            static BNM::Field<::GlobalNamespace::KIDUI_ErrorScreen*> _field = GetClass().GetField(O("_errorScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasCompletedSendEmailRequest(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_hasCompletedSendEmailRequest"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMainScreen(::GlobalNamespace::KIDUI_MainScreen* value) {
            static BNM::Field<::GlobalNamespace::KIDUI_MainScreen*> _field = GetClass().GetField(O("_mainScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMinimumDelay(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_minimumDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSetupScreen(::GlobalNamespace::KIDUI_SetupScreen* value) {
            static BNM::Field<::GlobalNamespace::KIDUI_SetupScreen*> _field = GetClass().GetField(O("_setupScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSubmittedEmailAddress(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_submittedEmailAddress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSuccessScreen(::GlobalNamespace::KIDUI_EmailSuccess* value) {
            static BNM::Field<::GlobalNamespace::KIDUI_EmailSuccess*> _field = GetClass().GetField(O("_successScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void NotifyOfResult(bool success) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("NotifyOfResult"), {"success"});
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
        void OnEmailSubmitted(::BNM::Structures::Mono::String* emailAddress) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEmailSubmitted"), {"emailAddress"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(emailAddress);
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ShowErrorScreen(::BNM::Structures::Mono::String* errorMessage) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ShowErrorScreen"), {"errorMessage"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(errorMessage);
        }
    };
}
