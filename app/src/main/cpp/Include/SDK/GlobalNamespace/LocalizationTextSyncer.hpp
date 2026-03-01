#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "LocalisationFontPair.hpp"
#include "LocalizationTextSyncer_TextCompSyncData.hpp"

namespace GlobalNamespace {
    struct LocalizationTextSyncer : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "LocalizationTextSyncer");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::GlobalNamespace::LocalizationTextSyncer_TextCompSyncData>* GetTextComponentsToSync() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::LocalizationTextSyncer_TextCompSyncData>*> _field = GetClass().GetField(O("_textComponentsToSync"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::LocalisationFontPair>* GetUniversalFontOverrides() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::LocalisationFontPair>*> _field = GetClass().GetField(O("_universalFontOverrides"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetTextComponentsToSync(::BNM::Structures::Mono::List<::GlobalNamespace::LocalizationTextSyncer_TextCompSyncData>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::LocalizationTextSyncer_TextCompSyncData>*> _field = GetClass().GetField(O("_textComponentsToSync"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUniversalFontOverrides(::BNM::Structures::Mono::List<::GlobalNamespace::LocalisationFontPair>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::LocalisationFontPair>*> _field = GetClass().GetField(O("_universalFontOverrides"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
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
        bool TryGetFontDataOverride(::GlobalNamespace::LocalisationFontPair& fontDataOverride) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryGetFontDataOverride"), {"fontDataOverride"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(&fontDataOverride);
        }
    };
}
