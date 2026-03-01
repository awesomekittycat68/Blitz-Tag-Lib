#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace PlayFab {
    struct PlayFabMultiplayerInstanceAPI : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab", "PlayFabMultiplayerInstanceAPI");
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
        void CancelAllMatchmakingTicketsForPlayer(::PlayFab_MultiplayerModels::CancelAllMatchmakingTicketsForPlayerRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::CancelAllMatchmakingTicketsForPlayerResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CancelAllMatchmakingTicketsForPlayer"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void CancelAllServerBackfillTicketsForPlayer(::PlayFab_MultiplayerModels::CancelAllServerBackfillTicketsForPlayerRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::CancelAllServerBackfillTicketsForPlayerResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CancelAllServerBackfillTicketsForPlayer"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void CancelMatchmakingTicket(::PlayFab_MultiplayerModels::CancelMatchmakingTicketRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::CancelMatchmakingTicketResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CancelMatchmakingTicket"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void CancelServerBackfillTicket(::PlayFab_MultiplayerModels::CancelServerBackfillTicketRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::CancelServerBackfillTicketResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CancelServerBackfillTicket"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void CreateBuildAlias(::PlayFab_MultiplayerModels::CreateBuildAliasRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::BuildAliasDetailsResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CreateBuildAlias"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void CreateBuildWithCustomContainer(::PlayFab_MultiplayerModels::CreateBuildWithCustomContainerRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::CreateBuildWithCustomContainerResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CreateBuildWithCustomContainer"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void CreateBuildWithManagedContainer(::PlayFab_MultiplayerModels::CreateBuildWithManagedContainerRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::CreateBuildWithManagedContainerResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CreateBuildWithManagedContainer"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void CreateMatchmakingTicket(::PlayFab_MultiplayerModels::CreateMatchmakingTicketRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::CreateMatchmakingTicketResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CreateMatchmakingTicket"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void CreateRemoteUser(::PlayFab_MultiplayerModels::CreateRemoteUserRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::CreateRemoteUserResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CreateRemoteUser"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void CreateServerBackfillTicket(::PlayFab_MultiplayerModels::CreateServerBackfillTicketRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::CreateServerBackfillTicketResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CreateServerBackfillTicket"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void CreateServerMatchmakingTicket(::PlayFab_MultiplayerModels::CreateServerMatchmakingTicketRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::CreateMatchmakingTicketResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CreateServerMatchmakingTicket"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void DeleteAsset(::PlayFab_MultiplayerModels::DeleteAssetRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::EmptyResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DeleteAsset"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void DeleteBuild(::PlayFab_MultiplayerModels::DeleteBuildRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::EmptyResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DeleteBuild"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void DeleteBuildAlias(::PlayFab_MultiplayerModels::DeleteBuildAliasRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::EmptyResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DeleteBuildAlias"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void DeleteBuildRegion(::PlayFab_MultiplayerModels::DeleteBuildRegionRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::EmptyResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DeleteBuildRegion"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void DeleteCertificate(::PlayFab_MultiplayerModels::DeleteCertificateRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::EmptyResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DeleteCertificate"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void DeleteContainerImageRepository(::PlayFab_MultiplayerModels::DeleteContainerImageRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::EmptyResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DeleteContainerImageRepository"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void DeleteRemoteUser(::PlayFab_MultiplayerModels::DeleteRemoteUserRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::EmptyResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DeleteRemoteUser"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void EnableMultiplayerServersForTitle(::PlayFab_MultiplayerModels::EnableMultiplayerServersForTitleRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::EnableMultiplayerServersForTitleResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EnableMultiplayerServersForTitle"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        void ForgetAllCredentials() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ForgetAllCredentials"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        template <typename TP3 = void*>
        void GetAssetUploadUrl(::PlayFab_MultiplayerModels::GetAssetUploadUrlRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::GetAssetUploadUrlResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetAssetUploadUrl"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void GetBuild(::PlayFab_MultiplayerModels::GetBuildRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::GetBuildResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetBuild"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void GetBuildAlias(::PlayFab_MultiplayerModels::GetBuildAliasRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::BuildAliasDetailsResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetBuildAlias"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void GetContainerRegistryCredentials(::PlayFab_MultiplayerModels::GetContainerRegistryCredentialsRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::GetContainerRegistryCredentialsResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetContainerRegistryCredentials"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void GetMatch(::PlayFab_MultiplayerModels::GetMatchRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::GetMatchResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetMatch"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void GetMatchmakingQueue(::PlayFab_MultiplayerModels::GetMatchmakingQueueRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::GetMatchmakingQueueResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetMatchmakingQueue"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void GetMatchmakingTicket(::PlayFab_MultiplayerModels::GetMatchmakingTicketRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::GetMatchmakingTicketResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetMatchmakingTicket"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void GetMultiplayerServerDetails(::PlayFab_MultiplayerModels::GetMultiplayerServerDetailsRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::GetMultiplayerServerDetailsResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetMultiplayerServerDetails"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void GetMultiplayerServerLogs(::PlayFab_MultiplayerModels::GetMultiplayerServerLogsRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::GetMultiplayerServerLogsResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetMultiplayerServerLogs"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void GetMultiplayerSessionLogsBySessionId(::PlayFab_MultiplayerModels::GetMultiplayerSessionLogsBySessionIdRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::GetMultiplayerServerLogsResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetMultiplayerSessionLogsBySessionId"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void GetQueueStatistics(::PlayFab_MultiplayerModels::GetQueueStatisticsRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::GetQueueStatisticsResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetQueueStatistics"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void GetRemoteLoginEndpoint(::PlayFab_MultiplayerModels::GetRemoteLoginEndpointRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::GetRemoteLoginEndpointResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetRemoteLoginEndpoint"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void GetServerBackfillTicket(::PlayFab_MultiplayerModels::GetServerBackfillTicketRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::GetServerBackfillTicketResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetServerBackfillTicket"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void GetTitleEnabledForMultiplayerServersStatus(::PlayFab_MultiplayerModels::GetTitleEnabledForMultiplayerServersStatusRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::GetTitleEnabledForMultiplayerServersStatusResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetTitleEnabledForMultiplayerServersStatus"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void GetTitleMultiplayerServersQuotas(::PlayFab_MultiplayerModels::GetTitleMultiplayerServersQuotasRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::GetTitleMultiplayerServersQuotasResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetTitleMultiplayerServersQuotas"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        bool IsEntityLoggedIn() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsEntityLoggedIn"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        template <typename TP3 = void*>
        void JoinMatchmakingTicket(::PlayFab_MultiplayerModels::JoinMatchmakingTicketRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::JoinMatchmakingTicketResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("JoinMatchmakingTicket"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void ListArchivedMultiplayerServers(::PlayFab_MultiplayerModels::ListMultiplayerServersRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::ListMultiplayerServersResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ListArchivedMultiplayerServers"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void ListAssetSummaries(::PlayFab_MultiplayerModels::ListAssetSummariesRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::ListAssetSummariesResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ListAssetSummaries"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void ListBuildAliases(::PlayFab_MultiplayerModels::MultiplayerEmptyRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::ListBuildAliasesForTitleResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ListBuildAliases"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void ListBuildSummaries(::PlayFab_MultiplayerModels::ListBuildSummariesRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::ListBuildSummariesResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ListBuildSummaries"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void ListCertificateSummaries(::PlayFab_MultiplayerModels::ListCertificateSummariesRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::ListCertificateSummariesResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ListCertificateSummaries"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void ListContainerImages(::PlayFab_MultiplayerModels::ListContainerImagesRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::ListContainerImagesResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ListContainerImages"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void ListContainerImageTags(::PlayFab_MultiplayerModels::ListContainerImageTagsRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::ListContainerImageTagsResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ListContainerImageTags"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void ListMatchmakingQueues(::PlayFab_MultiplayerModels::ListMatchmakingQueuesRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::ListMatchmakingQueuesResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ListMatchmakingQueues"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void ListMatchmakingTicketsForPlayer(::PlayFab_MultiplayerModels::ListMatchmakingTicketsForPlayerRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::ListMatchmakingTicketsForPlayerResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ListMatchmakingTicketsForPlayer"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void ListMultiplayerServers(::PlayFab_MultiplayerModels::ListMultiplayerServersRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::ListMultiplayerServersResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ListMultiplayerServers"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void ListPartyQosServers(::PlayFab_MultiplayerModels::ListPartyQosServersRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::ListPartyQosServersResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ListPartyQosServers"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void ListQosServers(::PlayFab_MultiplayerModels::ListQosServersRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::ListQosServersResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ListQosServers"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void ListQosServersForTitle(::PlayFab_MultiplayerModels::ListQosServersForTitleRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::ListQosServersForTitleResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ListQosServersForTitle"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void ListServerBackfillTicketsForPlayer(::PlayFab_MultiplayerModels::ListServerBackfillTicketsForPlayerRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::ListServerBackfillTicketsForPlayerResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ListServerBackfillTicketsForPlayer"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void ListVirtualMachineSummaries(::PlayFab_MultiplayerModels::ListVirtualMachineSummariesRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::ListVirtualMachineSummariesResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ListVirtualMachineSummaries"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void RemoveMatchmakingQueue(::PlayFab_MultiplayerModels::RemoveMatchmakingQueueRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::RemoveMatchmakingQueueResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveMatchmakingQueue"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void RequestMultiplayerServer(::PlayFab_MultiplayerModels::RequestMultiplayerServerRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::RequestMultiplayerServerResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestMultiplayerServer"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void RolloverContainerRegistryCredentials(::PlayFab_MultiplayerModels::RolloverContainerRegistryCredentialsRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::RolloverContainerRegistryCredentialsResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RolloverContainerRegistryCredentials"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void SetMatchmakingQueue(::PlayFab_MultiplayerModels::SetMatchmakingQueueRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::SetMatchmakingQueueResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetMatchmakingQueue"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void ShutdownMultiplayerServer(::PlayFab_MultiplayerModels::ShutdownMultiplayerServerRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::EmptyResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ShutdownMultiplayerServer"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void UntagContainerImage(::PlayFab_MultiplayerModels::UntagContainerImageRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::EmptyResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UntagContainerImage"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void UpdateBuildAlias(::PlayFab_MultiplayerModels::UpdateBuildAliasRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::BuildAliasDetailsResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateBuildAlias"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void UpdateBuildRegion(::PlayFab_MultiplayerModels::UpdateBuildRegionRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::EmptyResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateBuildRegion"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void UpdateBuildRegions(::PlayFab_MultiplayerModels::UpdateBuildRegionsRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::EmptyResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateBuildRegions"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void UploadCertificate(::PlayFab_MultiplayerModels::UploadCertificateRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_MultiplayerModels::EmptyResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UploadCertificate"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
    };
}
