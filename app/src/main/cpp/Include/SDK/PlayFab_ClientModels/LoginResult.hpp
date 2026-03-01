#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../PlayFab_SharedModels/PlayFabLoginResultCommon.hpp"

namespace PlayFab_ClientModels {
    struct LoginResult : ::PlayFab_SharedModels::PlayFabLoginResultCommon {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.ClientModels", "LoginResult");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::PlayFab_ClientModels::EntityTokenResponse* GetEntityToken() {
            static BNM::Field<::PlayFab_ClientModels::EntityTokenResponse*> _field = GetClass().GetField(O("EntityToken"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::PlayFab_ClientModels::GetPlayerCombinedInfoResultPayload* GetInfoResultPayload() {
            static BNM::Field<::PlayFab_ClientModels::GetPlayerCombinedInfoResultPayload*> _field = GetClass().GetField(O("InfoResultPayload"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetLastLoginTime() {
            static BNM::Field<void*> _field = GetClass().GetField(O("LastLoginTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetNewlyCreated() {
            static BNM::Field<bool> _field = GetClass().GetField(O("NewlyCreated"));
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
        ::PlayFab_ClientModels::TreatmentAssignment* GetTreatmentAssignment() {
            static BNM::Field<::PlayFab_ClientModels::TreatmentAssignment*> _field = GetClass().GetField(O("TreatmentAssignment"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetEntityToken(::PlayFab_ClientModels::EntityTokenResponse* value) {
            static BNM::Field<::PlayFab_ClientModels::EntityTokenResponse*> _field = GetClass().GetField(O("EntityToken"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInfoResultPayload(::PlayFab_ClientModels::GetPlayerCombinedInfoResultPayload* value) {
            static BNM::Field<::PlayFab_ClientModels::GetPlayerCombinedInfoResultPayload*> _field = GetClass().GetField(O("InfoResultPayload"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastLoginTime(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("LastLoginTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNewlyCreated(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("NewlyCreated"));
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
        void SetTreatmentAssignment(::PlayFab_ClientModels::TreatmentAssignment* value) {
            static BNM::Field<::PlayFab_ClientModels::TreatmentAssignment*> _field = GetClass().GetField(O("TreatmentAssignment"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
