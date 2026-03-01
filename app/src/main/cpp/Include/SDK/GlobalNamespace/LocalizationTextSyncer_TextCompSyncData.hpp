#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "LocalisationFontPair.hpp"

namespace GlobalNamespace {
    struct LocalizationTextSyncer_TextCompSyncData : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "LocalizationTextSyncer").GetInnerClass("TextCompSyncData");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::GlobalNamespace::LocalisationFontPair>* GetFontOverrides() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::LocalisationFontPair>*> _field = GetClass().GetField(O("_fontOverrides"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetOverrideLanguageSettings() {
            static BNM::Field<bool> _field = GetClass().GetField(O("overrideLanguageSettings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetTextComponent() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("textComponent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetFontOverrides(::BNM::Structures::Mono::List<::GlobalNamespace::LocalisationFontPair>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::LocalisationFontPair>*> _field = GetClass().GetField(O("_fontOverrides"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOverrideLanguageSettings(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("overrideLanguageSettings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTextComponent(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("textComponent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool GetOverrideForLanguage(::GlobalNamespace::LocalisationFontPair& fontData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("GetOverrideForLanguage"), {"fontData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(&fontData);
        }
    };
}
