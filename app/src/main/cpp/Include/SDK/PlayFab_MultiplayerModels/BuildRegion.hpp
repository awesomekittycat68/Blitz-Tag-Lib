#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../PlayFab_SharedModels/PlayFabBaseModel.hpp"

namespace PlayFab_MultiplayerModels {
    struct BuildRegion : ::PlayFab_SharedModels::PlayFabBaseModel {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.MultiplayerModels", "BuildRegion");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::PlayFab_MultiplayerModels::CurrentServerStats* GetCurrentServerStats() {
            static BNM::Field<::PlayFab_MultiplayerModels::CurrentServerStats*> _field = GetClass().GetField(O("CurrentServerStats"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::PlayFab_MultiplayerModels::DynamicStandbySettings* GetDynamicStandbySettings() {
            static BNM::Field<::PlayFab_MultiplayerModels::DynamicStandbySettings*> _field = GetClass().GetField(O("DynamicStandbySettings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMaxServers() {
            static BNM::Field<int> _field = GetClass().GetField(O("MaxServers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetRegion() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("Region"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetStandbyServers() {
            static BNM::Field<int> _field = GetClass().GetField(O("StandbyServers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetStatus() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("Status"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCurrentServerStats(::PlayFab_MultiplayerModels::CurrentServerStats* value) {
            static BNM::Field<::PlayFab_MultiplayerModels::CurrentServerStats*> _field = GetClass().GetField(O("CurrentServerStats"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDynamicStandbySettings(::PlayFab_MultiplayerModels::DynamicStandbySettings* value) {
            static BNM::Field<::PlayFab_MultiplayerModels::DynamicStandbySettings*> _field = GetClass().GetField(O("DynamicStandbySettings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxServers(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("MaxServers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRegion(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("Region"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStandbyServers(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("StandbyServers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStatus(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("Status"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
