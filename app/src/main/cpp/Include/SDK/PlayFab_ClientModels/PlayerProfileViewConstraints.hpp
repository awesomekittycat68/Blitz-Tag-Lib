#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../PlayFab_SharedModels/PlayFabBaseModel.hpp"

namespace PlayFab_ClientModels {
    struct PlayerProfileViewConstraints : ::PlayFab_SharedModels::PlayFabBaseModel {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.ClientModels", "PlayerProfileViewConstraints");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetShowAvatarUrl() {
            static BNM::Field<bool> _field = GetClass().GetField(O("ShowAvatarUrl"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetShowBannedUntil() {
            static BNM::Field<bool> _field = GetClass().GetField(O("ShowBannedUntil"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetShowCampaignAttributions() {
            static BNM::Field<bool> _field = GetClass().GetField(O("ShowCampaignAttributions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetShowContactEmailAddresses() {
            static BNM::Field<bool> _field = GetClass().GetField(O("ShowContactEmailAddresses"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetShowCreated() {
            static BNM::Field<bool> _field = GetClass().GetField(O("ShowCreated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetShowDisplayName() {
            static BNM::Field<bool> _field = GetClass().GetField(O("ShowDisplayName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetShowExperimentVariants() {
            static BNM::Field<bool> _field = GetClass().GetField(O("ShowExperimentVariants"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetShowLastLogin() {
            static BNM::Field<bool> _field = GetClass().GetField(O("ShowLastLogin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetShowLinkedAccounts() {
            static BNM::Field<bool> _field = GetClass().GetField(O("ShowLinkedAccounts"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetShowLocations() {
            static BNM::Field<bool> _field = GetClass().GetField(O("ShowLocations"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetShowMemberships() {
            static BNM::Field<bool> _field = GetClass().GetField(O("ShowMemberships"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetShowOrigination() {
            static BNM::Field<bool> _field = GetClass().GetField(O("ShowOrigination"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetShowPushNotificationRegistrations() {
            static BNM::Field<bool> _field = GetClass().GetField(O("ShowPushNotificationRegistrations"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetShowStatistics() {
            static BNM::Field<bool> _field = GetClass().GetField(O("ShowStatistics"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetShowTags() {
            static BNM::Field<bool> _field = GetClass().GetField(O("ShowTags"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetShowTotalValueToDateInUsd() {
            static BNM::Field<bool> _field = GetClass().GetField(O("ShowTotalValueToDateInUsd"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetShowValuesToDate() {
            static BNM::Field<bool> _field = GetClass().GetField(O("ShowValuesToDate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetShowAvatarUrl(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("ShowAvatarUrl"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShowBannedUntil(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("ShowBannedUntil"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShowCampaignAttributions(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("ShowCampaignAttributions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShowContactEmailAddresses(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("ShowContactEmailAddresses"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShowCreated(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("ShowCreated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShowDisplayName(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("ShowDisplayName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShowExperimentVariants(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("ShowExperimentVariants"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShowLastLogin(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("ShowLastLogin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShowLinkedAccounts(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("ShowLinkedAccounts"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShowLocations(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("ShowLocations"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShowMemberships(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("ShowMemberships"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShowOrigination(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("ShowOrigination"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShowPushNotificationRegistrations(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("ShowPushNotificationRegistrations"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShowStatistics(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("ShowStatistics"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShowTags(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("ShowTags"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShowTotalValueToDateInUsd(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("ShowTotalValueToDateInUsd"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShowValuesToDate(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("ShowValuesToDate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
