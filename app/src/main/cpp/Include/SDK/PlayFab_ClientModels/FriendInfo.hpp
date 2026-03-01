#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../PlayFab_SharedModels/PlayFabBaseModel.hpp"

namespace PlayFab_ClientModels {
    struct FriendInfo : ::PlayFab_SharedModels::PlayFabBaseModel {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.ClientModels", "FriendInfo");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::PlayFab_ClientModels::UserFacebookInfo* GetFacebookInfo() {
            static BNM::Field<::PlayFab_ClientModels::UserFacebookInfo*> _field = GetClass().GetField(O("FacebookInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetFriendPlayFabId() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("FriendPlayFabId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::PlayFab_ClientModels::UserGameCenterInfo* GetGameCenterInfo() {
            static BNM::Field<::PlayFab_ClientModels::UserGameCenterInfo*> _field = GetClass().GetField(O("GameCenterInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::PlayFab_ClientModels::PlayerProfileModel* GetProfile() {
            static BNM::Field<::PlayFab_ClientModels::PlayerProfileModel*> _field = GetClass().GetField(O("Profile"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::PlayFab_ClientModels::UserPsnInfo* GetPSNInfo() {
            static BNM::Field<::PlayFab_ClientModels::UserPsnInfo*> _field = GetClass().GetField(O("PSNInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::PlayFab_ClientModels::UserSteamInfo* GetSteamInfo() {
            static BNM::Field<::PlayFab_ClientModels::UserSteamInfo*> _field = GetClass().GetField(O("SteamInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* GetTags() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("Tags"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetTitleDisplayName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("TitleDisplayName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetUsername() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("Username"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::PlayFab_ClientModels::UserXboxInfo* GetXboxInfo() {
            static BNM::Field<::PlayFab_ClientModels::UserXboxInfo*> _field = GetClass().GetField(O("XboxInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetFacebookInfo(::PlayFab_ClientModels::UserFacebookInfo* value) {
            static BNM::Field<::PlayFab_ClientModels::UserFacebookInfo*> _field = GetClass().GetField(O("FacebookInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFriendPlayFabId(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("FriendPlayFabId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGameCenterInfo(::PlayFab_ClientModels::UserGameCenterInfo* value) {
            static BNM::Field<::PlayFab_ClientModels::UserGameCenterInfo*> _field = GetClass().GetField(O("GameCenterInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProfile(::PlayFab_ClientModels::PlayerProfileModel* value) {
            static BNM::Field<::PlayFab_ClientModels::PlayerProfileModel*> _field = GetClass().GetField(O("Profile"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPSNInfo(::PlayFab_ClientModels::UserPsnInfo* value) {
            static BNM::Field<::PlayFab_ClientModels::UserPsnInfo*> _field = GetClass().GetField(O("PSNInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSteamInfo(::PlayFab_ClientModels::UserSteamInfo* value) {
            static BNM::Field<::PlayFab_ClientModels::UserSteamInfo*> _field = GetClass().GetField(O("SteamInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTags(::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("Tags"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTitleDisplayName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("TitleDisplayName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUsername(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("Username"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetXboxInfo(::PlayFab_ClientModels::UserXboxInfo* value) {
            static BNM::Field<::PlayFab_ClientModels::UserXboxInfo*> _field = GetClass().GetField(O("XboxInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
