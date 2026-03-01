#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "LocalisationFontPair.hpp"

namespace GlobalNamespace {
    struct LocalisationManager : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "LocalisationManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::LocalisationManager* get_Instance() {
            static BNM::Method<::GlobalNamespace::LocalisationManager*> method = GetClass().GetMethod(O("get_Instance"));
            return method.Call();
        }
        static ::GlobalNamespace::LocalisationManager* GetInstance() {
            static BNM::Field<::GlobalNamespace::LocalisationManager*> field = GetClass().GetField("_instance");
            return field.Get();
        }
        static constexpr const char* ENGLISH_IDENTIFIER = "en";
        static constexpr const char* FRENCH_IDENTIFIER = "fr";
        static constexpr const char* GERMAN_IDENTIFIER = "de";
        static constexpr const char* ITALIAN_IDENTIFIER = "it";
        static constexpr const char* SPANISH_IDENTIFIER = "es";
        static constexpr const char* JAPENESE_IDENTIFIER = "ja";
        static constexpr const char* LANGUAGE_SET_PLAYER_PREF = "has-set-language";
        static constexpr const char* LOC_SYSTEM_PLAYER_PREF = "selected-locale";
        bool GetApplicationRunning() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_ApplicationRunning"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::IL2CPP::Il2CppObject* GetCurrentLanguage() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _method = GetClass().GetMethod(O("get_CurrentLanguage"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::LocalisationManager* GetInstance_pg() {
            static BNM::Method<::GlobalNamespace::LocalisationManager*> _method = GetClass().GetMethod(O("get_Instance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsReady() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsReady"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetLanguageSet() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_LanguageSet"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::String* GetLanugageSetPlayerPrefKey() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_LanugageSetPlayerPrefKey"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetCachedHasInitialised() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_cachedHasInitialised"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static bool GetHasInitialised() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_hasInitialised"));
            return _field.Get();
        }
        static ::BNM::IL2CPP::Il2CppObject* GetInitLocale() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_initLocale"));
            return _field.Get();
        }
        static ::GlobalNamespace::LocalisationManager* GetInstance_f() {
            static BNM::Field<::GlobalNamespace::LocalisationManager*> _field = GetClass().GetField(O("_instance"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>* GetLocaleDisplayBinding() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("_localeDisplayBinding"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::IL2CPP::Il2CppObject*>* GetLocaleTablePairs() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("_localeTablePairs"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::GlobalNamespace::LocalisationFontPair>* GetLocalisationFontDict() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::GlobalNamespace::LocalisationFontPair>*> _field = GetClass().GetField(O("_localisationFontDict"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::LocalisationFontPair>* GetLocalisationFonts() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::LocalisationFontPair>*> _field = GetClass().GetField(O("_localisationFonts"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Action<>* GetOnLanguageChanged() {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("_onLanguageChanged"));
            return _field.Get();
        }
        static ::BNM::IL2CPP::Il2CppObject* GetRequestCancellationSource() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_requestCancellationSource"));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetUpdateLangCoroutine() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_updateLangCoroutine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCachedHasInitialised(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_cachedHasInitialised"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetHasInitialised(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_hasInitialised"));
            _field.Set(value);
        }
        static void SetInitLocale(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_initLocale"));
            _field.Set(value);
        }
        static void SetInstance(::GlobalNamespace::LocalisationManager* value) {
            static BNM::Field<::GlobalNamespace::LocalisationManager*> _field = GetClass().GetField(O("_instance"));
            _field.Set(value);
        }
        static void SetLocaleDisplayBinding(::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("_localeDisplayBinding"));
            _field.Set(value);
        }
        static void SetLocaleTablePairs(::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("_localeTablePairs"));
            _field.Set(value);
        }
        static void SetLocalisationFontDict(::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::GlobalNamespace::LocalisationFontPair>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::GlobalNamespace::LocalisationFontPair>*> _field = GetClass().GetField(O("_localisationFontDict"));
            _field.Set(value);
        }
        void SetLocalisationFonts(::BNM::Structures::Mono::List<::GlobalNamespace::LocalisationFontPair>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::LocalisationFontPair>*> _field = GetClass().GetField(O("_localisationFonts"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetOnLanguageChanged(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("_onLanguageChanged"));
            _field.Set(value);
        }
        static void SetRequestCancellationSource(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_requestCancellationSource"));
            _field.Set(value);
        }
        void SetUpdateLangCoroutine(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_updateLangCoroutine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void CacheLocTables() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CacheLocTables"));
            _m.Call();
        }
        static void DefaultLocaleFallback(::BNM::IL2CPP::Il2CppObject*& result) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DefaultLocaleFallback"), {"result"});
            _m.Call(&result);
        }
        static bool get_ApplicationRunning() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_ApplicationRunning"));
            return _m.Call();
        }
        static ::BNM::IL2CPP::Il2CppObject* get_CurrentLanguage() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("get_CurrentLanguage"));
            return _m.Call();
        }
        static ::GlobalNamespace::LocalisationManager* get_Instance_1() {
            static BNM::Method<::GlobalNamespace::LocalisationManager*> _m = GetClass().GetMethod(O("get_Instance"));
            return _m.Call();
        }
        static bool get_IsReady() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsReady"));
            return _m.Call();
        }
        static bool get_LanguageSet() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_LanguageSet"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::String* get_LanugageSetPlayerPrefKey() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_LanugageSetPlayerPrefKey"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>* GetAllBindings() {
            static BNM::Method<::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>*> _m = GetClass().GetMethod(O("GetAllBindings"));
            return _m.Call();
        }
        static bool GetFontAssetForCurrentLocale(::GlobalNamespace::LocalisationFontPair& result) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("GetFontAssetForCurrentLocale"), {"result"});
            return _m.Call(&result);
        }
        static void InitialiseLanguage() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitialiseLanguage"));
            _m.Call();
        }
        static void InitialiseLocTables() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitialiseLocTables"));
            _m.Call();
        }
        static void LoadPreviousLanguage(::BNM::Structures::Mono::String* languageCode, ::BNM::IL2CPP::Il2CppObject*& result) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LoadPreviousLanguage"), {"languageCode", "result"});
            _m.Call(languageCode, &result);
        }
        static ::BNM::Structures::Mono::String* LocaleDisplayNameToFriendlyString(::BNM::Structures::Mono::String* locTextName, bool forceEnglishChar) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("LocaleDisplayNameToFriendlyString"), {"locTextName", "forceEnglishChar"});
            return _m.Call(locTextName, forceEnglishChar);
        }
        static ::BNM::Structures::Mono::String* LocaleToFriendlyString(::BNM::IL2CPP::Il2CppObject* locale, bool forceEnglishChars) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("LocaleToFriendlyString"), {"locale", "forceEnglishChars"});
            return _m.Call(locale, forceEnglishChars);
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnLanguageButtonPressed(::BNM::Structures::Mono::String* langCode, bool saveLanguage) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnLanguageButtonPressed"), {"langCode", "saveLanguage"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(langCode, saveLanguage);
        }
        static void OnSaveLanguage() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSaveLanguage"));
            _m.Call();
        }
        void ReconstructBindings() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReconstructBindings"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void RegisterOnLanguageChanged(::BNM::Structures::Mono::Action<>* callback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RegisterOnLanguageChanged"), {"callback"});
            _m.Call(callback);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        template <typename TP0 = void*>
        static bool SysLangToLoc(TP0 sysLanguage, ::BNM::IL2CPP::Il2CppObject*& language) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("SysLangToLoc"), {"sysLanguage", "language"});
            return _m.Call(sysLanguage, &language);
        }
        static bool TryGetKeyForCurrentLocale(::BNM::Structures::Mono::String* key, ::BNM::Structures::Mono::String*& result, ::BNM::Structures::Mono::String* defaultResult) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryGetKeyForCurrentLocale"), {"key", "result", "defaultResult"});
            return _m.Call(key, &result, defaultResult);
        }
        static bool TryGetKeyForEnglishString(::BNM::Structures::Mono::String* englishString, ::BNM::Structures::Mono::String*& result) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryGetKeyForEnglishString"), {"englishString", "result"});
            return _m.Call(englishString, &result);
        }
        static bool TryGetLocaleBinding(int binding, ::BNM::IL2CPP::Il2CppObject*& loc) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryGetLocaleBinding"), {"binding", "loc"});
            return _m.Call(binding, &loc);
        }
        static bool TryGetLocaleFromCode(::BNM::Structures::Mono::String* code, ::BNM::IL2CPP::Il2CppObject*& result) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryGetLocaleFromCode"), {"code", "result"});
            return _m.Call(code, &result);
        }
        static bool TryGetTranslationForCurrentLocaleWithLocString(::BNM::IL2CPP::Il2CppObject* key, ::BNM::Structures::Mono::String*& result, ::BNM::Structures::Mono::String* defaultResult, ::BNM::IL2CPP::Il2CppObject* context) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryGetTranslationForCurrentLocaleWithLocString"), {"key", "result", "defaultResult", "context"});
            return _m.Call(key, &result, defaultResult, context);
        }
        void TryUpdateLanguage(::BNM::IL2CPP::Il2CppObject* newLocale, bool saveLanguage) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TryUpdateLanguage"), {"newLocale", "saveLanguage"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newLocale, saveLanguage);
        }
        static void UnregisterOnLanguageChanged(::BNM::Structures::Mono::Action<>* callback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnregisterOnLanguageChanged"), {"callback"});
            _m.Call(callback);
        }
        ::BNM::Coroutine::IEnumerator* UpdateLanguage(::BNM::IL2CPP::Il2CppObject* newLocale, bool saveLanguage) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("UpdateLanguage"), {"newLocale", "saveLanguage"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(newLocale, saveLanguage);
        }
    };
}
