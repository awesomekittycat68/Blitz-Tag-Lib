#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../PlayFab_SharedModels/PlayFabBaseModel.hpp"

namespace PlayFab_InsightsModels {
    struct InsightsPerformanceLevel : ::PlayFab_SharedModels::PlayFabBaseModel {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.InsightsModels", "InsightsPerformanceLevel");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetActiveEventExports() {
            static BNM::Field<int> _field = GetClass().GetField(O("ActiveEventExports"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCacheSizeMB() {
            static BNM::Field<int> _field = GetClass().GetField(O("CacheSizeMB"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetConcurrency() {
            static BNM::Field<int> _field = GetClass().GetField(O("Concurrency"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetCreditsPerMinute() {
            static BNM::Field<double> _field = GetClass().GetField(O("CreditsPerMinute"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetEventsPerSecond() {
            static BNM::Field<int> _field = GetClass().GetField(O("EventsPerSecond"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLevel() {
            static BNM::Field<int> _field = GetClass().GetField(O("Level"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMaxMemoryPerQueryMB() {
            static BNM::Field<int> _field = GetClass().GetField(O("MaxMemoryPerQueryMB"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetVirtualCpuCores() {
            static BNM::Field<int> _field = GetClass().GetField(O("VirtualCpuCores"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetActiveEventExports(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("ActiveEventExports"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCacheSizeMB(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("CacheSizeMB"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetConcurrency(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("Concurrency"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCreditsPerMinute(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("CreditsPerMinute"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEventsPerSecond(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("EventsPerSecond"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLevel(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("Level"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxMemoryPerQueryMB(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("MaxMemoryPerQueryMB"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVirtualCpuCores(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("VirtualCpuCores"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
