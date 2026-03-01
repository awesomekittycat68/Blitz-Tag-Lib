#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "MothershipApiClient.hpp"

namespace GlobalNamespace {
    struct MothershipAutomationApiClient : ::GlobalNamespace::MothershipApiClient {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "MothershipAutomationApiClient");
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
        bool AddPlayerAccountLink(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* otherToken, ::BNM::Structures::Mono::String* targetPlayer_id, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("AddPlayerAccountLink"), {"titleId", "envId", "otherToken", "targetPlayer_id", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, otherToken, targetPlayer_id, userData);
        }
        bool ChangeCommitStatusOfOfferBindings(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* deploymentId, ::BNM::Structures::Mono::String* displayId, bool committed, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ChangeCommitStatusOfOfferBindings"), {"titleId", "envId", "deploymentId", "displayId", "committed", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, deploymentId, displayId, committed, userData);
        }
        bool CreateBan(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* playerId, int category, ::BNM::Structures::Mono::String* reason, int durationMinutes, bool orgWide, ::BNM::Structures::Mono::String* metadata, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CreateBan"), {"titleId", "envId", "playerId", "category", "reason", "durationMinutes", "orgWide", "metadata", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, playerId, category, reason, durationMinutes, orgWide, metadata, userData);
        }
        bool CreateDeployment(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* deploymentName, ::BNM::Structures::Mono::String* deploymentId, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CreateDeployment"), {"titleId", "envId", "deploymentName", "deploymentId", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, deploymentName, deploymentId, userData);
        }
        bool CreateEntitlementCatalogItem(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* name, ::BNM::Structures::Mono::String* inGameId, ::BNM::Structures::Mono::String* type, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CreateEntitlementCatalogItem"), {"titleId", "envId", "name", "inGameId", "type", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, name, inGameId, type, userData);
        }
        bool CreateEnvironment(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envName, ::BNM::Structures::Mono::String* envId, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CreateEnvironment"), {"titleId", "envName", "envId", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envName, envId, userData);
        }
        bool CreateExplicitAccountLink(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* playerId, ::BNM::Structures::Mono::String* externalServiceName, ::BNM::Structures::Mono::String* appScopedAccountId, ::BNM::Structures::Mono::String* orgScopedAccountId, ::BNM::Structures::Mono::String* username, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CreateExplicitAccountLink"), {"titleId", "envId", "playerId", "externalServiceName", "appScopedAccountId", "orgScopedAccountId", "username", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, playerId, externalServiceName, appScopedAccountId, orgScopedAccountId, username, userData);
        }
        bool CreateMute(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* playerId, int durationMinutes, ::BNM::Structures::Mono::String* source, ::BNM::Structures::Mono::String* reason, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CreateMute"), {"titleId", "envId", "playerId", "durationMinutes", "source", "reason", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, playerId, durationMinutes, source, reason, userData);
        }
        bool CreateOfferBinding(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* deploymentId, ::BNM::Structures::Mono::String* offerDisplayId, ::BNM::Structures::Mono::String* offerId, int displayIndex, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CreateOfferBinding"), {"titleId", "envId", "deploymentId", "offerDisplayId", "offerId", "displayIndex", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, deploymentId, offerDisplayId, offerId, displayIndex, userData);
        }
        bool CreateOfferCatalogItem(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* name, ::BNM::Structures::Mono::String* transaction_id, ::GlobalNamespace::OfferEntitlementMap* bundle_pricing, int discount_percent, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CreateOfferCatalogItem"), {"titleId", "envId", "name", "transaction_id", "bundle_pricing", "discount_percent", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, name, transaction_id, bundle_pricing, discount_percent, userData);
        }
        bool CreateOfferDisplay(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* name, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CreateOfferDisplay"), {"titleId", "envId", "name", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, name, userData);
        }
        bool CreateProgressionTrack(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* name, int maximum, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CreateProgressionTrack"), {"titleId", "envId", "name", "maximum", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, name, maximum, userData);
        }
        bool CreateProgressionTrackBindings(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* deploymentId, ::BNM::Structures::Mono::String* trackId, bool visible, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CreateProgressionTrackBindings"), {"titleId", "envId", "deploymentId", "trackId", "visible", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, deploymentId, trackId, visible, userData);
        }
        bool CreateProgressionTree(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* name, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CreateProgressionTree"), {"titleId", "envId", "name", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, name, userData);
        }
        bool CreateProgressionTreeBindings(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* deploymentId, ::BNM::Structures::Mono::String* treeId, bool visible, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CreateProgressionTreeBindings"), {"titleId", "envId", "deploymentId", "treeId", "visible", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, deploymentId, treeId, visible, userData);
        }
        bool CreateProgressionTreeNode(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* treeId, ::GlobalNamespace::TreeNodeDefinition* nodeDefinition, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CreateProgressionTreeNode"), {"titleId", "envId", "treeId", "nodeDefinition", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, treeId, nodeDefinition, userData);
        }
        bool CreateProgressionTreeTrack(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* treeId, ::BNM::Structures::Mono::String* name, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CreateProgressionTreeTrack"), {"titleId", "envId", "treeId", "name", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, treeId, name, userData);
        }
        bool CreateServerKey(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* keyName, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CreateServerKey"), {"titleId", "envId", "keyName", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, keyName, userData);
        }
        bool CreateTitle(::BNM::Structures::Mono::String* titleName, ::BNM::Structures::Mono::String* titleId, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CreateTitle"), {"titleName", "titleId", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleName, titleId, userData);
        }
        bool CreateTrackLevel(::BNM::Structures::Mono::String* trackId, ::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* name, int progressionAmount, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CreateTrackLevel"), {"trackId", "titleId", "envId", "name", "progressionAmount", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(trackId, titleId, envId, name, progressionAmount, userData);
        }
        bool CreateTrackTrigger(::BNM::Structures::Mono::String* trackId, ::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* transactionId, ::BNM::Structures::Mono::String* name, int progression, ::BNM::Structures::Mono::String* prerequisiteEntitlementId, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CreateTrackTrigger"), {"trackId", "titleId", "envId", "transactionId", "name", "progression", "prerequisiteEntitlementId", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(trackId, titleId, envId, transactionId, name, progression, prerequisiteEntitlementId, userData);
        }
        bool CreateTransactionCatalogItem(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* name, ::BNM::Structures::Mono::String* externalServiceName, ::BNM::Structures::Mono::String* externalServiceEntitlementId, ::GlobalNamespace::StringIntMap* inventoryChanges, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CreateTransactionCatalogItem"), {"titleId", "envId", "name", "externalServiceName", "externalServiceEntitlementId", "inventoryChanges", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, name, externalServiceName, externalServiceEntitlementId, inventoryChanges, userData);
        }
        bool CreateUserDataMetadata(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* keyName, ::BNM::Structures::Mono::String* keyPerms, ::BNM::Structures::Mono::String* privacyNotes, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CreateUserDataMetadata"), {"titleId", "envId", "keyName", "keyPerms", "privacyNotes", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, keyName, keyPerms, privacyNotes, userData);
        }
        bool DeleteAccountAssociation(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* playerId, ::BNM::Structures::Mono::String* associationId, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("DeleteAccountAssociation"), {"titleId", "envId", "playerId", "associationId", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, playerId, associationId, userData);
        }
        bool DeleteAccountLink(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* playerId, ::BNM::Structures::Mono::String* linkId, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("DeleteAccountLink"), {"titleId", "envId", "playerId", "linkId", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, playerId, linkId, userData);
        }
        bool DeleteMothershipTitleData(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* deploymentId, ::BNM::Structures::Mono::String* key, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("DeleteMothershipTitleData"), {"titleId", "envId", "deploymentId", "key", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, deploymentId, key, userData);
        }
        bool DeleteMute(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* playerId, ::BNM::Structures::Mono::String* muteId, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("DeleteMute"), {"titleId", "envId", "playerId", "muteId", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, playerId, muteId, userData);
        }
        bool DeleteProgressionTrack(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* trackId, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("DeleteProgressionTrack"), {"titleId", "envId", "trackId", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, trackId, userData);
        }
        bool DeleteProgressionTree(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* treeId, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("DeleteProgressionTree"), {"titleId", "envId", "treeId", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, treeId, userData);
        }
        bool DeleteProgressionTreeBindings(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* deploymentId, ::BNM::Structures::Mono::String* treeId, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("DeleteProgressionTreeBindings"), {"titleId", "envId", "deploymentId", "treeId", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, deploymentId, treeId, userData);
        }
        bool DeleteProgressionTreeNode(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* treeId, ::BNM::Structures::Mono::String* nodeId, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("DeleteProgressionTreeNode"), {"titleId", "envId", "treeId", "nodeId", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, treeId, nodeId, userData);
        }
        bool DeleteReport(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* reportId, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("DeleteReport"), {"titleId", "envId", "reportId", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, reportId, userData);
        }
        bool DeleteTrackLevel(::BNM::Structures::Mono::String* trackId, ::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* levelId, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("DeleteTrackLevel"), {"trackId", "titleId", "envId", "levelId", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(trackId, titleId, envId, levelId, userData);
        }
        bool DeleteTrackTrigger(::BNM::Structures::Mono::String* trackId, ::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* triggerId, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("DeleteTrackTrigger"), {"trackId", "titleId", "envId", "triggerId", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(trackId, titleId, envId, triggerId, userData);
        }
        bool DeleteUserData(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* userId, ::BNM::Structures::Mono::String* keyName, ::BNM::Structures::Mono::String* metadataId, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("DeleteUserData"), {"titleId", "envId", "userId", "keyName", "metadataId", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, userId, keyName, metadataId, userData);
        }
        bool DeleteUserDataMetadata(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* keyName, ::BNM::Structures::Mono::String* metadataId, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("DeleteUserDataMetadata"), {"titleId", "envId", "keyName", "metadataId", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, keyName, metadataId, userData);
        }
        void Dispose(bool disposing) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Dispose"), {"disposing"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(disposing);
        }
        bool GetBan(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* banId, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("GetBan"), {"titleId", "envId", "banId", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, banId, userData);
        }
        static void* getCPtr(::GlobalNamespace::MothershipAutomationApiClient* obj) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("getCPtr"), {"obj"});
            return _m.Call(obj);
        }
        bool GetDeployment(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* deploymentId, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("GetDeployment"), {"titleId", "envId", "deploymentId", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, deploymentId, userData);
        }
        bool GetEntitlementCatalogItem(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* entitlementId, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("GetEntitlementCatalogItem"), {"titleId", "envId", "entitlementId", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, entitlementId, userData);
        }
        bool GetEnvironment(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("GetEnvironment"), {"titleId", "envId", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, userData);
        }
        bool GetLastTransactionRun(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* userId, ::BNM::Structures::Mono::String* transactionId, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("GetLastTransactionRun"), {"titleId", "envId", "userId", "transactionId", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, userId, transactionId, userData);
        }
        bool GetPlayerAccountLinks(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* playerId, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("GetPlayerAccountLinks"), {"titleId", "envId", "playerId", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, playerId, userData);
        }
        bool GetPlayerMutes(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* playerId, bool includeExpired, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("GetPlayerMutes"), {"titleId", "envId", "playerId", "includeExpired", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, playerId, includeExpired, userData);
        }
        bool GetProgressionTrackBindings(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* deploymentId, ::BNM::Structures::Mono::String* trackId, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("GetProgressionTrackBindings"), {"titleId", "envId", "deploymentId", "trackId", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, deploymentId, trackId, userData);
        }
        bool GetProgressionTrackValuesForPlayer(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* playerId, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("GetProgressionTrackValuesForPlayer"), {"titleId", "envId", "playerId", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, playerId, userData);
        }
        bool GetProgressionTreeBindings(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* deploymentId, ::BNM::Structures::Mono::String* treeId, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("GetProgressionTreeBindings"), {"titleId", "envId", "deploymentId", "treeId", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, deploymentId, treeId, userData);
        }
        bool GetReport(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* reportId, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("GetReport"), {"titleId", "envId", "reportId", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, reportId, userData);
        }
        bool GetSubscriptionsForPlayer(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* playerId, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("GetSubscriptionsForPlayer"), {"titleId", "envId", "playerId", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, playerId, userData);
        }
        bool GetTitle(::BNM::Structures::Mono::String* titleId, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("GetTitle"), {"titleId", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, userData);
        }
        bool GetTransactionCatalogItem(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* transactionId, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("GetTransactionCatalogItem"), {"titleId", "envId", "transactionId", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, transactionId, userData);
        }
        bool GetUserData(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* userId, ::BNM::Structures::Mono::String* keyName, ::BNM::Structures::Mono::String* metadataId, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("GetUserData"), {"titleId", "envId", "userId", "keyName", "metadataId", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, userId, keyName, metadataId, userData);
        }
        bool GetUserDataMetadata(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* keyName, ::BNM::Structures::Mono::String* metadataId, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("GetUserDataMetadata"), {"titleId", "envId", "keyName", "metadataId", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, keyName, metadataId, userData);
        }
        bool GetUserInventory(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* userId, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("GetUserInventory"), {"titleId", "envId", "userId", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, userId, userData);
        }
        bool ListAccountAssociationsForPlayer(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* playerId, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ListAccountAssociationsForPlayer"), {"titleId", "envId", "playerId", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, playerId, userData);
        }
        bool ListBans(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* playerId, int category, bool includeExpired, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ListBans"), {"titleId", "envId", "playerId", "category", "includeExpired", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, playerId, category, includeExpired, userData);
        }
        bool ListBansBulk(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::GlobalNamespace::StringVector* playerIds, int category, bool includeExpired, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ListBansBulk"), {"titleId", "envId", "playerIds", "category", "includeExpired", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, playerIds, category, includeExpired, userData);
        }
        bool ListDeployments(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ListDeployments"), {"titleId", "envId", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, userData);
        }
        bool ListEntitlementCatalogItems(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ListEntitlementCatalogItems"), {"titleId", "envId", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, userData);
        }
        bool ListEnvironments(::BNM::Structures::Mono::String* titleId, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ListEnvironments"), {"titleId", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, userData);
        }
        bool ListMothershipTitleData(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* deploymentId, ::GlobalNamespace::StringVector* keys, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ListMothershipTitleData"), {"titleId", "envId", "deploymentId", "keys", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, deploymentId, keys, userData);
        }
        bool ListOfferBindings(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* deploymentId, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ListOfferBindings"), {"titleId", "envId", "deploymentId", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, deploymentId, userData);
        }
        bool ListOfferCatalogItems(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ListOfferCatalogItems"), {"titleId", "envId", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, userData);
        }
        bool ListOfferDisplays(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envid, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ListOfferDisplays"), {"titleId", "envid", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envid, userData);
        }
        bool ListProgressionTrackBindings(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* deploymentId, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ListProgressionTrackBindings"), {"titleId", "envId", "deploymentId", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, deploymentId, userData);
        }
        bool ListProgressionTracks(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ListProgressionTracks"), {"titleId", "envId", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, userData);
        }
        bool ListProgressionTreeBindings(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* deploymentId, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ListProgressionTreeBindings"), {"titleId", "envId", "deploymentId", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, deploymentId, userData);
        }
        bool ListProgressionTrees(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ListProgressionTrees"), {"titleId", "envId", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, userData);
        }
        bool ListReports(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::GlobalNamespace::StringVector* reportsBy, ::GlobalNamespace::StringVector* reportsAgainst, int category, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ListReports"), {"titleId", "envId", "reportsBy", "reportsAgainst", "category", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, reportsBy, reportsAgainst, category, userData);
        }
        bool ListTitles(::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ListTitles"), {"userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(userData);
        }
        bool ListTransactionCatalogItems(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ListTransactionCatalogItems"), {"titleId", "envId", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, userData);
        }
        bool ListUserData(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* userId, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ListUserData"), {"titleId", "envId", "userId", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, userId, userData);
        }
        bool ListUserDataMetadata(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ListUserDataMetadata"), {"titleId", "envId", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, userData);
        }
        bool ListUsers(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* lastSeenMothershipId, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ListUsers"), {"titleId", "envId", "lastSeenMothershipId", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, lastSeenMothershipId, userData);
        }
        bool LockProgressionTreeNode(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* treeId, ::BNM::Structures::Mono::String* nodeId, ::BNM::Structures::Mono::String* playerId, bool refund_costs, bool rewind_rewards, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("LockProgressionTreeNode"), {"titleId", "envId", "treeId", "nodeId", "playerId", "refund_costs", "rewind_rewards", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, treeId, nodeId, playerId, refund_costs, rewind_rewards, userData);
        }
        bool RevokeBan(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* banId, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("RevokeBan"), {"titleId", "envId", "banId", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, banId, userData);
        }
        bool RevokeMute(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* playerId, ::BNM::Structures::Mono::String* muteId, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("RevokeMute"), {"titleId", "envId", "playerId", "muteId", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, playerId, muteId, userData);
        }
        bool RunTransaction(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* userId, ::BNM::Structures::Mono::String* transactionId, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("RunTransaction"), {"titleId", "envId", "userId", "transactionId", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, userId, transactionId, userData);
        }
        void SetAddPlayerAccountLinkCompleteDelegateWrapper(::GlobalNamespace::AddPlayerAccountLinkCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetAddPlayerAccountLinkCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetChangeCommitStatusOfOfferBindingsCompleteDelegateWrapper(::GlobalNamespace::ChangeCommitStatusOfOfferBindingsCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetChangeCommitStatusOfOfferBindingsCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetCreateBanCompleteDelegateWrapper(::GlobalNamespace::CreateBanCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetCreateBanCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetCreateDeploymentCompleteDelegateWrapper(::GlobalNamespace::CreateDeploymentCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetCreateDeploymentCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetCreateEntitlementCatalogItemCompleteDelegateWrapper(::GlobalNamespace::CreateEntitlementCatalogItemCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetCreateEntitlementCatalogItemCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetCreateEnvironmentCompleteDelegateWrapper(::GlobalNamespace::CreateEnvironmentCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetCreateEnvironmentCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetCreateExplicitAccountLinkCompleteDelegateWrapper(::GlobalNamespace::ExplicitAccountLinkCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetCreateExplicitAccountLinkCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetCreateMuteCompleteDelegateWrapper(::GlobalNamespace::CreateMuteCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetCreateMuteCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetCreateOfferBindingCompleteDelegateWrapper(::GlobalNamespace::CreateOfferBindingCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetCreateOfferBindingCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetCreateOfferCatalogItemCompleteDelegateWrapper(::GlobalNamespace::CreateOfferCatalogItemCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetCreateOfferCatalogItemCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetCreateOfferDisplayCompleteDelegateWrapper(::GlobalNamespace::CreateOfferDisplayCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetCreateOfferDisplayCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetCreateProgressionTrackBindingsCompleteDelegateWrapper(::GlobalNamespace::CreateProgressionTrackBindingsCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetCreateProgressionTrackBindingsCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetCreateProgressionTrackCompleteDelegateWrapper(::GlobalNamespace::CreateProgressionTrackCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetCreateProgressionTrackCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetCreateProgressionTreeBindingsCompleteDelegateWrapper(::GlobalNamespace::CreateProgressionTreeBindingsCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetCreateProgressionTreeBindingsCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetCreateProgressionTreeCompleteDelegateWrapper(::GlobalNamespace::CreateProgressionTreeCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetCreateProgressionTreeCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetCreateProgressionTreeNodeCompleteDelegateWrapper(::GlobalNamespace::CreateProgressionTreeNodeCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetCreateProgressionTreeNodeCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetCreateProgressionTreeTrackCompleteDelegateWrapper(::GlobalNamespace::CreateProgressionTreeTrackCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetCreateProgressionTreeTrackCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetCreateServerKeyCompleteDelegateWrapper(::GlobalNamespace::CreateServerKeyCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetCreateServerKeyCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetCreateTitleCompleteDelegateWrapper(::GlobalNamespace::CreateTitleCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetCreateTitleCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetCreateTrackLevelCompleteDelegateWrapper(::GlobalNamespace::CreateTrackLevelCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetCreateTrackLevelCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetCreateTrackTriggerCompleteDelegateWrapper(::GlobalNamespace::CreateTrackTriggerCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetCreateTrackTriggerCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetCreateTransactionCatalogItemCompleteDelegateWrapper(::GlobalNamespace::CreateTransactionCatalogItemCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetCreateTransactionCatalogItemCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetCreateUserDataMetadataCompleteDelegateWrapper(::GlobalNamespace::CreateUserDataMetadataCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetCreateUserDataMetadataCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetDeleteAccountAssociationCompleteDelegateWrapper(::GlobalNamespace::DeleteAccountAssociationCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetDeleteAccountAssociationCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetDeleteAccountLinkCompleteDelegateWrapper(::GlobalNamespace::DeleteAccountLinkCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetDeleteAccountLinkCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetDeleteMothershipTitleDataCompleteDelegateWrapper(::GlobalNamespace::DeleteMothershipTitleDataCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetDeleteMothershipTitleDataCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetDeleteMuteCompleteDelegateWrapper(::GlobalNamespace::DeleteMuteCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetDeleteMuteCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetDeleteProgressionTrackCompleteDelegateWrapper(::GlobalNamespace::DeleteProgressionTrackCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetDeleteProgressionTrackCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetDeleteProgressionTreeBindingsCompleteDelegateWrapper(::GlobalNamespace::DeleteProgressionTreeBindingsCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetDeleteProgressionTreeBindingsCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetDeleteProgressionTreeCompleteDelegateWrapper(::GlobalNamespace::DeleteProgressionTreeCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetDeleteProgressionTreeCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetDeleteProgressionTreeNodeCompleteDelegateWrapper(::GlobalNamespace::DeleteProgressionTreeNodeCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetDeleteProgressionTreeNodeCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetDeleteReportCompleteDelegateWrapper(::GlobalNamespace::DeleteReportCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetDeleteReportCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetDeleteTrackLevelCompleteDelegateWrapper(::GlobalNamespace::DeleteTrackLevelCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetDeleteTrackLevelCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetDeleteTrackTriggerCompleteDelegateWrapper(::GlobalNamespace::DeleteTrackTriggerCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetDeleteTrackTriggerCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetDeleteUserDataCompleteAutomationDelegateWrapper(::GlobalNamespace::DeleteUserDataCompleteAutomationDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetDeleteUserDataCompleteAutomationDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetDeleteUserDataMetadataCompleteDelegateWrapper(::GlobalNamespace::DeleteUserDataMetadataCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetDeleteUserDataMetadataCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetGetBanCompleteDelegateWrapper(::GlobalNamespace::GetBanCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetGetBanCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetGetDeploymentCompleteDelegateWrapper(::GlobalNamespace::GetDeploymentCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetGetDeploymentCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetGetEntitlementCatalogItemCompleteDelegateWrapper(::GlobalNamespace::GetEntitlementCatalogItemCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetGetEntitlementCatalogItemCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetGetEnvironmentCompleteDelegateWrapper(::GlobalNamespace::GetEnvironmentCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetGetEnvironmentCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetGetLastTransactionRunCompleteAutomationDelegateWrapper(::GlobalNamespace::GetLastTransactionCompleteAutomationDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetGetLastTransactionRunCompleteAutomationDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetGetPlayerAccountLinksCompleteDelegateWrapper(::GlobalNamespace::GetPlayerAccountLinksCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetGetPlayerAccountLinksCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetGetPlayerMutesCompleteDelegateWrapper(::GlobalNamespace::GetPlayerMutesCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetGetPlayerMutesCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetGetProgressionTrackBindingsCompleteDelegateWrapper(::GlobalNamespace::GetProgressionTrackBindingsCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetGetProgressionTrackBindingsCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetGetProgressionTrackValuesForPlayerCompleteAutomationDelegateWrapper(::GlobalNamespace::GetProgressionTrackValuesForPlayerCompleteAutomationDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetGetProgressionTrackValuesForPlayerCompleteAutomationDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetGetProgressionTreeBindingsCompleteDelegateWrapper(::GlobalNamespace::GetProgressionTreeBindingsCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetGetProgressionTreeBindingsCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetGetReportCompleteDelegateWrapper(::GlobalNamespace::GetReportCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetGetReportCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetGetSubscriptionsForPlayerCompleteDelegateWrapper(::GlobalNamespace::AutomationGetPlayerSubscriptionCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetGetSubscriptionsForPlayerCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetGetTitleCompleteDelegateWrapper(::GlobalNamespace::GetTitleCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetGetTitleCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetGetTransactionCatalogItemCompleteDelegateWrapper(::GlobalNamespace::GetTransactionCatalogItemCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetGetTransactionCatalogItemCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetGetUserDataCompleteAutomationDelegateWrapper(::GlobalNamespace::GetUserDataCompleteAutomationDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetGetUserDataCompleteAutomationDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetGetUserDataMetadataCompleteDelegateWrapper(::GlobalNamespace::GetUserDataMetadataCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetGetUserDataMetadataCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetGetUserInventoryCompleteAutomationDelegateWrapper(::GlobalNamespace::GetUserInventoryCompleteAutomationDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetGetUserInventoryCompleteAutomationDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetListAccountAssociationsCompleteDelegateWrapper(::GlobalNamespace::ListAccountAssociationsCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetListAccountAssociationsCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetListBansBulkCompleteDelegateWrapper(::GlobalNamespace::ListBansBulkCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetListBansBulkCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetListBansCompleteDelegateWrapper(::GlobalNamespace::ListBansCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetListBansCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetListDeploymentsCompleteDelegateWrapper(::GlobalNamespace::ListDeploymentsCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetListDeploymentsCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetListEntitlementCatalogItemCompleteDelegateWrapper(::GlobalNamespace::ListEntitlementCatalogItemsCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetListEntitlementCatalogItemCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetListEnvironmentsCompleteDelegateWrapper(::GlobalNamespace::ListEnvironmentsCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetListEnvironmentsCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetListMothershipTitleDataCompleteAutomationDelegateWrapper(::GlobalNamespace::ListMothershipTitleDataCompleteAutomationDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetListMothershipTitleDataCompleteAutomationDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetListOfferBindingsCompleteDelegateWrapper(::GlobalNamespace::ListOfferBindingsCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetListOfferBindingsCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetListOfferCatalogItemsCompleteDelegateWrapper(::GlobalNamespace::ListOfferCatalogItemsCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetListOfferCatalogItemsCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetListOffersDisplayCompleteDelegateWrapper(::GlobalNamespace::ListOffersDisplayCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetListOffersDisplayCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetListProgressionTrackBindingsCompleteDelegateWrapper(::GlobalNamespace::ListProgressionTrackBindingsCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetListProgressionTrackBindingsCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetListProgressionTracksCompleteDelegateWrapper(::GlobalNamespace::ListProgressionTracksCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetListProgressionTracksCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetListProgressionTreeBindingsCompleteDelegateWrapper(::GlobalNamespace::ListProgressionTreeBindingsCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetListProgressionTreeBindingsCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetListProgressionTreesCompleteDelegateWrapper(::GlobalNamespace::ListProgressionTreesCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetListProgressionTreesCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetListReportsCompleteDelegateWrapper(::GlobalNamespace::ListReportsCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetListReportsCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetListTitleCompleteDelegateWrapper(::GlobalNamespace::ListTitlesCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetListTitleCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetListTransactionCatalogItemsCompleteDelegateWrapper(::GlobalNamespace::ListTransactionCatalogItemsCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetListTransactionCatalogItemsCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetListUserDataCompleteAutomationDelegateWrapper(::GlobalNamespace::ListUserDataCompleteAutomationDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetListUserDataCompleteAutomationDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetListUserDataMetadataCompleteDelegateWrapper(::GlobalNamespace::ListUserDataMetadataCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetListUserDataMetadataCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetListUsersCompleteDelegateWrapper(::GlobalNamespace::ListUsersCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetListUsersCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetLockProgressionTreeNodeCompleteDelegateWrapper(::GlobalNamespace::LockProgressionTreeNodeAutomationCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetLockProgressionTreeNodeCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        bool SetMothershipTitleData(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* deploymentId, ::BNM::Structures::Mono::String* key, ::BNM::Structures::Mono::String* data, bool server_only, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("SetMothershipTitleData"), {"titleId", "envId", "deploymentId", "key", "data", "server_only", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, deploymentId, key, data, server_only, userData);
        }
        bool SetPrimaryAccountLink(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* linkId, ::BNM::Structures::Mono::String* targetPlayer_id, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("SetPrimaryAccountLink"), {"titleId", "envId", "linkId", "targetPlayer_id", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, linkId, targetPlayer_id, userData);
        }
        void SetRevokeBanCompleteDelegateWrapper(::GlobalNamespace::RevokeBanCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetRevokeBanCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetRevokeMuteCompleteDelegateWrapper(::GlobalNamespace::RevokeMuteCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetRevokeMuteCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetRunTransactionCompleteAutomationDelegateWrapper(::GlobalNamespace::RunTransactionCompleteAutomationDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetRunTransactionCompleteAutomationDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetSetMothershipTitleDataCompleteDelegateWrapper(::GlobalNamespace::SetMothershipTitleDataCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetSetMothershipTitleDataCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetSetPrimaryAccountLinkCompleteDelegateWrapper(::GlobalNamespace::SetPrimaryAccountLinkCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetSetPrimaryAccountLinkCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetSetUserDataCompleteAutomationDelegateWrapper(::GlobalNamespace::SetUserDataCompleteAutomationDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetSetUserDataCompleteAutomationDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetUnlockProgressionTreeNodeAutomationCompleteDelegateWrapper(::GlobalNamespace::UnlockProgressionTreeNodeAutomationCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetUnlockProgressionTreeNodeAutomationCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetUpdateDeploymentRequiredTagsCompleteDelegateWrapper(::GlobalNamespace::UpdateDeploymentRequiredTagsCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetUpdateDeploymentRequiredTagsCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetUpdateEntitlementCatalogItemCompleteDelegateWrapper(::GlobalNamespace::UpdateEntitlementCatalogItemCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetUpdateEntitlementCatalogItemCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetUpdateEnvRequiredTagsCompleteDelegateWrapper(::GlobalNamespace::UpdateEnvRequiredTagsCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetUpdateEnvRequiredTagsCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetUpdateInsecure1ConfigCompleteDelegateWrapper(::GlobalNamespace::UpdateInsecure1ConfigCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetUpdateInsecure1ConfigCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetUpdateInsecure2ConfigCompleteDelegateWrapper(::GlobalNamespace::UpdateInsecure2ConfigCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetUpdateInsecure2ConfigCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetUpdatePlayerTagsCompleteDelegateWrapper(::GlobalNamespace::UpdatePlayerTagsCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetUpdatePlayerTagsCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetUpdateProgressionTrackBindingsCompleteDelegateWrapper(::GlobalNamespace::UpdateProgressionTrackBindingsCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetUpdateProgressionTrackBindingsCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetUpdateProgressionTrackCompleteDelegateWrapper(::GlobalNamespace::UpdateProgressionTrackCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetUpdateProgressionTrackCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetUpdateProgressionTreeBindingsCompleteDelegateWrapper(::GlobalNamespace::UpdateProgressionTreeBindingsCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetUpdateProgressionTreeBindingsCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetUpdateProgressionTreeCompleteDelegateWrapper(::GlobalNamespace::UpdateProgressionTreeCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetUpdateProgressionTreeCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetUpdateProgressionTreeNodeCompleteDelegateWrapper(::GlobalNamespace::UpdateProgressionTreeNodeCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetUpdateProgressionTreeNodeCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetUpdateQuestConfigCompleteDelegateWrapper(::GlobalNamespace::UpdateQuestConfigCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetUpdateQuestConfigCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetUpdateRiftConfigCompleteDelegateWrapper(::GlobalNamespace::UpdateRiftConfigCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetUpdateRiftConfigCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetUpdateTrackLevelCompleteDelegateWrapper(::GlobalNamespace::UpdateTrackLevelCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetUpdateTrackLevelCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetUpdateTrackTriggerCompleteDelegateWrapper(::GlobalNamespace::UpdateTrackTriggerCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetUpdateTrackTriggerCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetUpdateTransactionCatalogItemCompleteDelegateWrapper(::GlobalNamespace::UpdateTransactionCatalogItemCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetUpdateTransactionCatalogItemCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetUpdateTransactionCatalogItemSunsetStatusCompleteDelegateWrapper(::GlobalNamespace::UpdateTransactionCatalogItemSunsetStatusCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetUpdateTransactionCatalogItemSunsetStatusCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        void SetUpdateUserDataMetadataCompleteDelegateWrapper(::GlobalNamespace::UpdateUserDataMetadataCompleteDelegateWrapper* wrapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetUpdateUserDataMetadataCompleteDelegateWrapper"), {"wrapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrapper);
        }
        bool SetUserData(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* userId, ::BNM::Structures::Mono::String* keyName, ::BNM::Structures::Mono::String* value, int generation, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("SetUserData"), {"titleId", "envId", "userId", "keyName", "value", "generation", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, userId, keyName, value, generation, userData);
        }
        static void* swigRelease(::GlobalNamespace::MothershipAutomationApiClient* obj) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("swigRelease"), {"obj"});
            return _m.Call(obj);
        }
        bool UnlockProgressionTreeNode(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* treeId, ::BNM::Structures::Mono::String* nodeId, ::BNM::Structures::Mono::String* playerId, bool ignoreCost, bool ignorePrerequisites, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("UnlockProgressionTreeNode"), {"titleId", "envId", "treeId", "nodeId", "playerId", "ignoreCost", "ignorePrerequisites", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, treeId, nodeId, playerId, ignoreCost, ignorePrerequisites, userData);
        }
        bool UpdateDeploymentRequiredTags(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* deploymentId, ::GlobalNamespace::StringVector* tags, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("UpdateDeploymentRequiredTags"), {"titleId", "envId", "deploymentId", "tags", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, deploymentId, tags, userData);
        }
        bool UpdateEntitlementCatalogItem(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* name, ::BNM::Structures::Mono::String* entitlementId, ::BNM::Structures::Mono::String* inGameId, ::BNM::Structures::Mono::String* type, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("UpdateEntitlementCatalogItem"), {"titleId", "envId", "name", "entitlementId", "inGameId", "type", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, name, entitlementId, inGameId, type, userData);
        }
        bool UpdateEnvRequiredTags(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::GlobalNamespace::StringVector* tags, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("UpdateEnvRequiredTags"), {"titleId", "envId", "tags", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, tags, userData);
        }
        bool UpdateInsecure1Config(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, bool enabled, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("UpdateInsecure1Config"), {"titleId", "envId", "enabled", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, enabled, userData);
        }
        bool UpdateInsecure2Config(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, bool enabled, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("UpdateInsecure2Config"), {"titleId", "envId", "enabled", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, enabled, userData);
        }
        bool UpdatePlayerTags(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::GlobalNamespace::PlayerTagsUpdateMap* tagUpdates, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("UpdatePlayerTags"), {"titleId", "envId", "tagUpdates", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, tagUpdates, userData);
        }
        bool UpdateProgressionTrack(::BNM::Structures::Mono::String* trackId, ::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* name, int maximum, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("UpdateProgressionTrack"), {"trackId", "titleId", "envId", "name", "maximum", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(trackId, titleId, envId, name, maximum, userData);
        }
        bool UpdateProgressionTrackBindings(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* deploymentId, ::BNM::Structures::Mono::String* trackId, ::BNM::Structures::Mono::String* id, bool visible, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("UpdateProgressionTrackBindings"), {"titleId", "envId", "deploymentId", "trackId", "id", "visible", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, deploymentId, trackId, id, visible, userData);
        }
        bool UpdateProgressionTree(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* treeId, ::BNM::Structures::Mono::String* name, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("UpdateProgressionTree"), {"titleId", "envId", "treeId", "name", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, treeId, name, userData);
        }
        bool UpdateProgressionTreeBindings(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* deploymentId, ::BNM::Structures::Mono::String* treeId, ::BNM::Structures::Mono::String* id, bool visible, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("UpdateProgressionTreeBindings"), {"titleId", "envId", "deploymentId", "treeId", "id", "visible", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, deploymentId, treeId, id, visible, userData);
        }
        bool UpdateProgressionTreeNode(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* treeId, ::GlobalNamespace::TreeNodeDefinition* nodeDefinition, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("UpdateProgressionTreeNode"), {"titleId", "envId", "treeId", "nodeDefinition", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, treeId, nodeDefinition, userData);
        }
        bool UpdateQuestConfig(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* appId, ::BNM::Structures::Mono::String* appSecret, bool enabled, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("UpdateQuestConfig"), {"titleId", "envId", "appId", "appSecret", "enabled", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, appId, appSecret, enabled, userData);
        }
        bool UpdateRiftConfig(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* appId, ::BNM::Structures::Mono::String* appSecret, bool enabled, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("UpdateRiftConfig"), {"titleId", "envId", "appId", "appSecret", "enabled", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, appId, appSecret, enabled, userData);
        }
        bool UpdateTrackLevel(::BNM::Structures::Mono::String* trackId, ::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* levelId, ::BNM::Structures::Mono::String* name, int progressionAmount, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("UpdateTrackLevel"), {"trackId", "titleId", "envId", "levelId", "name", "progressionAmount", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(trackId, titleId, envId, levelId, name, progressionAmount, userData);
        }
        bool UpdateTrackTrigger(::BNM::Structures::Mono::String* trackId, ::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* triggerId, ::BNM::Structures::Mono::String* transactionId, ::BNM::Structures::Mono::String* name, int progression, ::BNM::Structures::Mono::String* prerequisiteEntitlementId, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("UpdateTrackTrigger"), {"trackId", "titleId", "envId", "triggerId", "transactionId", "name", "progression", "prerequisiteEntitlementId", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(trackId, titleId, envId, triggerId, transactionId, name, progression, prerequisiteEntitlementId, userData);
        }
        bool UpdateTransactionCatalogItem(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* transactionId, ::BNM::Structures::Mono::String* name, ::BNM::Structures::Mono::String* externalServiceName, ::BNM::Structures::Mono::String* externalServiceEntitlementId, ::GlobalNamespace::StringIntMap* inventoryChanges, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("UpdateTransactionCatalogItem"), {"titleId", "envId", "transactionId", "name", "externalServiceName", "externalServiceEntitlementId", "inventoryChanges", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, transactionId, name, externalServiceName, externalServiceEntitlementId, inventoryChanges, userData);
        }
        bool UpdateTransactionCatalogItemSunsetStatus(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* transactionId, bool sunsetStatus, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("UpdateTransactionCatalogItemSunsetStatus"), {"titleId", "envId", "transactionId", "sunsetStatus", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, transactionId, sunsetStatus, userData);
        }
        bool UpdateUserDataMetadata(::BNM::Structures::Mono::String* titleId, ::BNM::Structures::Mono::String* envId, ::BNM::Structures::Mono::String* keyName, ::BNM::Structures::Mono::String* metadataId, ::BNM::Structures::Mono::String* keyPerms, ::BNM::Structures::Mono::String* privacyNotes, ::BNM::Types::nint userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("UpdateUserDataMetadata"), {"titleId", "envId", "keyName", "metadataId", "keyPerms", "privacyNotes", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(titleId, envId, keyName, metadataId, keyPerms, privacyNotes, userData);
        }
    };
}
