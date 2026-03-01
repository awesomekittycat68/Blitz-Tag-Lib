#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GameEntityCreateData.hpp"
#include "GameEntityId.hpp"
#include "ZoneClearReason.hpp"

namespace GlobalNamespace {
    struct CustomMapsGameManager : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CustomMapsGameManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::CustomMapsGameManager* GetInstance() {
            static BNM::Field<::GlobalNamespace::CustomMapsGameManager*> field = GetClass().GetField("instance");
            return field.Get();
        }
        static constexpr const char* AGENT_PREFAB_NAME = "CustomMapsAIAgent";
        static constexpr const char* GRABBABLE_PREFAB_NAME = "CustomMapsGrabbableEntity";
        static ::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>* GetAgentsToCreateOnZoneInit() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("agentsToCreateOnZoneInit"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>* GetCustomMapsAgents() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("customMapsAgents"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
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
        ::GlobalNamespace::GhostReactorManager* GetGhostReactorManager() {
            static BNM::Field<::GlobalNamespace::GhostReactorManager*> _field = GetClass().GetField(O("ghostReactorManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GlobalNamespace::CustomMapsGameManager* GetInstance_f() {
            static BNM::Field<::GlobalNamespace::CustomMapsGameManager*> _field = GetClass().GetField(O("instance"));
            return _field.Get();
        }
        int GetSpawnCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("spawnCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::GlobalNamespace::GameEntityCreateData>* GetTempCreateEntitiesList() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GameEntityCreateData>*> _field = GetClass().GetField(O("tempCreateEntitiesList"));
            return _field.Get();
        }
        int GetTESTIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("TEST_index"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static void SetAgentsToCreateOnZoneInit(::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("agentsToCreateOnZoneInit"));
            _field.Set(value);
        }
        void SetCustomMapsAgents(::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("customMapsAgents"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
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
        void SetGhostReactorManager(::GlobalNamespace::GhostReactorManager* value) {
            static BNM::Field<::GlobalNamespace::GhostReactorManager*> _field = GetClass().GetField(O("ghostReactorManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetInstance(::GlobalNamespace::CustomMapsGameManager* value) {
            static BNM::Field<::GlobalNamespace::CustomMapsGameManager*> _field = GetClass().GetField(O("instance"));
            _field.Set(value);
        }
        void SetSpawnCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("spawnCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetTempCreateEntitiesList(::BNM::Structures::Mono::List<::GlobalNamespace::GameEntityCreateData>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GameEntityCreateData>*> _field = GetClass().GetField(O("tempCreateEntitiesList"));
            _field.Set(value);
        }
        void SetTESTIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("TEST_index"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void AddAgentsToCreate(::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>* entitiesToCreate) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddAgentsToCreate"), {"entitiesToCreate"});
            _m.Call(entitiesToCreate);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CreatePlacedEntities(::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>* entities) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CreatePlacedEntities"), {"entities"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(entities);
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
        static ::GlobalNamespace::GameAgentManager* GetAgentManager() {
            static BNM::Method<::GlobalNamespace::GameAgentManager*> _m = GetClass().GetMethod(O("GetAgentManager"));
            return _m.Call();
        }
        static ::GlobalNamespace::CustomMapsAIBehaviourController* GetBehaviorControllerForEntity(::GlobalNamespace::GameEntityId entityId) {
            static BNM::Method<::GlobalNamespace::CustomMapsAIBehaviourController*> _m = GetClass().GetMethod(O("GetBehaviorControllerForEntity"), {"entityId"});
            return _m.Call(entityId);
        }
        static ::GlobalNamespace::GameEntityManager* GetEntityManager() {
            static BNM::Method<::GlobalNamespace::GameEntityManager*> _m = GetClass().GetMethod(O("GetEntityManager"));
            return _m.Call();
        }
        bool IsAuthority() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsAuthority"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool IsDriver() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsDriver"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool IsZoneReady() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsZoneReady"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnCreateGameEntity(::GlobalNamespace::GameEntity* entity) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnCreateGameEntity"), {"entity"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(entity);
        }
        void OnPlayerHit(::GlobalNamespace::GameEntityId hitByEntityId, ::GlobalNamespace::GRPlayer* player, ::BNM::Structures::Unity::Vector3 hitPosition) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPlayerHit"), {"hitByEntityId", "player", "hitPosition"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(hitByEntityId, player, hitPosition);
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
        int64_t ProcessMigratedGameEntityCreateData(::GlobalNamespace::GameEntity* entity, int64_t createData) {
            static BNM::Method<int64_t> _m = GetClass().GetMethod(O("ProcessMigratedGameEntityCreateData"), {"entity", "createData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(entity, createData);
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
        void SetupCollisions(::GameObject* go) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetupCollisions"), {"go"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(go);
        }
        bool ShouldClearZone() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ShouldClearZone"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::GameEntityId SpawnEnemyAtLocation(int enemyTypeId, ::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Quaternion rotation) {
            static BNM::Method<::GlobalNamespace::GameEntityId> _m = GetClass().GetMethod(O("SpawnEnemyAtLocation"), {"enemyTypeId", "position", "rotation"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(enemyTypeId, position, rotation);
        }
        void SpawnEnemyClient(int enemyTypeId, int agentId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SpawnEnemyClient"), {"enemyTypeId", "agentId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(enemyTypeId, agentId);
        }
        ::GlobalNamespace::GameEntityId SpawnEnemyFromPoint(::BNM::Structures::Mono::String* spawnPointId, int enemyTypeId) {
            static BNM::Method<::GlobalNamespace::GameEntityId> _m = GetClass().GetMethod(O("SpawnEnemyFromPoint"), {"spawnPointId", "enemyTypeId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(spawnPointId, enemyTypeId);
        }
        ::GlobalNamespace::GameEntityId SpawnGrabbableAtLocation(int enemyTypeId, ::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Quaternion rotation) {
            static BNM::Method<::GlobalNamespace::GameEntityId> _m = GetClass().GetMethod(O("SpawnGrabbableAtLocation"), {"enemyTypeId", "position", "rotation"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(enemyTypeId, position, rotation);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Coroutine::IEnumerator* TEST_Spawn() {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("TEST_Spawn"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void TEST_Spawning() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TEST_Spawning"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool ValidateMigratedGameEntity(int netId, int entityTypeId, ::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Quaternion rotation, int64_t createData, int actorNr) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ValidateMigratedGameEntity"), {"netId", "entityTypeId", "position", "rotation", "createData", "actorNr"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(netId, entityTypeId, position, rotation, createData, actorNr);
        }
    };
}
