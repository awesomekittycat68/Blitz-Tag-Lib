#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../PlayFab_SharedModels/PlayFabBaseModel.hpp"

namespace PlayFab_MultiplayerModels {
    struct TeamSizeBalanceRule : ::PlayFab_SharedModels::PlayFabBaseModel {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.MultiplayerModels", "TeamSizeBalanceRule");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::PlayFab_MultiplayerModels::CustomTeamSizeBalanceRuleExpansion* GetCustomExpansion() {
            static BNM::Field<::PlayFab_MultiplayerModels::CustomTeamSizeBalanceRuleExpansion*> _field = GetClass().GetField(O("CustomExpansion"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint32_t GetDifference() {
            static BNM::Field<uint32_t> _field = GetClass().GetField(O("Difference"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::PlayFab_MultiplayerModels::LinearTeamSizeBalanceRuleExpansion* GetLinearExpansion() {
            static BNM::Field<::PlayFab_MultiplayerModels::LinearTeamSizeBalanceRuleExpansion*> _field = GetClass().GetField(O("LinearExpansion"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("Name"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetSecondsUntilOptional() {
            static BNM::Field<void*> _field = GetClass().GetField(O("SecondsUntilOptional"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCustomExpansion(::PlayFab_MultiplayerModels::CustomTeamSizeBalanceRuleExpansion* value) {
            static BNM::Field<::PlayFab_MultiplayerModels::CustomTeamSizeBalanceRuleExpansion*> _field = GetClass().GetField(O("CustomExpansion"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDifference(uint32_t value) {
            static BNM::Field<uint32_t> _field = GetClass().GetField(O("Difference"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLinearExpansion(::PlayFab_MultiplayerModels::LinearTeamSizeBalanceRuleExpansion* value) {
            static BNM::Field<::PlayFab_MultiplayerModels::LinearTeamSizeBalanceRuleExpansion*> _field = GetClass().GetField(O("LinearExpansion"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("Name"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSecondsUntilOptional(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("SecondsUntilOptional"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
