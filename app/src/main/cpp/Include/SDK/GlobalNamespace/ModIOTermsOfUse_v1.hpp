#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct ModIOTermsOfUse_v1 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ModIOTermsOfUse_v1");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetAcceptButtonDown() {
            static BNM::Field<bool> _field = GetClass().GetField(O("acceptButtonDown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetAccepted() {
            static BNM::Field<bool> _field = GetClass().GetField(O("accepted"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetCachedTermsText() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("cachedTermsText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasTermsOfUse() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasTermsOfUse"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHoldTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("holdTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetNextButton() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("nextButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetPrevButton() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("prevButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::LineRenderer* GetProgressBar() {
            static BNM::Field<::LineRenderer*> _field = GetClass().GetField(O("progressBar"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<bool>* GetTermsAcknowledgedCallback() {
            static BNM::Field<::BNM::Structures::Mono::Action<bool>*> _field = GetClass().GetField(O("termsAcknowledgedCallback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetTitle() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("title"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetTmpBody() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("tmpBody"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetTmpPage() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("tmpPage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetTmpTitle() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("tmpTitle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetUiParent() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("uiParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetWaitingForAcknowledge() {
            static BNM::Field<bool> _field = GetClass().GetField(O("waitingForAcknowledge"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetYesNoButtons() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("yesNoButtons"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAcceptButtonDown(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("acceptButtonDown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAccepted(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("accepted"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCachedTermsText(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("cachedTermsText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasTermsOfUse(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasTermsOfUse"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHoldTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("holdTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNextButton(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("nextButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPrevButton(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("prevButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProgressBar(::LineRenderer* value) {
            static BNM::Field<::LineRenderer*> _field = GetClass().GetField(O("progressBar"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTermsAcknowledgedCallback(::BNM::Structures::Mono::Action<bool>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<bool>*> _field = GetClass().GetField(O("termsAcknowledgedCallback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTitle(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("title"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTmpBody(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("tmpBody"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTmpPage(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("tmpPage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTmpTitle(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("tmpTitle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUiParent(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("uiParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWaitingForAcknowledge(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("waitingForAcknowledge"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetYesNoButtons(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("yesNoButtons"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Acknowledge(bool didAccept) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Acknowledge"), {"didAccept"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(didAccept);
        }
        void ActivateAcceptButtonGroup() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ActivateAcceptButtonGroup"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Structures::Mono::String* GetStringForListItemIdx_LowerAlpha(int idx) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetStringForListItemIdx_LowerAlpha"), {"idx"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(idx);
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
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void TurnPage(int i) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TurnPage"), {"i"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(i);
        }
        void* UpdateTextFromTerms() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("UpdateTextFromTerms"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* UpdateTextWithFullTerms() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("UpdateTextWithFullTerms"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::IL2CPP::Il2CppObject* WaitForAcknowledgement() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("WaitForAcknowledgement"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
