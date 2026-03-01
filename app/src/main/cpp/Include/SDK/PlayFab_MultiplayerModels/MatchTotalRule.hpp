#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../PlayFab_SharedModels/PlayFabBaseModel.hpp"

namespace PlayFab_MultiplayerModels {
    struct MatchTotalRule : ::PlayFab_SharedModels::PlayFabBaseModel {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.MultiplayerModels", "MatchTotalRule");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::PlayFab_MultiplayerModels::QueueRuleAttribute* GetAttribute() {
            static BNM::Field<::PlayFab_MultiplayerModels::QueueRuleAttribute*> _field = GetClass().GetField(O("Attribute"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::PlayFab_MultiplayerModels::MatchTotalRuleExpansion* GetExpansion() {
            static BNM::Field<::PlayFab_MultiplayerModels::MatchTotalRuleExpansion*> _field = GetClass().GetField(O("Expansion"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetMax() {
            static BNM::Field<double> _field = GetClass().GetField(O("Max"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetMin() {
            static BNM::Field<double> _field = GetClass().GetField(O("Min"));
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
        double GetWeight() {
            static BNM::Field<double> _field = GetClass().GetField(O("Weight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAttribute(::PlayFab_MultiplayerModels::QueueRuleAttribute* value) {
            static BNM::Field<::PlayFab_MultiplayerModels::QueueRuleAttribute*> _field = GetClass().GetField(O("Attribute"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetExpansion(::PlayFab_MultiplayerModels::MatchTotalRuleExpansion* value) {
            static BNM::Field<::PlayFab_MultiplayerModels::MatchTotalRuleExpansion*> _field = GetClass().GetField(O("Expansion"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMax(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("Max"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMin(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("Min"));
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
        void SetWeight(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("Weight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
