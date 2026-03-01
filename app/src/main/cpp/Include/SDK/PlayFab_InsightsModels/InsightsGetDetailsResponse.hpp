#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../PlayFab_SharedModels/PlayFabResultCommon.hpp"

namespace PlayFab_InsightsModels {
    struct InsightsGetDetailsResponse : ::PlayFab_SharedModels::PlayFabResultCommon {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.InsightsModels", "InsightsGetDetailsResponse");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        uint32_t GetDataUsageMb() {
            static BNM::Field<uint32_t> _field = GetClass().GetField(O("DataUsageMb"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetErrorMessage() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("ErrorMessage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::PlayFab_InsightsModels::InsightsGetLimitsResponse* GetLimits() {
            static BNM::Field<::PlayFab_InsightsModels::InsightsGetLimitsResponse*> _field = GetClass().GetField(O("Limits"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::PlayFab_InsightsModels::InsightsGetOperationStatusResponse*>* GetPendingOperations() {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_InsightsModels::InsightsGetOperationStatusResponse*>*> _field = GetClass().GetField(O("PendingOperations"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPerformanceLevel() {
            static BNM::Field<int> _field = GetClass().GetField(O("PerformanceLevel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetRetentionDays() {
            static BNM::Field<int> _field = GetClass().GetField(O("RetentionDays"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDataUsageMb(uint32_t value) {
            static BNM::Field<uint32_t> _field = GetClass().GetField(O("DataUsageMb"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetErrorMessage(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("ErrorMessage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLimits(::PlayFab_InsightsModels::InsightsGetLimitsResponse* value) {
            static BNM::Field<::PlayFab_InsightsModels::InsightsGetLimitsResponse*> _field = GetClass().GetField(O("Limits"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPendingOperations(::BNM::Structures::Mono::List<::PlayFab_InsightsModels::InsightsGetOperationStatusResponse*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_InsightsModels::InsightsGetOperationStatusResponse*>*> _field = GetClass().GetField(O("PendingOperations"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPerformanceLevel(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("PerformanceLevel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRetentionDays(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("RetentionDays"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
