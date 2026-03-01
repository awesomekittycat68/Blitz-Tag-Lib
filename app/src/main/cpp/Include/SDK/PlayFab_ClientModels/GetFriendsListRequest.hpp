#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../PlayFab_SharedModels/PlayFabRequestCommon.hpp"

namespace PlayFab_ClientModels {
    struct GetFriendsListRequest : ::PlayFab_SharedModels::PlayFabRequestCommon {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.ClientModels", "GetFriendsListRequest");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void* GetIncludeFacebookFriends() {
            static BNM::Field<void*> _field = GetClass().GetField(O("IncludeFacebookFriends"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetIncludeSteamFriends() {
            static BNM::Field<void*> _field = GetClass().GetField(O("IncludeSteamFriends"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::PlayFab_ClientModels::PlayerProfileViewConstraints* GetProfileConstraints() {
            static BNM::Field<::PlayFab_ClientModels::PlayerProfileViewConstraints*> _field = GetClass().GetField(O("ProfileConstraints"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetXboxToken() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("XboxToken"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetIncludeFacebookFriends(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("IncludeFacebookFriends"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIncludeSteamFriends(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("IncludeSteamFriends"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProfileConstraints(::PlayFab_ClientModels::PlayerProfileViewConstraints* value) {
            static BNM::Field<::PlayFab_ClientModels::PlayerProfileViewConstraints*> _field = GetClass().GetField(O("ProfileConstraints"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetXboxToken(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("XboxToken"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
