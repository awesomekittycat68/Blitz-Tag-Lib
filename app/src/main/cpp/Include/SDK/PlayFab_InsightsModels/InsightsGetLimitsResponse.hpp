#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../PlayFab_SharedModels/PlayFabResultCommon.hpp"

namespace PlayFab_InsightsModels {
    struct InsightsGetLimitsResponse : ::PlayFab_SharedModels::PlayFabResultCommon {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.InsightsModels", "InsightsGetLimitsResponse");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetDefaultPerformanceLevel() {
            static BNM::Field<int> _field = GetClass().GetField(O("DefaultPerformanceLevel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetDefaultStorageRetentionDays() {
            static BNM::Field<int> _field = GetClass().GetField(O("DefaultStorageRetentionDays"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetStorageMaxRetentionDays() {
            static BNM::Field<int> _field = GetClass().GetField(O("StorageMaxRetentionDays"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetStorageMinRetentionDays() {
            static BNM::Field<int> _field = GetClass().GetField(O("StorageMinRetentionDays"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::PlayFab_InsightsModels::InsightsPerformanceLevel*>* GetSubMeters() {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_InsightsModels::InsightsPerformanceLevel*>*> _field = GetClass().GetField(O("SubMeters"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDefaultPerformanceLevel(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("DefaultPerformanceLevel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDefaultStorageRetentionDays(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("DefaultStorageRetentionDays"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStorageMaxRetentionDays(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("StorageMaxRetentionDays"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStorageMinRetentionDays(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("StorageMinRetentionDays"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSubMeters(::BNM::Structures::Mono::List<::PlayFab_InsightsModels::InsightsPerformanceLevel*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_InsightsModels::InsightsPerformanceLevel*>*> _field = GetClass().GetField(O("SubMeters"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
