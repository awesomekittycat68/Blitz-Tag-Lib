#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GameEntityId.hpp"
#include "GhostReactor_EnemyType.hpp"
#include "GhostReactorManager_GRPlayerAction.hpp"
#include "GhostReactorManager_RPC.hpp"
#include "GhostReactorManager_ToolPurchaseActionV2.hpp"
#include "GhostReactorManager_ToolPurchaseStationAction.hpp"
#include "GhostReactorManager_ToolPurchaseStationResponse.hpp"
#include "GREnemyBossMoon_Behavior.hpp"
#include "GRPlayer_GRPlayerState.hpp"
#include "GRTool_GRToolType.hpp"
#include "GRToolProgressionManager_ToolParts.hpp"
#include "GTZone.hpp"
#include "NetworkComponent.hpp"
#include "ProgressionManager_CoreType.hpp"
#include "ZoneClearReason.hpp"
#include "../Photon_Pun/PhotonMessageInfo.hpp"

namespace GlobalNamespace {
    struct GhostReactorManager : ::GlobalNamespace::NetworkComponent {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GhostReactorManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr const char* EVENT_CORE_COLLECTED = "GRCollectCore";
        static constexpr const char* EVENT_ENEMY_KILLED = "GRKillEnemy";
        static constexpr const char* EVENT_BREAKABLE_BROKEN = "GRSmashBreakable";
        static constexpr const char* EVENT_ENEMY_ARMOR_BREAK = "GRArmorBreak";
        static constexpr const char* NETWORK_ROOM_GR_DEPTH = "ghostReactorDepth";
        static constexpr int GHOSTREACTOR_ZONE_ID = 5;
        static constexpr ::GlobalNamespace::GTZone GT_ZONE_GHOSTREACTOR = (::GlobalNamespace::GTZone)24;
        static constexpr float HandprintThrottleTime = 0.25f;
        bool GetAggroDisabled() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_AggroDisabled"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::IL2CPP::Il2CppObject* GetActiveSpawnSectionEntitiesCoroutine() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("activeSpawnSectionEntitiesCoroutine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static bool GetBayUnlockEnabled() {
            static BNM::Field<bool> _field = GetClass().GetField(O("bayUnlockEnabled"));
            return _field.Get();
        }
        ::GlobalNamespace::GameEntity* GetCachedBossEntity() {
            static BNM::Field<::GlobalNamespace::GameEntity*> _field = GetClass().GetField(O("cachedBossEntity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static bool GetEntityDebugEnabled() {
            static BNM::Field<bool> _field = GetClass().GetField(O("entityDebugEnabled"));
            return _field.Get();
        }
        ::GlobalNamespace::GameAgentManager* GetGameAgentManager() {
            static BNM::Field<::GlobalNamespace::GameAgentManager*> _field = GetClass().GetField(O("gameAgentManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GameEntityManager* GetGameEntityManager() {
            static BNM::Field<::GlobalNamespace::GameEntityManager*> _field = GetClass().GetField(O("gameEntityManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLastHandprintTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("LastHandprintTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static bool GetNoiseDebugEnabled() {
            static BNM::Field<bool> _field = GetClass().GetField(O("noiseDebugEnabled"));
            return _field.Get();
        }
        ::GlobalNamespace::GRNoiseEventManager* GetNoiseEventManager() {
            static BNM::Field<::GlobalNamespace::GRNoiseEventManager*> _field = GetClass().GetField(O("noiseEventManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Pun::PhotonView* GetPhotonView() {
            static BNM::Field<::Photon_Pun::PhotonView*> _field = GetClass().GetField(O("photonView"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GhostReactor* GetReactor() {
            static BNM::Field<::GlobalNamespace::GhostReactor*> _field = GetClass().GetField(O("reactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetSpawnSectionEntitiesWait() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("spawnSectionEntitiesWait"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::GlobalNamespace::GameEntityId>* GetTempEntitiesToDestroy() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GameEntityId>*> _field = GetClass().GetField(O("tempEntitiesToDestroy"));
            return _field.Get();
        }
        ::GlobalNamespace::GRToolUpgradeStation* GetUpgradeStation() {
            static BNM::Field<::GlobalNamespace::GRToolUpgradeStation*> _field = GetClass().GetField(O("upgradeStation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetActiveSpawnSectionEntitiesCoroutine(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("activeSpawnSectionEntitiesCoroutine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetBayUnlockEnabled(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("bayUnlockEnabled"));
            _field.Set(value);
        }
        void SetCachedBossEntity(::GlobalNamespace::GameEntity* value) {
            static BNM::Field<::GlobalNamespace::GameEntity*> _field = GetClass().GetField(O("cachedBossEntity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetEntityDebugEnabled(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("entityDebugEnabled"));
            _field.Set(value);
        }
        void SetGameAgentManager(::GlobalNamespace::GameAgentManager* value) {
            static BNM::Field<::GlobalNamespace::GameAgentManager*> _field = GetClass().GetField(O("gameAgentManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGameEntityManager(::GlobalNamespace::GameEntityManager* value) {
            static BNM::Field<::GlobalNamespace::GameEntityManager*> _field = GetClass().GetField(O("gameEntityManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastHandprintTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("LastHandprintTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetNoiseDebugEnabled(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("noiseDebugEnabled"));
            _field.Set(value);
        }
        void SetNoiseEventManager(::GlobalNamespace::GRNoiseEventManager* value) {
            static BNM::Field<::GlobalNamespace::GRNoiseEventManager*> _field = GetClass().GetField(O("noiseEventManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPhotonView(::Photon_Pun::PhotonView* value) {
            static BNM::Field<::Photon_Pun::PhotonView*> _field = GetClass().GetField(O("photonView"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReactor(::GlobalNamespace::GhostReactor* value) {
            static BNM::Field<::GlobalNamespace::GhostReactor*> _field = GetClass().GetField(O("reactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpawnSectionEntitiesWait(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("spawnSectionEntitiesWait"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetTempEntitiesToDestroy(::BNM::Structures::Mono::List<::GlobalNamespace::GameEntityId>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GameEntityId>*> _field = GetClass().GetField(O("tempEntitiesToDestroy"));
            _field.Set(value);
        }
        void SetUpgradeStation(::GlobalNamespace::GRToolUpgradeStation* value) {
            static BNM::Field<::GlobalNamespace::GRToolUpgradeStation*> _field = GetClass().GetField(O("upgradeStation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void ApplyChargeToolRPC(int collectorEntityNetId, int targetToolNetId, int targetEnergyDelta, bool useCollectorEnergy, ::Photon_Realtime::Player* collectingPlayer, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyChargeToolRPC"), {"collectorEntityNetId", "targetToolNetId", "targetEnergyDelta", "useCollectorEnergy", "collectingPlayer", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(collectorEntityNetId, targetToolNetId, targetEnergyDelta, useCollectorEnergy, collectingPlayer, info);
        }
        void ApplyCollectItemRPC(int collectibleEntityNetId, int collectorEntityNetId, int collectingPlayerActorNumber, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyCollectItemRPC"), {"collectibleEntityNetId", "collectorEntityNetId", "collectingPlayerActorNumber", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(collectibleEntityNetId, collectorEntityNetId, collectingPlayerActorNumber, info);
        }
        void ApplyDepositCurrencyRPC(int collectorEntityNetId, int targetPlayerActorNumber, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyDepositCurrencyRPC"), {"collectorEntityNetId", "targetPlayerActorNumber", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(collectorEntityNetId, targetPlayerActorNumber, info);
        }
        void ApplyEnemyHitPlayerRPC(::GlobalNamespace::GhostReactor_EnemyType type, int entityNetId, ::BNM::Structures::Unity::Vector3 hitPosition, ::BNM::Structures::Unity::Vector3 hitImpulse, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyEnemyHitPlayerRPC"), {"type", "entityNetId", "hitPosition", "hitImpulse", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(type, entityNetId, hitPosition, hitImpulse, info);
        }
        void ApplyGrantPlayerShieldRPC(int shieldingPlayer, int playerToGrantShieldActorNumber, int shieldHp, int shieldFlags, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyGrantPlayerShieldRPC"), {"shieldingPlayer", "playerToGrantShieldActorNumber", "shieldHp", "shieldFlags", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(shieldingPlayer, playerToGrantShieldActorNumber, shieldHp, shieldFlags, info);
        }
        void ApplyPlayerActionRPC(int playerAction, int param0, int param1, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyPlayerActionRPC"), {"playerAction", "param0", "param1", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(playerAction, param0, param1, info);
        }
        void ApplyPlayerRevivedRPC(int reviveStationIndex, int playerActorNumber, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyPlayerRevivedRPC"), {"reviveStationIndex", "playerActorNumber", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(reviveStationIndex, playerActorNumber, info);
        }
        void ApplyRecycleItemRPC(int lastHeldActorNumber, int toolNetId, ::GlobalNamespace::GRTool_GRToolType toolType, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyRecycleItemRPC"), {"lastHeldActorNumber", "toolNetId", "toolType", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(lastHeldActorNumber, toolNetId, toolType, info);
        }
        void ApplyRecycleScanItemRPC(int netId, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyRecycleScanItemRPC"), {"netId", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(netId, info);
        }
        void ApplySeedExtractorStateRPC(int playerActorNumber, int coreCount, int coresProcessedByOverdrive, int researchPoints, float coreProcessingPercentage, float overdriveSupply, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplySeedExtractorStateRPC"), {"playerActorNumber", "coreCount", "coresProcessedByOverdrive", "researchPoints", "coreProcessingPercentage", "overdriveSupply", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(playerActorNumber, coreCount, coresProcessedByOverdrive, researchPoints, coreProcessingPercentage, overdriveSupply, info);
        }
        void ApplyShiftEndRPC(double networkedTime, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyShiftEndRPC"), {"networkedTime", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(networkedTime, info);
        }
        void ApplyShiftStartRPC(double shiftStartTime, int randomSeed, ::BNM::Structures::Mono::String* gameIdGuid, bool isFirstShift, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyShiftStartRPC"), {"shiftStartTime", "randomSeed", "gameIdGuid", "isFirstShift", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(shiftStartTime, randomSeed, gameIdGuid, isFirstShift, info);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void BroadcastHandleAndSelectionWheelPosition(::GlobalNamespace::GRToolUpgradePurchaseStationFull* station, int handlePos, int wheelPos) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("BroadcastHandleAndSelectionWheelPosition"), {"station", "handlePos", "wheelPos"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(station, handlePos, wheelPos);
        }
        void BroadcastHandprint(::BNM::Structures::Unity::Vector3 pos, ::BNM::Structures::Unity::Quaternion orient, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("BroadcastHandprint"), {"pos", "orient", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pos, orient, info);
        }
        void BroadcastScoreboardPage(int scoreboardPage, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("BroadcastScoreboardPage"), {"scoreboardPage", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(scoreboardPage, info);
        }
        void BroadcastStartingProgression(int points, int redeemedPoints, double shiftJoinedTime, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("BroadcastStartingProgression"), {"points", "redeemedPoints", "shiftJoinedTime", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(points, redeemedPoints, shiftJoinedTime, info);
        }
        void ClearCachedBossEntity() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearCachedBossEntity"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
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
        bool DebugIsToolStationHacked() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("DebugIsToolStationHacked"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void DeserializeZoneData(::BNM::IL2CPP::Il2CppObject* reader) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DeserializeZoneData"), {"reader"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(reader);
        }
        void DeserializeZoneEntityData(::BNM::IL2CPP::Il2CppObject* reader, ::GlobalNamespace::GameEntity* entity) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DeserializeZoneEntityData"), {"reader", "entity"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(reader, entity);
        }
        void DeserializeZonePlayerData(::BNM::IL2CPP::Il2CppObject* reader, int actorNumber) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DeserializeZonePlayerData"), {"reader", "actorNumber"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(reader, actorNumber);
        }
        void DistillItemRPC(int collectibleEntityNetId, int collectingPlayerActorNumber, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DistillItemRPC"), {"collectibleEntityNetId", "collectingPlayerActorNumber", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(collectibleEntityNetId, collectingPlayerActorNumber, info);
        }
        bool DoesUserHaveResearchUnlocked(int UserID, ::BNM::Structures::Mono::String* ResearchID) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("DoesUserHaveResearchUnlocked"), {"UserID", "ResearchID"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(UserID, ResearchID);
        }
        void EntityEnteredDropZone(::GlobalNamespace::GameEntity* entity) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EntityEnteredDropZone"), {"entity"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(entity);
        }
        void EntityEnteredDropZoneRPC(int entityNetId, int64_t position, int rotation, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EntityEnteredDropZoneRPC"), {"entityNetId", "position", "rotation", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(entityNetId, position, rotation, info);
        }
        static ::GlobalNamespace::GhostReactorManager* Get(::GlobalNamespace::GameEntity* gameEntity) {
            static BNM::Method<::GlobalNamespace::GhostReactorManager*> _m = GetClass().GetMethod(O("Get"), {"gameEntity"});
            return _m.Call(gameEntity);
        }
        static bool get_AggroDisabled() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_AggroDisabled"));
            return _m.Call();
        }
        ::Photon_Realtime::Player* GetAuthorityPlayer() {
            static BNM::Method<::Photon_Realtime::Player*> _m = GetClass().GetMethod(O("GetAuthorityPlayer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::GameEntity* GetBossEntity() {
            static BNM::Method<::GlobalNamespace::GameEntity*> _m = GetClass().GetMethod(O("GetBossEntity"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int GetIndexForToolUpgradeStationFull(::GlobalNamespace::GRToolUpgradePurchaseStationFull* station) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetIndexForToolUpgradeStationFull"), {"station"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(station);
        }
        ::GlobalNamespace::GRToolUpgradePurchaseStationFull* GetToolUpgradeStationFullForIndex(int idx) {
            static BNM::Method<::GlobalNamespace::GRToolUpgradePurchaseStationFull*> _m = GetClass().GetMethod(O("GetToolUpgradeStationFullForIndex"), {"idx"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(idx);
        }
        void InstantDeathForCurrentEnemies() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InstantDeathForCurrentEnemies"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
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
        bool IsEnemy(::GlobalNamespace::GameEntity* gameEntity) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsEnemy"), {"gameEntity"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(gameEntity);
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
        bool IsZoneActive() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsZoneActive"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool IsZoneReady() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsZoneReady"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void LocalEjectToolInUpgradeStation() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LocalEjectToolInUpgradeStation"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void LocalEntityEnteredDropZone(::GlobalNamespace::GameEntityId entityId, ::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Quaternion rotation) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LocalEntityEnteredDropZone"), {"entityId", "position", "rotation"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(entityId, position, rotation);
        }
        void NotifyPurchaseToolOrUpgradeRPCRouted(int actorNumber, int stationIndex, int shelf, int item, bool success, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("NotifyPurchaseToolOrUpgradeRPCRouted"), {"actorNumber", "stationIndex", "shelf", "item", "success", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(actorNumber, stationIndex, shelf, item, success, info);
        }
        void OnAbilityDie(::GlobalNamespace::GameEntity* entity, float forcedRespawn) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnAbilityDie"), {"entity", "forcedRespawn"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(entity, forcedRespawn);
        }
        void OnCreateGameEntity(::GlobalNamespace::GameEntity* entity) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnCreateGameEntity"), {"entity"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(entity);
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
        void OnEnemyHitPlayerInternal(::GlobalNamespace::GhostReactor_EnemyType type, ::GlobalNamespace::GameEntityId entityId, ::GlobalNamespace::GRPlayer* player, ::BNM::Structures::Unity::Vector3 hitPosition, ::BNM::Structures::Unity::Vector3 hitImpulse) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnemyHitPlayerInternal"), {"type", "entityId", "player", "hitPosition", "hitImpulse"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(type, entityId, player, hitPosition, hitImpulse);
        }
        void OnEntityZoneClear(::GlobalNamespace::GTZone zoneId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEntityZoneClear"), {"zoneId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(zoneId);
        }
        void OnNewPlayerEnteredGhostReactor() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnNewPlayerEnteredGhostReactor"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnRequestFireProjectileInternal(::GlobalNamespace::GameEntityId entityId, ::BNM::Structures::Unity::Vector3 firingPosition, ::BNM::Structures::Unity::Vector3 targetPosition, double networkTime) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnRequestFireProjectileInternal"), {"entityId", "firingPosition", "targetPosition", "networkTime"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(entityId, firingPosition, targetPosition, networkTime);
        }
        void OnSharedTap(::GlobalNamespace::VRRig* rig, ::BNM::Structures::Unity::Vector3 tapPos, float handTapSpeed) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSharedTap"), {"rig", "tapPos", "handTapSpeed"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(rig, tapPos, handTapSpeed);
        }
        void OnTapLocal(bool isLeftHand, ::BNM::Structures::Unity::Vector3 pos, ::BNM::Structures::Unity::Quaternion rot, ::GlobalNamespace::GorillaSurfaceOverride* surfaceOverride, ::BNM::Structures::Unity::Vector3 handVelocity) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTapLocal"), {"isLeftHand", "pos", "rot", "surfaceOverride", "handVelocity"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(isLeftHand, pos, rot, surfaceOverride, handVelocity);
        }
        void OnZoneClear(::GlobalNamespace::ZoneClearReason reason) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnZoneClear"), {"reason"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(reason);
        }
        void OnZoneCreate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnZoneCreate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnZoneInit() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnZoneInit"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PlacedToolInUpgradeStationRPC(int entityNetId, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlacedToolInUpgradeStationRPC"), {"entityNetId", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(entityNetId, info);
        }
        void PlayerStateChangeRPC(int playerResponsibleNumber, int playerActorNumber, int newState, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayerStateChangeRPC"), {"playerResponsibleNumber", "playerActorNumber", "newState", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(playerResponsibleNumber, playerActorNumber, newState, info);
        }
        int64_t ProcessMigratedGameEntityCreateData(::GlobalNamespace::GameEntity* entity, int64_t createData) {
            static BNM::Method<int64_t> _m = GetClass().GetMethod(O("ProcessMigratedGameEntityCreateData"), {"entity", "createData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(entity, createData);
        }
        void PromotionBotActivePlayerRequest(int state) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PromotionBotActivePlayerRequest"), {"state"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(state);
        }
        void PromotionBotActivePlayerRequestRPC(int state, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PromotionBotActivePlayerRequestRPC"), {"state", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(state, info);
        }
        void PromotionBotActivePlayerResponseRPC(int actorNumber, int state, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PromotionBotActivePlayerResponseRPC"), {"actorNumber", "state", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(actorNumber, state, info);
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
        void RefreshShiftCredit() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RefreshShiftCredit"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RefreshShiftCreditRPC(::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RefreshShiftCreditRPC"), {"info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(info);
        }
        void ReportCoreCollection(::GlobalNamespace::GRPlayer* player, ::GlobalNamespace::ProgressionManager_CoreType type) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReportCoreCollection"), {"player", "type"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(player, type);
        }
        void ReportEnemyDeath() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReportEnemyDeath"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ReportLocalPlayerHit() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReportLocalPlayerHit"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ReportLocalPlayerHitRPC(::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReportLocalPlayerHitRPC"), {"info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(info);
        }
        void ReportPlayerDeath(::GlobalNamespace::GRPlayer* player) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReportPlayerDeath"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(player);
        }
        void RequestAdvanceBossPhase() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestAdvanceBossPhase"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RequestApplySeedExtractorState(int coreCount, int coresProcessedByOverdrive, int researchPoints, float coreProcessingPercentage, float overdriveSupply) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestApplySeedExtractorState"), {"coreCount", "coresProcessedByOverdrive", "researchPoints", "coreProcessingPercentage", "overdriveSupply"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(coreCount, coresProcessedByOverdrive, researchPoints, coreProcessingPercentage, overdriveSupply);
        }
        void RequestApplySeedExtractorStateRPC(int coreCount, int coresProcessedByOverdrive, int researchPoints, float coreProcessingPercentage, float overdriveSupply, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestApplySeedExtractorStateRPC"), {"coreCount", "coresProcessedByOverdrive", "researchPoints", "coreProcessingPercentage", "overdriveSupply", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(coreCount, coresProcessedByOverdrive, researchPoints, coreProcessingPercentage, overdriveSupply, info);
        }
        void RequestBossBehavior(::GlobalNamespace::GREnemyBossMoon_Behavior bossBehavior) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestBossBehavior"), {"bossBehavior"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(bossBehavior);
        }
        void RequestChargeTool(::GlobalNamespace::GameEntityId collectorEntityId, ::GlobalNamespace::GameEntityId targetToolId, int targetEnergyDelta, bool useCollectorEnergy) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestChargeTool"), {"collectorEntityId", "targetToolId", "targetEnergyDelta", "useCollectorEnergy"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(collectorEntityId, targetToolId, targetEnergyDelta, useCollectorEnergy);
        }
        void RequestChargeToolRPC(int collectorEntityNetId, int targetToolNetId, int targetEnergyDelta, bool useCollectorEnergy, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestChargeToolRPC"), {"collectorEntityNetId", "targetToolNetId", "targetEnergyDelta", "useCollectorEnergy", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(collectorEntityNetId, targetToolNetId, targetEnergyDelta, useCollectorEnergy, info);
        }
        void RequestCollectItem(::GlobalNamespace::GameEntityId collectibleEntityId, ::GlobalNamespace::GameEntityId collectorEntityId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestCollectItem"), {"collectibleEntityId", "collectorEntityId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(collectibleEntityId, collectorEntityId);
        }
        void RequestCollectItemRPC(int collectibleEntityNetId, int collectorEntityNetId, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestCollectItemRPC"), {"collectibleEntityNetId", "collectorEntityNetId", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(collectibleEntityNetId, collectorEntityNetId, info);
        }
        void RequestDepositCollectible(::GlobalNamespace::GameEntityId collectibleEntityId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestDepositCollectible"), {"collectibleEntityId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(collectibleEntityId);
        }
        void RequestDepositCurrency(::GlobalNamespace::GameEntityId collectorEntityId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestDepositCurrency"), {"collectorEntityId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(collectorEntityId);
        }
        void RequestDepositCurrencyRPC(int collectorEntityNetId, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestDepositCurrencyRPC"), {"collectorEntityNetId", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(collectorEntityNetId, info);
        }
        void RequestDistillCollectible(::GlobalNamespace::GameEntityId collectibleEntityId, ::Photon_Realtime::Player* sender) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestDistillCollectible"), {"collectibleEntityId", "sender"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(collectibleEntityId, sender);
        }
        void RequestEnemyHitPlayer(::GlobalNamespace::GhostReactor_EnemyType type, ::GlobalNamespace::GameEntityId hitByEntityId, ::GlobalNamespace::GRPlayer* player, ::BNM::Structures::Unity::Vector3 hitPosition) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestEnemyHitPlayer"), {"type", "hitByEntityId", "player", "hitPosition"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(type, hitByEntityId, player, hitPosition);
        }
        void RequestEnemyHitPlayer(::GlobalNamespace::GhostReactor_EnemyType type, ::GlobalNamespace::GameEntityId hitByEntityId, ::GlobalNamespace::GRPlayer* player, ::BNM::Structures::Unity::Vector3 hitPosition, ::BNM::Structures::Unity::Vector3 hitImpulse) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestEnemyHitPlayer"), {"type", "hitByEntityId", "player", "hitPosition", "hitImpulse"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(type, hitByEntityId, player, hitPosition, hitImpulse);
        }
        void RequestFireProjectile(::GlobalNamespace::GameEntityId entityId, ::BNM::Structures::Unity::Vector3 firingPosition, ::BNM::Structures::Unity::Vector3 targetPosition, double networkTime) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestFireProjectile"), {"entityId", "firingPosition", "targetPosition", "networkTime"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(entityId, firingPosition, targetPosition, networkTime);
        }
        void RequestFireProjectileRPC(int entityNetId, ::BNM::Structures::Unity::Vector3 firingPosition, ::BNM::Structures::Unity::Vector3 targetPosition, double networkTime, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestFireProjectileRPC"), {"entityNetId", "firingPosition", "targetPosition", "networkTime", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(entityNetId, firingPosition, targetPosition, networkTime, info);
        }
        void RequestGoBackBossPhase() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestGoBackBossPhase"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RequestGrantPlayerShield(::GlobalNamespace::GRPlayer* player, int shieldHp, int shieldFlags) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestGrantPlayerShield"), {"player", "shieldHp", "shieldFlags"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(player, shieldHp, shieldFlags);
        }
        void RequestGrantPlayerShieldRPC(int shieldingPlayer, int playerToGrantShieldActorNumber, int shieldHp, int shieldFlags, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestGrantPlayerShieldRPC"), {"shieldingPlayer", "playerToGrantShieldActorNumber", "shieldHp", "shieldFlags", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(shieldingPlayer, playerToGrantShieldActorNumber, shieldHp, shieldFlags, info);
        }
        void RequestHackToolStation() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestHackToolStation"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RequestHurtBossHP() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestHurtBossHP"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RequestKillBossEyes() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestKillBossEyes"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RequestKillBossSummoned() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestKillBossSummoned"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RequestNetworkShelfAndItemChange(::GlobalNamespace::GRToolUpgradePurchaseStationFull* station, int shelf, int item) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestNetworkShelfAndItemChange"), {"station", "shelf", "item"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(station, shelf, item);
        }
        void RequestPlayerAction(::GlobalNamespace::GhostReactorManager_GRPlayerAction playerAction) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestPlayerAction"), {"playerAction"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(playerAction);
        }
        void RequestPlayerAction(::GlobalNamespace::GhostReactorManager_GRPlayerAction playerAction, int param0) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestPlayerAction"), {"playerAction", "param0"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(playerAction, param0);
        }
        void RequestPlayerAction(::GlobalNamespace::GhostReactorManager_GRPlayerAction playerAction, int param0, int param1) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestPlayerAction"), {"playerAction", "param0", "param1"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(playerAction, param0, param1);
        }
        void RequestPlayerActionRPC(int playerAction, int param0, int param1, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestPlayerActionRPC"), {"playerAction", "param0", "param1", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(playerAction, param0, param1, info);
        }
        void RequestPlayerRevive(::GlobalNamespace::GRReviveStation* reviveStation, ::GlobalNamespace::GRPlayer* player) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestPlayerRevive"), {"reviveStation", "player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(reviveStation, player);
        }
        void RequestPlayerStateChange(::GlobalNamespace::GRPlayer* player, ::GlobalNamespace::GRPlayer_GRPlayerState newState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestPlayerStateChange"), {"player", "newState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(player, newState);
        }
        void RequestPurchaseRPCRoutedAuthority(int stationIndex, int shelf, int item, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestPurchaseRPCRoutedAuthority"), {"stationIndex", "shelf", "item", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stationIndex, shelf, item, info);
        }
        void RequestPurchaseToolOrUpgrade(::GlobalNamespace::GRToolUpgradePurchaseStationFull* station, int shelf, int item) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestPurchaseToolOrUpgrade"), {"station", "shelf", "item"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(station, shelf, item);
        }
        void RequestRecycleItem(int lastHeldActorNumber, ::GlobalNamespace::GameEntityId toolId, ::GlobalNamespace::GRTool_GRToolType toolType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestRecycleItem"), {"lastHeldActorNumber", "toolId", "toolType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(lastHeldActorNumber, toolId, toolType);
        }
        void RequestRecycleScanItem(::GlobalNamespace::GameEntityId gameEntityId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestRecycleScanItem"), {"gameEntityId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(gameEntityId);
        }
        void RequestRestoreBossHP() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestRestoreBossHP"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RequestSentientCorePerformJump(::GlobalNamespace::GameEntity* entity, ::BNM::Structures::Unity::Vector3 startPos, ::BNM::Structures::Unity::Vector3 normal, ::BNM::Structures::Unity::Vector3 direction, float waitTime) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestSentientCorePerformJump"), {"entity", "startPos", "normal", "direction", "waitTime"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(entity, startPos, normal, direction, waitTime);
        }
        void RequestShiftEnd() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestShiftEnd"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RequestShiftStartAuthority(bool isFirstShift) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestShiftStartAuthority"), {"isFirstShift"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(isFirstShift);
        }
        void RequestStationExclusivity(::GlobalNamespace::GRToolUpgradePurchaseStationFull* station) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestStationExclusivity"), {"station"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(station);
        }
        void RequestStationExclusivityRPCRoutedAuthority(int stationIndex, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestStationExclusivityRPCRoutedAuthority"), {"stationIndex", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stationIndex, info);
        }
        void SelectToolShelfAndItemRPCRouted(int stationIndex, int shelf, int item, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SelectToolShelfAndItemRPCRouted"), {"stationIndex", "shelf", "item", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stationIndex, shelf, item, info);
        }
        void SendMothershipId() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendMothershipId"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SendMothershipIdRPC(::BNM::Structures::Mono::String* mothershipId, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendMothershipIdRPC"), {"mothershipId", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(mothershipId, info);
        }
        void SentientCorePerformJumpRPC(int entityNetId, ::BNM::Structures::Unity::Vector3 startPosition, ::BNM::Structures::Unity::Vector3 surfaceNormal, ::BNM::Structures::Unity::Vector3 jumpDirection, double jumpStartTime, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SentientCorePerformJumpRPC"), {"entityNetId", "startPosition", "surfaceNormal", "jumpDirection", "jumpStartTime", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(entityNetId, startPosition, surfaceNormal, jumpDirection, jumpStartTime, info);
        }
        void SerializeZoneData(::BNM::IL2CPP::Il2CppObject* writer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SerializeZoneData"), {"writer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(writer);
        }
        void SerializeZoneEntityData(::BNM::IL2CPP::Il2CppObject* writer, ::GlobalNamespace::GameEntity* entity) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SerializeZoneEntityData"), {"writer", "entity"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(writer, entity);
        }
        void SerializeZonePlayerData(::BNM::IL2CPP::Il2CppObject* writer, int actorNumber) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SerializeZonePlayerData"), {"writer", "actorNumber"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(writer, actorNumber);
        }
        void SetActivePlayerAuthority(::GlobalNamespace::GRToolUpgradePurchaseStationFull* station, int actorNumber) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetActivePlayerAuthority"), {"station", "actorNumber"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(station, actorNumber);
        }
        void SetHandleAndSelectionWheelPositionRPCRouted(int stationIndex, int handlePos, int wheelPos, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetHandleAndSelectionWheelPositionRPCRouted"), {"stationIndex", "handlePos", "wheelPos", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stationIndex, handlePos, wheelPos, info);
        }
        void SetToolStationActivePlayerRPCRouted(int stationIndex, int activeOwner, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetToolStationActivePlayerRPCRouted"), {"stationIndex", "activeOwner", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stationIndex, activeOwner, info);
        }
        bool ShouldClearZone() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ShouldClearZone"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool ShouldEntitySurviveShift(::GlobalNamespace::GameEntity* gameEntity) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ShouldEntitySurviveShift"), {"gameEntity"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(gameEntity);
        }
        ::BNM::Coroutine::IEnumerator* SpawnSectionEntitiesCoroutine(float respawnCount) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("SpawnSectionEntitiesCoroutine"), {"respawnCount"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(respawnCount);
        }
        void ToolPlacedInUpgradeStation(::GlobalNamespace::GameEntity* entity) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ToolPlacedInUpgradeStation"), {"entity"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(entity);
        }
        void ToolPurchaseResponseLocal(int stationIndex, ::GlobalNamespace::GhostReactorManager_ToolPurchaseStationResponse responseType, int dataA, int dataB) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ToolPurchaseResponseLocal"), {"stationIndex", "responseType", "dataA", "dataB"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stationIndex, responseType, dataA, dataB);
        }
        void ToolPurchaseStationRequest(int stationIndex, ::GlobalNamespace::GhostReactorManager_ToolPurchaseStationAction action) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ToolPurchaseStationRequest"), {"stationIndex", "action"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stationIndex, action);
        }
        void ToolPurchaseStationRequestRPC(int stationIndex, ::GlobalNamespace::GhostReactorManager_ToolPurchaseStationAction action, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ToolPurchaseStationRequestRPC"), {"stationIndex", "action", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stationIndex, action, info);
        }
        void ToolPurchaseStationResponseRPC(int stationIndex, ::GlobalNamespace::GhostReactorManager_ToolPurchaseStationResponse responseType, int dataA, int dataB, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ToolPurchaseStationResponseRPC"), {"stationIndex", "responseType", "dataA", "dataB", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stationIndex, responseType, dataA, dataB, info);
        }
        void ToolPurchaseV2_RPC(::GlobalNamespace::GhostReactorManager_ToolPurchaseActionV2 command, int initiatorID, int stationIndex, int param1, int param2, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ToolPurchaseV2_RPC"), {"command", "initiatorID", "stationIndex", "param1", "param2", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(command, initiatorID, stationIndex, param1, param2, info);
        }
        void ToolSnapRequestUpgrade(int upgradeNetID, ::GlobalNamespace::GRToolProgressionManager_ToolParts UpgradeID, int entityNetId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ToolSnapRequestUpgrade"), {"upgradeNetID", "UpgradeID", "entityNetId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(upgradeNetID, UpgradeID, entityNetId);
        }
        void ToolSnapRequestUpgradeRPC(int upgradeNetID, ::GlobalNamespace::GRToolProgressionManager_ToolParts UpgradeID, int entityNetId, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ToolSnapRequestUpgradeRPC"), {"upgradeNetID", "UpgradeID", "entityNetId", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(upgradeNetID, UpgradeID, entityNetId, info);
        }
        void ToolUpgradeStationRequestUpgrade(::GlobalNamespace::GRToolProgressionManager_ToolParts UpgradeID, int entityNetId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ToolUpgradeStationRequestUpgrade"), {"UpgradeID", "entityNetId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(UpgradeID, entityNetId);
        }
        void ToolUpgradeStationRequestUpgradeRPC(::GlobalNamespace::GRToolProgressionManager_ToolParts UpgradeID, int entityNetId, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ToolUpgradeStationRequestUpgradeRPC"), {"UpgradeID", "entityNetId", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(UpgradeID, entityNetId, info);
        }
        void UpgradeToolAtToolStation() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpgradeToolAtToolStation"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpgradeToolAtToolStationRPC(::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpgradeToolAtToolStationRPC"), {"info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(info);
        }
        void UpgradeToolRemoteRPC(::GlobalNamespace::GRToolProgressionManager_ToolParts UpgradeID, int entityNetId, bool applyCost, int playerNetId, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpgradeToolRemoteRPC"), {"UpgradeID", "entityNetId", "applyCost", "playerNetId", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(UpgradeID, entityNetId, applyCost, playerNetId, info);
        }
        bool ValidateMigratedGameEntity(int netId, int entityTypeId, ::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Quaternion rotation, int64_t createData, int actorNr) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ValidateMigratedGameEntity"), {"netId", "entityTypeId", "position", "rotation", "createData", "actorNr"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(netId, entityTypeId, position, rotation, createData, actorNr);
        }
        bool VerifyShuttleInteractability(::GlobalNamespace::GRPlayer* player, int shuttleIdx, bool ignoreOwnership) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("VerifyShuttleInteractability"), {"player", "shuttleIdx", "ignoreOwnership"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(player, shuttleIdx, ignoreOwnership);
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
