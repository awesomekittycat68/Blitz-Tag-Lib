#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct PreGameMessage : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "PreGameMessage");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Action<>* GetAlternativeAction() {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("_alternativeAction"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<>* GetConfirmationAction() {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("_confirmationAction"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetConfirmButtonRoot() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_confirmButtonRoot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasCompleted() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_hasCompleted"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetMessageAlternativeButtonTxt() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("_messageAlternativeButtonTxt"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetMessageAlternativeConfirmationTxt() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("_messageAlternativeConfirmationTxt"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetMessageBodyTxt() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("_messageBodyTxt"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetMessageConfirmationTxt() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("_messageConfirmationTxt"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetMessageTitleTxt() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("_messageTitleTxt"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetMultiButtonRoot() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_multiButtonRoot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetUiParent() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_uiParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHoldTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("holdTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetProgress() {
            static BNM::Field<float> _field = GetClass().GetField(O("progress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::LineRenderer* GetProgressBar() {
            static BNM::Field<::LineRenderer*> _field = GetClass().GetField(O("progressBar"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::LineRenderer* GetProgressBarL() {
            static BNM::Field<::LineRenderer*> _field = GetClass().GetField(O("progressBarL"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::LineRenderer* GetProgressBarR() {
            static BNM::Field<::LineRenderer*> _field = GetClass().GetField(O("progressBarR"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAlternativeAction(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("_alternativeAction"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetConfirmationAction(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("_confirmationAction"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetConfirmButtonRoot(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_confirmButtonRoot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasCompleted(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_hasCompleted"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMessageAlternativeButtonTxt(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("_messageAlternativeButtonTxt"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMessageAlternativeConfirmationTxt(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("_messageAlternativeConfirmationTxt"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMessageBodyTxt(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("_messageBodyTxt"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMessageConfirmationTxt(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("_messageConfirmationTxt"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMessageTitleTxt(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("_messageTitleTxt"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMultiButtonRoot(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_multiButtonRoot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUiParent(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_uiParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHoldTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("holdTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProgress(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("progress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProgressBar(::LineRenderer* value) {
            static BNM::Field<::LineRenderer*> _field = GetClass().GetField(O("progressBar"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProgressBarL(::LineRenderer* value) {
            static BNM::Field<::LineRenderer*> _field = GetClass().GetField(O("progressBarL"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProgressBarR(::LineRenderer* value) {
            static BNM::Field<::LineRenderer*> _field = GetClass().GetField(O("progressBarR"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void CloseMessage() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CloseMessage"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnAlternativePressed() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnAlternativePressed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnConfirmedPressed() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnConfirmedPressed"));
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
        void PostUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PostUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ShowMessage(::BNM::Structures::Mono::String* messageTitle, ::BNM::Structures::Mono::String* messageBody, ::BNM::Structures::Mono::String* messageConfirmation, ::BNM::Structures::Mono::Action<>* onConfirmationAction, float bodyFontSize, float buttonHideTimer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ShowMessage"), {"messageTitle", "messageBody", "messageConfirmation", "onConfirmationAction", "bodyFontSize", "buttonHideTimer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(messageTitle, messageBody, messageConfirmation, onConfirmationAction, bodyFontSize, buttonHideTimer);
        }
        void ShowMessage(::BNM::Structures::Mono::String* messageTitle, ::BNM::Structures::Mono::String* messageBody, ::BNM::Structures::Mono::String* messageConfirmationButton, ::BNM::Structures::Mono::String* messageAlternativeButton, ::BNM::Structures::Mono::Action<>* onConfirmationAction, ::BNM::Structures::Mono::Action<>* onAlternativeAction, float bodyFontSize) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ShowMessage"), {"messageTitle", "messageBody", "messageConfirmationButton", "messageAlternativeButton", "onConfirmationAction", "onAlternativeAction", "bodyFontSize"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(messageTitle, messageBody, messageConfirmationButton, messageAlternativeButton, onConfirmationAction, onAlternativeAction, bodyFontSize);
        }
        ::BNM::IL2CPP::Il2CppObject* ShowMessageWithAwait(::BNM::Structures::Mono::String* messageTitle, ::BNM::Structures::Mono::String* messageBody, ::BNM::Structures::Mono::String* messageConfirmation, ::BNM::Structures::Mono::Action<>* onConfirmationAction, float bodyFontSize, float buttonHideTimer) {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("ShowMessageWithAwait"), {"messageTitle", "messageBody", "messageConfirmation", "onConfirmationAction", "bodyFontSize", "buttonHideTimer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(messageTitle, messageBody, messageConfirmation, onConfirmationAction, bodyFontSize, buttonHideTimer);
        }
        void UpdateMessage(::BNM::Structures::Mono::String* newMessageBody, ::BNM::Structures::Mono::String* newConfirmButton) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateMessage"), {"newMessageBody", "newConfirmButton"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newMessageBody, newConfirmButton);
        }
        ::BNM::IL2CPP::Il2CppObject* WaitForCompletion() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("WaitForCompletion"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
