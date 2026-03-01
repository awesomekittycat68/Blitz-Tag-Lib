#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace PlayFab {
    struct PlayFabExperimentationInstanceAPI : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab", "PlayFabExperimentationInstanceAPI");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::PlayFab::PlayFabApiSettings* GetApiSettings() {
            static BNM::Field<::PlayFab::PlayFabApiSettings*> _field = GetClass().GetField(O("apiSettings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::PlayFab::PlayFabAuthenticationContext* GetAuthenticationContext() {
            static BNM::Field<::PlayFab::PlayFabAuthenticationContext*> _field = GetClass().GetField(O("authenticationContext"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        template <typename TP3 = void*>
        void CreateExperiment(::PlayFab_ExperimentationModels::CreateExperimentRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ExperimentationModels::CreateExperimentResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CreateExperiment"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void DeleteExperiment(::PlayFab_ExperimentationModels::DeleteExperimentRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ExperimentationModels::EmptyResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DeleteExperiment"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        void ForgetAllCredentials() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ForgetAllCredentials"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        template <typename TP3 = void*>
        void GetExperiments(::PlayFab_ExperimentationModels::GetExperimentsRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ExperimentationModels::GetExperimentsResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetExperiments"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void GetLatestScorecard(::PlayFab_ExperimentationModels::GetLatestScorecardRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ExperimentationModels::GetLatestScorecardResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetLatestScorecard"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void GetTreatmentAssignment(::PlayFab_ExperimentationModels::GetTreatmentAssignmentRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ExperimentationModels::GetTreatmentAssignmentResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetTreatmentAssignment"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        bool IsEntityLoggedIn() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsEntityLoggedIn"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        template <typename TP3 = void*>
        void StartExperiment(::PlayFab_ExperimentationModels::StartExperimentRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ExperimentationModels::EmptyResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StartExperiment"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void StopExperiment(::PlayFab_ExperimentationModels::StopExperimentRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ExperimentationModels::EmptyResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StopExperiment"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void UpdateExperiment(::PlayFab_ExperimentationModels::UpdateExperimentRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ExperimentationModels::EmptyResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateExperiment"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
    };
}
