#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GameEntityCreateData.hpp"
#include "GameEntityData.hpp"
#include "GameEntityId.hpp"
#include "GameEntityManager_AttachmentData.hpp"
#include "GameEntityManager_RPC.hpp"
#include "GameEntityManager_ZoneState.hpp"
#include "GameHitData.hpp"
#include "GTZone.hpp"
#include "NetworkComponent.hpp"
#include "SnapJointType.hpp"
#include "ZoneClearReason.hpp"
#include "../Photon_Pun/PhotonMessageInfo.hpp"
#include "../Photon_Pun/RpcTarget.hpp"

namespace GlobalNamespace {
    struct GameEntityManager : ::GlobalNamespace::NetworkComponent {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GameEntityManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr const char* preLog = "[GameEntityManager]  ";
        static constexpr const char* preErr = "[GameEntityManager]  ERROR!!!  ";
        static constexpr const char* preErrBeta = "[GameEntityManager]  ERROR!!!  (beta only log) ";
        static constexpr int MAX_STATE_BYTES = 15360;
        static constexpr int MAX_CHUNK_BYTES = 512;
        static constexpr int MAX_JOINWITHITEMS_BYTES = 255;
        static constexpr float MAX_LOCAL_MAGNITUDE_SQ = 6400.0f;
        static constexpr float MAX_DISTANCE_FROM_HAND = 16.0f;
        static constexpr float MAX_ENTITY_DIST = 16.0f;
        static constexpr float MAX_THROW_SPEED_SQ = 1600.0f;
        static constexpr int MAX_ENTITY_COUNT_PER_TYPE = 100;
        static constexpr int INVALID_ID = -1;
        static constexpr int INVALID_INDEX = -1;
        ::GlobalNamespace::GameEntityManager* GetActiveManager() {
            static BNM::Method<::GlobalNamespace::GameEntityManager*> _method = GetClass().GetMethod(O("get_activeManager"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetActiveManager(::GlobalNamespace::GameEntityManager* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_activeManager"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetPendingTableData() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_PendingTableData"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetPendingTableData(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_PendingTableData"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetTickRunning() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_TickRunning"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetTickRunning(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_TickRunning"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        void add_onZoneClear(::GlobalNamespace::GameEntityManager_ZoneClearEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_onZoneClear"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_onZoneClear(::GlobalNamespace::GameEntityManager_ZoneClearEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_onZoneClear"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_onZoneStart(::GlobalNamespace::GameEntityManager_ZoneStartEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_onZoneStart"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_onZoneStart(::GlobalNamespace::GameEntityManager_ZoneStartEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_onZoneStart"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        ::BNM::Structures::Mono::List<::Collider*>* GetCollidersList() {
            static BNM::Field<::BNM::Structures::Mono::List<::Collider*>*> _field = GetClass().GetField(O("_collidersList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::GlobalNamespace::GameEntityManager*>* GetAllManagers() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GameEntityManager*>*> _field = GetClass().GetField(O("allManagers"));
            return _field.Get();
        }
        float GetCreateCooldown() {
            static BNM::Field<float> _field = GetClass().GetField(O("createCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<int64_t>* GetCreateDataForCreate() {
            static BNM::Field<::BNM::Structures::Mono::List<int64_t>*> _field = GetClass().GetField(O("createDataForCreate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<int>* GetCreatedByEntityNetIdForCreate() {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("createdByEntityNetIdForCreate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<int, int>* GetCreatedItemTypeCount() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, int>*> _field = GetClass().GetField(O("createdItemTypeCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CustomMapsGameManager* GetCustomMapsManager() {
            static BNM::Field<::GlobalNamespace::CustomMapsGameManager*> _field = GetClass().GetField(O("customMapsManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDestroyCooldown() {
            static BNM::Field<float> _field = GetClass().GetField(O("destroyCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GameEntity*>* GetEntities() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GameEntity*>*> _field = GetClass().GetField(O("entities"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetEntitiesActiveCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("entitiesActiveCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<int>* GetEntityTypeIdsForCreate() {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("entityTypeIdsForCreate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GameAgentManager* GetGameAgentManager() {
            static BNM::Field<::GlobalNamespace::GameAgentManager*> _field = GetClass().GetField(O("gameAgentManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GameEntityData>* GetGameEntityData() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GameEntityData>*> _field = GetClass().GetField(O("gameEntityData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GhostReactorManager* GetGhostReactorManager() {
            static BNM::Field<::GlobalNamespace::GhostReactorManager*> _field = GetClass().GetField(O("ghostReactorManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::RequestableOwnershipGuard* GetGuard() {
            static BNM::Field<::GlobalNamespace::RequestableOwnershipGuard*> _field = GetClass().GetField(O("guard"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<int, ::GameObject*>* GetItemPrefabFactory() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::GameObject*>*> _field = GetClass().GetField(O("itemPrefabFactory"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLastCreateSent() {
            static BNM::Field<float> _field = GetClass().GetField(O("lastCreateSent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLastDestroySent() {
            static BNM::Field<float> _field = GetClass().GetField(O("lastDestroySent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLastStateSent() {
            static BNM::Field<float> _field = GetClass().GetField(O("lastStateSent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetNetIds() {
            static BNM::Field<void*> _field = GetClass().GetField(O("netIds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<int>* GetNetIdsForCreate() {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("netIdsForCreate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<int>* GetNetIdsForDelete() {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("netIdsForDelete"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<int>* GetNetIdsForState() {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("netIdsForState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<int, int>* GetNetIdToIndex() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, int>*> _field = GetClass().GetField(O("netIdToIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetNextNetId() {
            static BNM::Field<int> _field = GetClass().GetField(O("nextNetId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<::GlobalNamespace::GameEntity*>* GetOnEntityAdded() {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::GameEntity*>*> _field = GetClass().GetField(O("OnEntityAdded"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<::GlobalNamespace::GameEntity*>* GetOnEntityRemoved() {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::GameEntity*>*> _field = GetClass().GetField(O("OnEntityRemoved"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GameEntityManager_ZoneClearEvent* GetOnZoneClear() {
            static BNM::Field<::GlobalNamespace::GameEntityManager_ZoneClearEvent*> _field = GetClass().GetField(O("onZoneClear"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GameEntityManager_ZoneStartEvent* GetOnZoneStart() {
            static BNM::Field<::GlobalNamespace::GameEntityManager_ZoneStartEvent*> _field = GetClass().GetField(O("onZoneStart"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<int64_t>* GetPackedPositionsForCreate() {
            static BNM::Field<::BNM::Structures::Mono::List<int64_t>*> _field = GetClass().GetField(O("packedPositionsForCreate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<int>* GetPackedRotationsForCreate() {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("packedRotationsForCreate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Pun::PhotonView* GetPhotonView() {
            static BNM::Field<::Photon_Pun::PhotonView*> _field = GetClass().GetField(O("photonView"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Realtime::Player* GetPrevAuthorityPlayer() {
            static BNM::Field<::Photon_Realtime::Player*> _field = GetClass().GetField(O("prevAuthorityPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<int, int>* GetPriceLookupByEntityId() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, int>*> _field = GetClass().GetField(O("priceLookupByEntityId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetStateCooldown() {
            static BNM::Field<float> _field = GetClass().GetField(O("stateCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<int64_t>* GetStatesForState() {
            static BNM::Field<::BNM::Structures::Mono::List<int64_t>*> _field = GetClass().GetField(O("statesForState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SuperInfectionManager* GetSuperInfectionManager() {
            static BNM::Field<::GlobalNamespace::SuperInfectionManager*> _field = GetClass().GetField(O("superInfectionManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::GlobalNamespace::GameEntityManager_AttachmentData>* GetTempAttachments() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GameEntityManager_AttachmentData>*> _field = GetClass().GetField(O("tempAttachments"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GameEntity*>* GetTempEntities() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GameEntity*>*> _field = GetClass().GetField(O("tempEntities"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::GlobalNamespace::GameEntity*>* GetTempEntitiesToSerialize() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GameEntity*>*> _field = GetClass().GetField(O("tempEntitiesToSerialize"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GameEntity*>* GetTempFactoryItems() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GameEntity*>*> _field = GetClass().GetField(O("tempFactoryItems"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>* GetTempRigs() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>*> _field = GetClass().GetField(O("tempRigs"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<uint8_t>* GetTempSerializeGameState() {
            static BNM::Field<::BNM::Structures::Mono::Array<uint8_t>*> _field = GetClass().GetField(O("tempSerializeGameState"));
            return _field.Get();
        }
        bool GetUseRandomCheckForAuthority() {
            static BNM::Field<bool> _field = GetClass().GetField(O("useRandomCheckForAuthority"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GTZone GetZone() {
            static BNM::Field<::GlobalNamespace::GTZone> _field = GetClass().GetField(O("zone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::ZoneClearReason GetZoneClearReason() {
            static BNM::Field<::GlobalNamespace::ZoneClearReason> _field = GetClass().GetField(O("zoneClearReason"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<void*>* GetZoneComponents() {
            static BNM::Field<::BNM::Structures::Mono::List<void*>*> _field = GetClass().GetField(O("zoneComponents"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BoxCollider* GetZoneLimit() {
            static BNM::Field<::BoxCollider*> _field = GetClass().GetField(O("zoneLimit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GameEntityManager_ZoneStateData* GetZoneStateData() {
            static BNM::Field<::GlobalNamespace::GameEntityManager_ZoneStateData*> _field = GetClass().GetField(O("zoneStateData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCollidersList(::BNM::Structures::Mono::List<::Collider*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::Collider*>*> _field = GetClass().GetField(O("_collidersList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetAllManagers(::BNM::Structures::Mono::List<::GlobalNamespace::GameEntityManager*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GameEntityManager*>*> _field = GetClass().GetField(O("allManagers"));
            _field.Set(value);
        }
        void SetCreateCooldown(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("createCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCreateDataForCreate(::BNM::Structures::Mono::List<int64_t>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<int64_t>*> _field = GetClass().GetField(O("createDataForCreate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCreatedByEntityNetIdForCreate(::BNM::Structures::Mono::List<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("createdByEntityNetIdForCreate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCreatedItemTypeCount(::BNM::Structures::Mono::Dictionary<int, int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, int>*> _field = GetClass().GetField(O("createdItemTypeCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCustomMapsManager(::GlobalNamespace::CustomMapsGameManager* value) {
            static BNM::Field<::GlobalNamespace::CustomMapsGameManager*> _field = GetClass().GetField(O("customMapsManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDestroyCooldown(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("destroyCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEntities(::BNM::Structures::Mono::List<::GlobalNamespace::GameEntity*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GameEntity*>*> _field = GetClass().GetField(O("entities"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEntitiesActiveCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("entitiesActiveCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEntityTypeIdsForCreate(::BNM::Structures::Mono::List<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("entityTypeIdsForCreate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGameAgentManager(::GlobalNamespace::GameAgentManager* value) {
            static BNM::Field<::GlobalNamespace::GameAgentManager*> _field = GetClass().GetField(O("gameAgentManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGameEntityData(::BNM::Structures::Mono::List<::GlobalNamespace::GameEntityData>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GameEntityData>*> _field = GetClass().GetField(O("gameEntityData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGhostReactorManager(::GlobalNamespace::GhostReactorManager* value) {
            static BNM::Field<::GlobalNamespace::GhostReactorManager*> _field = GetClass().GetField(O("ghostReactorManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGuard(::GlobalNamespace::RequestableOwnershipGuard* value) {
            static BNM::Field<::GlobalNamespace::RequestableOwnershipGuard*> _field = GetClass().GetField(O("guard"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetItemPrefabFactory(::BNM::Structures::Mono::Dictionary<int, ::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::GameObject*>*> _field = GetClass().GetField(O("itemPrefabFactory"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastCreateSent(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lastCreateSent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastDestroySent(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lastDestroySent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastStateSent(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lastStateSent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNetIds(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("netIds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNetIdsForCreate(::BNM::Structures::Mono::List<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("netIdsForCreate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNetIdsForDelete(::BNM::Structures::Mono::List<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("netIdsForDelete"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNetIdsForState(::BNM::Structures::Mono::List<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("netIdsForState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNetIdToIndex(::BNM::Structures::Mono::Dictionary<int, int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, int>*> _field = GetClass().GetField(O("netIdToIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNextNetId(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("nextNetId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnEntityAdded(::BNM::Structures::Mono::Action<::GlobalNamespace::GameEntity*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::GameEntity*>*> _field = GetClass().GetField(O("OnEntityAdded"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnEntityRemoved(::BNM::Structures::Mono::Action<::GlobalNamespace::GameEntity*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::GameEntity*>*> _field = GetClass().GetField(O("OnEntityRemoved"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnZoneClear(::GlobalNamespace::GameEntityManager_ZoneClearEvent* value) {
            static BNM::Field<::GlobalNamespace::GameEntityManager_ZoneClearEvent*> _field = GetClass().GetField(O("onZoneClear"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnZoneStart(::GlobalNamespace::GameEntityManager_ZoneStartEvent* value) {
            static BNM::Field<::GlobalNamespace::GameEntityManager_ZoneStartEvent*> _field = GetClass().GetField(O("onZoneStart"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPackedPositionsForCreate(::BNM::Structures::Mono::List<int64_t>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<int64_t>*> _field = GetClass().GetField(O("packedPositionsForCreate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPackedRotationsForCreate(::BNM::Structures::Mono::List<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("packedRotationsForCreate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPhotonView(::Photon_Pun::PhotonView* value) {
            static BNM::Field<::Photon_Pun::PhotonView*> _field = GetClass().GetField(O("photonView"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPrevAuthorityPlayer(::Photon_Realtime::Player* value) {
            static BNM::Field<::Photon_Realtime::Player*> _field = GetClass().GetField(O("prevAuthorityPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPriceLookupByEntityId(::BNM::Structures::Mono::Dictionary<int, int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, int>*> _field = GetClass().GetField(O("priceLookupByEntityId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStateCooldown(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("stateCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStatesForState(::BNM::Structures::Mono::List<int64_t>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<int64_t>*> _field = GetClass().GetField(O("statesForState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSuperInfectionManager(::GlobalNamespace::SuperInfectionManager* value) {
            static BNM::Field<::GlobalNamespace::SuperInfectionManager*> _field = GetClass().GetField(O("superInfectionManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetTempAttachments(::BNM::Structures::Mono::List<::GlobalNamespace::GameEntityManager_AttachmentData>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GameEntityManager_AttachmentData>*> _field = GetClass().GetField(O("tempAttachments"));
            _field.Set(value);
        }
        void SetTempEntities(::BNM::Structures::Mono::List<::GlobalNamespace::GameEntity*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GameEntity*>*> _field = GetClass().GetField(O("tempEntities"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetTempEntitiesToSerialize(::BNM::Structures::Mono::List<::GlobalNamespace::GameEntity*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GameEntity*>*> _field = GetClass().GetField(O("tempEntitiesToSerialize"));
            _field.Set(value);
        }
        void SetTempFactoryItems(::BNM::Structures::Mono::List<::GlobalNamespace::GameEntity*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GameEntity*>*> _field = GetClass().GetField(O("tempFactoryItems"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetTempRigs(::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>*> _field = GetClass().GetField(O("tempRigs"));
            _field.Set(value);
        }
        static void SetTempSerializeGameState(::BNM::Structures::Mono::Array<uint8_t>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<uint8_t>*> _field = GetClass().GetField(O("tempSerializeGameState"));
            _field.Set(value);
        }
        void SetUseRandomCheckForAuthority(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("useRandomCheckForAuthority"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetZone(::GlobalNamespace::GTZone value) {
            static BNM::Field<::GlobalNamespace::GTZone> _field = GetClass().GetField(O("zone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetZoneClearReason(::GlobalNamespace::ZoneClearReason value) {
            static BNM::Field<::GlobalNamespace::ZoneClearReason> _field = GetClass().GetField(O("zoneClearReason"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetZoneComponents(::BNM::Structures::Mono::List<void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<void*>*> _field = GetClass().GetField(O("zoneComponents"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetZoneLimit(::BoxCollider* value) {
            static BNM::Field<::BoxCollider*> _field = GetClass().GetField(O("zoneLimit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetZoneStateData(::GlobalNamespace::GameEntityManager_ZoneStateData* value) {
            static BNM::Field<::GlobalNamespace::GameEntityManager_ZoneStateData*> _field = GetClass().GetField(O("zoneStateData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        template <typename TP3 = void*>
        static void _TryGrabLocal_TestBounds(::BNM::Structures::Unity::Vector3 handPosition, ::Transform* t, ::BNM::Structures::Unity::Vector3 slopProjection, TP3 bounds, float slopForSpeed, float maxAdjustedGrabDistance, ::GlobalNamespace::GameEntity* entity, float& bestDist, ::GlobalNamespace::GameEntity*& bestEntity, ::BNM::Structures::Unity::Vector3& closestPoint) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_TryGrabLocal_TestBounds"), {"handPosition", "t", "slopProjection", "bounds", "slopForSpeed", "maxAdjustedGrabDistance", "entity", "bestDist", "bestEntity", "closestPoint"});
            _m.Call(handPosition, t, slopProjection, bounds, slopForSpeed, maxAdjustedGrabDistance, entity, &bestDist, &bestEntity, &closestPoint);
        }
        void add_onZoneClear_1(::GlobalNamespace::GameEntityManager_ZoneClearEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_onZoneClear"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void add_onZoneStart_1(::GlobalNamespace::GameEntityManager_ZoneStartEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_onZoneStart"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        ::GlobalNamespace::GameEntityId AddGameEntity(::GlobalNamespace::GameEntity* gameEntity) {
            static BNM::Method<::GlobalNamespace::GameEntityId> _m = GetClass().GetMethod(O("AddGameEntity"), {"gameEntity"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(gameEntity);
        }
        ::GlobalNamespace::GameEntityId AddGameEntity(int netId, ::GlobalNamespace::GameEntity* gameEntity) {
            static BNM::Method<::GlobalNamespace::GameEntityId> _m = GetClass().GetMethod(O("AddGameEntity"), {"netId", "gameEntity"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(netId, gameEntity);
        }
        void ApplyHitRPC(int hittableNetId, int hitByNetId, int hitTypeId, ::BNM::Structures::Unity::Vector3 entityPosition, ::BNM::Structures::Unity::Vector3 hitPosition, ::BNM::Structures::Unity::Vector3 hitImpulse, int hittablePoint, ::Photon_Realtime::Player* player, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyHitRPC"), {"hittableNetId", "hitByNetId", "hitTypeId", "entityPosition", "hitPosition", "hitImpulse", "hittablePoint", "player", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(hittableNetId, hitByNetId, hitTypeId, entityPosition, hitPosition, hitImpulse, hittablePoint, player, info);
        }
        void ApplyStateRPC(::BNM::Structures::Mono::Array<int>* netId, ::BNM::Structures::Mono::Array<int64_t>* newState, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyStateRPC"), {"netId", "newState", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(netId, newState, info);
        }
        void AttachEntityLocal(::GlobalNamespace::GameEntityId gameEntityId, ::GlobalNamespace::GameEntityId attachToEntityId, int slotId, ::BNM::Structures::Unity::Vector3 localPosition, ::BNM::Structures::Unity::Quaternion localRotation) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AttachEntityLocal"), {"gameEntityId", "attachToEntityId", "slotId", "localPosition", "localRotation"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(gameEntityId, attachToEntityId, slotId, localPosition, localRotation);
        }
        void AttachEntityOnCreate(::GlobalNamespace::GameEntityId gameEntityId, bool isLeftHand, ::BNM::Structures::Unity::Vector3 localPosition, ::BNM::Structures::Unity::Quaternion localRotation, int jointType, ::GlobalNamespace::NetPlayer* grabbedByPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AttachEntityOnCreate"), {"gameEntityId", "isLeftHand", "localPosition", "localRotation", "jointType", "grabbedByPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(gameEntityId, isLeftHand, localPosition, localRotation, jointType, grabbedByPlayer);
        }
        void AttachEntityRPC(int entityNetId, int attachToEntityNetId, int slotId, ::BNM::Structures::Unity::Vector3 localPosition, ::BNM::Structures::Unity::Quaternion localRotation, ::Photon_Realtime::Player* attachedByPlayer, double snapTime, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AttachEntityRPC"), {"entityNetId", "attachToEntityNetId", "slotId", "localPosition", "localRotation", "attachedByPlayer", "snapTime", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(entityNetId, attachToEntityNetId, slotId, localPosition, localRotation, attachedByPlayer, snapTime, info);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void BuildFactory() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("BuildFactory"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void ClearByteBuffer(::BNM::Structures::Mono::Array<uint8_t>* buffer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearByteBuffer"), {"buffer"});
            _m.Call(buffer);
        }
        void ClearZone(bool ignoreHeldGadgets) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearZone"), {"ignoreHeldGadgets"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(ignoreHeldGadgets);
        }
        void CopyBackingFieldsToState(bool ) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CopyBackingFieldsToState"), {""});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CopyStateToBackingFields() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CopyStateToBackingFields"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::GlobalNamespace::GameEntityId CreateAndInitItemLocal(int netId, int entityTypeId, ::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Quaternion rotation, int64_t createData, int createdByEntityNetId) {
            static BNM::Method<::GlobalNamespace::GameEntityId> _m = GetClass().GetMethod(O("CreateAndInitItemLocal"), {"netId", "entityTypeId", "position", "rotation", "createData", "createdByEntityNetId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(netId, entityTypeId, position, rotation, createData, createdByEntityNetId);
        }
        ::GlobalNamespace::GameEntity* CreateItemLocal(int netId, int entityTypeId, ::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Quaternion rotation) {
            static BNM::Method<::GlobalNamespace::GameEntity*> _m = GetClass().GetMethod(O("CreateItemLocal"), {"netId", "entityTypeId", "position", "rotation"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(netId, entityTypeId, position, rotation);
        }
        void CreateItemRPC(::BNM::Structures::Mono::Array<int>* netId, ::BNM::Structures::Mono::Array<int>* entityTypeId, ::BNM::Structures::Mono::Array<int64_t>* packedPos, ::BNM::Structures::Mono::Array<int>* packedRot, ::BNM::Structures::Mono::Array<int64_t>* createData, ::BNM::Structures::Mono::Array<int>* createdByEntityNetId, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CreateItemRPC"), {"netId", "entityTypeId", "packedPos", "packedRot", "createData", "createdByEntityNetId", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(netId, entityTypeId, packedPos, packedRot, createData, createdByEntityNetId, info);
        }
        void CreateItemsRPC(int zoneId, ::BNM::Structures::Mono::Array<uint8_t>* stateData, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CreateItemsRPC"), {"zoneId", "stateData", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(zoneId, stateData, info);
        }
        int CreateNetId(int numToCreate) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("CreateNetId"), {"numToCreate"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(numToCreate);
        }
        void DebugSendState() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DebugSendState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void DeserializeTableState(::BNM::Structures::Mono::Array<uint8_t>* bytes, int numBytes) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DeserializeTableState"), {"bytes", "numBytes"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(bytes, numBytes);
        }
        void DestroyItemLocal(::GlobalNamespace::GameEntityId entityId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DestroyItemLocal"), {"entityId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(entityId);
        }
        void DestroyItemRPC(::BNM::Structures::Mono::Array<int>* entityNetId, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DestroyItemRPC"), {"entityNetId", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(entityNetId, info);
        }
        void DrawDebugStar(::BNM::Structures::Unity::Vector3 position, float radius) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DrawDebugStar"), {"position", "radius"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(position, radius);
        }
        ::GlobalNamespace::GameEntity* FactoryEntityById(int entityTypeId) {
            static BNM::Method<::GlobalNamespace::GameEntity*> _m = GetClass().GetMethod(O("FactoryEntityById"), {"entityTypeId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(entityTypeId);
        }
        int FactoryGetBuiltInEntityCountById(int entityTypeId) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("FactoryGetBuiltInEntityCountById"), {"entityTypeId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(entityTypeId);
        }
        bool FactoryHasEntity(int entityTypeId) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("FactoryHasEntity"), {"entityTypeId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(entityTypeId);
        }
        ::GameObject* FactoryPrefabById(int entityTypeId) {
            static BNM::Method<::GameObject*> _m = GetClass().GetMethod(O("FactoryPrefabById"), {"entityTypeId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(entityTypeId);
        }
        int FindNewEntityIndex() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("FindNewEntityIndex"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int FindOpenIndex() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("FindOpenIndex"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static ::GlobalNamespace::GameEntityManager* get_activeManager() {
            static BNM::Method<::GlobalNamespace::GameEntityManager*> _m = GetClass().GetMethod(O("get_activeManager"));
            return _m.Call();
        }
        bool get_PendingTableData() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_PendingTableData"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_TickRunning() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_TickRunning"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Photon_Realtime::Player* GetAuthorityPlayer() {
            static BNM::Method<::Photon_Realtime::Player*> _m = GetClass().GetMethod(O("GetAuthorityPlayer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        template <typename T>
        bool GetEntitiesWithComponentInRadius(::BNM::Structures::Unity::Vector3 center, float radius, bool checkRootOnly, ::BNM::Structures::Mono::List<T>* nearbyEntities) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("GetEntitiesWithComponentInRadius"), {"center", "radius", "checkRootOnly", "nearbyEntities"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(center, radius, checkRootOnly, nearbyEntities);
        }
        ::GlobalNamespace::GameEntityId GetEntityIdFromNetId(int netId) {
            static BNM::Method<::GlobalNamespace::GameEntityId> _m = GetClass().GetMethod(O("GetEntityIdFromNetId"), {"netId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(netId);
        }
        template <typename T>
        T GetGameComponent(::GlobalNamespace::GameEntityId id) {
            static BNM::Method<T> _m = GetClass().GetMethod(O("GetGameComponent"), {"id"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(id);
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GameEntity*>* GetGameEntities() {
            static BNM::Method<::BNM::Structures::Mono::List<::GlobalNamespace::GameEntity*>*> _m = GetClass().GetMethod(O("GetGameEntities"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::GameEntity* GetGameEntity(::GlobalNamespace::GameEntityId id) {
            static BNM::Method<::GlobalNamespace::GameEntity*> _m = GetClass().GetMethod(O("GetGameEntity"), {"id"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(id);
        }
        ::GlobalNamespace::GameEntity* GetGameEntity(int index) {
            static BNM::Method<::GlobalNamespace::GameEntity*> _m = GetClass().GetMethod(O("GetGameEntity"), {"index"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(index);
        }
        ::GlobalNamespace::GameEntity* GetGameEntityFromNetId(int netId) {
            static BNM::Method<::GlobalNamespace::GameEntity*> _m = GetClass().GetMethod(O("GetGameEntityFromNetId"), {"netId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(netId);
        }
        static ::GlobalNamespace::GameEntityManager* GetManagerForZone(::GlobalNamespace::GTZone zone) {
            static BNM::Method<::GlobalNamespace::GameEntityManager*> _m = GetClass().GetMethod(O("GetManagerForZone"), {"zone"});
            return _m.Call(zone);
        }
        int GetNetIdFromEntityId(::GlobalNamespace::GameEntityId id) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetNetIdFromEntityId"), {"id"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(id);
        }
        template <typename T>
        T GetParentEntity(::Transform* transform) {
            static BNM::Method<T> _m = GetClass().GetMethod(O("GetParentEntity"), {"transform"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(transform);
        }
        void GrabEntityLocal(::GlobalNamespace::GameEntityId gameEntityId, bool isLeftHand, ::BNM::Structures::Unity::Vector3 localPosition, ::BNM::Structures::Unity::Quaternion localRotation, ::GlobalNamespace::NetPlayer* grabbedByPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GrabEntityLocal"), {"gameEntityId", "isLeftHand", "localPosition", "localRotation", "grabbedByPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(gameEntityId, isLeftHand, localPosition, localRotation, grabbedByPlayer);
        }
        void GrabEntityOnCreate(::GlobalNamespace::GameEntityId gameEntityId, bool isLeftHand, ::BNM::Structures::Unity::Vector3 localPosition, ::BNM::Structures::Unity::Quaternion localRotation, ::GlobalNamespace::NetPlayer* grabbedByPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GrabEntityOnCreate"), {"gameEntityId", "isLeftHand", "localPosition", "localRotation", "grabbedByPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(gameEntityId, isLeftHand, localPosition, localRotation, grabbedByPlayer);
        }
        void GrabEntityRPC(int entityNetId, bool isLeftHand, int64_t packedPosRot, ::Photon_Realtime::Player* grabbedByPlayer, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GrabEntityRPC"), {"entityNetId", "isLeftHand", "packedPosRot", "grabbedByPlayer", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(entityNetId, isLeftHand, packedPosRot, grabbedByPlayer, info);
        }
        bool HasAuthority() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("HasAuthority"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void InitItemLocal(::GlobalNamespace::GameEntity* entity, int64_t createData, int createdByEntityNetId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitItemLocal"), {"entity", "createData", "createdByEntityNetId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(entity, createData, createdByEntityNetId);
        }
        bool IsAuthority() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsAuthority"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool IsAuthorityPlayer(::GlobalNamespace::NetPlayer* player) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsAuthorityPlayer"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(player);
        }
        bool IsAuthorityPlayer(::Photon_Realtime::Player* player) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsAuthorityPlayer"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(player);
        }
        bool IsEntityNearEntity(int entityNetId, int otherEntityNetId, float acceptableRadius) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsEntityNearEntity"), {"entityNetId", "otherEntityNetId", "acceptableRadius"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(entityNetId, otherEntityNetId, acceptableRadius);
        }
        bool IsEntityNearPosition(int entityNetId, ::BNM::Structures::Unity::Vector3 position, float acceptableRadius) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsEntityNearPosition"), {"entityNetId", "position", "acceptableRadius"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(entityNetId, position, acceptableRadius);
        }
        bool IsEntityValidToMigrate(::GlobalNamespace::GameEntity* entity) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsEntityValidToMigrate"), {"entity"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(entity);
        }
        bool IsInZone() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsInZone"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool IsPlayerHandNearEntity(::GlobalNamespace::GamePlayer* player, int entityNetId, bool isLeftHand, bool checkBothHands, float acceptableRadius) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsPlayerHandNearEntity"), {"player", "entityNetId", "isLeftHand", "checkBothHands", "acceptableRadius"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(player, entityNetId, isLeftHand, checkBothHands, acceptableRadius);
        }
        static bool IsPlayerHandNearPosition(::GlobalNamespace::GamePlayer* player, ::BNM::Structures::Unity::Vector3 worldPosition, bool isLeftHand, bool checkBothHands, float acceptableRadius) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsPlayerHandNearPosition"), {"player", "worldPosition", "isLeftHand", "checkBothHands", "acceptableRadius"});
            return _m.Call(player, worldPosition, isLeftHand, checkBothHands, acceptableRadius);
        }
        bool IsPositionInZone(::BNM::Structures::Unity::Vector3 pos) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsPositionInZone"), {"pos"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(pos);
        }
        bool IsValidAuthorityRPC(::Photon_Realtime::Player* sender) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsValidAuthorityRPC"), {"sender"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(sender);
        }
        bool IsValidAuthorityRPC(::Photon_Realtime::Player* sender, int entityNetId) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsValidAuthorityRPC"), {"sender", "entityNetId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(sender, entityNetId);
        }
        bool IsValidAuthorityRPC(::Photon_Realtime::Player* sender, ::BNM::Structures::Unity::Vector3 pos) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsValidAuthorityRPC"), {"sender", "pos"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(sender, pos);
        }
        bool IsValidAuthorityRPC(::Photon_Realtime::Player* sender, int entityNetId, ::BNM::Structures::Unity::Vector3 pos) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsValidAuthorityRPC"), {"sender", "entityNetId", "pos"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(sender, entityNetId, pos);
        }
        bool IsValidClientRPC(::Photon_Realtime::Player* sender) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsValidClientRPC"), {"sender"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(sender);
        }
        bool IsValidClientRPC(::Photon_Realtime::Player* sender, int entityNetId) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsValidClientRPC"), {"sender", "entityNetId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(sender, entityNetId);
        }
        bool IsValidClientRPC(::Photon_Realtime::Player* sender, ::BNM::Structures::Unity::Vector3 pos) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsValidClientRPC"), {"sender", "pos"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(sender, pos);
        }
        bool IsValidClientRPC(::Photon_Realtime::Player* sender, int entityNetId, ::BNM::Structures::Unity::Vector3 pos) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsValidClientRPC"), {"sender", "entityNetId", "pos"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(sender, entityNetId, pos);
        }
        bool IsValidEntity(::GlobalNamespace::GameEntityId id) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsValidEntity"), {"id"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(id);
        }
        bool IsValidNetId(int netId) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsValidNetId"), {"netId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(netId);
        }
        bool IsZoneActive() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsZoneActive"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool IsZoneAuthority() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsZoneAuthority"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void JoinWithItems(::BNM::Structures::Mono::List<::GlobalNamespace::GameEntity*>* entities) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("JoinWithItems"), {"entities"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(entities);
        }
        void JoinWithItemsRPC(::BNM::Structures::Mono::Array<uint8_t>* stateData, ::BNM::Structures::Mono::Array<int>* netIds, int joiningActorNum, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("JoinWithItemsRPC"), {"stateData", "netIds", "joiningActorNum", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stateData, netIds, joiningActorNum, info);
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDisable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool OnMasterClientAssistedTakeoverRequest(::GlobalNamespace::NetPlayer* fromPlayer, ::GlobalNamespace::NetPlayer* toPlayer) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("OnMasterClientAssistedTakeoverRequest"), {"fromPlayer", "toPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(fromPlayer, toPlayer);
        }
        void OnMyCreatorLeft() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnMyCreatorLeft"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnMyOwnerLeft() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnMyOwnerLeft"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool OnOwnershipRequest(::GlobalNamespace::NetPlayer* fromPlayer) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("OnOwnershipRequest"), {"fromPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(fromPlayer);
        }
        void OnOwnershipTransferred(::GlobalNamespace::NetPlayer* toPlayer, ::GlobalNamespace::NetPlayer* fromPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnOwnershipTransferred"), {"toPlayer", "fromPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(toPlayer, fromPlayer);
        }
        void OnRigDeactivated(::GlobalNamespace::RigContainer* container) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnRigDeactivated"), {"container"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(container);
        }
        void PlayerLeftZoneRPC(::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayerLeftZoneRPC"), {"info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(info);
        }
        bool PriceLookup(int entityTypeId, int& price) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("PriceLookup"), {"entityTypeId", "price"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(entityTypeId, &price);
        }
        void ReadDataFusion() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReadDataFusion"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ReadDataPUN(::Photon_Pun::PhotonStream* stream, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReadDataPUN"), {"stream", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, info);
        }
        void RefreshRigList() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RefreshRigList"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void remove_onZoneClear_1(::GlobalNamespace::GameEntityManager_ZoneClearEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_onZoneClear"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void remove_onZoneStart_1(::GlobalNamespace::GameEntityManager_ZoneStartEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_onZoneStart"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void RemoveGameEntity(::GlobalNamespace::GameEntity* entity) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveGameEntity"), {"entity"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(entity);
        }
        void RequestAttachEntity(::GlobalNamespace::GameEntityId entityId, ::GlobalNamespace::GameEntityId attachToEntityId, int slotId, ::BNM::Structures::Unity::Vector3 localPosition, ::BNM::Structures::Unity::Quaternion localRotation) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestAttachEntity"), {"entityId", "attachToEntityId", "slotId", "localPosition", "localRotation"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(entityId, attachToEntityId, slotId, localPosition, localRotation);
        }
        void RequestAttachEntityAuthority(::GlobalNamespace::GameEntityId entityId, ::GlobalNamespace::GameEntityId attachToEntityId, int slotId, ::BNM::Structures::Unity::Vector3 localPosition, ::BNM::Structures::Unity::Quaternion localRotation) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestAttachEntityAuthority"), {"entityId", "attachToEntityId", "slotId", "localPosition", "localRotation"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(entityId, attachToEntityId, slotId, localPosition, localRotation);
        }
        void RequestAttachEntityRPC(int entityNetId, int attachToEntityNetId, int slotId, ::BNM::Structures::Unity::Vector3 localPosition, ::BNM::Structures::Unity::Quaternion localRotation, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestAttachEntityRPC"), {"entityNetId", "attachToEntityNetId", "slotId", "localPosition", "localRotation", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(entityNetId, attachToEntityNetId, slotId, localPosition, localRotation, info);
        }
        ::GlobalNamespace::GameEntityId RequestCreateItem(int entityTypeId, ::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Quaternion rotation, int64_t createData) {
            static BNM::Method<::GlobalNamespace::GameEntityId> _m = GetClass().GetMethod(O("RequestCreateItem"), {"entityTypeId", "position", "rotation", "createData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(entityTypeId, position, rotation, createData);
        }
        ::GlobalNamespace::GameEntityId RequestCreateItem(int entityTypeId, ::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Quaternion rotation, int64_t createData, ::GlobalNamespace::GameEntityId createdByEntityId) {
            static BNM::Method<::GlobalNamespace::GameEntityId> _m = GetClass().GetMethod(O("RequestCreateItem"), {"entityTypeId", "position", "rotation", "createData", "createdByEntityId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(entityTypeId, position, rotation, createData, createdByEntityId);
        }
        void RequestCreateItems(::BNM::Structures::Mono::List<::GlobalNamespace::GameEntityCreateData>* entityData) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestCreateItems"), {"entityData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(entityData);
        }
        void RequestDestroyItem(::GlobalNamespace::GameEntityId entityId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestDestroyItem"), {"entityId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(entityId);
        }
        void RequestDestroyItems(::BNM::Structures::Mono::List<::GlobalNamespace::GameEntityId>* entityIds) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestDestroyItems"), {"entityIds"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(entityIds);
        }
        void RequestGrabEntity(::GlobalNamespace::GameEntityId gameEntityId, bool isLeftHand, ::BNM::Structures::Unity::Vector3 localPosition, ::BNM::Structures::Unity::Quaternion localRotation) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestGrabEntity"), {"gameEntityId", "isLeftHand", "localPosition", "localRotation"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(gameEntityId, isLeftHand, localPosition, localRotation);
        }
        void RequestGrabEntityRPC(int entityNetId, bool isLeftHand, int64_t packedPosRot, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestGrabEntityRPC"), {"entityNetId", "isLeftHand", "packedPosRot", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(entityNetId, isLeftHand, packedPosRot, info);
        }
        void RequestHit(::GlobalNamespace::GameHitData hit) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestHit"), {"hit"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(hit);
        }
        void RequestHitRPC(int hittableNetId, int hitByNetId, int hitTypeId, ::BNM::Structures::Unity::Vector3 entityPosition, ::BNM::Structures::Unity::Vector3 hitPosition, ::BNM::Structures::Unity::Vector3 hitImpulse, int hittablePoint, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestHitRPC"), {"hittableNetId", "hitByNetId", "hitTypeId", "entityPosition", "hitPosition", "hitImpulse", "hittablePoint", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(hittableNetId, hitByNetId, hitTypeId, entityPosition, hitPosition, hitImpulse, hittablePoint, info);
        }
        void RequestSnapEntity(::GlobalNamespace::GameEntityId entityId, bool isLeftHand, ::GlobalNamespace::SnapJointType jointType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestSnapEntity"), {"entityId", "isLeftHand", "jointType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(entityId, isLeftHand, jointType);
        }
        void RequestSnapEntityRPC(int entityNetId, bool isLeftHand, ::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Quaternion rotation, int jointType, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestSnapEntityRPC"), {"entityNetId", "isLeftHand", "position", "rotation", "jointType", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(entityNetId, isLeftHand, position, rotation, jointType, info);
        }
        void RequestState(::GlobalNamespace::GameEntityId entityId, int64_t newState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestState"), {"entityId", "newState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(entityId, newState);
        }
        void RequestStateAuthority(::GlobalNamespace::GameEntityId entityId, int64_t newState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestStateAuthority"), {"entityId", "newState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(entityId, newState);
        }
        void RequestStateRPC(int entityNetId, int64_t newState, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestStateRPC"), {"entityNetId", "newState", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(entityNetId, newState, info);
        }
        void RequestThrowEntity(::GlobalNamespace::GameEntityId entityId, bool isLeftHand, ::BNM::Structures::Unity::Vector3 headPosition, ::BNM::Structures::Unity::Vector3 velocity, ::BNM::Structures::Unity::Vector3 angVelocity) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestThrowEntity"), {"entityId", "isLeftHand", "headPosition", "velocity", "angVelocity"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(entityId, isLeftHand, headPosition, velocity, angVelocity);
        }
        void RequestThrowEntityRPC(int entityNetId, bool isLeftHand, ::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Quaternion rotation, ::BNM::Structures::Unity::Vector3 velocity, ::BNM::Structures::Unity::Vector3 angVelocity, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestThrowEntityRPC"), {"entityNetId", "isLeftHand", "position", "rotation", "velocity", "angVelocity", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(entityNetId, isLeftHand, position, rotation, velocity, angVelocity, info);
        }
        void RequestZoneStateRPC(int zoneId, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestZoneStateRPC"), {"zoneId", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(zoneId, info);
        }
        void ResolveTableData() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResolveTableData"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        template <typename TP0 = void*>
        static bool SegmentHitsBounds(TP0 bounds, ::BNM::Structures::Unity::Vector3 a, ::BNM::Structures::Unity::Vector3 b, ::BNM::Structures::Unity::Vector3& hitPoint, float& distance) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("SegmentHitsBounds"), {"bounds", "a", "b", "hitPoint", "distance"});
            return _m.Call(bounds, a, b, &hitPoint, &distance);
        }
        void SendTableDataRPC(int packetNum, int totalBytes, ::BNM::Structures::Mono::Array<uint8_t>* bytes, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendTableDataRPC"), {"packetNum", "totalBytes", "bytes", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(packetNum, totalBytes, bytes, info);
        }
        void SendZoneStateToPlayerOrTarget(::GlobalNamespace::GTZone zone, ::Photon_Realtime::Player* player, ::Photon_Pun::RpcTarget target) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendZoneStateToPlayerOrTarget"), {"zone", "player", "target"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(zone, player, target);
        }
        int SerializeGameState(int zoneId, ::BNM::Structures::Mono::Array<uint8_t>* bytes, int maxBytes) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("SerializeGameState"), {"zoneId", "bytes", "maxBytes"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(zoneId, bytes, maxBytes);
        }
        static void set_activeManager(::GlobalNamespace::GameEntityManager* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_activeManager"), {"value"});
            _m.Call(value);
        }
        void set_PendingTableData(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_PendingTableData"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_TickRunning(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_TickRunning"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetZoneState(::GlobalNamespace::GameEntityManager_ZoneState newState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetZoneState"), {"newState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newState);
        }
        bool ShouldClearZone() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ShouldClearZone"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void SliceUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SliceUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SnapEntityLocal(::GlobalNamespace::GameEntityId gameEntityId, bool isLeftHand, ::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Quaternion rotation, int jointType, ::GlobalNamespace::NetPlayer* snappedByPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SnapEntityLocal"), {"gameEntityId", "isLeftHand", "position", "rotation", "jointType", "snappedByPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(gameEntityId, isLeftHand, position, rotation, jointType, snappedByPlayer);
        }
        void SnapEntityOnCreate(::GlobalNamespace::GameEntityId gameEntityId, bool isLeftHand, ::BNM::Structures::Unity::Vector3 localPosition, ::BNM::Structures::Unity::Quaternion localRotation, int jointType, ::GlobalNamespace::NetPlayer* grabbedByPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SnapEntityOnCreate"), {"gameEntityId", "isLeftHand", "localPosition", "localRotation", "jointType", "grabbedByPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(gameEntityId, isLeftHand, localPosition, localRotation, jointType, grabbedByPlayer);
        }
        void SnapEntityRPC(int entityNetId, bool isLeftHand, ::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Quaternion rotation, int jointType, ::Photon_Realtime::Player* thrownByPlayer, double snapTime, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SnapEntityRPC"), {"entityNetId", "isLeftHand", "position", "rotation", "jointType", "thrownByPlayer", "snapTime", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(entityNetId, isLeftHand, position, rotation, jointType, thrownByPlayer, snapTime, info);
        }
        void TestSerializeTableState() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TestSerializeTableState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ThrowEntityLocal(::GlobalNamespace::GameEntityId entityId, bool isLeftHand, ::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Quaternion rotation, ::BNM::Structures::Unity::Vector3 velocity, ::BNM::Structures::Unity::Vector3 angVelocity, ::GlobalNamespace::NetPlayer* thrownByPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ThrowEntityLocal"), {"entityId", "isLeftHand", "position", "rotation", "velocity", "angVelocity", "thrownByPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(entityId, isLeftHand, position, rotation, velocity, angVelocity, thrownByPlayer);
        }
        void ThrowEntityRPC(int entityNetId, bool isLeftHand, ::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Quaternion rotation, ::BNM::Structures::Unity::Vector3 velocity, ::BNM::Structures::Unity::Vector3 angVelocity, ::Photon_Realtime::Player* thrownByPlayer, double throwTime, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ThrowEntityRPC"), {"entityNetId", "isLeftHand", "position", "rotation", "velocity", "angVelocity", "thrownByPlayer", "throwTime", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(entityNetId, isLeftHand, position, rotation, velocity, angVelocity, thrownByPlayer, throwTime, info);
        }
        void Tick() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Tick"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void TryDetachCompletely(::GlobalNamespace::GameEntity* gameEntity) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TryDetachCompletely"), {"gameEntity"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(gameEntity);
        }
        void TryDetachLocal(::GlobalNamespace::GameEntity* gameEntity) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TryDetachLocal"), {"gameEntity"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(gameEntity);
        }
        ::GlobalNamespace::GameEntityId TryGrabLocal(::BNM::Structures::Unity::Vector3 handPosition, bool isLeftHand, ::BNM::Structures::Unity::Vector3& closestPointOnBoundingBox) {
            static BNM::Method<::GlobalNamespace::GameEntityId> _m = GetClass().GetMethod(O("TryGrabLocal"), {"handPosition", "isLeftHand", "closestPointOnBoundingBox"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(handPosition, isLeftHand, &closestPointOnBoundingBox);
        }
        void TryRemoveFromHandLocal(::GlobalNamespace::GameEntity* gameEntity) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TryRemoveFromHandLocal"), {"gameEntity"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(gameEntity);
        }
        void TryUnsnapLocal(::GlobalNamespace::GameEntity* gameEntity) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TryUnsnapLocal"), {"gameEntity"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(gameEntity);
        }
        void UpdateAuthority(::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>* allRigs) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateAuthority"), {"allRigs"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(allRigs);
        }
        void UpdateClientsFromAuthority(::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>* allRigs) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateClientsFromAuthority"), {"allRigs"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(allRigs);
        }
        void UpdateZoneState() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateZoneState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateZoneStateAuthority() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateZoneStateAuthority"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateZoneStateClient() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateZoneStateClient"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        template <typename T, typename TP0 = void*>
        static bool ValidateDataType(TP0 obj, T& dataAsType) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ValidateDataType"), {"obj", "dataAsType"});
            return _m.Call(obj, &dataAsType);
        }
        bool ValidateGrab(::GlobalNamespace::GameEntity* gameEntity, int playerActorNumber, bool isLeftHand) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ValidateGrab"), {"gameEntity", "playerActorNumber", "isLeftHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(gameEntity, playerActorNumber, isLeftHand);
        }
        void ValidateThatNetIdIsNotAlreadyUsed(int netId, int newTypeId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ValidateThatNetIdIsNotAlreadyUsed"), {"netId", "newTypeId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(netId, newTypeId);
        }
        void WriteDataFusion() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteDataFusion"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void WriteDataPUN(::Photon_Pun::PhotonStream* stream, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteDataPUN"), {"stream", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, info);
        }
    };
}
