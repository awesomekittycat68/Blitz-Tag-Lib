#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "EGetPermissionsStatus.hpp"
#include "EKIDFeatures.hpp"
#include "EMainScreenStatus.hpp"
#include "KIDUI_Controller_Metrics_ShowReason.hpp"
#include "KIDUI_MainScreen_FeatureToggleSetup.hpp"

namespace GlobalNamespace {
    struct KIDUI_MainScreen : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "KIDUI_MainScreen");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr const char* OPT_IN_SUFFIX = "-opt-in";
        ::GlobalNamespace::KIDUI_AnimatedEllipsis* GetAnimatedEllipsis() {
            static BNM::Field<::GlobalNamespace::KIDUI_AnimatedEllipsis*> _field = GetClass().GetField(O("_animatedEllipsis"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetCustomNameEnabled() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_customNameEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetDeclinedStatus() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_declinedStatus"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetDefaultButtonsContainer() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_defaultButtonsContainer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::EKIDFeatures>* GetDisplayOrder() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::EKIDFeatures>*> _field = GetClass().GetField(O("_displayOrder"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetEmailAddress() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_emailAddress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetEventSystemObj() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_eventSystemObj"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetFeaturePrefab() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_featurePrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetFeatureRootTransform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_featureRootTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::KIDUI_MainScreen_FeatureToggleSetup>* GetFeatureSetups() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::KIDUI_MainScreen_FeatureToggleSetup>*> _field = GetClass().GetField(O("_featureSetups"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<::GlobalNamespace::EKIDFeatures, ::BNM::Structures::Mono::List<::GlobalNamespace::KIDUIFeatureSetting*>*>* GetFeaturesList() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::EKIDFeatures, ::BNM::Structures::Mono::List<::GlobalNamespace::KIDUIFeatureSetting*>*>*> _field = GetClass().GetField(O("_featuresList"));
            return _field.Get();
        }
        ::GameObject* GetFullPlayerControlStatus() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_fullPlayerControlStatus"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::KIDUIButton* GetGetPermissionsButton() {
            static BNM::Field<::GlobalNamespace::KIDUIButton*> _field = GetClass().GetField(O("_getPermissionsButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::KIDUIButton* GetGettingPermissionsButton() {
            static BNM::Field<::GlobalNamespace::KIDUIButton*> _field = GetClass().GetField(O("_gettingPermissionsButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasAllPermissions() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_hasAllPermissions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetInitialised() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_initialised"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetKidScreensGroup() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_kidScreensGroup"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::KIDUI_Controller_Metrics_ShowReason GetMainScreenOpenedReason() {
            static BNM::Field<::GlobalNamespace::KIDUI_Controller_Metrics_ShowReason> _field = GetClass().GetField(O("_mainScreenOpenedReason"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetMissingStatus() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_missingStatus"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetMultiplayerEnabled() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_multiplayerEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetPendingStatus() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_pendingStatus"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetPermissionsRequestedButtonContainer() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_permissionsRequestedButtonContainer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetPermissionsRequestingButtonContainer() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_permissionsRequestingButtonContainer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetPermissionsTip() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_permissionsTip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::KIDUIButton* GetRequestPermissionsButton() {
            static BNM::Field<::GlobalNamespace::KIDUIButton*> _field = GetClass().GetField(O("_requestPermissionsButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::EMainScreenStatus GetScreenStatus() {
            static BNM::Field<::GlobalNamespace::EMainScreenStatus> _field = GetClass().GetField(O("_screenStatus"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::KIDUI_SendUpgradeEmailScreen* GetSendUpgradeEmailScreen() {
            static BNM::Field<::GlobalNamespace::KIDUI_SendUpgradeEmailScreen*> _field = GetClass().GetField(O("_sendUpgradeEmailScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::KIDUI_SetupScreen* GetSetupKidScreen() {
            static BNM::Field<::GlobalNamespace::KIDUI_SetupScreen*> _field = GetClass().GetField(O("_setupKidScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetSetupRequiredStatus() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_setupRequiredStatus"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetTimeoutStatus() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_timeoutStatus"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetTitleFeaturePermissions() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_titleFeaturePermissions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetTitleGameFeatures() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_titleGameFeatures"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetUpdatedStatus() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_updatedStatus"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetVoiceChatEnabled() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_voiceChatEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetVoiceChatLabel() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_voiceChatLabel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static bool GetShownSettingsScreen() {
            static BNM::Field<bool> _field = GetClass().GetField(O("ShownSettingsScreen"));
            return _field.Get();
        }
        void SetAnimatedEllipsis(::GlobalNamespace::KIDUI_AnimatedEllipsis* value) {
            static BNM::Field<::GlobalNamespace::KIDUI_AnimatedEllipsis*> _field = GetClass().GetField(O("_animatedEllipsis"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCustomNameEnabled(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_customNameEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDeclinedStatus(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_declinedStatus"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDefaultButtonsContainer(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_defaultButtonsContainer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDisplayOrder(::BNM::Structures::Mono::Array<::GlobalNamespace::EKIDFeatures>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::EKIDFeatures>*> _field = GetClass().GetField(O("_displayOrder"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEmailAddress(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_emailAddress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEventSystemObj(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_eventSystemObj"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFeaturePrefab(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_featurePrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFeatureRootTransform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_featureRootTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFeatureSetups(::BNM::Structures::Mono::List<::GlobalNamespace::KIDUI_MainScreen_FeatureToggleSetup>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::KIDUI_MainScreen_FeatureToggleSetup>*> _field = GetClass().GetField(O("_featureSetups"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetFeaturesList(::BNM::Structures::Mono::Dictionary<::GlobalNamespace::EKIDFeatures, ::BNM::Structures::Mono::List<::GlobalNamespace::KIDUIFeatureSetting*>*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::EKIDFeatures, ::BNM::Structures::Mono::List<::GlobalNamespace::KIDUIFeatureSetting*>*>*> _field = GetClass().GetField(O("_featuresList"));
            _field.Set(value);
        }
        void SetFullPlayerControlStatus(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_fullPlayerControlStatus"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGetPermissionsButton(::GlobalNamespace::KIDUIButton* value) {
            static BNM::Field<::GlobalNamespace::KIDUIButton*> _field = GetClass().GetField(O("_getPermissionsButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGettingPermissionsButton(::GlobalNamespace::KIDUIButton* value) {
            static BNM::Field<::GlobalNamespace::KIDUIButton*> _field = GetClass().GetField(O("_gettingPermissionsButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasAllPermissions(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_hasAllPermissions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInitialised(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_initialised"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetKidScreensGroup(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_kidScreensGroup"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMainScreenOpenedReason(::GlobalNamespace::KIDUI_Controller_Metrics_ShowReason value) {
            static BNM::Field<::GlobalNamespace::KIDUI_Controller_Metrics_ShowReason> _field = GetClass().GetField(O("_mainScreenOpenedReason"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMissingStatus(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_missingStatus"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMultiplayerEnabled(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_multiplayerEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPendingStatus(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_pendingStatus"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPermissionsRequestedButtonContainer(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_permissionsRequestedButtonContainer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPermissionsRequestingButtonContainer(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_permissionsRequestingButtonContainer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPermissionsTip(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_permissionsTip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRequestPermissionsButton(::GlobalNamespace::KIDUIButton* value) {
            static BNM::Field<::GlobalNamespace::KIDUIButton*> _field = GetClass().GetField(O("_requestPermissionsButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScreenStatus(::GlobalNamespace::EMainScreenStatus value) {
            static BNM::Field<::GlobalNamespace::EMainScreenStatus> _field = GetClass().GetField(O("_screenStatus"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSendUpgradeEmailScreen(::GlobalNamespace::KIDUI_SendUpgradeEmailScreen* value) {
            static BNM::Field<::GlobalNamespace::KIDUI_SendUpgradeEmailScreen*> _field = GetClass().GetField(O("_sendUpgradeEmailScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSetupKidScreen(::GlobalNamespace::KIDUI_SetupScreen* value) {
            static BNM::Field<::GlobalNamespace::KIDUI_SetupScreen*> _field = GetClass().GetField(O("_setupKidScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSetupRequiredStatus(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_setupRequiredStatus"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimeoutStatus(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_timeoutStatus"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTitleFeaturePermissions(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_titleFeaturePermissions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTitleGameFeatures(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_titleGameFeatures"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUpdatedStatus(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_updatedStatus"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVoiceChatEnabled(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_voiceChatEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVoiceChatLabel(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_voiceChatLabel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetShownSettingsScreen(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("ShownSettingsScreen"));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void* CollectPermissionsToUpgrade() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("CollectPermissionsToUpgrade"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void ConfigurePermissionsButtons() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ConfigurePermissionsButtons"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ConstructAdditionalSetup(::GlobalNamespace::EKIDFeatures feature, ::GameObject* featureObject) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ConstructAdditionalSetup"), {"feature", "featureObject"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(feature, featureObject);
        }
        void ConstructFeatureSettings() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ConstructFeatureSettings"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CreateNewFeatureDisplay(::GlobalNamespace::KIDUI_MainScreen_FeatureToggleSetup setup) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CreateNewFeatureDisplay"), {"setup"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(setup);
        }
        ::GameObject* GetActiveStatusObject() {
            static BNM::Method<::GameObject*> _m = GetClass().GetMethod(O("GetActiveStatusObject"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int GetFeatureListingCount() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetFeatureListingCount"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static ::GlobalNamespace::EGetPermissionsStatus GetPermissionState() {
            static BNM::Method<::GlobalNamespace::EGetPermissionsStatus> _m = GetClass().GetMethod(O("GetPermissionState"));
            return _m.Call();
        }
        void HideMainScreen() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HideMainScreen"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void InitialiseMainScreen() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitialiseMainScreen"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool IsFeatureToggledOn(::GlobalNamespace::EKIDFeatures permissionFeature) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsFeatureToggledOn"), {"permissionFeature"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(permissionFeature);
        }
        void OnAskForPermission() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnAskForPermission"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnConfirmedEmailAddress(::BNM::Structures::Mono::String* emailAddress) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnConfirmedEmailAddress"), {"emailAddress"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(emailAddress);
        }
        void OnCustomNametagsToggled() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnCustomNametagsToggled"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
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
        void OnFeatureToggleChanged(::GlobalNamespace::EKIDFeatures feature) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnFeatureToggleChanged"), {"feature"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(feature);
        }
        void OnGroupToggleChanged() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnGroupToggleChanged"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnLanguageChanged() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnLanguageChanged"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnModToggleChanged() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnModToggleChanged"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnMultiplayerToggled() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnMultiplayerToggled"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnSaveAndExit() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSaveAndExit"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnVoiceChatToggled() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnVoiceChatToggled"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetButtonContainersVisibility(::GlobalNamespace::EGetPermissionsStatus permissionStatus) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetButtonContainersVisibility"), {"permissionStatus"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(permissionStatus);
        }
        void ShowMainScreen(::GlobalNamespace::EMainScreenStatus showStatus) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ShowMainScreen"), {"showStatus"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(showStatus);
        }
        void ShowMainScreen(::GlobalNamespace::EMainScreenStatus showStatus, ::GlobalNamespace::KIDUI_Controller_Metrics_ShowReason reason) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ShowMainScreen"), {"showStatus", "reason"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(showStatus, reason);
        }
        void* UpdateAndCheckForMissingPermissions() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("UpdateAndCheckForMissingPermissions"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void UpdateOptInSetting(::BNM::IL2CPP::Il2CppObject* permissionData, ::GlobalNamespace::EKIDFeatures feature, ::BNM::Structures::Mono::Action<bool, ::BNM::IL2CPP::Il2CppObject*, bool>* onOptedIn) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateOptInSetting"), {"permissionData", "feature", "onOptedIn"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(permissionData, feature, onOptedIn);
        }
        void UpdatePermissionsAndFeaturesScreen() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdatePermissionsAndFeaturesScreen"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateScreenStatus(::GlobalNamespace::EMainScreenStatus showStatus, bool sendMetrics) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateScreenStatus"), {"showStatus", "sendMetrics"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(showStatus, sendMetrics);
        }
    };
}
