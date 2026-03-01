#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../PlayFab_SharedModels/PlayFabBaseModel.hpp"

namespace PlayFab_MultiplayerModels {
    struct TeamDifferenceRule : ::PlayFab_SharedModels::PlayFabBaseModel {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.MultiplayerModels", "TeamDifferenceRule");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::PlayFab_MultiplayerModels::QueueRuleAttribute* GetAttribute() {
            static BNM::Field<::PlayFab_MultiplayerModels::QueueRuleAttribute*> _field = GetClass().GetField(O("Attribute"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::PlayFab_MultiplayerModels::CustomTeamDifferenceRuleExpansion* GetCustomExpansion() {
            static BNM::Field<::PlayFab_MultiplayerModels::CustomTeamDifferenceRuleExpansion*> _field = GetClass().GetField(O("CustomExpansion"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetDefaultAttributeValue() {
            static BNM::Field<double> _field = GetClass().GetField(O("DefaultAttributeValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetDifference() {
            static BNM::Field<double> _field = GetClass().GetField(O("Difference"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::PlayFab_MultiplayerModels::LinearTeamDifferenceRuleExpansion* GetLinearExpansion() {
            static BNM::Field<::PlayFab_MultiplayerModels::LinearTeamDifferenceRuleExpansion*> _field = GetClass().GetField(O("LinearExpansion"));
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
        void SetAttribute(::PlayFab_MultiplayerModels::QueueRuleAttribute* value) {
            static BNM::Field<::PlayFab_MultiplayerModels::QueueRuleAttribute*> _field = GetClass().GetField(O("Attribute"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCustomExpansion(::PlayFab_MultiplayerModels::CustomTeamDifferenceRuleExpansion* value) {
            static BNM::Field<::PlayFab_MultiplayerModels::CustomTeamDifferenceRuleExpansion*> _field = GetClass().GetField(O("CustomExpansion"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDefaultAttributeValue(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("DefaultAttributeValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDifference(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("Difference"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLinearExpansion(::PlayFab_MultiplayerModels::LinearTeamDifferenceRuleExpansion* value) {
            static BNM::Field<::PlayFab_MultiplayerModels::LinearTeamDifferenceRuleExpansion*> _field = GetClass().GetField(O("LinearExpansion"));
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
