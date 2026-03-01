#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct LocalisationUI : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "LocalisationUI");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::LocalisationUI* get_Instance() {
            static BNM::Method<::GlobalNamespace::LocalisationUI*> method = GetClass().GetMethod(O("get_Instance"));
            return method.Call();
        }
        static ::GlobalNamespace::LocalisationUI* GetInstance() {
            static BNM::Field<::GlobalNamespace::LocalisationUI*> field = GetClass().GetField("_instance");
            return field.Get();
        }
        ::GlobalNamespace::LocalisationUI* GetInstance_pg() {
            static BNM::Method<::GlobalNamespace::LocalisationUI*> _method = GetClass().GetMethod(O("get_Instance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::KIDUIButton* GetActiveButton() {
            static BNM::Field<::GlobalNamespace::KIDUIButton*> _field = GetClass().GetField(O("_activeButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Sprite* GetActiveSprite() {
            static BNM::Field<::Sprite*> _field = GetClass().GetField(O("_activeSprite"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetConfirmBtnTxt() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("_confirmBtnTxt"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetDefaultFont() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_defaultFont"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasConstructedUI() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_hasConstructedUI"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Sprite* GetInactiveSprite() {
            static BNM::Field<::Sprite*> _field = GetClass().GetField(O("_inactiveSprite"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GlobalNamespace::LocalisationUI* GetInstance_f() {
            static BNM::Field<::GlobalNamespace::LocalisationUI*> _field = GetClass().GetField(O("_instance"));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetJapaneseFont() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_japaneseFont"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetLanguageButtonGridTransform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_languageButtonGridTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::KIDUIButton* GetLanguageButtonPrefab() {
            static BNM::Field<::GlobalNamespace::KIDUIButton*> _field = GetClass().GetField(O("_languageButtonPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::KIDUIButton*>* GetLanguageButtons() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::KIDUIButton*>*> _field = GetClass().GetField(O("_languageButtons"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetTitleTxt() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("_titleTxt"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetUiTransform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_uiTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetActiveButton(::GlobalNamespace::KIDUIButton* value) {
            static BNM::Field<::GlobalNamespace::KIDUIButton*> _field = GetClass().GetField(O("_activeButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetActiveSprite(::Sprite* value) {
            static BNM::Field<::Sprite*> _field = GetClass().GetField(O("_activeSprite"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetConfirmBtnTxt(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("_confirmBtnTxt"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDefaultFont(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_defaultFont"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasConstructedUI(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_hasConstructedUI"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInactiveSprite(::Sprite* value) {
            static BNM::Field<::Sprite*> _field = GetClass().GetField(O("_inactiveSprite"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetInstance(::GlobalNamespace::LocalisationUI* value) {
            static BNM::Field<::GlobalNamespace::LocalisationUI*> _field = GetClass().GetField(O("_instance"));
            _field.Set(value);
        }
        void SetJapaneseFont(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_japaneseFont"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLanguageButtonGridTransform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_languageButtonGridTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLanguageButtonPrefab(::GlobalNamespace::KIDUIButton* value) {
            static BNM::Field<::GlobalNamespace::KIDUIButton*> _field = GetClass().GetField(O("_languageButtonPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLanguageButtons(::BNM::Structures::Mono::List<::GlobalNamespace::KIDUIButton*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::KIDUIButton*>*> _field = GetClass().GetField(O("_languageButtons"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTitleTxt(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("_titleTxt"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUiTransform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_uiTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CheckSelectedLanguage() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CheckSelectedLanguage"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ConstructLocalisationUI() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ConstructLocalisationUI"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static ::GlobalNamespace::LocalisationUI* get_Instance_1() {
            static BNM::Method<::GlobalNamespace::LocalisationUI*> _m = GetClass().GetMethod(O("get_Instance"));
            return _m.Call();
        }
        static ::Transform* GetUITransform() {
            static BNM::Method<::Transform*> _m = GetClass().GetMethod(O("GetUITransform"));
            return _m.Call();
        }
        void OnContinueButtonPressed() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnContinueButtonPressed"));
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
        void OnLanguageButtonPressed(::GlobalNamespace::KIDUIButton* objRef, int languageIndex) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnLanguageButtonPressed"), {"objRef", "languageIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(objRef, languageIndex);
        }
        void OnLanguageChanged() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnLanguageChanged"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
