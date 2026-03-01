#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "LoginIdentityProvider.hpp"
#include "../PlayFab_SharedModels/PlayFabBaseModel.hpp"

namespace PlayFab_CloudScriptModels {
    struct PlayerProfileModel : ::PlayFab_SharedModels::PlayFabBaseModel {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.CloudScriptModels", "PlayerProfileModel");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::PlayFab_CloudScriptModels::AdCampaignAttributionModel*>* GetAdCampaignAttributions() {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_CloudScriptModels::AdCampaignAttributionModel*>*> _field = GetClass().GetField(O("AdCampaignAttributions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetAvatarUrl() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("AvatarUrl"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetBannedUntil() {
            static BNM::Field<void*> _field = GetClass().GetField(O("BannedUntil"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::PlayFab_CloudScriptModels::ContactEmailInfoModel*>* GetContactEmailAddresses() {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_CloudScriptModels::ContactEmailInfoModel*>*> _field = GetClass().GetField(O("ContactEmailAddresses"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetCreated() {
            static BNM::Field<void*> _field = GetClass().GetField(O("Created"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetDisplayName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("DisplayName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* GetExperimentVariants() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("ExperimentVariants"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetLastLogin() {
            static BNM::Field<void*> _field = GetClass().GetField(O("LastLogin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::PlayFab_CloudScriptModels::LinkedPlatformAccountModel*>* GetLinkedAccounts() {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_CloudScriptModels::LinkedPlatformAccountModel*>*> _field = GetClass().GetField(O("LinkedAccounts"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::PlayFab_CloudScriptModels::LocationModel*>* GetLocations() {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_CloudScriptModels::LocationModel*>*> _field = GetClass().GetField(O("Locations"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::PlayFab_CloudScriptModels::MembershipModel*>* GetMemberships() {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_CloudScriptModels::MembershipModel*>*> _field = GetClass().GetField(O("Memberships"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetOrigination() {
            static BNM::Field<void*> _field = GetClass().GetField(O("Origination"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetPlayerId() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("PlayerId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetPublisherId() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("PublisherId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::PlayFab_CloudScriptModels::PushNotificationRegistrationModel*>* GetPushNotificationRegistrations() {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_CloudScriptModels::PushNotificationRegistrationModel*>*> _field = GetClass().GetField(O("PushNotificationRegistrations"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::PlayFab_CloudScriptModels::StatisticModel*>* GetStatistics() {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_CloudScriptModels::StatisticModel*>*> _field = GetClass().GetField(O("Statistics"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::PlayFab_CloudScriptModels::TagModel*>* GetTags() {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_CloudScriptModels::TagModel*>*> _field = GetClass().GetField(O("Tags"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetTitleId() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("TitleId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetTotalValueToDateInUSD() {
            static BNM::Field<void*> _field = GetClass().GetField(O("TotalValueToDateInUSD"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::PlayFab_CloudScriptModels::ValueToDateModel*>* GetValuesToDate() {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_CloudScriptModels::ValueToDateModel*>*> _field = GetClass().GetField(O("ValuesToDate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAdCampaignAttributions(::BNM::Structures::Mono::List<::PlayFab_CloudScriptModels::AdCampaignAttributionModel*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_CloudScriptModels::AdCampaignAttributionModel*>*> _field = GetClass().GetField(O("AdCampaignAttributions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAvatarUrl(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("AvatarUrl"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBannedUntil(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("BannedUntil"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetContactEmailAddresses(::BNM::Structures::Mono::List<::PlayFab_CloudScriptModels::ContactEmailInfoModel*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_CloudScriptModels::ContactEmailInfoModel*>*> _field = GetClass().GetField(O("ContactEmailAddresses"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCreated(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("Created"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDisplayName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("DisplayName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetExperimentVariants(::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("ExperimentVariants"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastLogin(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("LastLogin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLinkedAccounts(::BNM::Structures::Mono::List<::PlayFab_CloudScriptModels::LinkedPlatformAccountModel*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_CloudScriptModels::LinkedPlatformAccountModel*>*> _field = GetClass().GetField(O("LinkedAccounts"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLocations(::BNM::Structures::Mono::List<::PlayFab_CloudScriptModels::LocationModel*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_CloudScriptModels::LocationModel*>*> _field = GetClass().GetField(O("Locations"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMemberships(::BNM::Structures::Mono::List<::PlayFab_CloudScriptModels::MembershipModel*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_CloudScriptModels::MembershipModel*>*> _field = GetClass().GetField(O("Memberships"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOrigination(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("Origination"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerId(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("PlayerId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPublisherId(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("PublisherId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPushNotificationRegistrations(::BNM::Structures::Mono::List<::PlayFab_CloudScriptModels::PushNotificationRegistrationModel*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_CloudScriptModels::PushNotificationRegistrationModel*>*> _field = GetClass().GetField(O("PushNotificationRegistrations"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStatistics(::BNM::Structures::Mono::List<::PlayFab_CloudScriptModels::StatisticModel*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_CloudScriptModels::StatisticModel*>*> _field = GetClass().GetField(O("Statistics"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTags(::BNM::Structures::Mono::List<::PlayFab_CloudScriptModels::TagModel*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_CloudScriptModels::TagModel*>*> _field = GetClass().GetField(O("Tags"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTitleId(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("TitleId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTotalValueToDateInUSD(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("TotalValueToDateInUSD"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetValuesToDate(::BNM::Structures::Mono::List<::PlayFab_CloudScriptModels::ValueToDateModel*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_CloudScriptModels::ValueToDateModel*>*> _field = GetClass().GetField(O("ValuesToDate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
