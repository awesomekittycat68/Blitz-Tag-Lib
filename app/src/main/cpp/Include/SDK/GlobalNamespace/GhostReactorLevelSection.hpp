#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GameEntityCreateData.hpp"
#include "GameEntityId.hpp"
#include "GhostReactorLevelSection_SectionType.hpp"
#include "SRand.hpp"

namespace GlobalNamespace {
    struct GhostReactorLevelSection : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GhostReactorLevelSection");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr float SHOW_DIST = 32.0f;
        static constexpr float HIDE_DIST = 36.0f;
        static constexpr int MAX_CREATE_PER_RPC = 25;
        ::Transform* GetAnchor() {
            static BNM::Method<::Transform*> _method = GetClass().GetMethod(O("get_Anchor"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::List<::Transform*>* GetAnchors() {
            static BNM::Method<::BNM::Structures::Mono::List<::Transform*>*> _method = GetClass().GetMethod(O("get_Anchors"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BoxCollider* GetBoundingCollider() {
            static BNM::Method<::BoxCollider*> _method = GetClass().GetMethod(O("get_BoundingCollider"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::GhostReactorLevelSection_SectionType GetType_pg() {
            static BNM::Method<::GlobalNamespace::GhostReactorLevelSection_SectionType> _method = GetClass().GetMethod(O("get_Type"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::List<::Transform*>* GetAnchors_f() {
            static BNM::Field<::BNM::Structures::Mono::List<::Transform*>*> _field = GetClass().GetField(O("anchors"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetAnchorTransform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("anchorTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BoxCollider* GetBoundingCollider_f() {
            static BNM::Field<::BoxCollider*> _field = GetClass().GetField(O("boundingCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GRHazardousMaterial*>* GetHazardousMaterials() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GRHazardousMaterial*>*> _field = GetClass().GetField(O("hazardousMaterials"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHidden() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hidden"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetHubAnchorIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("hubAnchorIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("index"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GRPatrolPath*>* GetPatrolPaths() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GRPatrolPath*>*> _field = GetClass().GetField(O("patrolPaths"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GameEntity*>* GetPrePlacedGameEntities() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GameEntity*>*> _field = GetClass().GetField(O("prePlacedGameEntities"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::Renderer*>* GetRenderers() {
            static BNM::Field<::BNM::Structures::Mono::List<::Renderer*>*> _field = GetClass().GetField(O("renderers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetRotatingIndexForRespawn() {
            static BNM::Field<int> _field = GetClass().GetField(O("rotatingIndexForRespawn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GhostReactorLevelSectionConnector* GetSectionConnector() {
            static BNM::Field<::GlobalNamespace::GhostReactorLevelSectionConnector*> _field = GetClass().GetField(O("sectionConnector"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GhostReactorLevelSection_SectionType GetSectionType() {
            static BNM::Field<::GlobalNamespace::GhostReactorLevelSection_SectionType> _field = GetClass().GetField(O("sectionType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GhostReactorSpawnConfig*>* GetSpawnConfigs() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GhostReactorSpawnConfig*>*> _field = GetClass().GetField(O("spawnConfigs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup*>* GetSpawnPointGroupLookup() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup*>*> _field = GetClass().GetField(O("spawnPointGroupLookup"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup*>* GetSpawnPointGroups() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup*>*> _field = GetClass().GetField(O("spawnPointGroups"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::GlobalNamespace::GameEntityCreateData>* GetTempCreateEntitiesList() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GameEntityCreateData>*> _field = GetClass().GetField(O("tempCreateEntitiesList"));
            return _field.Get();
        }
        void SetAnchors(::BNM::Structures::Mono::List<::Transform*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::Transform*>*> _field = GetClass().GetField(O("anchors"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAnchorTransform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("anchorTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBoundingCollider(::BoxCollider* value) {
            static BNM::Field<::BoxCollider*> _field = GetClass().GetField(O("boundingCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHazardousMaterials(::BNM::Structures::Mono::List<::GlobalNamespace::GRHazardousMaterial*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GRHazardousMaterial*>*> _field = GetClass().GetField(O("hazardousMaterials"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHidden(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hidden"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHubAnchorIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("hubAnchorIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("index"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPatrolPaths(::BNM::Structures::Mono::List<::GlobalNamespace::GRPatrolPath*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GRPatrolPath*>*> _field = GetClass().GetField(O("patrolPaths"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPrePlacedGameEntities(::BNM::Structures::Mono::List<::GlobalNamespace::GameEntity*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GameEntity*>*> _field = GetClass().GetField(O("prePlacedGameEntities"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRenderers(::BNM::Structures::Mono::List<::Renderer*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::Renderer*>*> _field = GetClass().GetField(O("renderers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRotatingIndexForRespawn(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("rotatingIndexForRespawn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSectionConnector(::GlobalNamespace::GhostReactorLevelSectionConnector* value) {
            static BNM::Field<::GlobalNamespace::GhostReactorLevelSectionConnector*> _field = GetClass().GetField(O("sectionConnector"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSectionType(::GlobalNamespace::GhostReactorLevelSection_SectionType value) {
            static BNM::Field<::GlobalNamespace::GhostReactorLevelSection_SectionType> _field = GetClass().GetField(O("sectionType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpawnConfigs(::BNM::Structures::Mono::List<::GlobalNamespace::GhostReactorSpawnConfig*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GhostReactorSpawnConfig*>*> _field = GetClass().GetField(O("spawnConfigs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpawnPointGroupLookup(::BNM::Structures::Mono::Array<::GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup*>*> _field = GetClass().GetField(O("spawnPointGroupLookup"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpawnPointGroups(::BNM::Structures::Mono::List<::GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup*>*> _field = GetClass().GetField(O("spawnPointGroups"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetTempCreateEntitiesList(::BNM::Structures::Mono::List<::GlobalNamespace::GameEntityCreateData>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GameEntityCreateData>*> _field = GetClass().GetField(O("tempCreateEntitiesList"));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::Transform* get_Anchor() {
            static BNM::Method<::Transform*> _m = GetClass().GetMethod(O("get_Anchor"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::List<::Transform*>* get_Anchors() {
            static BNM::Method<::BNM::Structures::Mono::List<::Transform*>*> _m = GetClass().GetMethod(O("get_Anchors"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BoxCollider* get_BoundingCollider() {
            static BNM::Method<::BoxCollider*> _m = GetClass().GetMethod(O("get_BoundingCollider"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::GhostReactorLevelSection_SectionType get_Type() {
            static BNM::Method<::GlobalNamespace::GhostReactorLevelSection_SectionType> _m = GetClass().GetMethod(O("get_Type"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Transform* GetAnchor_1(int anchorIndex) {
            static BNM::Method<::Transform*> _m = GetClass().GetMethod(O("GetAnchor"), {"anchorIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(anchorIndex);
        }
        float GetDistSq(::BNM::Structures::Unity::Vector3 pos) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("GetDistSq"), {"pos"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(pos);
        }
        ::GlobalNamespace::GRPatrolPath* GetPatrolPath(int patrolPathIndex) {
            static BNM::Method<::GlobalNamespace::GRPatrolPath*> _m = GetClass().GetMethod(O("GetPatrolPath"), {"patrolPathIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(patrolPathIndex);
        }
        void Hide(bool hide) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Hide"), {"hide"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(hide);
        }
        void InitLevelSection(int sectionIndex, ::GlobalNamespace::GhostReactor* reactor) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitLevelSection"), {"sectionIndex", "reactor"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(sectionIndex, reactor);
        }
        static void RandomizeIndices(::BNM::Structures::Mono::List<int>* list, int count, ::GlobalNamespace::SRand& randomGenerator) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RandomizeIndices"), {"list", "count", "randomGenerator"});
            _m.Call(list, count, &randomGenerator);
        }
        void RespawnEntity(::GlobalNamespace::SRand& randomGenerator, ::GlobalNamespace::GameEntityManager* gameEntityManager, int entityId, int64_t entityCreateData, ::GlobalNamespace::GameEntityId createdByEntityId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RespawnEntity"), {"randomGenerator", "gameEntityManager", "entityId", "entityCreateData", "createdByEntityId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&randomGenerator, gameEntityManager, entityId, entityCreateData, createdByEntityId);
        }
        void SpawnSectionEntities(::GlobalNamespace::SRand& randomGenerator, ::GlobalNamespace::GameEntityManager* gameEntityManager, ::GlobalNamespace::GhostReactor* reactor, ::BNM::Structures::Mono::List<::GlobalNamespace::GhostReactorSpawnConfig*>* spawnConfigs, float respawnCount) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SpawnSectionEntities"), {"randomGenerator", "gameEntityManager", "reactor", "spawnConfigs", "respawnCount"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&randomGenerator, gameEntityManager, reactor, spawnConfigs, respawnCount);
        }
        void UpdateDisable(::BNM::Structures::Unity::Vector3 playerPos) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateDisable"), {"playerPos"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(playerPos);
        }
    };
}
