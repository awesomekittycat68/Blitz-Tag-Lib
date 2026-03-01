#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "ELocale.hpp"
#include "LocalisationFontPair.hpp"
#include "TextComponentLegacySupportStore.hpp"

namespace GlobalNamespace {
    struct LocalizedText : BNM::UnityEngine::Object {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "LocalizedText");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::TextComponentLegacySupportStore GetTextComponent() {
            static BNM::Method<::GlobalNamespace::TextComponentLegacySupportStore> _method = GetClass().GetMethod(O("get_TextComponent"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        static ::BNM::Structures::Mono::List<::GlobalNamespace::ELocale>* GetCachedELocalesList() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::ELocale>*> _field = GetClass().GetField(O("_cachedELocalesList"));
            return _field.Get();
        }
        bool GetIsLocalized() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_isLocalized"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsNewKey() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_isNewKey"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::LocalisationFontPair>* GetLocalisationFontsOverrides() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::LocalisationFontPair>*> _field = GetClass().GetField(O("_localisationFontsOverrides"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetNewKeyName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_newKeyName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::ELocale GetPreviewLocale() {
            static BNM::Field<::GlobalNamespace::ELocale> _field = GetClass().GetField(O("_previewLocale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::TextComponentLegacySupportStore GetTextComponent_f() {
            static BNM::Field<::GlobalNamespace::TextComponentLegacySupportStore> _field = GetClass().GetField(O("_textComponent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static void SetCachedELocalesList(::BNM::Structures::Mono::List<::GlobalNamespace::ELocale>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::ELocale>*> _field = GetClass().GetField(O("_cachedELocalesList"));
            _field.Set(value);
        }
        void SetIsLocalized(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_isLocalized"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsNewKey(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_isNewKey"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLocalisationFontsOverrides(::BNM::Structures::Mono::List<::GlobalNamespace::LocalisationFontPair>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::LocalisationFontPair>*> _field = GetClass().GetField(O("_localisationFontsOverrides"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNewKeyName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_newKeyName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPreviewLocale(::GlobalNamespace::ELocale value) {
            static BNM::Field<::GlobalNamespace::ELocale> _field = GetClass().GetField(O("_previewLocale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTextComponent(::GlobalNamespace::TextComponentLegacySupportStore value) {
            static BNM::Field<::GlobalNamespace::TextComponentLegacySupportStore> _field = GetClass().GetField(O("_textComponent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::GlobalNamespace::TextComponentLegacySupportStore get_TextComponent() {
            static BNM::Method<::GlobalNamespace::TextComponentLegacySupportStore> _m = GetClass().GetMethod(O("get_TextComponent"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool GetLocalizedFonts(::GlobalNamespace::LocalisationFontPair& fontData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("GetLocalizedFonts"), {"fontData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(&fontData);
        }
        bool HasFontOverrides() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("HasFontOverrides"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnLocaleChanged(::BNM::Structures::Mono::String* newText) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnLocaleChanged"), {"newText"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newText);
        }
        void UpdateString(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateString"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
