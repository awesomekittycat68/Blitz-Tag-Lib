#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GameEntityId.hpp"
#include "GamePlayer_HandData.hpp"

namespace GlobalNamespace {
    struct GamePlayer : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GamePlayer");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr const char* preLog = "[GamePlayer]  ";
        static constexpr const char* preErr = "[GamePlayer]  ERROR!!!  ";
        static constexpr int MAX_HANDS = 2;
        static constexpr int LEFT_HAND = 0;
        static constexpr int RIGHT_HAND = 1;
        static constexpr bool _k_MATTO__USE_STATIC_CACHE = false;
        static constexpr int INVALID_ACTOR_NUMBER = -2147483648;
        bool GetAdditionalDataInitialized() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_AdditionalDataInitialized"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetAdditionalDataInitialized(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_AdditionalDataInitialized"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetDidJoinWithItems() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_DidJoinWithItems"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetDidJoinWithItems(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_DidJoinWithItems"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetGrabbingDisabled() {
            static BNM::Field<bool> _field = GetClass().GetField(O("grabbingDisabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::GamePlayer_HandData>* GetHands() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GamePlayer_HandData>*> _field = GetClass().GetField(O("hands"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::Transform*>* GetHandTransforms() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Transform*>*> _field = GetClass().GetField(O("handTransforms"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetLeftHand() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("leftHand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<void*>* GetLookupCacheActorNumToGamePlayer() {
            static BNM::Field<::BNM::Structures::Mono::Array<void*>*> _field = GetClass().GetField(O("lookupCache_actorNum_to_gamePlayer"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<void*>* GetLookupCacheRigInstanceIdToGamePlayer() {
            static BNM::Field<::BNM::Structures::Mono::Array<void*>*> _field = GetClass().GetField(O("lookupCache_rigInstanceId_to_gamePlayer"));
            return _field.Get();
        }
        ::GlobalNamespace::CallLimiter* GetNetGrabLimiter() {
            static BNM::Field<::GlobalNamespace::CallLimiter*> _field = GetClass().GetField(O("netGrabLimiter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CallLimiter* GetNetImpulseLimiter() {
            static BNM::Field<::GlobalNamespace::CallLimiter*> _field = GetClass().GetField(O("netImpulseLimiter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CallLimiter* GetNetSnapLimiter() {
            static BNM::Field<::GlobalNamespace::CallLimiter*> _field = GetClass().GetField(O("netSnapLimiter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CallLimiter* GetNetStateLimiter() {
            static BNM::Field<::GlobalNamespace::CallLimiter*> _field = GetClass().GetField(O("netStateLimiter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CallLimiter* GetNetThrowLimiter() {
            static BNM::Field<::GlobalNamespace::CallLimiter*> _field = GetClass().GetField(O("netThrowLimiter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CallLimiter* GetNewJoinZoneLimiter() {
            static BNM::Field<::GlobalNamespace::CallLimiter*> _field = GetClass().GetField(O("newJoinZoneLimiter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<>* GetOnPlayerInitialized() {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnPlayerInitialized"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<>* GetOnPlayerLeftZone() {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnPlayerLeftZone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::VRRig* GetRig() {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("rig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetRightHand() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("rightHand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SuperInfectionSnapPointManager* GetSnapPointManager() {
            static BNM::Field<::GlobalNamespace::SuperInfectionSnapPointManager*> _field = GetClass().GetField(O("snapPointManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static int GetStaticLookupCachesCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("staticLookupCachesCount"));
            return _field.Get();
        }
        void SetGrabbingDisabled(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("grabbingDisabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHands(::BNM::Structures::Mono::Array<::GlobalNamespace::GamePlayer_HandData>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GamePlayer_HandData>*> _field = GetClass().GetField(O("hands"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHandTransforms(::BNM::Structures::Mono::Array<::Transform*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Transform*>*> _field = GetClass().GetField(O("handTransforms"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftHand(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("leftHand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetLookupCacheActorNumToGamePlayer(::BNM::Structures::Mono::Array<void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<void*>*> _field = GetClass().GetField(O("lookupCache_actorNum_to_gamePlayer"));
            _field.Set(value);
        }
        static void SetLookupCacheRigInstanceIdToGamePlayer(::BNM::Structures::Mono::Array<void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<void*>*> _field = GetClass().GetField(O("lookupCache_rigInstanceId_to_gamePlayer"));
            _field.Set(value);
        }
        void SetNetGrabLimiter(::GlobalNamespace::CallLimiter* value) {
            static BNM::Field<::GlobalNamespace::CallLimiter*> _field = GetClass().GetField(O("netGrabLimiter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNetImpulseLimiter(::GlobalNamespace::CallLimiter* value) {
            static BNM::Field<::GlobalNamespace::CallLimiter*> _field = GetClass().GetField(O("netImpulseLimiter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNetSnapLimiter(::GlobalNamespace::CallLimiter* value) {
            static BNM::Field<::GlobalNamespace::CallLimiter*> _field = GetClass().GetField(O("netSnapLimiter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNetStateLimiter(::GlobalNamespace::CallLimiter* value) {
            static BNM::Field<::GlobalNamespace::CallLimiter*> _field = GetClass().GetField(O("netStateLimiter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNetThrowLimiter(::GlobalNamespace::CallLimiter* value) {
            static BNM::Field<::GlobalNamespace::CallLimiter*> _field = GetClass().GetField(O("netThrowLimiter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNewJoinZoneLimiter(::GlobalNamespace::CallLimiter* value) {
            static BNM::Field<::GlobalNamespace::CallLimiter*> _field = GetClass().GetField(O("newJoinZoneLimiter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnPlayerInitialized(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnPlayerInitialized"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnPlayerLeftZone(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnPlayerLeftZone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRig(::GlobalNamespace::VRRig* value) {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("rig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightHand(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("rightHand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSnapPointManager(::GlobalNamespace::SuperInfectionSnapPointManager* value) {
            static BNM::Field<::GlobalNamespace::SuperInfectionSnapPointManager*> _field = GetClass().GetField(O("snapPointManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetStaticLookupCachesCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("staticLookupCachesCount"));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Clear() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Clear"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ClearGrabbed(int handIndex) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearGrabbed"), {"handIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(handIndex);
        }
        void ClearGrabbedIfHeld(::GlobalNamespace::GameEntityId gameBallId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearGrabbedIfHeld"), {"gameBallId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(gameBallId);
        }
        void ClearSnapped(int handIndex) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearSnapped"), {"handIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(handIndex);
        }
        void ClearSnappedIfSnapped(::GlobalNamespace::GameEntityId gameBallId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearSnappedIfSnapped"), {"gameBallId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(gameBallId);
        }
        void ClearZone(::GlobalNamespace::GameEntityManager* manager) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearZone"), {"manager"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(manager);
        }
        void DeleteGrabbedEntityLocal(int handIndex) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DeleteGrabbedEntityLocal"), {"handIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(handIndex);
        }
        static void DeserializeNetworkState(::BNM::IL2CPP::Il2CppObject* reader, ::GlobalNamespace::GamePlayer* gamePlayer, ::GlobalNamespace::GameEntityManager* manager) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DeserializeNetworkState"), {"reader", "gamePlayer", "manager"});
            _m.Call(reader, gamePlayer, manager);
        }
        void DisableGrabbing(bool disable) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DisableGrabbing"), {"disable"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(disable);
        }
        int FindHandIndex(::GlobalNamespace::GameEntityId gameBallId) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("FindHandIndex"), {"gameBallId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(gameBallId);
        }
        int FindSnapIndex(::GlobalNamespace::GameEntityId gameBallId) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("FindSnapIndex"), {"gameBallId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(gameBallId);
        }
        bool get_AdditionalDataInitialized() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_AdditionalDataInitialized"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_DidJoinWithItems() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_DidJoinWithItems"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::GameEntityId GetGameBallId() {
            static BNM::Method<::GlobalNamespace::GameEntityId> _m = GetClass().GetMethod(O("GetGameBallId"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::GameEntityId GetGameEntityId(bool isLeftHand) {
            static BNM::Method<::GlobalNamespace::GameEntityId> _m = GetClass().GetMethod(O("GetGameEntityId"), {"isLeftHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(isLeftHand);
        }
        static ::GlobalNamespace::GamePlayer* GetGamePlayer(::Photon_Realtime::Player* player) {
            static BNM::Method<::GlobalNamespace::GamePlayer*> _m = GetClass().GetMethod(O("GetGamePlayer"), {"player"});
            return _m.Call(player);
        }
        static ::GlobalNamespace::GamePlayer* GetGamePlayer(int actorNumber) {
            static BNM::Method<::GlobalNamespace::GamePlayer*> _m = GetClass().GetMethod(O("GetGamePlayer"), {"actorNumber"});
            return _m.Call(actorNumber);
        }
        static ::GlobalNamespace::GamePlayer* GetGamePlayer(::GlobalNamespace::VRRig* rig) {
            static BNM::Method<::GlobalNamespace::GamePlayer*> _m = GetClass().GetMethod(O("GetGamePlayer"), {"rig"});
            return _m.Call(rig);
        }
        static ::GlobalNamespace::GamePlayer* GetGamePlayer(::Collider* collider, bool bodyOnly) {
            static BNM::Method<::GlobalNamespace::GamePlayer*> _m = GetClass().GetMethod(O("GetGamePlayer"), {"collider", "bodyOnly"});
            return _m.Call(collider, bodyOnly);
        }
        ::GlobalNamespace::GameEntity* GetGrabbedGameEntity(int handIndex) {
            static BNM::Method<::GlobalNamespace::GameEntity*> _m = GetClass().GetMethod(O("GetGrabbedGameEntity"), {"handIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(handIndex);
        }
        ::GlobalNamespace::GameEntityId GetGrabbedGameEntityId(int handIndex) {
            static BNM::Method<::GlobalNamespace::GameEntityId> _m = GetClass().GetMethod(O("GetGrabbedGameEntityId"), {"handIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(handIndex);
        }
        ::GlobalNamespace::GameEntityId GetGrabbedGameEntityIdAndManager(int handIndex, ::GlobalNamespace::GameEntityManager*& manager) {
            static BNM::Method<::GlobalNamespace::GameEntityId> _m = GetClass().GetMethod(O("GetGrabbedGameEntityIdAndManager"), {"handIndex", "manager"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(handIndex, &manager);
        }
        static int GetHandIndex(bool leftHand) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetHandIndex"), {"leftHand"});
            return _m.Call(leftHand);
        }
        static ::Transform* GetHandTransform(::GlobalNamespace::VRRig* rig, int handIndex) {
            static BNM::Method<::Transform*> _m = GetClass().GetMethod(O("GetHandTransform"), {"rig", "handIndex"});
            return _m.Call(rig, handIndex);
        }
        static ::GlobalNamespace::VRRig* GetRig_1(int actorNumber) {
            static BNM::Method<::GlobalNamespace::VRRig*> _m = GetClass().GetMethod(O("GetRig"), {"actorNumber"});
            return _m.Call(actorNumber);
        }
        ::GlobalNamespace::GameEntity* GetSnappedGameEntity(int handIndex) {
            static BNM::Method<::GlobalNamespace::GameEntity*> _m = GetClass().GetMethod(O("GetSnappedGameEntity"), {"handIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(handIndex);
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GameEntity*>* HeldAndSnappedEntities(::GlobalNamespace::GameEntityManager* ignoreEntitiesInManager) {
            static BNM::Method<::BNM::Structures::Mono::List<::GlobalNamespace::GameEntity*>*> _m = GetClass().GetMethod(O("HeldAndSnappedEntities"), {"ignoreEntitiesInManager"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(ignoreEntitiesInManager);
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GameEntityId>* HeldAndSnappedItems(::GlobalNamespace::GameEntityManager* manager) {
            static BNM::Method<::BNM::Structures::Mono::List<::GlobalNamespace::GameEntityId>*> _m = GetClass().GetMethod(O("HeldAndSnappedItems"), {"manager"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(manager);
        }
        static void InitializeStaticLookupCaches() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitializeStaticLookupCaches"));
            _m.Call();
        }
        bool IsGrabbingDisabled() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsGrabbingDisabled"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool IsHoldingEntity(::GlobalNamespace::GameEntityId gameEntityId) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsHoldingEntity"), {"gameEntityId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(gameEntityId);
        }
        bool IsHoldingEntity(::GlobalNamespace::GameEntityId gameEntityId, bool isLeftHand) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsHoldingEntity"), {"gameEntityId", "isLeftHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(gameEntityId, isLeftHand);
        }
        bool IsHoldingEntity(::GlobalNamespace::GameEntityManager* gameEntityManager, bool isLeftHand) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsHoldingEntity"), {"gameEntityManager", "isLeftHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(gameEntityManager, isLeftHand);
        }
        static bool IsLeftHand(int handIndex) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsLeftHand"), {"handIndex"});
            return _m.Call(handIndex);
        }
        bool IsLocal() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsLocal"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* IterateHeldAndSnappedEntities(::GlobalNamespace::GameEntityManager* ignoreEntitiesInManager) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("IterateHeldAndSnappedEntities"), {"ignoreEntitiesInManager"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(ignoreEntitiesInManager);
        }
        void* IterateHeldAndSnappedItems(::GlobalNamespace::GameEntityManager* manager) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("IterateHeldAndSnappedItems"), {"manager"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(manager);
        }
        void MigrateHeldActorNumbers() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("MigrateHeldActorNumbers"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        int MigrateToEntityManager(::GlobalNamespace::GameEntityManager* newEntityManager) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("MigrateToEntityManager"), {"newEntityManager"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(newEntityManager);
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RequestDropAllSnapped() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestDropAllSnapped"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ResetData() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetData"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SerializeNetworkState(::BNM::IL2CPP::Il2CppObject* writer, ::GlobalNamespace::NetPlayer* player, ::GlobalNamespace::GameEntityManager* manager) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SerializeNetworkState"), {"writer", "player", "manager"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(writer, player, manager);
        }
        void set_AdditionalDataInitialized(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_AdditionalDataInitialized"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_DidJoinWithItems(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_DidJoinWithItems"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetGrabbed(::GlobalNamespace::GameEntityId gameBallId, int handIndex, ::GlobalNamespace::GameEntityManager* gameEntityManager) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetGrabbed"), {"gameBallId", "handIndex", "gameEntityManager"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(gameBallId, handIndex, gameEntityManager);
        }
        void SetInitializePlayer(bool initialized) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetInitializePlayer"), {"initialized"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(initialized);
        }
        void SetSnapped(::GlobalNamespace::GameEntityId gameBallId, int handIndex, ::GlobalNamespace::GameEntityManager* gameEntityManager) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetSnapped"), {"gameBallId", "handIndex", "gameEntityManager"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(gameBallId, handIndex, gameEntityManager);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static bool TryGetGamePlayer(::Photon_Realtime::Player* player, ::GlobalNamespace::GamePlayer*& gamePlayer) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryGetGamePlayer"), {"player", "gamePlayer"});
            return _m.Call(player, &gamePlayer);
        }
        static bool TryGetGamePlayer(int actorNumber, ::GlobalNamespace::GamePlayer*& out_gamePlayer) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryGetGamePlayer"), {"actorNumber", "out_gamePlayer"});
            return _m.Call(actorNumber, &out_gamePlayer);
        }
        static bool TryGetGamePlayer(::GlobalNamespace::VRRig* rig, ::GlobalNamespace::GamePlayer*& out_gamePlayer) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryGetGamePlayer"), {"rig", "out_gamePlayer"});
            return _m.Call(rig, &out_gamePlayer);
        }
        static void UpdateStaticLookupCaches() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateStaticLookupCaches"));
            _m.Call();
        }
    };
}
