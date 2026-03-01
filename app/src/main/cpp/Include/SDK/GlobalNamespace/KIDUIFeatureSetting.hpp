#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "EKIDFeatures.hpp"
#include "KIDUI_MainScreen_FeatureToggleSetup.hpp"

namespace GlobalNamespace {
    struct KIDUIFeatureSetting : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "KIDUIFeatureSetting");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetAlwaysCheckFeatureSetting() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_AlwaysCheckFeatureSetting"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetAlwaysCheckFeatureSetting(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_AlwaysCheckFeatureSetting"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GameObject* GetCrossIcon() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_crossIcon"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetDisabledTextStr() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_disabledTextStr"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetEnabledTextStr() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_enabledTextStr"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::KIDUI_MainScreen_FeatureToggleSetup GetFeature() {
            static BNM::Field<::GlobalNamespace::KIDUI_MainScreen_FeatureToggleSetup> _field = GetClass().GetField(O("_feature"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetFeatureName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_featureName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetFeatureNameTxt() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("_featureNameTxt"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetFeatureStatusTxt() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("_featureStatusTxt"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::KIDUIToggle* GetFeatureToggle() {
            static BNM::Field<::GlobalNamespace::KIDUIToggle*> _field = GetClass().GetField(O("_featureToggle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::EKIDFeatures GetFeatureType() {
            static BNM::Field<::GlobalNamespace::EKIDFeatures> _field = GetClass().GetField(O("_featureType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetGuardianManagedEnabled() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_guardianManagedEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetGuardianManagedLocked() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_guardianManagedLocked"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasToggle() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_hasToggle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<::GlobalNamespace::EKIDFeatures>* GetOnChangeCallback() {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::EKIDFeatures>*> _field = GetClass().GetField(O("_onChangeCallback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetPermissionName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_permissionName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetTickIcon() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_tickIcon"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCrossIcon(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_crossIcon"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDisabledTextStr(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_disabledTextStr"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEnabledTextStr(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_enabledTextStr"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFeature(::GlobalNamespace::KIDUI_MainScreen_FeatureToggleSetup value) {
            static BNM::Field<::GlobalNamespace::KIDUI_MainScreen_FeatureToggleSetup> _field = GetClass().GetField(O("_feature"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFeatureName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_featureName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFeatureNameTxt(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("_featureNameTxt"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFeatureStatusTxt(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("_featureStatusTxt"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFeatureToggle(::GlobalNamespace::KIDUIToggle* value) {
            static BNM::Field<::GlobalNamespace::KIDUIToggle*> _field = GetClass().GetField(O("_featureToggle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFeatureType(::GlobalNamespace::EKIDFeatures value) {
            static BNM::Field<::GlobalNamespace::EKIDFeatures> _field = GetClass().GetField(O("_featureType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGuardianManagedEnabled(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_guardianManagedEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGuardianManagedLocked(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_guardianManagedLocked"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasToggle(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_hasToggle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnChangeCallback(::BNM::Structures::Mono::Action<::GlobalNamespace::EKIDFeatures>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::EKIDFeatures>*> _field = GetClass().GetField(O("_onChangeCallback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPermissionName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_permissionName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTickIcon(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_tickIcon"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AddDeniedSoundHandler(::GameObject* obj) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddDeniedSoundHandler"), {"obj"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(obj);
        }
        void CreateNewFeatureSettingGuardianManaged(::GlobalNamespace::KIDUI_MainScreen_FeatureToggleSetup feature, bool isEnabled) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CreateNewFeatureSettingGuardianManaged"), {"feature", "isEnabled"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(feature, isEnabled);
        }
        void CreateNewFeatureSettingWithoutToggle(::GlobalNamespace::KIDUI_MainScreen_FeatureToggleSetup feature, bool alwaysCheckFeatureSetting) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CreateNewFeatureSettingWithoutToggle"), {"feature", "alwaysCheckFeatureSetting"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(feature, alwaysCheckFeatureSetting);
        }
        ::GlobalNamespace::KIDUIToggle* CreateNewFeatureSettingWithToggle(::GlobalNamespace::KIDUI_MainScreen_FeatureToggleSetup feature, bool initialState, bool alwaysCheckFeatureSetting) {
            static BNM::Method<::GlobalNamespace::KIDUIToggle*> _m = GetClass().GetMethod(O("CreateNewFeatureSettingWithToggle"), {"feature", "initialState", "alwaysCheckFeatureSetting"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(feature, initialState, alwaysCheckFeatureSetting);
        }
        void EnsureRaycastTarget(::GameObject* obj) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EnsureRaycastTarget"), {"obj"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(obj);
        }
        bool get_AlwaysCheckFeatureSetting() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_AlwaysCheckFeatureSetting"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool GetFeatureToggleState() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("GetFeatureToggleState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool GetHasToggle_1() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("GetHasToggle"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void RefreshTextOnLanguageChanged() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RefreshTextOnLanguageChanged"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RegisterToggleOffEvent(::BNM::Structures::Mono::Action<>* action) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RegisterToggleOffEvent"), {"action"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(action);
        }
        void RegisterToggleOnEvent(::BNM::Structures::Mono::Action<>* action) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RegisterToggleOnEvent"), {"action"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(action);
        }
        void set_AlwaysCheckFeatureSetting(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_AlwaysCheckFeatureSetting"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetFeatureData(::GlobalNamespace::KIDUI_MainScreen_FeatureToggleSetup feature, bool alwaysCheckFeatureSetting, bool featureToggleEnabled) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetFeatureData"), {"feature", "alwaysCheckFeatureSetting", "featureToggleEnabled"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(feature, alwaysCheckFeatureSetting, featureToggleEnabled);
        }
        void SetFeatureName_1() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetFeatureName"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetFeatureSettingVisible(bool visible) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetFeatureSettingVisible"), {"visible"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(visible);
        }
        void SetFeatureToggle_1(bool enableToggle) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetFeatureToggle"), {"enableToggle"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(enableToggle);
        }
        void SetGuardianManagedState(bool isEnabled) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetGuardianManagedState"), {"isEnabled"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(isEnabled);
        }
        void SetPlayerManagedState(bool isInteractable, bool isOptedIn) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetPlayerManagedState"), {"isInteractable", "isOptedIn"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(isInteractable, isOptedIn);
        }
        void SetupGuardianManagedClickHandlers() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetupGuardianManagedClickHandlers"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UnregisterOnToggleChangeEvent(::BNM::Structures::Mono::Action<>* action) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnregisterOnToggleChangeEvent"), {"action"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(action);
        }
        void UnregisterToggleOffEvent(::BNM::Structures::Mono::Action<>* action) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnregisterToggleOffEvent"), {"action"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(action);
        }
        void UnregisterToggleOnEvent(::BNM::Structures::Mono::Action<>* action) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnregisterToggleOnEvent"), {"action"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(action);
        }
    };
}
