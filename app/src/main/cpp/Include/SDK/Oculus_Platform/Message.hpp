#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "Message_MessageType.hpp"

namespace Oculus_Platform {
    struct Message : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Oculus.Platform", "Message");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Oculus_Platform::Message_ExtraMessageTypesHandler* GetHandleExtraMessageTypes() {
            static BNM::Method<::Oculus_Platform::Message_ExtraMessageTypesHandler*> _method = GetClass().GetMethod(O("get_HandleExtraMessageTypes"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetHandleExtraMessageTypes(::Oculus_Platform::Message_ExtraMessageTypesHandler* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_HandleExtraMessageTypes"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetIsError() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsError"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        uint64_t GetRequestID() {
            static BNM::Method<uint64_t> _method = GetClass().GetMethod(O("get_RequestID"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::Oculus_Platform::Message_MessageType GetType_pg() {
            static BNM::Method<::Oculus_Platform::Message_MessageType> _method = GetClass().GetMethod(O("get_Type"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::Oculus_Platform_Models::Error* GetError() {
            static BNM::Field<::Oculus_Platform_Models::Error*> _field = GetClass().GetField(O("error"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint64_t GetRequestID_f() {
            static BNM::Field<uint64_t> _field = GetClass().GetField(O("requestID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Oculus_Platform::Message_MessageType GetType_f() {
            static BNM::Field<::Oculus_Platform::Message_MessageType> _field = GetClass().GetField(O("type"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetError(::Oculus_Platform_Models::Error* value) {
            static BNM::Field<::Oculus_Platform_Models::Error*> _field = GetClass().GetField(O("error"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRequestID(uint64_t value) {
            static BNM::Field<uint64_t> _field = GetClass().GetField(O("requestID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetType(::Oculus_Platform::Message_MessageType value) {
            static BNM::Field<::Oculus_Platform::Message_MessageType> _field = GetClass().GetField(O("type"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Finalize_1() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Finalize"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static ::Oculus_Platform::Message_ExtraMessageTypesHandler* get_HandleExtraMessageTypes() {
            static BNM::Method<::Oculus_Platform::Message_ExtraMessageTypesHandler*> _m = GetClass().GetMethod(O("get_HandleExtraMessageTypes"));
            return _m.Call();
        }
        bool get_IsError() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsError"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        uint64_t get_RequestID() {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("get_RequestID"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Oculus_Platform::Message_MessageType get_Type() {
            static BNM::Method<::Oculus_Platform::Message_MessageType> _m = GetClass().GetMethod(O("get_Type"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Oculus_Platform_Models::AbuseReportRecording* GetAbuseReportRecording() {
            static BNM::Method<::Oculus_Platform_Models::AbuseReportRecording*> _m = GetClass().GetMethod(O("GetAbuseReportRecording"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Oculus_Platform_Models::AchievementDefinitionList* GetAchievementDefinitions() {
            static BNM::Method<::Oculus_Platform_Models::AchievementDefinitionList*> _m = GetClass().GetMethod(O("GetAchievementDefinitions"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Oculus_Platform_Models::AchievementProgressList* GetAchievementProgressList() {
            static BNM::Method<::Oculus_Platform_Models::AchievementProgressList*> _m = GetClass().GetMethod(O("GetAchievementProgressList"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Oculus_Platform_Models::AchievementUpdate* GetAchievementUpdate() {
            static BNM::Method<::Oculus_Platform_Models::AchievementUpdate*> _m = GetClass().GetMethod(O("GetAchievementUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Oculus_Platform_Models::AppDownloadProgressResult* GetAppDownloadProgressResult() {
            static BNM::Method<::Oculus_Platform_Models::AppDownloadProgressResult*> _m = GetClass().GetMethod(O("GetAppDownloadProgressResult"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Oculus_Platform_Models::AppDownloadResult* GetAppDownloadResult() {
            static BNM::Method<::Oculus_Platform_Models::AppDownloadResult*> _m = GetClass().GetMethod(O("GetAppDownloadResult"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Oculus_Platform_Models::ApplicationInviteList* GetApplicationInviteList() {
            static BNM::Method<::Oculus_Platform_Models::ApplicationInviteList*> _m = GetClass().GetMethod(O("GetApplicationInviteList"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Oculus_Platform_Models::ApplicationVersion* GetApplicationVersion() {
            static BNM::Method<::Oculus_Platform_Models::ApplicationVersion*> _m = GetClass().GetMethod(O("GetApplicationVersion"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Oculus_Platform_Models::AssetDetails* GetAssetDetails() {
            static BNM::Method<::Oculus_Platform_Models::AssetDetails*> _m = GetClass().GetMethod(O("GetAssetDetails"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Oculus_Platform_Models::AssetDetailsList* GetAssetDetailsList() {
            static BNM::Method<::Oculus_Platform_Models::AssetDetailsList*> _m = GetClass().GetMethod(O("GetAssetDetailsList"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Oculus_Platform_Models::AssetFileDeleteResult* GetAssetFileDeleteResult() {
            static BNM::Method<::Oculus_Platform_Models::AssetFileDeleteResult*> _m = GetClass().GetMethod(O("GetAssetFileDeleteResult"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Oculus_Platform_Models::AssetFileDownloadCancelResult* GetAssetFileDownloadCancelResult() {
            static BNM::Method<::Oculus_Platform_Models::AssetFileDownloadCancelResult*> _m = GetClass().GetMethod(O("GetAssetFileDownloadCancelResult"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Oculus_Platform_Models::AssetFileDownloadResult* GetAssetFileDownloadResult() {
            static BNM::Method<::Oculus_Platform_Models::AssetFileDownloadResult*> _m = GetClass().GetMethod(O("GetAssetFileDownloadResult"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Oculus_Platform_Models::AssetFileDownloadUpdate* GetAssetFileDownloadUpdate() {
            static BNM::Method<::Oculus_Platform_Models::AssetFileDownloadUpdate*> _m = GetClass().GetMethod(O("GetAssetFileDownloadUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Oculus_Platform_Models::AvatarEditorResult* GetAvatarEditorResult() {
            static BNM::Method<::Oculus_Platform_Models::AvatarEditorResult*> _m = GetClass().GetMethod(O("GetAvatarEditorResult"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Oculus_Platform_Models::BlockedUserList* GetBlockedUserList() {
            static BNM::Method<::Oculus_Platform_Models::BlockedUserList*> _m = GetClass().GetMethod(O("GetBlockedUserList"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Oculus_Platform_Models::Challenge* GetChallenge() {
            static BNM::Method<::Oculus_Platform_Models::Challenge*> _m = GetClass().GetMethod(O("GetChallenge"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Oculus_Platform_Models::ChallengeEntryList* GetChallengeEntryList() {
            static BNM::Method<::Oculus_Platform_Models::ChallengeEntryList*> _m = GetClass().GetMethod(O("GetChallengeEntryList"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Oculus_Platform_Models::ChallengeList* GetChallengeList() {
            static BNM::Method<::Oculus_Platform_Models::ChallengeList*> _m = GetClass().GetMethod(O("GetChallengeList"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Oculus_Platform_Models::CowatchingState* GetCowatchingState() {
            static BNM::Method<::Oculus_Platform_Models::CowatchingState*> _m = GetClass().GetMethod(O("GetCowatchingState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Oculus_Platform_Models::CowatchViewerList* GetCowatchViewerList() {
            static BNM::Method<::Oculus_Platform_Models::CowatchViewerList*> _m = GetClass().GetMethod(O("GetCowatchViewerList"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Oculus_Platform_Models::CowatchViewerUpdate* GetCowatchViewerUpdate() {
            static BNM::Method<::Oculus_Platform_Models::CowatchViewerUpdate*> _m = GetClass().GetMethod(O("GetCowatchViewerUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Oculus_Platform_Models::DestinationList* GetDestinationList() {
            static BNM::Method<::Oculus_Platform_Models::DestinationList*> _m = GetClass().GetMethod(O("GetDestinationList"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Oculus_Platform_Models::Error* GetError_1() {
            static BNM::Method<::Oculus_Platform_Models::Error*> _m = GetClass().GetMethod(O("GetError"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Oculus_Platform_Models::GroupPresenceJoinIntent* GetGroupPresenceJoinIntent() {
            static BNM::Method<::Oculus_Platform_Models::GroupPresenceJoinIntent*> _m = GetClass().GetMethod(O("GetGroupPresenceJoinIntent"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Oculus_Platform_Models::GroupPresenceLeaveIntent* GetGroupPresenceLeaveIntent() {
            static BNM::Method<::Oculus_Platform_Models::GroupPresenceLeaveIntent*> _m = GetClass().GetMethod(O("GetGroupPresenceLeaveIntent"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Oculus_Platform_Models::HttpTransferUpdate* GetHttpTransferUpdate() {
            static BNM::Method<::Oculus_Platform_Models::HttpTransferUpdate*> _m = GetClass().GetMethod(O("GetHttpTransferUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Oculus_Platform_Models::InstalledApplicationList* GetInstalledApplicationList() {
            static BNM::Method<::Oculus_Platform_Models::InstalledApplicationList*> _m = GetClass().GetMethod(O("GetInstalledApplicationList"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Oculus_Platform_Models::InvitePanelResultInfo* GetInvitePanelResultInfo() {
            static BNM::Method<::Oculus_Platform_Models::InvitePanelResultInfo*> _m = GetClass().GetMethod(O("GetInvitePanelResultInfo"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Oculus_Platform_Models::LaunchBlockFlowResult* GetLaunchBlockFlowResult() {
            static BNM::Method<::Oculus_Platform_Models::LaunchBlockFlowResult*> _m = GetClass().GetMethod(O("GetLaunchBlockFlowResult"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Oculus_Platform_Models::LaunchFriendRequestFlowResult* GetLaunchFriendRequestFlowResult() {
            static BNM::Method<::Oculus_Platform_Models::LaunchFriendRequestFlowResult*> _m = GetClass().GetMethod(O("GetLaunchFriendRequestFlowResult"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Oculus_Platform_Models::LaunchInvitePanelFlowResult* GetLaunchInvitePanelFlowResult() {
            static BNM::Method<::Oculus_Platform_Models::LaunchInvitePanelFlowResult*> _m = GetClass().GetMethod(O("GetLaunchInvitePanelFlowResult"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Oculus_Platform_Models::LaunchReportFlowResult* GetLaunchReportFlowResult() {
            static BNM::Method<::Oculus_Platform_Models::LaunchReportFlowResult*> _m = GetClass().GetMethod(O("GetLaunchReportFlowResult"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Oculus_Platform_Models::LaunchUnblockFlowResult* GetLaunchUnblockFlowResult() {
            static BNM::Method<::Oculus_Platform_Models::LaunchUnblockFlowResult*> _m = GetClass().GetMethod(O("GetLaunchUnblockFlowResult"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool GetLeaderboardDidUpdate() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("GetLeaderboardDidUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Oculus_Platform_Models::LeaderboardEntryList* GetLeaderboardEntryList() {
            static BNM::Method<::Oculus_Platform_Models::LeaderboardEntryList*> _m = GetClass().GetMethod(O("GetLeaderboardEntryList"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Oculus_Platform_Models::LeaderboardList* GetLeaderboardList() {
            static BNM::Method<::Oculus_Platform_Models::LeaderboardList*> _m = GetClass().GetMethod(O("GetLeaderboardList"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Oculus_Platform_Models::LinkedAccountList* GetLinkedAccountList() {
            static BNM::Method<::Oculus_Platform_Models::LinkedAccountList*> _m = GetClass().GetMethod(O("GetLinkedAccountList"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Oculus_Platform_Models::LivestreamingApplicationStatus* GetLivestreamingApplicationStatus() {
            static BNM::Method<::Oculus_Platform_Models::LivestreamingApplicationStatus*> _m = GetClass().GetMethod(O("GetLivestreamingApplicationStatus"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Oculus_Platform_Models::LivestreamingStartResult* GetLivestreamingStartResult() {
            static BNM::Method<::Oculus_Platform_Models::LivestreamingStartResult*> _m = GetClass().GetMethod(O("GetLivestreamingStartResult"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Oculus_Platform_Models::LivestreamingStatus* GetLivestreamingStatus() {
            static BNM::Method<::Oculus_Platform_Models::LivestreamingStatus*> _m = GetClass().GetMethod(O("GetLivestreamingStatus"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Oculus_Platform_Models::LivestreamingVideoStats* GetLivestreamingVideoStats() {
            static BNM::Method<::Oculus_Platform_Models::LivestreamingVideoStats*> _m = GetClass().GetMethod(O("GetLivestreamingVideoStats"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Oculus_Platform_Models::MicrophoneAvailabilityState* GetMicrophoneAvailabilityState() {
            static BNM::Method<::Oculus_Platform_Models::MicrophoneAvailabilityState*> _m = GetClass().GetMethod(O("GetMicrophoneAvailabilityState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Oculus_Platform_Models::NetSyncConnection* GetNetSyncConnection() {
            static BNM::Method<::Oculus_Platform_Models::NetSyncConnection*> _m = GetClass().GetMethod(O("GetNetSyncConnection"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Oculus_Platform_Models::NetSyncSessionList* GetNetSyncSessionList() {
            static BNM::Method<::Oculus_Platform_Models::NetSyncSessionList*> _m = GetClass().GetMethod(O("GetNetSyncSessionList"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Oculus_Platform_Models::NetSyncSessionsChangedNotification* GetNetSyncSessionsChangedNotification() {
            static BNM::Method<::Oculus_Platform_Models::NetSyncSessionsChangedNotification*> _m = GetClass().GetMethod(O("GetNetSyncSessionsChangedNotification"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Oculus_Platform_Models::NetSyncSetSessionPropertyResult* GetNetSyncSetSessionPropertyResult() {
            static BNM::Method<::Oculus_Platform_Models::NetSyncSetSessionPropertyResult*> _m = GetClass().GetMethod(O("GetNetSyncSetSessionPropertyResult"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Oculus_Platform_Models::NetSyncVoipAttenuationValueList* GetNetSyncVoipAttenuationValueList() {
            static BNM::Method<::Oculus_Platform_Models::NetSyncVoipAttenuationValueList*> _m = GetClass().GetMethod(O("GetNetSyncVoipAttenuationValueList"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Oculus_Platform_Models::OrgScopedID* GetOrgScopedID() {
            static BNM::Method<::Oculus_Platform_Models::OrgScopedID*> _m = GetClass().GetMethod(O("GetOrgScopedID"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Oculus_Platform_Models::Party* GetParty() {
            static BNM::Method<::Oculus_Platform_Models::Party*> _m = GetClass().GetMethod(O("GetParty"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Oculus_Platform_Models::PartyID* GetPartyID() {
            static BNM::Method<::Oculus_Platform_Models::PartyID*> _m = GetClass().GetMethod(O("GetPartyID"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Oculus_Platform_Models::PartyUpdateNotification* GetPartyUpdateNotification() {
            static BNM::Method<::Oculus_Platform_Models::PartyUpdateNotification*> _m = GetClass().GetMethod(O("GetPartyUpdateNotification"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Oculus_Platform_Models::PidList* GetPidList() {
            static BNM::Method<::Oculus_Platform_Models::PidList*> _m = GetClass().GetMethod(O("GetPidList"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Oculus_Platform_Models::PlatformInitialize* GetPlatformInitialize() {
            static BNM::Method<::Oculus_Platform_Models::PlatformInitialize*> _m = GetClass().GetMethod(O("GetPlatformInitialize"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Oculus_Platform_Models::ProductList* GetProductList() {
            static BNM::Method<::Oculus_Platform_Models::ProductList*> _m = GetClass().GetMethod(O("GetProductList"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Oculus_Platform_Models::Purchase* GetPurchase() {
            static BNM::Method<::Oculus_Platform_Models::Purchase*> _m = GetClass().GetMethod(O("GetPurchase"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Oculus_Platform_Models::PurchaseList* GetPurchaseList() {
            static BNM::Method<::Oculus_Platform_Models::PurchaseList*> _m = GetClass().GetMethod(O("GetPurchaseList"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Oculus_Platform_Models::PushNotificationResult* GetPushNotificationResult() {
            static BNM::Method<::Oculus_Platform_Models::PushNotificationResult*> _m = GetClass().GetMethod(O("GetPushNotificationResult"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Oculus_Platform_Models::RejoinDialogResult* GetRejoinDialogResult() {
            static BNM::Method<::Oculus_Platform_Models::RejoinDialogResult*> _m = GetClass().GetMethod(O("GetRejoinDialogResult"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Oculus_Platform_Models::SdkAccountList* GetSdkAccountList() {
            static BNM::Method<::Oculus_Platform_Models::SdkAccountList*> _m = GetClass().GetMethod(O("GetSdkAccountList"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Oculus_Platform_Models::SendInvitesResult* GetSendInvitesResult() {
            static BNM::Method<::Oculus_Platform_Models::SendInvitesResult*> _m = GetClass().GetMethod(O("GetSendInvitesResult"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Oculus_Platform_Models::ShareMediaResult* GetShareMediaResult() {
            static BNM::Method<::Oculus_Platform_Models::ShareMediaResult*> _m = GetClass().GetMethod(O("GetShareMediaResult"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* GetString() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetString"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Oculus_Platform_Models::SystemVoipState* GetSystemVoipState() {
            static BNM::Method<::Oculus_Platform_Models::SystemVoipState*> _m = GetClass().GetMethod(O("GetSystemVoipState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Oculus_Platform_Models::User* GetUser() {
            static BNM::Method<::Oculus_Platform_Models::User*> _m = GetClass().GetMethod(O("GetUser"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Oculus_Platform_Models::UserAccountAgeCategory* GetUserAccountAgeCategory() {
            static BNM::Method<::Oculus_Platform_Models::UserAccountAgeCategory*> _m = GetClass().GetMethod(O("GetUserAccountAgeCategory"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Oculus_Platform_Models::UserCapabilityList* GetUserCapabilityList() {
            static BNM::Method<::Oculus_Platform_Models::UserCapabilityList*> _m = GetClass().GetMethod(O("GetUserCapabilityList"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Oculus_Platform_Models::UserList* GetUserList() {
            static BNM::Method<::Oculus_Platform_Models::UserList*> _m = GetClass().GetMethod(O("GetUserList"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Oculus_Platform_Models::UserProof* GetUserProof() {
            static BNM::Method<::Oculus_Platform_Models::UserProof*> _m = GetClass().GetMethod(O("GetUserProof"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Oculus_Platform_Models::UserReportID* GetUserReportID() {
            static BNM::Method<::Oculus_Platform_Models::UserReportID*> _m = GetClass().GetMethod(O("GetUserReportID"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static ::Oculus_Platform::Message* ParseMessageHandle(::BNM::Types::nint messageHandle) {
            static BNM::Method<::Oculus_Platform::Message*> _m = GetClass().GetMethod(O("ParseMessageHandle"), {"messageHandle"});
            return _m.Call(messageHandle);
        }
        static ::Oculus_Platform::Message* PopMessage() {
            static BNM::Method<::Oculus_Platform::Message*> _m = GetClass().GetMethod(O("PopMessage"));
            return _m.Call();
        }
        static void set_HandleExtraMessageTypes(::Oculus_Platform::Message_ExtraMessageTypesHandler* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_HandleExtraMessageTypes"), {"value"});
            _m.Call(value);
        }
    };
}
