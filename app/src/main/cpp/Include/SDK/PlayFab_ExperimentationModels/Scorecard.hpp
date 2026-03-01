#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "AnalysisTaskState.hpp"
#include "../PlayFab_SharedModels/PlayFabBaseModel.hpp"

namespace PlayFab_ExperimentationModels {
    struct Scorecard : ::PlayFab_SharedModels::PlayFabBaseModel {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.ExperimentationModels", "Scorecard");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::String* GetDateGenerated() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("DateGenerated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetDuration() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("Duration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetEventsProcessed() {
            static BNM::Field<double> _field = GetClass().GetField(O("EventsProcessed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetExperimentId() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("ExperimentId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetExperimentName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("ExperimentName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetLatestJobStatus() {
            static BNM::Field<void*> _field = GetClass().GetField(O("LatestJobStatus"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetSampleRatioMismatch() {
            static BNM::Field<bool> _field = GetClass().GetField(O("SampleRatioMismatch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::PlayFab_ExperimentationModels::ScorecardDataRow*>* GetScorecardDataRows() {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_ExperimentationModels::ScorecardDataRow*>*> _field = GetClass().GetField(O("ScorecardDataRows"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDateGenerated(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("DateGenerated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDuration(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("Duration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEventsProcessed(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("EventsProcessed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetExperimentId(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("ExperimentId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetExperimentName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("ExperimentName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLatestJobStatus(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("LatestJobStatus"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSampleRatioMismatch(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("SampleRatioMismatch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScorecardDataRows(::BNM::Structures::Mono::List<::PlayFab_ExperimentationModels::ScorecardDataRow*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_ExperimentationModels::ScorecardDataRow*>*> _field = GetClass().GetField(O("ScorecardDataRows"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
