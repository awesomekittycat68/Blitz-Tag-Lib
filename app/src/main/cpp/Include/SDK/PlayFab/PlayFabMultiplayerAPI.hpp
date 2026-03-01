#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace PlayFab {
    struct PlayFabMultiplayerAPI : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab", "PlayFabMultiplayerAPI");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        template <typename TP3 = void*>
        static void CancelAllMatchmakingTicketsForPlayer(::PlayFab_MultiplayerModels::CancelAllMatchmakingTicketsForPlayerRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::CancelAllMatchmakingTicketsForPlayerResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CancelAllMatchmakingTicketsForPlayer"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        static void CancelAllServerBackfillTicketsForPlayer(::PlayFab_MultiplayerModels::CancelAllServerBackfillTicketsForPlayerRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::CancelAllServerBackfillTicketsForPlayerResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CancelAllServerBackfillTicketsForPlayer"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        static void CancelMatchmakingTicket(::PlayFab_MultiplayerModels::CancelMatchmakingTicketRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::CancelMatchmakingTicketResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CancelMatchmakingTicket"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        static void CancelServerBackfillTicket(::PlayFab_MultiplayerModels::CancelServerBackfillTicketRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::CancelServerBackfillTicketResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CancelServerBackfillTicket"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        static void CreateBuildAlias(::PlayFab_MultiplayerModels::CreateBuildAliasRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::BuildAliasDetailsResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CreateBuildAlias"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        static void CreateBuildWithCustomContainer(::PlayFab_MultiplayerModels::CreateBuildWithCustomContainerRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::CreateBuildWithCustomContainerResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CreateBuildWithCustomContainer"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        static void CreateBuildWithManagedContainer(::PlayFab_MultiplayerModels::CreateBuildWithManagedContainerRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::CreateBuildWithManagedContainerResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CreateBuildWithManagedContainer"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        static void CreateMatchmakingTicket(::PlayFab_MultiplayerModels::CreateMatchmakingTicketRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::CreateMatchmakingTicketResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CreateMatchmakingTicket"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        static void CreateRemoteUser(::PlayFab_MultiplayerModels::CreateRemoteUserRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::CreateRemoteUserResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CreateRemoteUser"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        static void CreateServerBackfillTicket(::PlayFab_MultiplayerModels::CreateServerBackfillTicketRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::CreateServerBackfillTicketResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CreateServerBackfillTicket"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        static void CreateServerMatchmakingTicket(::PlayFab_MultiplayerModels::CreateServerMatchmakingTicketRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::CreateMatchmakingTicketResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CreateServerMatchmakingTicket"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        static void DeleteAsset(::PlayFab_MultiplayerModels::DeleteAssetRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::EmptyResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DeleteAsset"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        static void DeleteBuild(::PlayFab_MultiplayerModels::DeleteBuildRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::EmptyResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DeleteBuild"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        static void DeleteBuildAlias(::PlayFab_MultiplayerModels::DeleteBuildAliasRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::EmptyResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DeleteBuildAlias"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        static void DeleteBuildRegion(::PlayFab_MultiplayerModels::DeleteBuildRegionRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::EmptyResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DeleteBuildRegion"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        static void DeleteCertificate(::PlayFab_MultiplayerModels::DeleteCertificateRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::EmptyResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DeleteCertificate"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        static void DeleteContainerImageRepository(::PlayFab_MultiplayerModels::DeleteContainerImageRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::EmptyResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DeleteContainerImageRepository"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        static void DeleteRemoteUser(::PlayFab_MultiplayerModels::DeleteRemoteUserRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::EmptyResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DeleteRemoteUser"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        static void EnableMultiplayerServersForTitle(::PlayFab_MultiplayerModels::EnableMultiplayerServersForTitleRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::EnableMultiplayerServersForTitleResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EnableMultiplayerServersForTitle"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        static void ForgetAllCredentials() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ForgetAllCredentials"));
            _m.Call();
        }
        template <typename TP3 = void*>
        static void GetAssetUploadUrl(::PlayFab_MultiplayerModels::GetAssetUploadUrlRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::GetAssetUploadUrlResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetAssetUploadUrl"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        static void GetBuild(::PlayFab_MultiplayerModels::GetBuildRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::GetBuildResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetBuild"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        static void GetBuildAlias(::PlayFab_MultiplayerModels::GetBuildAliasRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::BuildAliasDetailsResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetBuildAlias"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        static void GetContainerRegistryCredentials(::PlayFab_MultiplayerModels::GetContainerRegistryCredentialsRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::GetContainerRegistryCredentialsResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetContainerRegistryCredentials"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        static void GetMatch(::PlayFab_MultiplayerModels::GetMatchRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::GetMatchResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetMatch"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        static void GetMatchmakingQueue(::PlayFab_MultiplayerModels::GetMatchmakingQueueRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::GetMatchmakingQueueResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetMatchmakingQueue"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        static void GetMatchmakingTicket(::PlayFab_MultiplayerModels::GetMatchmakingTicketRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::GetMatchmakingTicketResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetMatchmakingTicket"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        static void GetMultiplayerServerDetails(::PlayFab_MultiplayerModels::GetMultiplayerServerDetailsRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::GetMultiplayerServerDetailsResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetMultiplayerServerDetails"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        static void GetMultiplayerServerLogs(::PlayFab_MultiplayerModels::GetMultiplayerServerLogsRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::GetMultiplayerServerLogsResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetMultiplayerServerLogs"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        static void GetMultiplayerSessionLogsBySessionId(::PlayFab_MultiplayerModels::GetMultiplayerSessionLogsBySessionIdRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::GetMultiplayerServerLogsResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetMultiplayerSessionLogsBySessionId"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        static void GetQueueStatistics(::PlayFab_MultiplayerModels::GetQueueStatisticsRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::GetQueueStatisticsResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetQueueStatistics"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        static void GetRemoteLoginEndpoint(::PlayFab_MultiplayerModels::GetRemoteLoginEndpointRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::GetRemoteLoginEndpointResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetRemoteLoginEndpoint"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        static void GetServerBackfillTicket(::PlayFab_MultiplayerModels::GetServerBackfillTicketRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::GetServerBackfillTicketResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetServerBackfillTicket"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        static void GetTitleEnabledForMultiplayerServersStatus(::PlayFab_MultiplayerModels::GetTitleEnabledForMultiplayerServersStatusRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::GetTitleEnabledForMultiplayerServersStatusResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetTitleEnabledForMultiplayerServersStatus"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        static void GetTitleMultiplayerServersQuotas(::PlayFab_MultiplayerModels::GetTitleMultiplayerServersQuotasRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::GetTitleMultiplayerServersQuotasResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetTitleMultiplayerServersQuotas"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        static bool IsEntityLoggedIn() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsEntityLoggedIn"));
            return _m.Call();
        }
        template <typename TP3 = void*>
        static void JoinMatchmakingTicket(::PlayFab_MultiplayerModels::JoinMatchmakingTicketRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::JoinMatchmakingTicketResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("JoinMatchmakingTicket"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        static void ListArchivedMultiplayerServers(::PlayFab_MultiplayerModels::ListMultiplayerServersRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::ListMultiplayerServersResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ListArchivedMultiplayerServers"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        static void ListAssetSummaries(::PlayFab_MultiplayerModels::ListAssetSummariesRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::ListAssetSummariesResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ListAssetSummaries"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        static void ListBuildAliases(::PlayFab_MultiplayerModels::MultiplayerEmptyRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::ListBuildAliasesForTitleResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ListBuildAliases"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        static void ListBuildSummaries(::PlayFab_MultiplayerModels::ListBuildSummariesRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::ListBuildSummariesResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ListBuildSummaries"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        static void ListCertificateSummaries(::PlayFab_MultiplayerModels::ListCertificateSummariesRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::ListCertificateSummariesResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ListCertificateSummaries"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        static void ListContainerImages(::PlayFab_MultiplayerModels::ListContainerImagesRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::ListContainerImagesResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ListContainerImages"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        static void ListContainerImageTags(::PlayFab_MultiplayerModels::ListContainerImageTagsRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::ListContainerImageTagsResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ListContainerImageTags"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        static void ListMatchmakingQueues(::PlayFab_MultiplayerModels::ListMatchmakingQueuesRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::ListMatchmakingQueuesResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ListMatchmakingQueues"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        static void ListMatchmakingTicketsForPlayer(::PlayFab_MultiplayerModels::ListMatchmakingTicketsForPlayerRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::ListMatchmakingTicketsForPlayerResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ListMatchmakingTicketsForPlayer"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        static void ListMultiplayerServers(::PlayFab_MultiplayerModels::ListMultiplayerServersRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::ListMultiplayerServersResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ListMultiplayerServers"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        static void ListPartyQosServers(::PlayFab_MultiplayerModels::ListPartyQosServersRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::ListPartyQosServersResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ListPartyQosServers"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        static void ListQosServers(::PlayFab_MultiplayerModels::ListQosServersRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::ListQosServersResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ListQosServers"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        static void ListQosServersForTitle(::PlayFab_MultiplayerModels::ListQosServersForTitleRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::ListQosServersForTitleResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ListQosServersForTitle"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        static void ListServerBackfillTicketsForPlayer(::PlayFab_MultiplayerModels::ListServerBackfillTicketsForPlayerRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::ListServerBackfillTicketsForPlayerResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ListServerBackfillTicketsForPlayer"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        static void ListVirtualMachineSummaries(::PlayFab_MultiplayerModels::ListVirtualMachineSummariesRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::ListVirtualMachineSummariesResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ListVirtualMachineSummaries"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        static void RemoveMatchmakingQueue(::PlayFab_MultiplayerModels::RemoveMatchmakingQueueRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::RemoveMatchmakingQueueResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveMatchmakingQueue"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        static void RequestMultiplayerServer(::PlayFab_MultiplayerModels::RequestMultiplayerServerRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::RequestMultiplayerServerResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestMultiplayerServer"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        static void RolloverContainerRegistryCredentials(::PlayFab_MultiplayerModels::RolloverContainerRegistryCredentialsRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::RolloverContainerRegistryCredentialsResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RolloverContainerRegistryCredentials"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        static void SetMatchmakingQueue(::PlayFab_MultiplayerModels::SetMatchmakingQueueRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::SetMatchmakingQueueResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetMatchmakingQueue"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        static void ShutdownMultiplayerServer(::PlayFab_MultiplayerModels::ShutdownMultiplayerServerRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::EmptyResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ShutdownMultiplayerServer"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        static void UntagContainerImage(::PlayFab_MultiplayerModels::UntagContainerImageRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::EmptyResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UntagContainerImage"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        static void UpdateBuildAlias(::PlayFab_MultiplayerModels::UpdateBuildAliasRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::BuildAliasDetailsResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateBuildAlias"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        static void UpdateBuildRegion(::PlayFab_MultiplayerModels::UpdateBuildRegionRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::EmptyResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateBuildRegion"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        static void UpdateBuildRegions(::PlayFab_MultiplayerModels::UpdateBuildRegionsRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::EmptyResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateBuildRegions"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        static void UploadCertificate(::PlayFab_MultiplayerModels::UploadCertificateRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::EmptyResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UploadCertificate"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
    };
}
