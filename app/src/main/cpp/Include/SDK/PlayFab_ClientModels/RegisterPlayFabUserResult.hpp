#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../PlayFab_SharedModels/PlayFabLoginResultCommon.hpp"

namespace PlayFab_ClientModels {
    struct RegisterPlayFabUserResult : ::PlayFab_SharedModels::PlayFabLoginResultCommon {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.ClientModels", "RegisterPlayFabUserResult");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::PlayFab_ClientModels::EntityTokenResponse* GetEntityToken() {
            static BNM::Field<::PlayFab_ClientModels::EntityTokenResponse*> _field = GetClass().GetField(O("EntityToken"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetPlayFabId() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("PlayFabId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetSessionTicket() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("SessionTicket"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::PlayFab_ClientModels::UserSettings* GetSettingsForUser() {
            static BNM::Field<::PlayFab_ClientModels::UserSettings*> _field = GetClass().GetField(O("SettingsForUser"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetUsername() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("Username"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetEntityToken(::PlayFab_ClientModels::EntityTokenResponse* value) {
            static BNM::Field<::PlayFab_ClientModels::EntityTokenResponse*> _field = GetClass().GetField(O("EntityToken"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayFabId(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("PlayFabId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSessionTicket(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("SessionTicket"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSettingsForUser(::PlayFab_ClientModels::UserSettings* value) {
            static BNM::Field<::PlayFab_ClientModels::UserSettings*> _field = GetClass().GetField(O("SettingsForUser"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUsername(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("Username"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
