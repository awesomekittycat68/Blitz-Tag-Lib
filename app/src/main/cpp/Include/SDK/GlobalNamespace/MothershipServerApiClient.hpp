#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "MothershipApiClient.hpp"

namespace GlobalNamespace {
    struct MothershipServerApiClient : ::GlobalNamespace::MothershipApiClient {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "MothershipServerApiClient");
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
        bool AddSharedGroupMembers(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* sharedGroupId, ::GlobalNamespace::StringVector* mothershipIds, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("AddSharedGroupMembers"), {"titleId", "envId", "sharedGroupId", "mothershipIds", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, sharedGroupId, mothershipIds, userData);
        }
        bool BulkGetAccountLinks(::GlobalNamespace::AccountLinkLookupVector* lookups, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("BulkGetAccountLinks"), {"lookups", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(lookups, userData);
        }
        bool BulkGetPlayers(::GlobalNamespace::PlayerLookupVector* lookups, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("BulkGetPlayers"), {"lookups", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(lookups, userData);
        }
        bool CreateAccountAssociation(::BNM::Structures::Mono::String* mothershipPlayerId, ::BNM::Structures::Mono::String* externalServiceName, ::BNM::Structures::Mono::String* externalServiceOrgScopedId, ::BNM::Structures::Mono::String* externalServiceUserId, ::BNM::Structures::Mono::String* externalServiceUserName, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CreateAccountAssociation"), {"mothershipPlayerId", "externalServiceName", "externalServiceOrgScopedId", "externalServiceUserId", "externalServiceUserName", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(mothershipPlayerId, externalServiceName, externalServiceOrgScopedId, externalServiceUserId, externalServiceUserName, userData);
        }
        bool CreateExplicitAccountLink(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* playerId, ::BNM::Structures::Mono::String* externalServiceName, ::BNM::Structures::Mono::String* appScopedAccountId, ::BNM::Structures::Mono::String* orgScopedAccountId, ::BNM::Structures::Mono::String* username, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CreateExplicitAccountLink"), {"titleId", "envId", "playerId", "externalServiceName", "appScopedAccountId", "orgScopedAccountId", "username", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, playerId, externalServiceName, appScopedAccountId, orgScopedAccountId, username, userData);
        }
        bool CreateSharedGroup(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* sharedGroupId, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CreateSharedGroup"), {"titleId", "envId", "sharedGroupId", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, sharedGroupId, userData);
        }
        bool DeleteSharedGroup(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* sharedGroupId, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("DeleteSharedGroup"), {"titleId", "envId", "sharedGroupId", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, sharedGroupId, userData);
        }
        bool DeleteUserData(::BNM::Structures::Mono::String* userId, ::BNM::Structures::Mono::String* keyName, ::BNM::Structures::Mono::String* metadataId, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("DeleteUserData"), {"userId", "keyName", "metadataId", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(userId, keyName, metadataId, userData);
        }
        void Dispose(bool disposing) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Dispose"), {"disposing"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(disposing);
        }
        bool ForceUnlockProgressionTreeNode(::BNM::Structures::Mono::String* treeId, ::BNM::Structures::Mono::String* nodeId, ::BNM::Structures::Mono::String* playerId, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ForceUnlockProgressionTreeNode"), {"treeId", "nodeId", "playerId", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(treeId, nodeId, playerId, userData);
        }
        static void* getCPtr(::GlobalNamespace::MothershipServerApiClient* obj) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("getCPtr"), {"obj"});
            return _m.Call(obj);
        }
        bool GetLastTransactionRun(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* userId, ::BNM::Structures::Mono::String* transactionId, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("GetLastTransactionRun"), {"titleId", "envId", "userId", "transactionId", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, userId, transactionId, userData);
        }
        bool GetProgressionTrackValuesForPlayer(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* playerId, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("GetProgressionTrackValuesForPlayer"), {"titleId", "envId", "playerId", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, playerId, userData);
        }
        bool GetProgressionTreesForPlayer(::BNM::Structures::Mono::String* playerId, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("GetProgressionTreesForPlayer"), {"playerId", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(playerId, userData);
        }
        bool GetSharedGroupData(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* sharedGroupId, ::GlobalNamespace::StringVector* keys, bool getMembers, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("GetSharedGroupData"), {"titleId", "envId", "sharedGroupId", "keys", "getMembers", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, sharedGroupId, keys, getMembers, userData);
        }
        bool GetUserData(::BNM::Structures::Mono::String* userId, ::BNM::Structures::Mono::String* keyName, ::BNM::Structures::Mono::String* metadataId, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("GetUserData"), {"userId", "keyName", "metadataId", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(userId, keyName, metadataId, userData);
        }
        bool GetUserInventory(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* userId, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("GetUserInventory"), {"titleId", "envId", "userId", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, userId, userData);
        }
        bool IncrementProgressionTrackForPlayer(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* playerId, ::BNM::Structures::Mono::String* trackId, int additionalProgress, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IncrementProgressionTrackForPlayer"), {"titleId", "envId", "playerId", "trackId", "additionalProgress", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, playerId, trackId, additionalProgress, userData);
        }
        bool ListAccountAssociationsForPlayer(::BNM::Structures::Mono::String* mothershipPlayerId, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ListAccountAssociationsForPlayer"), {"mothershipPlayerId", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(mothershipPlayerId, userData);
        }
        bool ListBansBulk(::GlobalNamespace::StringVector* playerIds, int category, bool includeExpired, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ListBansBulk"), {"playerIds", "category", "includeExpired", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(playerIds, category, includeExpired, userData);
        }
        bool ListMothershipTitleData(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* deploymentId, ::GlobalNamespace::StringVector* keys, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ListMothershipTitleData"), {"titleId", "envId", "deploymentId", "keys", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, deploymentId, keys, userData);
        }
        bool ListUserData(::BNM::Structures::Mono::String* userId, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ListUserData"), {"userId", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(userId, userData);
        }
        bool LockProgressionTreeNode(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* treeId, ::BNM::Structures::Mono::String* nodeId, ::BNM::Structures::Mono::String* playerId, bool refund_costs, bool rewind_rewards, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("LockProgressionTreeNode"), {"titleId", "envId", "treeId", "nodeId", "playerId", "refund_costs", "rewind_rewards", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, treeId, nodeId, playerId, refund_costs, rewind_rewards, userData);
        }
        bool RemoveSharedGroupMembers(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* sharedGroupId, ::GlobalNamespace::StringVector* mothershipIds, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("RemoveSharedGroupMembers"), {"titleId", "envId", "sharedGroupId", "mothershipIds", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, sharedGroupId, mothershipIds, userData);
        }
        bool RunTransaction(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* userId, ::BNM::Structures::Mono::String* transactionId, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("RunTransaction"), {"titleId", "envId", "userId", "transactionId", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, userId, transactionId, userData);
        }
        bool SendNotification(::GlobalNamespace::StringVector* playerIds, ::BNM::Structures::Mono::String* title, ::BNM::Structures::Mono::String* body, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("SendNotification"), {"playerIds", "title", "body", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(playerIds, title, body, userData);
        }
        bool ServerBulkGetSubscriptions(::GlobalNamespace::StringVector* players, ::GlobalNamespace::PlatformAndSkuVector* platformSkus, ::GlobalNamespace::StringVector* catalogIds, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ServerBulkGetSubscriptions"), {"players", "platformSkus", "catalogIds", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(players, platformSkus, catalogIds, userData);
        }
        bool ServerCreateBan(::BNM::Structures::Mono::String* playerId, int category, ::BNM::Structures::Mono::String* reason, int durationMinutes, bool orgWide, ::BNM::Structures::Mono::String* metadata, ::BNM::Structures::Mono::String* source, bool isHardwareBan, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ServerCreateBan"), {"playerId", "category", "reason", "durationMinutes", "orgWide", "metadata", "source", "isHardwareBan", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(playerId, category, reason, durationMinutes, orgWide, metadata, source, isHardwareBan, userData);
        }
        bool ServerCreateReport(::BNM::Structures::Mono::String* reportingUserId, ::BNM::Structures::Mono::String* reportedUserId, int category, ::BNM::Structures::Mono::String* platform, bool moddedClient, ::BNM::Structures::Mono::String* metadata, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ServerCreateReport"), {"reportingUserId", "reportedUserId", "category", "platform", "moddedClient", "metadata", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(reportingUserId, reportedUserId, category, platform, moddedClient, metadata, userData);
        }
        bool ServerGetPermissions(::GlobalNamespace::StringVector* playerIds, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ServerGetPermissions"), {"playerIds", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(playerIds, userData);
        }
        bool ServerValidateUsername(::BNM::Structures::Mono::String* username, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ServerValidateUsername"), {"username", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(username, userData);
        }
        void SetAcceptLanguage(::BNM::Structures::Mono::String* language) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetAcceptLanguage"), {"language"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(language);
        }
        void SetAddSharedGroupMembersCompleteDelegateWrapper(::GlobalNamespace::AddSharedGroupMembersCompleteServerDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetAddSharedGroupMembersCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetBulkGetAccountLinksCompleteDelegateWrapper(::GlobalNamespace::BulkGetAccountLinksCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetBulkGetAccountLinksCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetBulkGetPlayersCompleteDelegateWrapper(::GlobalNamespace::BulkGetPlayersCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetBulkGetPlayersCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetCreateAccountAssociationsCompleteDelegateWrapper(::GlobalNamespace::CreateAccountAssociationDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetCreateAccountAssociationsCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetCreateExplicitAccountLinkCompleteDelegateWrapper(::GlobalNamespace::ExplicitAccountLinkCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetCreateExplicitAccountLinkCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetCreateSharedGroupCompleteDelegateWrapper(::GlobalNamespace::CreateSharedGroupCompleteServerDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetCreateSharedGroupCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetDeleteSharedGroupCompleteDelegateWrapper(::GlobalNamespace::DeleteSharedGroupCompleteServerDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetDeleteSharedGroupCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetDeleteUserDataCompleteServerDelegateWrapper(::GlobalNamespace::DeleteUserDataCompleteServerDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetDeleteUserDataCompleteServerDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetGetLastTransactionRunCompleteServerDelegateWrapper(::GlobalNamespace::GetLastTransactionCompleteServerDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetGetLastTransactionRunCompleteServerDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetGetProgressionTrackValuesForPlayerCompleteServerDelegateWrapper(::GlobalNamespace::GetProgressionTrackValuesForPlayerCompleteServerDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetGetProgressionTrackValuesForPlayerCompleteServerDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetGetProgressionTreesForPlayerCompleteServerDelegateWrapper(::GlobalNamespace::GetProgressionTreesForPlayerCompleteServerDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetGetProgressionTreesForPlayerCompleteServerDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetGetSharedGroupDataCompleteDelegateWrapper(::GlobalNamespace::GetSharedGroupDataCompleteServerDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetGetSharedGroupDataCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetGetUserDataCompleteServerDelegateWrapper(::GlobalNamespace::GetUserDataCompleteServerDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetGetUserDataCompleteServerDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetGetUserInventoryCompleteServerDelegateWrapper(::GlobalNamespace::GetUserInventoryCompleteServerDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetGetUserInventoryCompleteServerDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetIncrementProgressionTrackForPlayerCompleteServerDelegateWrapper(::GlobalNamespace::IncrementProgressionTrackForPlayerCompleteServerDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetIncrementProgressionTrackForPlayerCompleteServerDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetListAccountAssociationsCompleteDelegateWrapper(::GlobalNamespace::ListAccountAssociationsCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetListAccountAssociationsCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetListBansBulkCompleteServerDelegateWrapper(::GlobalNamespace::ListBansBulkCompleteServerDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetListBansBulkCompleteServerDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetListMothershipTitleDataCompleteServerDelegateWrapper(::GlobalNamespace::ListMothershipTitleDataCompleteServerDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetListMothershipTitleDataCompleteServerDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetListUserDataCompleteServerDelegateWrapper(::GlobalNamespace::ListUserDataCompleteServerDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetListUserDataCompleteServerDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetLockProgressionTreeNodeCompleteDelegateWrapper(::GlobalNamespace::LockProgressionTreeNodeServerCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetLockProgressionTreeNodeCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetRemoveSharedGroupMembersCompleteDelegateWrapper(::GlobalNamespace::RemoveSharedGroupMembersCompleteServerDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetRemoveSharedGroupMembersCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetRunTransactionCompleteServerDelegateWrapper(::GlobalNamespace::RunTransactionCompleteServerDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetRunTransactionCompleteServerDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetSendNotificationServerDelegateWrapper(::GlobalNamespace::SendNotificationCompleteServerDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetSendNotificationServerDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetServerBulkGetSubscriptionsCompleteDelegateWrapper(::GlobalNamespace::ServerGetBulkSubscriptionsCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetServerBulkGetSubscriptionsCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetServerCreateBanCompleteDelegateWrapper(::GlobalNamespace::ServerCreateBanCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetServerCreateBanCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetServerCreateReportCompleteDelegateWrapper(::GlobalNamespace::ServerCreateReportCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetServerCreateReportCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetServerGetPermissionsCompleteDelegateWrapper(::GlobalNamespace::ServerGetPermissionsCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetServerGetPermissionsCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetServerValidateUsernameCompleteDelegateWrapper(::GlobalNamespace::ServerValidateUsernameCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetServerValidateUsernameCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetSetUserDataCompleteServerDelegateWrapper(::GlobalNamespace::SetUserDataCompleteServerDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetSetUserDataCompleteServerDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetUnlockProgressionTreeNodeCompleteServerDelegateWrapper(::GlobalNamespace::UnlockProgressionTreeNodeCompleteServerDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetUnlockProgressionTreeNodeCompleteServerDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetUpdateSharedGroupDataCompleteDelegateWrapper(::GlobalNamespace::UpdateSharedGroupDataCompleteServerDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetUpdateSharedGroupDataCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        bool SetUserData(::BNM::Structures::Mono::String* userId, ::BNM::Structures::Mono::String* keyName, ::BNM::Structures::Mono::String* value, int generation, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("SetUserData"), {"userId", "keyName", "value", "generation", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(userId, keyName, value, generation, userData);
        }
        void SetVerifyTokenCompleteDelegateWrapper(::GlobalNamespace::VerifyTokenCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetVerifyTokenCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetWriteEventsCompleteServerDelegateWrapper(::GlobalNamespace::WriteEventsCompleteServerDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetWriteEventsCompleteServerDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        static void* swigRelease(::GlobalNamespace::MothershipServerApiClient* obj) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("swigRelease"), {"obj"});
            return _m.Call(obj);
        }
        bool UnlockProgressionTreeNode(::BNM::Structures::Mono::String* treeId, ::BNM::Structures::Mono::String* nodeId, ::BNM::Structures::Mono::String* playerId, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("UnlockProgressionTreeNode"), {"treeId", "nodeId", "playerId", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(treeId, nodeId, playerId, userData);
        }
        bool UpdateSharedGroupData(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* sharedGroupId, ::GlobalNamespace::StringKeyValueMap* data, ::GlobalNamespace::StringKeyValueMap* customTags, ::GlobalNamespace::StringVector* keysToRemove, ::BNM::Structures::Mono::String* permission, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("UpdateSharedGroupData"), {"titleId", "envId", "sharedGroupId", "data", "customTags", "keysToRemove", "permission", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, sharedGroupId, data, customTags, keysToRemove, permission, userData);
        }
        bool VerifyToken(::BNM::Structures::Mono::String* mothershipPlayerId, ::BNM::Structures::Mono::String* token, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("VerifyToken"), {"mothershipPlayerId", "token", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(mothershipPlayerId, token, userData);
        }
        bool WriteEvents(::GlobalNamespace::MothershipWriteEventsRequest* request, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("WriteEvents"), {"request", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(request, userData);
        }
    };
}
