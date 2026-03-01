#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../PlayFab_SharedModels/PlayFabBaseModel.hpp"

namespace PlayFab_ClientModels {
    struct GetPlayerCombinedInfoResultPayload : ::PlayFab_SharedModels::PlayFabBaseModel {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.ClientModels", "GetPlayerCombinedInfoResultPayload");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::PlayFab_ClientModels::UserAccountInfo* GetAccountInfo() {
            static BNM::Field<::PlayFab_ClientModels::UserAccountInfo*> _field = GetClass().GetField(O("AccountInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::PlayFab_ClientModels::CharacterInventory*>* GetCharacterInventories() {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_ClientModels::CharacterInventory*>*> _field = GetClass().GetField(O("CharacterInventories"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::PlayFab_ClientModels::CharacterResult*>* GetCharacterList() {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_ClientModels::CharacterResult*>*> _field = GetClass().GetField(O("CharacterList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::PlayFab_ClientModels::PlayerProfileModel* GetPlayerProfile() {
            static BNM::Field<::PlayFab_ClientModels::PlayerProfileModel*> _field = GetClass().GetField(O("PlayerProfile"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::PlayFab_ClientModels::StatisticValue*>* GetPlayerStatistics() {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_ClientModels::StatisticValue*>*> _field = GetClass().GetField(O("PlayerStatistics"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* GetTitleData() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("TitleData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::PlayFab_ClientModels::UserDataRecord*>* GetUserData() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::PlayFab_ClientModels::UserDataRecord*>*> _field = GetClass().GetField(O("UserData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint32_t GetUserDataVersion() {
            static BNM::Field<uint32_t> _field = GetClass().GetField(O("UserDataVersion"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::PlayFab_ClientModels::ItemInstance*>* GetUserInventory() {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_ClientModels::ItemInstance*>*> _field = GetClass().GetField(O("UserInventory"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::PlayFab_ClientModels::UserDataRecord*>* GetUserReadOnlyData() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::PlayFab_ClientModels::UserDataRecord*>*> _field = GetClass().GetField(O("UserReadOnlyData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint32_t GetUserReadOnlyDataVersion() {
            static BNM::Field<uint32_t> _field = GetClass().GetField(O("UserReadOnlyDataVersion"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, int>* GetUserVirtualCurrency() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, int>*> _field = GetClass().GetField(O("UserVirtualCurrency"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::PlayFab_ClientModels::VirtualCurrencyRechargeTime*>* GetUserVirtualCurrencyRechargeTimes() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::PlayFab_ClientModels::VirtualCurrencyRechargeTime*>*> _field = GetClass().GetField(O("UserVirtualCurrencyRechargeTimes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAccountInfo(::PlayFab_ClientModels::UserAccountInfo* value) {
            static BNM::Field<::PlayFab_ClientModels::UserAccountInfo*> _field = GetClass().GetField(O("AccountInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCharacterInventories(::BNM::Structures::Mono::List<::PlayFab_ClientModels::CharacterInventory*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_ClientModels::CharacterInventory*>*> _field = GetClass().GetField(O("CharacterInventories"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCharacterList(::BNM::Structures::Mono::List<::PlayFab_ClientModels::CharacterResult*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_ClientModels::CharacterResult*>*> _field = GetClass().GetField(O("CharacterList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerProfile(::PlayFab_ClientModels::PlayerProfileModel* value) {
            static BNM::Field<::PlayFab_ClientModels::PlayerProfileModel*> _field = GetClass().GetField(O("PlayerProfile"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerStatistics(::BNM::Structures::Mono::List<::PlayFab_ClientModels::StatisticValue*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_ClientModels::StatisticValue*>*> _field = GetClass().GetField(O("PlayerStatistics"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTitleData(::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("TitleData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUserData(::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::PlayFab_ClientModels::UserDataRecord*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::PlayFab_ClientModels::UserDataRecord*>*> _field = GetClass().GetField(O("UserData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUserDataVersion(uint32_t value) {
            static BNM::Field<uint32_t> _field = GetClass().GetField(O("UserDataVersion"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUserInventory(::BNM::Structures::Mono::List<::PlayFab_ClientModels::ItemInstance*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_ClientModels::ItemInstance*>*> _field = GetClass().GetField(O("UserInventory"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUserReadOnlyData(::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::PlayFab_ClientModels::UserDataRecord*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::PlayFab_ClientModels::UserDataRecord*>*> _field = GetClass().GetField(O("UserReadOnlyData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUserReadOnlyDataVersion(uint32_t value) {
            static BNM::Field<uint32_t> _field = GetClass().GetField(O("UserReadOnlyDataVersion"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUserVirtualCurrency(::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, int>*> _field = GetClass().GetField(O("UserVirtualCurrency"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUserVirtualCurrencyRechargeTimes(::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::PlayFab_ClientModels::VirtualCurrencyRechargeTime*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::PlayFab_ClientModels::VirtualCurrencyRechargeTime*>*> _field = GetClass().GetField(O("UserVirtualCurrencyRechargeTimes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
