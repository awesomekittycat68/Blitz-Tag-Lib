#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../PlayFab_SharedModels/PlayFabBaseModel.hpp"

namespace PlayFab_ClientModels {
    struct UserAccountInfo : ::PlayFab_SharedModels::PlayFabBaseModel {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.ClientModels", "UserAccountInfo");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::PlayFab_ClientModels::UserAndroidDeviceInfo* GetAndroidDeviceInfo() {
            static BNM::Field<::PlayFab_ClientModels::UserAndroidDeviceInfo*> _field = GetClass().GetField(O("AndroidDeviceInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::PlayFab_ClientModels::UserAppleIdInfo* GetAppleAccountInfo() {
            static BNM::Field<::PlayFab_ClientModels::UserAppleIdInfo*> _field = GetClass().GetField(O("AppleAccountInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetCreated() {
            static BNM::Field<void*> _field = GetClass().GetField(O("Created"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::PlayFab_ClientModels::UserCustomIdInfo* GetCustomIdInfo() {
            static BNM::Field<::PlayFab_ClientModels::UserCustomIdInfo*> _field = GetClass().GetField(O("CustomIdInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::PlayFab_ClientModels::UserFacebookInfo* GetFacebookInfo() {
            static BNM::Field<::PlayFab_ClientModels::UserFacebookInfo*> _field = GetClass().GetField(O("FacebookInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::PlayFab_ClientModels::UserFacebookInstantGamesIdInfo* GetFacebookInstantGamesIdInfo() {
            static BNM::Field<::PlayFab_ClientModels::UserFacebookInstantGamesIdInfo*> _field = GetClass().GetField(O("FacebookInstantGamesIdInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::PlayFab_ClientModels::UserGameCenterInfo* GetGameCenterInfo() {
            static BNM::Field<::PlayFab_ClientModels::UserGameCenterInfo*> _field = GetClass().GetField(O("GameCenterInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::PlayFab_ClientModels::UserGoogleInfo* GetGoogleInfo() {
            static BNM::Field<::PlayFab_ClientModels::UserGoogleInfo*> _field = GetClass().GetField(O("GoogleInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::PlayFab_ClientModels::UserIosDeviceInfo* GetIosDeviceInfo() {
            static BNM::Field<::PlayFab_ClientModels::UserIosDeviceInfo*> _field = GetClass().GetField(O("IosDeviceInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::PlayFab_ClientModels::UserKongregateInfo* GetKongregateInfo() {
            static BNM::Field<::PlayFab_ClientModels::UserKongregateInfo*> _field = GetClass().GetField(O("KongregateInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::PlayFab_ClientModels::UserNintendoSwitchAccountIdInfo* GetNintendoSwitchAccountInfo() {
            static BNM::Field<::PlayFab_ClientModels::UserNintendoSwitchAccountIdInfo*> _field = GetClass().GetField(O("NintendoSwitchAccountInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::PlayFab_ClientModels::UserNintendoSwitchDeviceIdInfo* GetNintendoSwitchDeviceIdInfo() {
            static BNM::Field<::PlayFab_ClientModels::UserNintendoSwitchDeviceIdInfo*> _field = GetClass().GetField(O("NintendoSwitchDeviceIdInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::PlayFab_ClientModels::UserOpenIdInfo*>* GetOpenIdInfo() {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_ClientModels::UserOpenIdInfo*>*> _field = GetClass().GetField(O("OpenIdInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetPlayFabId() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("PlayFabId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::PlayFab_ClientModels::UserPrivateAccountInfo* GetPrivateInfo() {
            static BNM::Field<::PlayFab_ClientModels::UserPrivateAccountInfo*> _field = GetClass().GetField(O("PrivateInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::PlayFab_ClientModels::UserPsnInfo* GetPsnInfo() {
            static BNM::Field<::PlayFab_ClientModels::UserPsnInfo*> _field = GetClass().GetField(O("PsnInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::PlayFab_ClientModels::UserSteamInfo* GetSteamInfo() {
            static BNM::Field<::PlayFab_ClientModels::UserSteamInfo*> _field = GetClass().GetField(O("SteamInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::PlayFab_ClientModels::UserTitleInfo* GetTitleInfo() {
            static BNM::Field<::PlayFab_ClientModels::UserTitleInfo*> _field = GetClass().GetField(O("TitleInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::PlayFab_ClientModels::UserTwitchInfo* GetTwitchInfo() {
            static BNM::Field<::PlayFab_ClientModels::UserTwitchInfo*> _field = GetClass().GetField(O("TwitchInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetUsername() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("Username"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::PlayFab_ClientModels::UserWindowsHelloInfo* GetWindowsHelloInfo() {
            static BNM::Field<::PlayFab_ClientModels::UserWindowsHelloInfo*> _field = GetClass().GetField(O("WindowsHelloInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::PlayFab_ClientModels::UserXboxInfo* GetXboxInfo() {
            static BNM::Field<::PlayFab_ClientModels::UserXboxInfo*> _field = GetClass().GetField(O("XboxInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAndroidDeviceInfo(::PlayFab_ClientModels::UserAndroidDeviceInfo* value) {
            static BNM::Field<::PlayFab_ClientModels::UserAndroidDeviceInfo*> _field = GetClass().GetField(O("AndroidDeviceInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAppleAccountInfo(::PlayFab_ClientModels::UserAppleIdInfo* value) {
            static BNM::Field<::PlayFab_ClientModels::UserAppleIdInfo*> _field = GetClass().GetField(O("AppleAccountInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCreated(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("Created"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCustomIdInfo(::PlayFab_ClientModels::UserCustomIdInfo* value) {
            static BNM::Field<::PlayFab_ClientModels::UserCustomIdInfo*> _field = GetClass().GetField(O("CustomIdInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFacebookInfo(::PlayFab_ClientModels::UserFacebookInfo* value) {
            static BNM::Field<::PlayFab_ClientModels::UserFacebookInfo*> _field = GetClass().GetField(O("FacebookInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFacebookInstantGamesIdInfo(::PlayFab_ClientModels::UserFacebookInstantGamesIdInfo* value) {
            static BNM::Field<::PlayFab_ClientModels::UserFacebookInstantGamesIdInfo*> _field = GetClass().GetField(O("FacebookInstantGamesIdInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGameCenterInfo(::PlayFab_ClientModels::UserGameCenterInfo* value) {
            static BNM::Field<::PlayFab_ClientModels::UserGameCenterInfo*> _field = GetClass().GetField(O("GameCenterInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGoogleInfo(::PlayFab_ClientModels::UserGoogleInfo* value) {
            static BNM::Field<::PlayFab_ClientModels::UserGoogleInfo*> _field = GetClass().GetField(O("GoogleInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIosDeviceInfo(::PlayFab_ClientModels::UserIosDeviceInfo* value) {
            static BNM::Field<::PlayFab_ClientModels::UserIosDeviceInfo*> _field = GetClass().GetField(O("IosDeviceInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetKongregateInfo(::PlayFab_ClientModels::UserKongregateInfo* value) {
            static BNM::Field<::PlayFab_ClientModels::UserKongregateInfo*> _field = GetClass().GetField(O("KongregateInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNintendoSwitchAccountInfo(::PlayFab_ClientModels::UserNintendoSwitchAccountIdInfo* value) {
            static BNM::Field<::PlayFab_ClientModels::UserNintendoSwitchAccountIdInfo*> _field = GetClass().GetField(O("NintendoSwitchAccountInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNintendoSwitchDeviceIdInfo(::PlayFab_ClientModels::UserNintendoSwitchDeviceIdInfo* value) {
            static BNM::Field<::PlayFab_ClientModels::UserNintendoSwitchDeviceIdInfo*> _field = GetClass().GetField(O("NintendoSwitchDeviceIdInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOpenIdInfo(::BNM::Structures::Mono::List<::PlayFab_ClientModels::UserOpenIdInfo*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_ClientModels::UserOpenIdInfo*>*> _field = GetClass().GetField(O("OpenIdInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayFabId(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("PlayFabId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPrivateInfo(::PlayFab_ClientModels::UserPrivateAccountInfo* value) {
            static BNM::Field<::PlayFab_ClientModels::UserPrivateAccountInfo*> _field = GetClass().GetField(O("PrivateInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPsnInfo(::PlayFab_ClientModels::UserPsnInfo* value) {
            static BNM::Field<::PlayFab_ClientModels::UserPsnInfo*> _field = GetClass().GetField(O("PsnInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSteamInfo(::PlayFab_ClientModels::UserSteamInfo* value) {
            static BNM::Field<::PlayFab_ClientModels::UserSteamInfo*> _field = GetClass().GetField(O("SteamInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTitleInfo(::PlayFab_ClientModels::UserTitleInfo* value) {
            static BNM::Field<::PlayFab_ClientModels::UserTitleInfo*> _field = GetClass().GetField(O("TitleInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTwitchInfo(::PlayFab_ClientModels::UserTwitchInfo* value) {
            static BNM::Field<::PlayFab_ClientModels::UserTwitchInfo*> _field = GetClass().GetField(O("TwitchInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUsername(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("Username"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWindowsHelloInfo(::PlayFab_ClientModels::UserWindowsHelloInfo* value) {
            static BNM::Field<::PlayFab_ClientModels::UserWindowsHelloInfo*> _field = GetClass().GetField(O("WindowsHelloInfo"));
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
