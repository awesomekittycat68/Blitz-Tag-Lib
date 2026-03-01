#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../PlayFab_SharedModels/PlayFabBaseModel.hpp"

namespace PlayFab_ExperimentationModels {
    struct ScorecardDataRow : ::PlayFab_SharedModels::PlayFabBaseModel {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.ExperimentationModels", "ScorecardDataRow");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetIsControl() {
            static BNM::Field<bool> _field = GetClass().GetField(O("IsControl"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::PlayFab_ExperimentationModels::MetricData*>* GetMetricDataRows() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::PlayFab_ExperimentationModels::MetricData*>*> _field = GetClass().GetField(O("MetricDataRows"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint32_t GetPlayerCount() {
            static BNM::Field<uint32_t> _field = GetClass().GetField(O("PlayerCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetVariantName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("VariantName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetIsControl(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("IsControl"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMetricDataRows(::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::PlayFab_ExperimentationModels::MetricData*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::PlayFab_ExperimentationModels::MetricData*>*> _field = GetClass().GetField(O("MetricDataRows"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerCount(uint32_t value) {
            static BNM::Field<uint32_t> _field = GetClass().GetField(O("PlayerCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVariantName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("VariantName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
