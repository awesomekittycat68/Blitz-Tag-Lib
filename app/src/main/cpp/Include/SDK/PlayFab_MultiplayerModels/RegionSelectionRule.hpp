#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../PlayFab_SharedModels/PlayFabBaseModel.hpp"

namespace PlayFab_MultiplayerModels {
    struct RegionSelectionRule : ::PlayFab_SharedModels::PlayFabBaseModel {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.MultiplayerModels", "RegionSelectionRule");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::PlayFab_MultiplayerModels::CustomRegionSelectionRuleExpansion* GetCustomExpansion() {
            static BNM::Field<::PlayFab_MultiplayerModels::CustomRegionSelectionRuleExpansion*> _field = GetClass().GetField(O("CustomExpansion"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::PlayFab_MultiplayerModels::LinearRegionSelectionRuleExpansion* GetLinearExpansion() {
            static BNM::Field<::PlayFab_MultiplayerModels::LinearRegionSelectionRuleExpansion*> _field = GetClass().GetField(O("LinearExpansion"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint32_t GetMaxLatency() {
            static BNM::Field<uint32_t> _field = GetClass().GetField(O("MaxLatency"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("Name"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetPath() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("Path"));
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
        void SetCustomExpansion(::PlayFab_MultiplayerModels::CustomRegionSelectionRuleExpansion* value) {
            static BNM::Field<::PlayFab_MultiplayerModels::CustomRegionSelectionRuleExpansion*> _field = GetClass().GetField(O("CustomExpansion"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLinearExpansion(::PlayFab_MultiplayerModels::LinearRegionSelectionRuleExpansion* value) {
            static BNM::Field<::PlayFab_MultiplayerModels::LinearRegionSelectionRuleExpansion*> _field = GetClass().GetField(O("LinearExpansion"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxLatency(uint32_t value) {
            static BNM::Field<uint32_t> _field = GetClass().GetField(O("MaxLatency"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("Name"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPath(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("Path"));
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
