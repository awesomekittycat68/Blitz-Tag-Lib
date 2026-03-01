#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct LegalAgreements : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "LegalAgreements");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::LegalAgreements* GetInstance() {
            static BNM::Method<::GlobalNamespace::LegalAgreements*> _method = GetClass().GetMethod(O("get_instance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetInstance(::GlobalNamespace::LegalAgreements* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_instance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetAccepted() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_accepted"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxScrollSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("_maxScrollSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMinScrollSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("_minScrollSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::KIDUIButton* GetPressAndHoldToConfirmButton() {
            static BNM::Field<::GlobalNamespace::KIDUIButton*> _field = GetClass().GetField(O("_pressAndHoldToConfirmButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetScrollInterpCurve() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_scrollInterpCurve"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetScrollInterpTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("_scrollInterpTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetScrollToBottomText() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("_scrollToBottomText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetStickVibrationDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("_stickVibrationDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetStickVibrationStrength() {
            static BNM::Field<float> _field = GetClass().GetField(O("_stickVibrationStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetCachedText() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("cachedText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::LegalAgreementTextAsset*>* GetLegalAgreementScreens() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::LegalAgreementTextAsset*>*> _field = GetClass().GetField(O("legalAgreementScreens"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetLegalAgreementsStarted() {
            static BNM::Field<bool> _field = GetClass().GetField(O("legalAgreementsStarted"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetOptIn() {
            static BNM::Field<bool> _field = GetClass().GetField(O("optIn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetOptional() {
            static BNM::Field<bool> _field = GetClass().GetField(O("optional"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::String* GetSCROLLTOENDMESSAGE() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("SCROLL_TO_END_MESSAGE"));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetScrollBar() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("scrollBar"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetScrollSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("scrollSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetScrollTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("scrollTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetState() {
            static BNM::Field<int> _field = GetClass().GetField(O("state"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetStickHeldDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("stickHeldDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetTmpBody() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("tmpBody"));
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
        void SetAccepted(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_accepted"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxScrollSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_maxScrollSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMinScrollSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_minScrollSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPressAndHoldToConfirmButton(::GlobalNamespace::KIDUIButton* value) {
            static BNM::Field<::GlobalNamespace::KIDUIButton*> _field = GetClass().GetField(O("_pressAndHoldToConfirmButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScrollInterpCurve(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_scrollInterpCurve"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScrollInterpTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_scrollInterpTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScrollToBottomText(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("_scrollToBottomText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStickVibrationDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_stickVibrationDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStickVibrationStrength(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_stickVibrationStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCachedText(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("cachedText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLegalAgreementScreens(::BNM::Structures::Mono::Array<::GlobalNamespace::LegalAgreementTextAsset*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::LegalAgreementTextAsset*>*> _field = GetClass().GetField(O("legalAgreementScreens"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLegalAgreementsStarted(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("legalAgreementsStarted"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOptIn(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("optIn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOptional(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("optional"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetSCROLLTOENDMESSAGE(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("SCROLL_TO_END_MESSAGE"));
            _field.Set(value);
        }
        void SetScrollBar(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("scrollBar"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScrollSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("scrollSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScrollTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("scrollTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetState(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("state"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStickHeldDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("stickHeldDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTmpBody(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("tmpBody"));
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
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static ::GlobalNamespace::LegalAgreements* get_instance() {
            static BNM::Method<::GlobalNamespace::LegalAgreements*> _m = GetClass().GetMethod(O("get_instance"));
            return _m.Call();
        }
        void* GetAcceptedAgreements(::BNM::Structures::Mono::Array<::GlobalNamespace::LegalAgreementTextAsset*>* agreements) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("GetAcceptedAgreements"), {"agreements"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(agreements);
        }
        void* GetTitleDataAsync(::BNM::Structures::Mono::String* key) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("GetTitleDataAsync"), {"key"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(key);
        }
        void OnAccepted(int currentAge) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnAccepted"), {"currentAge"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(currentAge);
        }
        void OnDisable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnPlayFabError(::PlayFab::PlayFabError* error) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPlayFabError"), {"error"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(error);
        }
        void OnTitleDataReceived(::BNM::Structures::Mono::String* obj) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTitleDataReceived"), {"obj"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(obj);
        }
        static void set_instance(::GlobalNamespace::LegalAgreements* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_instance"), {"value"});
            _m.Call(value);
        }
        ::BNM::IL2CPP::Il2CppObject* StartLegalAgreements() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("StartLegalAgreements"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::IL2CPP::Il2CppObject* SubmitAcceptedAgreements(::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* agreements) {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("SubmitAcceptedAgreements"), {"agreements"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(agreements);
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void* UpdateText(::GlobalNamespace::LegalAgreementTextAsset* asset, ::BNM::Structures::Mono::String* version) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("UpdateText"), {"asset", "version"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(asset, version);
        }
        void* UpdateTextFromPlayFabTitleData(::BNM::Structures::Mono::String* key, ::BNM::Structures::Mono::String* version, ::TMP_Text* target) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("UpdateTextFromPlayFabTitleData"), {"key", "version", "target"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(key, version, target);
        }
        ::BNM::IL2CPP::Il2CppObject* WaitForAcknowledgement() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("WaitForAcknowledgement"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
