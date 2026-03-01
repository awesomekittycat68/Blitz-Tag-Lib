#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace PlayFab {
    struct PlayFabInsightsAPI : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab", "PlayFabInsightsAPI");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static void ForgetAllCredentials() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ForgetAllCredentials"));
            _m.Call();
        }
        template <typename TP3 = void*>
        static void GetDetails(::PlayFab_InsightsModels::InsightsEmptyRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_InsightsModels::InsightsGetDetailsResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetDetails"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        static void GetLimits(::PlayFab_InsightsModels::InsightsEmptyRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_InsightsModels::InsightsGetLimitsResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetLimits"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        static void GetOperationStatus(::PlayFab_InsightsModels::InsightsGetOperationStatusRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_InsightsModels::InsightsGetOperationStatusResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetOperationStatus"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        static void GetPendingOperations(::PlayFab_InsightsModels::InsightsGetPendingOperationsRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_InsightsModels::InsightsGetPendingOperationsResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetPendingOperations"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        static bool IsEntityLoggedIn() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsEntityLoggedIn"));
            return _m.Call();
        }
        template <typename TP3 = void*>
        static void SetPerformance(::PlayFab_InsightsModels::InsightsSetPerformanceRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_InsightsModels::InsightsOperationResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetPerformance"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        static void SetStorageRetention(::PlayFab_InsightsModels::InsightsSetStorageRetentionRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_InsightsModels::InsightsOperationResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetStorageRetention"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
    };
}
