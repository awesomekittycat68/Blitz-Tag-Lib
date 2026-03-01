#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GameEntityId.hpp"
#include "GhostReactorLevelGeneratorV2_TreeLevelConfig.hpp"
#include "MonoBehaviourTick.hpp"
#include "SRand.hpp"

namespace GlobalNamespace {
    struct GhostReactorLevelGenerator : ::GlobalNamespace::MonoBehaviourTick {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GhostReactorLevelGenerator");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr int MAX_VIS_CHECKS_PER_FRAME = 1;
        ::BNM::Structures::Mono::List<::GlobalNamespace::GhostReactorLevelGeneratorV2_TreeLevelConfig>* GetTreeLevels() {
            static BNM::Method<::BNM::Structures::Mono::List<::GlobalNamespace::GhostReactorLevelGeneratorV2_TreeLevelConfig>*> _method = GetClass().GetMethod(O("get_TreeLevels"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::List<int>* GetBlockerOrder() {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("blockerOrder"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<int>* GetConnectorOrder() {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("connectorOrder"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetDepthConfigIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("depthConfigIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GhostReactorLevelDepthConfig*>* GetDepthConfigs() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GhostReactorLevelDepthConfig*>*> _field = GetClass().GetField(O("depthConfigs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<int>* GetEndCapOrder() {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("endCapOrder"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<int>* GetEntryAnchorOrder() {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("entryAnchorOrder"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Quaternion GetFlip180() {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("flip180"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetGenerationOutput() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("generationOutput"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<int>* GetHubOrder() {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("hubOrder"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GhostReactorLevelSection* GetMainHub() {
            static BNM::Field<::GlobalNamespace::GhostReactorLevelSection*> _field = GetClass().GetField(O("mainHub"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GhostReactorSpawnConfig*>* GetMainHubSpawnConfigs() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GhostReactorSpawnConfig*>*> _field = GetClass().GetField(O("mainHubSpawnConfigs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetNextVisCheckNodeIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("nextVisCheckNodeIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GhostReactorLevelGenerator_Node*>* GetNodeList() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GhostReactorLevelGenerator_Node*>*> _field = GetClass().GetField(O("nodeList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::BNM::Structures::Mono::List<::GlobalNamespace::GhostReactorLevelGenerator_Node*>*>* GetNodeTree() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::List<::GlobalNamespace::GhostReactorLevelGenerator_Node*>*>*> _field = GetClass().GetField(O("nodeTree"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::Collider*>* GetNonOverlapZones() {
            static BNM::Field<::BNM::Structures::Mono::List<::Collider*>*> _field = GetClass().GetField(O("nonOverlapZones"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SRand GetRandomGenerator() {
            static BNM::Field<::GlobalNamespace::SRand> _field = GetClass().GetField(O("randomGenerator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GhostReactor* GetReactor() {
            static BNM::Field<::GlobalNamespace::GhostReactor*> _field = GetClass().GetField(O("reactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSeed() {
            static BNM::Field<int> _field = GetClass().GetField(O("seed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetSpawnedHubHashSet() {
            static BNM::Field<void*> _field = GetClass().GetField(O("spawnedHubHashSet"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BoxCollider* GetTestColliderA() {
            static BNM::Field<::BoxCollider*> _field = GetClass().GetField(O("testColliderA"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BoxCollider* GetTestColliderB() {
            static BNM::Field<::BoxCollider*> _field = GetClass().GetField(O("testColliderB"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::Transform*>* GetTreeParents() {
            static BNM::Field<::BNM::Structures::Mono::List<::Transform*>*> _field = GetClass().GetField(O("treeParents"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBlockerOrder(::BNM::Structures::Mono::List<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("blockerOrder"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetConnectorOrder(::BNM::Structures::Mono::List<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("connectorOrder"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDepthConfigIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("depthConfigIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDepthConfigs(::BNM::Structures::Mono::List<::GlobalNamespace::GhostReactorLevelDepthConfig*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GhostReactorLevelDepthConfig*>*> _field = GetClass().GetField(O("depthConfigs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEndCapOrder(::BNM::Structures::Mono::List<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("endCapOrder"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEntryAnchorOrder(::BNM::Structures::Mono::List<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("entryAnchorOrder"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFlip180(::BNM::Structures::Unity::Quaternion value) {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("flip180"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGenerationOutput(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("generationOutput"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHubOrder(::BNM::Structures::Mono::List<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("hubOrder"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMainHub(::GlobalNamespace::GhostReactorLevelSection* value) {
            static BNM::Field<::GlobalNamespace::GhostReactorLevelSection*> _field = GetClass().GetField(O("mainHub"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMainHubSpawnConfigs(::BNM::Structures::Mono::List<::GlobalNamespace::GhostReactorSpawnConfig*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GhostReactorSpawnConfig*>*> _field = GetClass().GetField(O("mainHubSpawnConfigs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNextVisCheckNodeIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("nextVisCheckNodeIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNodeList(::BNM::Structures::Mono::List<::GlobalNamespace::GhostReactorLevelGenerator_Node*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GhostReactorLevelGenerator_Node*>*> _field = GetClass().GetField(O("nodeList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNodeTree(::BNM::Structures::Mono::List<::BNM::Structures::Mono::List<::GlobalNamespace::GhostReactorLevelGenerator_Node*>*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::List<::GlobalNamespace::GhostReactorLevelGenerator_Node*>*>*> _field = GetClass().GetField(O("nodeTree"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNonOverlapZones(::BNM::Structures::Mono::List<::Collider*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::Collider*>*> _field = GetClass().GetField(O("nonOverlapZones"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRandomGenerator(::GlobalNamespace::SRand value) {
            static BNM::Field<::GlobalNamespace::SRand> _field = GetClass().GetField(O("randomGenerator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReactor(::GlobalNamespace::GhostReactor* value) {
            static BNM::Field<::GlobalNamespace::GhostReactor*> _field = GetClass().GetField(O("reactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSeed(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("seed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpawnedHubHashSet(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("spawnedHubHashSet"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTestColliderA(::BoxCollider* value) {
            static BNM::Field<::BoxCollider*> _field = GetClass().GetField(O("testColliderA"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTestColliderB(::BoxCollider* value) {
            static BNM::Field<::BoxCollider*> _field = GetClass().GetField(O("testColliderB"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTreeParents(::BNM::Structures::Mono::List<::Transform*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::Transform*>*> _field = GetClass().GetField(O("treeParents"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ClearLevelSections() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearLevelSections"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void DebugClear() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DebugClear"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void DebugGenerate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DebugGenerate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Generate(int inputSeed) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Generate"), {"inputSeed"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(inputSeed);
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GhostReactorLevelGeneratorV2_TreeLevelConfig>* get_TreeLevels() {
            static BNM::Method<::BNM::Structures::Mono::List<::GlobalNamespace::GhostReactorLevelGeneratorV2_TreeLevelConfig>*> _m = GetClass().GetMethod(O("get_TreeLevels"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::GhostReactorLevelGenerator_Node* GetCurrentNode(::BNM::Structures::Unity::Vector3 pos) {
            static BNM::Method<::GlobalNamespace::GhostReactorLevelGenerator_Node*> _m = GetClass().GetMethod(O("GetCurrentNode"), {"pos"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(pos);
        }
        bool GetExitFromCurrentSection(::BNM::Structures::Unity::Vector3 pos, ::BNM::Structures::Unity::Vector3& exitPos, ::BNM::Structures::Unity::Quaternion& exitRot, ::BNM::Structures::Mono::List<::BNM::Structures::Unity::Vector3>* connectorCorners) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("GetExitFromCurrentSection"), {"pos", "exitPos", "exitRot", "connectorCorners"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(pos, &exitPos, &exitRot, connectorCorners);
        }
        ::GlobalNamespace::GRPatrolPath* GetPatrolPath(int64_t createData) {
            static BNM::Method<::GlobalNamespace::GRPatrolPath*> _m = GetClass().GetMethod(O("GetPatrolPath"), {"createData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(createData);
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GhostReactorLevelGeneratorV2_TreeLevelConfig>* GetTreeLevels_1() {
            static BNM::Method<::BNM::Structures::Mono::List<::GlobalNamespace::GhostReactorLevelGeneratorV2_TreeLevelConfig>*> _m = GetClass().GetMethod(O("GetTreeLevels"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void Init(::GlobalNamespace::GhostReactor* reactor) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Init"), {"reactor"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(reactor);
        }
        void RandomizeIndices(::BNM::IL2CPP::Il2CppObject*& list, int count) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RandomizeIndices"), {"list", "count"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&list, count);
        }
        void RespawnEntity(int entityId, int64_t entityCreateData, ::GlobalNamespace::GameEntityId createdByEntityId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RespawnEntity"), {"entityId", "entityCreateData", "createdByEntityId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(entityId, entityCreateData, createdByEntityId);
        }
        void SpawnEntitiesInEachSection(float respawnCount) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SpawnEntitiesInEachSection"), {"respawnCount"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(respawnCount);
        }
        bool TestForCollision(::GlobalNamespace::GhostReactorLevelSection* section, ::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Quaternion rotation, int selfi, int selfj, int selfk) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TestForCollision"), {"section", "position", "rotation", "selfi", "selfj", "selfk"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(section, position, rotation, selfi, selfj, selfk);
        }
        void Tick() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Tick"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static bool TreeLevelIsEnabledNow(::GlobalNamespace::GhostReactorLevelGeneratorV2_TreeLevelConfig treeLevel) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TreeLevelIsEnabledNow"), {"treeLevel"});
            return _m.Call(treeLevel);
        }
    };
}
