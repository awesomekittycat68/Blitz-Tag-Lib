#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "MothershipApiClient.hpp"

namespace GlobalNamespace {
    struct MothershipClientApiClient : ::GlobalNamespace::MothershipApiClient {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "MothershipClientApiClient");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void* GetSwigCPtr() {
            static BNM::Field<void*> _field = GetClass().GetField(O("swigCPtr"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetSwigCPtr(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("swigCPtr"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool AddSharedGroupMembers(::BNM::Structures::Mono::String* callerId, ::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* sharedGroupId, ::GlobalNamespace::StringVector* mothershipIds, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("AddSharedGroupMembers"), {"callerId", "titleId", "envId", "sharedGroupId", "mothershipIds", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(callerId, titleId, envId, sharedGroupId, mothershipIds, userData);
        }
        bool BeginQuestV2Auth(::BNM::Structures::Mono::String* userId, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("BeginQuestV2Auth"), {"userId", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(userId, userData);
        }
        bool BeginSteamAuth(::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("BeginSteamAuth"), {"userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(userData);
        }
        bool ClientBulkGetSubscriptions(::BNM::Structures::Mono::String* callerId, ::GlobalNamespace::StringVector* players, ::GlobalNamespace::PlatformAndSkuVector* platformSkus, ::GlobalNamespace::StringVector* catalogIds, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ClientBulkGetSubscriptions"), {"callerId", "players", "platformSkus", "catalogIds", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(callerId, players, platformSkus, catalogIds, userData);
        }
        bool ClientGetMySubscriptions(::BNM::Structures::Mono::String* callerId, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ClientGetMySubscriptions"), {"callerId", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(callerId, userData);
        }
        bool ClientGetPermissions(::BNM::Structures::Mono::String* callerId, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ClientGetPermissions"), {"callerId", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(callerId, userData);
        }
        bool CompleteQuestV2Auth(::BNM::Structures::Mono::String* userId, ::BNM::Structures::Mono::String* attestationToken, ::BNM::Structures::Mono::String* metaNonce, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CompleteQuestV2Auth"), {"userId", "attestationToken", "metaNonce", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(userId, attestationToken, metaNonce, userData);
        }
        bool CompleteSteamAuth(::BNM::Structures::Mono::String* nonce, ::BNM::Structures::Mono::String* ticket, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CompleteSteamAuth"), {"nonce", "ticket", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(nonce, ticket, userData);
        }
        bool CreateReport(::BNM::Structures::Mono::String* callerId, ::BNM::Structures::Mono::String* reportedUserId, int category, ::BNM::Structures::Mono::String* platform, bool moddedClient, ::BNM::Structures::Mono::String* metadata, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CreateReport"), {"callerId", "reportedUserId", "category", "platform", "moddedClient", "metadata", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(callerId, reportedUserId, category, platform, moddedClient, metadata, userData);
        }
        bool CreateSharedGroup(::BNM::Structures::Mono::String* callerId, ::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* sharedGroupId, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CreateSharedGroup"), {"callerId", "titleId", "envId", "sharedGroupId", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(callerId, titleId, envId, sharedGroupId, userData);
        }
        bool DeleteUserData(::BNM::Structures::Mono::String* callerId, ::BNM::Structures::Mono::String* userId, ::BNM::Structures::Mono::String* keyName, ::BNM::Structures::Mono::String* metadataId, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("DeleteUserData"), {"callerId", "userId", "keyName", "metadataId", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(callerId, userId, keyName, metadataId, userData);
        }
        void Dispose(bool disposing) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Dispose"), {"disposing"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(disposing);
        }
        static void* getCPtr(::GlobalNamespace::MothershipClientApiClient* obj) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("getCPtr"), {"obj"});
            return _m.Call(obj);
        }
        bool GetMergedInventory(::BNM::Structures::Mono::String* callerId, ::BNM::Structures::Mono::String* targetId, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("GetMergedInventory"), {"callerId", "targetId", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(callerId, targetId, userData);
        }
        bool GetProgressionTrackValuesForPlayer(::BNM::Structures::Mono::String* playerId, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("GetProgressionTrackValuesForPlayer"), {"playerId", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(playerId, userData);
        }
        bool GetProgressionTreesForPlayer(::BNM::Structures::Mono::String* playerId, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("GetProgressionTreesForPlayer"), {"playerId", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(playerId, userData);
        }
        bool GetSharedGroupData(::BNM::Structures::Mono::String* callerId, ::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* sharedGroupId, ::GlobalNamespace::StringVector* keys, bool getMembers, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("GetSharedGroupData"), {"callerId", "titleId", "envId", "sharedGroupId", "keys", "getMembers", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(callerId, titleId, envId, sharedGroupId, keys, getMembers, userData);
        }
        bool GetStorefront(::BNM::Structures::Mono::String* callerId, ::GlobalNamespace::StringVector* offerDisplays, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("GetStorefront"), {"callerId", "offerDisplays", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(callerId, offerDisplays, userData);
        }
        bool GetUserData(::BNM::Structures::Mono::String* callerId, ::BNM::Structures::Mono::String* userId, ::BNM::Structures::Mono::String* keyName, ::BNM::Structures::Mono::String* metadataId, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("GetUserData"), {"callerId", "userId", "keyName", "metadataId", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(callerId, userId, keyName, metadataId, userData);
        }
        bool GetUserInventory(::BNM::Structures::Mono::String* callerId, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("GetUserInventory"), {"callerId", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(callerId, userData);
        }
        bool ListClientMothershipTitleData(::BNM::Structures::Mono::String* callerId, ::GlobalNamespace::StringVector* keys, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ListClientMothershipTitleData"), {"callerId", "keys", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(callerId, keys, userData);
        }
        bool ListUserData(::BNM::Structures::Mono::String* callerId, ::BNM::Structures::Mono::String* userId, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ListUserData"), {"callerId", "userId", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(callerId, userId, userData);
        }
        bool LoginWithApple(::BNM::Structures::Mono::String* signature, ::BNM::Structures::Mono::String* gamePlayerId, ::BNM::Structures::Mono::String* teamPlayerId, ::BNM::Structures::Mono::String* certUri, ::BNM::Structures::Mono::String* salt, ::BNM::Structures::Mono::String* timestamp, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("LoginWithApple"), {"signature", "gamePlayerId", "teamPlayerId", "certUri", "salt", "timestamp", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(signature, gamePlayerId, teamPlayerId, certUri, salt, timestamp, userData);
        }
        bool LoginWithGoogle(::BNM::Structures::Mono::String* token, ::BNM::Structures::Mono::String* userId, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("LoginWithGoogle"), {"token", "userId", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(token, userId, userData);
        }
        bool LoginWithInsecure1(::BNM::Structures::Mono::String* username, ::BNM::Structures::Mono::String* accountId, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("LoginWithInsecure1"), {"username", "accountId", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(username, accountId, userData);
        }
        bool LoginWithInsecure2(::BNM::Structures::Mono::String* username, ::BNM::Structures::Mono::String* accountId, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("LoginWithInsecure2"), {"username", "accountId", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(username, accountId, userData);
        }
        bool LoginWithQuest(::BNM::Structures::Mono::String* nonce, ::BNM::Structures::Mono::String* userId, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("LoginWithQuest"), {"nonce", "userId", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(nonce, userId, userData);
        }
        bool LoginWithRift(::BNM::Structures::Mono::String* nonce, ::BNM::Structures::Mono::String* userId, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("LoginWithRift"), {"nonce", "userId", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(nonce, userId, userData);
        }
        bool OpenNotificationsSocket(::BNM::Structures::Mono::String* playerId, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("OpenNotificationsSocket"), {"playerId", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(playerId, userData);
        }
        bool PurchaseOffer(::BNM::Structures::Mono::String* callerId, ::BNM::Structures::Mono::String* offerDisplayId, ::BNM::Structures::Mono::String* offerId, int displayIndex, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("PurchaseOffer"), {"callerId", "offerDisplayId", "offerId", "displayIndex", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(callerId, offerDisplayId, offerId, displayIndex, userData);
        }
        bool RefreshIAP(::BNM::Structures::Mono::String* callerId, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("RefreshIAP"), {"callerId", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(callerId, userData);
        }
        bool RemoveSharedGroupMembers(::BNM::Structures::Mono::String* callerId, ::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* sharedGroupId, ::GlobalNamespace::StringVector* mothershipIds, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("RemoveSharedGroupMembers"), {"callerId", "titleId", "envId", "sharedGroupId", "mothershipIds", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(callerId, titleId, envId, sharedGroupId, mothershipIds, userData);
        }
        void SetAcceptLanguage(::BNM::Structures::Mono::String* language) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetAcceptLanguage"), {"language"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(language);
        }
        void SetAddSharedGroupMembersCompleteDelegateWrapper(::GlobalNamespace::AddSharedGroupMembersCompleteClientDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetAddSharedGroupMembersCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetAuthRefreshRequiredDelegateWrapper(::GlobalNamespace::AuthRefreshRequiredDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetAuthRefreshRequiredDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetClientBulkGetSubscriptionsDelegateWrapper(::GlobalNamespace::ClientGetBulkSubscriptionsCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetClientBulkGetSubscriptionsDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetClientGetMySubscriptionsDelegateWrapper(::GlobalNamespace::ClientGetMySubscriptionCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetClientGetMySubscriptionsDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetClientGetPermissionsCompleteDelegateWrapper(::GlobalNamespace::ClientGetPermissionsCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetClientGetPermissionsCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetCreateReportCompleteClientDelegateWrapper(::GlobalNamespace::CreateReportCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetCreateReportCompleteClientDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetCreateSharedGroupCompleteDelegateWrapper(::GlobalNamespace::CreateSharedGroupCompleteClientDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetCreateSharedGroupCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetDeleteUserDataCompleteClientDelegateWrapper(::GlobalNamespace::DeleteUserDataCompleteClientDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetDeleteUserDataCompleteClientDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetGetMergedInventoryCompleteClientDelegateWrapper(::GlobalNamespace::GetMergedInventoryCompleteClientDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetGetMergedInventoryCompleteClientDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetGetProgressionTrackValuesForPlayerCompleteClientDelegateWrapper(::GlobalNamespace::GetProgressionTrackValuesForPlayerCompleteClientDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetGetProgressionTrackValuesForPlayerCompleteClientDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetGetProgressionTreesForPlayerCompleteClientDelegateWrapper(::GlobalNamespace::GetProgressionTreesForPlayerCompleteClientDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetGetProgressionTreesForPlayerCompleteClientDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetGetSharedGroupDataCompleteDelegateWrapper(::GlobalNamespace::GetSharedGroupDataCompleteClientDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetGetSharedGroupDataCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetGetStorefrontCompleteClientDelegateWrapper(::GlobalNamespace::GetStorefrontRequestCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetGetStorefrontCompleteClientDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetGetUserDataCompleteClientDelegateWrapper(::GlobalNamespace::GetUserDataCompleteClientDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetGetUserDataCompleteClientDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetGetUserInventoryCompleteClientDelegateWrapper(::GlobalNamespace::GetUserInventoryCompleteClientDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetGetUserInventoryCompleteClientDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetListMothershipTitleDataCompleteClientDelegateWrapper(::GlobalNamespace::ListMothershipTitleDataCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetListMothershipTitleDataCompleteClientDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetListUserDataCompleteClientDelegateWrapper(::GlobalNamespace::ListUserDataCompleteClientDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetListUserDataCompleteClientDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetLoginCompleteDelegate(::GlobalNamespace::LoginCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetLoginCompleteDelegate"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetMothershipRefreshIAPCompleteDelegateWrapper(::GlobalNamespace::MothershipRefreshIAPCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetMothershipRefreshIAPCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetNotificationsMessageDelegateWrapper(::GlobalNamespace::NotificationsMessageDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetNotificationsMessageDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetPurchaseCompleteClientDelegateWrapper(::GlobalNamespace::PurchaseOfferRequestCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetPurchaseCompleteClientDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetQuestAuthV2BeginRequestCompleteClientDelegateWrapper(::GlobalNamespace::QuestBeginLoginV2RequestCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetQuestAuthV2BeginRequestCompleteClientDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetRemoveSharedGroupMembersCompleteDelegateWrapper(::GlobalNamespace::RemoveSharedGroupMembersCompleteClientDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetRemoveSharedGroupMembersCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetSetUserDataCompleteClientDelegateWrapper(::GlobalNamespace::SetUserDataCompleteClientDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetSetUserDataCompleteClientDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetSteamBeginRequestCompleteClientDelegateWrapper(::GlobalNamespace::PlayerSteamBeginLoginResponseCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetSteamBeginRequestCompleteClientDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetUpdateSharedGroupDataCompleteDelegateWrapper(::GlobalNamespace::UpdateSharedGroupDataCompleteClientDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetUpdateSharedGroupDataCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        bool SetUserData(::BNM::Structures::Mono::String* callerId, ::BNM::Structures::Mono::String* userId, ::BNM::Structures::Mono::String* keyName, ::BNM::Structures::Mono::String* value, int generation, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("SetUserData"), {"callerId", "userId", "keyName", "value", "generation", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(callerId, userId, keyName, value, generation, userData);
        }
        void SetValidateUsernameCompleteClientDelegateWrapper(::GlobalNamespace::ValidateUsernameCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetValidateUsernameCompleteClientDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetWriteEventsCompleteClientDelegateWrapper(::GlobalNamespace::WriteEventsCompleteClientDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetWriteEventsCompleteClientDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        static void* swigRelease(::GlobalNamespace::MothershipClientApiClient* obj) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("swigRelease"), {"obj"});
            return _m.Call(obj);
        }
        bool UpdateSharedGroupData(::BNM::Structures::Mono::String* callerId, ::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* sharedGroupId, ::GlobalNamespace::StringKeyValueMap* data, ::GlobalNamespace::StringKeyValueMap* customTags, ::GlobalNamespace::StringVector* keysToRemove, ::BNM::Structures::Mono::String* permission, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("UpdateSharedGroupData"), {"callerId", "titleId", "envId", "sharedGroupId", "data", "customTags", "keysToRemove", "permission", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(callerId, titleId, envId, sharedGroupId, data, customTags, keysToRemove, permission, userData);
        }
        bool ValidateUsername(::BNM::Structures::Mono::String* callerId, ::BNM::Structures::Mono::String* username, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ValidateUsername"), {"callerId", "username", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(callerId, username, userData);
        }
        bool WriteEvents(::BNM::Structures::Mono::String* callerId, ::GlobalNamespace::MothershipWriteEventsRequest* request, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("WriteEvents"), {"callerId", "request", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(callerId, request, userData);
        }
    };
}
