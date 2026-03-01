#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "CrittersActor_CrittersActorType.hpp"
#include "CrittersManager_AllowGrabbingFlags.hpp"
#include "CrittersManager_CritterEvent.hpp"
#include "NetworkComponent.hpp"
#include "../Photon_Pun/PhotonMessageInfo.hpp"

namespace GlobalNamespace {
    struct CrittersManager : ::GlobalNamespace::NetworkComponent {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CrittersManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::CrittersManager* GetInstance() {
            static BNM::Field<::GlobalNamespace::CrittersManager*> field = GetClass().GetField("instance");
            return field.Get();
        }
        bool GetAllowGrabbingEntireBag() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_allowGrabbingEntireBag"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetAllowGrabbingFromBags() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_allowGrabbingFromBags"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetAllowGrabbingOutOfHands() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_allowGrabbingOutOfHands"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetHasInstance() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_hasInstance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetHasInstance(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_hasInstance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetLocalInZone() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_LocalInZone"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
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
        void add_OnCritterEventReceived(::BNM::Structures::Mono::Action<::GlobalNamespace::CrittersManager_CritterEvent, int, ::BNM::Structures::Unity::Vector3, ::BNM::Structures::Unity::Quaternion>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnCritterEventReceived"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnCritterEventReceived(::BNM::Structures::Mono::Action<::GlobalNamespace::CrittersManager_CritterEvent, int, ::BNM::Structures::Unity::Vector3, ::BNM::Structures::Unity::Quaternion>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnCritterEventReceived"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        int GetCurrentRegionIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("_currentRegionIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GlobalNamespace::CrittersActorGrabber* GetLeftGrabber() {
            static BNM::Field<::GlobalNamespace::CrittersActorGrabber*> _field = GetClass().GetField(O("_leftGrabber"));
            return _field.Get();
        }
        static ::GlobalNamespace::CrittersActorGrabber* GetRightGrabber() {
            static BNM::Field<::GlobalNamespace::CrittersActorGrabber*> _field = GetClass().GetField(O("_rightGrabber"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::CrittersRegion*>* GetSpawnRegions() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::CrittersRegion*>*> _field = GetClass().GetField(O("_spawnRegions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::GlobalNamespace::CrittersActor*, int>* GetActorBinIndices() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::CrittersActor*, int>*> _field = GetClass().GetField(O("actorBinIndices"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>* GetActorBins() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("actorBins"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<int, ::GlobalNamespace::CrittersActor*>* GetActorById() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::GlobalNamespace::CrittersActor*>*> _field = GetClass().GetField(O("actorById"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::GlobalNamespace::CrittersActor_CrittersActorType, ::BNM::Structures::Mono::List<::GlobalNamespace::CrittersActor*>*>* GetActorPools() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::CrittersActor_CrittersActorType, ::BNM::Structures::Mono::List<::GlobalNamespace::CrittersActor*>*>*> _field = GetClass().GetField(O("actorPools"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetActorsInitializationCallCooldown() {
            static BNM::Field<float> _field = GetClass().GetField(O("actorsInitializationCallCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::Critters_Scripts::CrittersActorSpawner*>* GetActorSpawners() {
            static BNM::Field<::BNM::Structures::Mono::List<::Critters_Scripts::CrittersActorSpawner*>*> _field = GetClass().GetField(O("actorSpawners"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetActorsPerInitializationCall() {
            static BNM::Field<int> _field = GetClass().GetField(O("actorsPerInitializationCall"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::CrittersActor_CrittersActorType>* GetActorTypes() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::CrittersActor_CrittersActorType>*> _field = GetClass().GetField(O("actorTypes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::CrittersActor*>* GetAllActors() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::CrittersActor*>*> _field = GetClass().GetField(O("allActors"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetAllActorsCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("allActorsCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>* GetAllRigs() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>*> _field = GetClass().GetField(O("allRigs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::GlobalNamespace::CrittersPawn*, ::BNM::Structures::Mono::List<::GlobalNamespace::CrittersActor*>*>* GetAwareOfActors() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::CrittersPawn*, ::BNM::Structures::Mono::List<::GlobalNamespace::CrittersActor*>*>*> _field = GetClass().GetField(O("awareOfActors"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetBagPrefab() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("bagPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetBinDimensionXMin() {
            static BNM::Field<float> _field = GetClass().GetField(O("binDimensionXMin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetBinDimensionZMin() {
            static BNM::Field<float> _field = GetClass().GetField(O("binDimensionZMin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetBinXCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("binXCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetBinZCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("binZCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetBodyAttachPointPrefab() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("bodyAttachPointPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetCagePrefab() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("cagePrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetContainerLayer() {
            static BNM::Field<void*> _field = GetClass().GetField(O("containerLayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CritterIndex* GetCreatureIndex() {
            static BNM::Field<::GlobalNamespace::CritterIndex*> _field = GetClass().GetField(O("creatureIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetCreaturePrefab() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("creaturePrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CallLimiter* GetCritterEventCallLimit() {
            static BNM::Field<::GlobalNamespace::CallLimiter*> _field = GetClass().GetField(O("critterEventCallLimit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::CrittersActor*>* GetCrittersActors() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::CrittersActor*>*> _field = GetClass().GetField(O("crittersActors"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::CrittersPawn*>* GetCrittersPawns() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::CrittersPawn*>*> _field = GetClass().GetField(O("crittersPawns"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CrittersPool* GetCrittersPool() {
            static BNM::Field<::GlobalNamespace::CrittersPool*> _field = GetClass().GetField(O("crittersPool"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetCrittersRange() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("crittersRange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDamperAngularForce() {
            static BNM::Field<float> _field = GetClass().GetField(O("damperAngularForce"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDamperForce() {
            static BNM::Field<float> _field = GetClass().GetField(O("damperForce"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDecayRate() {
            static BNM::Field<float> _field = GetClass().GetField(O("decayRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::CrittersActor*>* GetDespawnableActors() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::CrittersActor*>*> _field = GetClass().GetField(O("despawnableActors"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::GlobalNamespace::CrittersActor_CrittersActorType, float>* GetDespawnDecayValue() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::CrittersActor_CrittersActorType, float>*> _field = GetClass().GetField(O("despawnDecayValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetDespawnIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("despawnIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetDespawnThreshold() {
            static BNM::Field<int> _field = GetClass().GetField(O("despawnThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFastThrowMultiplier() {
            static BNM::Field<float> _field = GetClass().GetField(O("fastThrowMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFastThrowThreshold() {
            static BNM::Field<float> _field = GetClass().GetField(O("fastThrowThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetFoodPrefab() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("foodPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetFoodSpawnerPrefab() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("foodSpawnerPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetGrabberPrefab() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("grabberPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::RequestableOwnershipGuard* GetGuard() {
            static BNM::Field<::GlobalNamespace::RequestableOwnershipGuard*> _field = GetClass().GetField(O("guard"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasNewlyInitialized() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasNewlyInitialized"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHeavyMass() {
            static BNM::Field<float> _field = GetClass().GetField(O("heavyMass"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetIndividualBinSide() {
            static BNM::Field<float> _field = GetClass().GetField(O("individualBinSide"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetInitRequestCooldown() {
            static BNM::Field<float> _field = GetClass().GetField(O("initRequestCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GlobalNamespace::CrittersManager* GetInstance_f() {
            static BNM::Field<::GlobalNamespace::CrittersManager*> _field = GetClass().GetField(O("instance"));
            return _field.Get();
        }
        bool GetIntialized() {
            static BNM::Field<bool> _field = GetClass().GetField(O("intialized"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLastRequest() {
            static BNM::Field<float> _field = GetClass().GetField(O("lastRequest"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetLastSpawnTime() {
            static BNM::Field<double> _field = GetClass().GetField(O("lastSpawnTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLightMass() {
            static BNM::Field<float> _field = GetClass().GetField(O("lightMass"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetLocalInZone_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("localInZone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLowPriorityActorsPerFrame() {
            static BNM::Field<int> _field = GetClass().GetField(O("lowPriorityActorsPerFrame"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLowPriorityIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("lowPriorityIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::CrittersActor*>* GetLowPriorityPawnsToProcess() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::CrittersActor*>*> _field = GetClass().GetField(O("lowPriorityPawnsToProcess"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxAttachSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("MaxAttachSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxGrabDistance() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxGrabDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetMovementLayers() {
            static BNM::Field<void*> _field = GetClass().GetField(O("movementLayers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::CrittersActor*>* GetNearbyActors() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::CrittersActor*>*> _field = GetClass().GetField(O("nearbyActors"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::CrittersActor*>* GetNewlyDisabledActors() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::CrittersActor*>*> _field = GetClass().GetField(O("newlyDisabledActors"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetNoiseMakerPrefab() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("noiseMakerPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetNoisePrefab() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("noisePrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetObjectLayers() {
            static BNM::Field<void*> _field = GetClass().GetField(O("objectLayers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<void*>* GetObjList() {
            static BNM::Field<::BNM::Structures::Mono::List<void*>*> _field = GetClass().GetField(O("objList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<::GlobalNamespace::CrittersManager_CritterEvent, int, ::BNM::Structures::Unity::Vector3, ::BNM::Structures::Unity::Quaternion>* GetOnCritterEventReceived() {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::CrittersManager_CritterEvent, int, ::BNM::Structures::Unity::Vector3, ::BNM::Structures::Unity::Quaternion>*> _field = GetClass().GetField(O("OnCritterEventReceived"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetOverlapDistanceMax() {
            static BNM::Field<float> _field = GetClass().GetField(O("overlapDistanceMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::CrittersActor*>* GetPersistentActors() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::CrittersActor*>*> _field = GetClass().GetField(O("persistentActors"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::NetPlayer*>* GetPlayersToUpdate() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::NetPlayer*>*> _field = GetClass().GetField(O("playersToUpdate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPoolCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("poolCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::GlobalNamespace::CrittersActor_CrittersActorType, int>* GetPoolCounts() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::CrittersActor_CrittersActorType, int>*> _field = GetClass().GetField(O("poolCounts"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::GlobalNamespace::CrittersActor_CrittersActorType, int>* GetPoolIndexDict() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::CrittersActor_CrittersActorType, int>*> _field = GetClass().GetField(O("poolIndexDict"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetPoolParent() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("poolParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<bool>* GetPriorityBins() {
            static BNM::Field<::BNM::Structures::Mono::Array<bool>*> _field = GetClass().GetField(O("priorityBins"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CrittersManager_AllowGrabbingFlags GetPrivateRoomGrabbingFlags() {
            static BNM::Field<::GlobalNamespace::CrittersManager_AllowGrabbingFlags> _field = GetClass().GetField(O("privateRoomGrabbingFlags"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CrittersManager_AllowGrabbingFlags GetPublicRoomGrabbingFlags() {
            static BNM::Field<::GlobalNamespace::CrittersManager_AllowGrabbingFlags> _field = GetClass().GetField(O("publicRoomGrabbingFlags"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetRigActorId() {
            static BNM::Field<int> _field = GetClass().GetField(O("rigActorId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::CrittersRigActorSetup*>* GetRigActorSetups() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::CrittersRigActorSetup*>*> _field = GetClass().GetField(O("rigActorSetups"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::GlobalNamespace::VRRig*, ::GlobalNamespace::CrittersRigActorSetup*>* GetRigSetupByRig() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::VRRig*, ::GlobalNamespace::CrittersRigActorSetup*>*> _field = GetClass().GetField(O("rigSetupByRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSoftJointGracePeriod() {
            static BNM::Field<float> _field = GetClass().GetField(O("softJointGracePeriod"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetSpawnDelay() {
            static BNM::Field<double> _field = GetClass().GetField(O("spawnDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSpawnerIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("spawnerIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSpringAngularForce() {
            static BNM::Field<float> _field = GetClass().GetField(O("springAngularForce"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSpringForce() {
            static BNM::Field<float> _field = GetClass().GetField(O("springForce"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetStickyGooPrefab() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("stickyGooPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetStickyTrapPrefab() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("stickyTrapPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetStunBombPrefab() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("stunBombPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetTotalBinsApproximate() {
            static BNM::Field<int> _field = GetClass().GetField(O("totalBinsApproximate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetUniversalActorId() {
            static BNM::Field<int> _field = GetClass().GetField(O("universalActorId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<int>* GetUpdatesToSend() {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("updatesToSend"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<int>* GetUpdatingPlayers() {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("updatingPlayers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetXLength() {
            static BNM::Field<float> _field = GetClass().GetField(O("xLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetZLength() {
            static BNM::Field<float> _field = GetClass().GetField(O("zLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCurrentRegionIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_currentRegionIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetLeftGrabber(::GlobalNamespace::CrittersActorGrabber* value) {
            static BNM::Field<::GlobalNamespace::CrittersActorGrabber*> _field = GetClass().GetField(O("_leftGrabber"));
            _field.Set(value);
        }
        static void SetRightGrabber(::GlobalNamespace::CrittersActorGrabber* value) {
            static BNM::Field<::GlobalNamespace::CrittersActorGrabber*> _field = GetClass().GetField(O("_rightGrabber"));
            _field.Set(value);
        }
        void SetSpawnRegions(::BNM::Structures::Mono::List<::GlobalNamespace::CrittersRegion*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::CrittersRegion*>*> _field = GetClass().GetField(O("_spawnRegions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetActorBinIndices(::BNM::Structures::Mono::Dictionary<::GlobalNamespace::CrittersActor*, int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::CrittersActor*, int>*> _field = GetClass().GetField(O("actorBinIndices"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetActorBins(::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("actorBins"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetActorById(::BNM::Structures::Mono::Dictionary<int, ::GlobalNamespace::CrittersActor*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::GlobalNamespace::CrittersActor*>*> _field = GetClass().GetField(O("actorById"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetActorPools(::BNM::Structures::Mono::Dictionary<::GlobalNamespace::CrittersActor_CrittersActorType, ::BNM::Structures::Mono::List<::GlobalNamespace::CrittersActor*>*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::CrittersActor_CrittersActorType, ::BNM::Structures::Mono::List<::GlobalNamespace::CrittersActor*>*>*> _field = GetClass().GetField(O("actorPools"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetActorsInitializationCallCooldown(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("actorsInitializationCallCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetActorSpawners(::BNM::Structures::Mono::List<::Critters_Scripts::CrittersActorSpawner*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::Critters_Scripts::CrittersActorSpawner*>*> _field = GetClass().GetField(O("actorSpawners"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetActorsPerInitializationCall(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("actorsPerInitializationCall"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetActorTypes(::BNM::Structures::Mono::Array<::GlobalNamespace::CrittersActor_CrittersActorType>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::CrittersActor_CrittersActorType>*> _field = GetClass().GetField(O("actorTypes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAllActors(::BNM::Structures::Mono::List<::GlobalNamespace::CrittersActor*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::CrittersActor*>*> _field = GetClass().GetField(O("allActors"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAllActorsCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("allActorsCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAllRigs(::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>*> _field = GetClass().GetField(O("allRigs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAwareOfActors(::BNM::Structures::Mono::Dictionary<::GlobalNamespace::CrittersPawn*, ::BNM::Structures::Mono::List<::GlobalNamespace::CrittersActor*>*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::CrittersPawn*, ::BNM::Structures::Mono::List<::GlobalNamespace::CrittersActor*>*>*> _field = GetClass().GetField(O("awareOfActors"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBagPrefab(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("bagPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBinDimensionXMin(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("binDimensionXMin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBinDimensionZMin(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("binDimensionZMin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBinXCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("binXCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBinZCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("binZCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBodyAttachPointPrefab(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("bodyAttachPointPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCagePrefab(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("cagePrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetContainerLayer(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("containerLayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCreatureIndex(::GlobalNamespace::CritterIndex* value) {
            static BNM::Field<::GlobalNamespace::CritterIndex*> _field = GetClass().GetField(O("creatureIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCreaturePrefab(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("creaturePrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCritterEventCallLimit(::GlobalNamespace::CallLimiter* value) {
            static BNM::Field<::GlobalNamespace::CallLimiter*> _field = GetClass().GetField(O("critterEventCallLimit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCrittersActors(::BNM::Structures::Mono::List<::GlobalNamespace::CrittersActor*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::CrittersActor*>*> _field = GetClass().GetField(O("crittersActors"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCrittersPawns(::BNM::Structures::Mono::List<::GlobalNamespace::CrittersPawn*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::CrittersPawn*>*> _field = GetClass().GetField(O("crittersPawns"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCrittersPool(::GlobalNamespace::CrittersPool* value) {
            static BNM::Field<::GlobalNamespace::CrittersPool*> _field = GetClass().GetField(O("crittersPool"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCrittersRange(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("crittersRange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDamperAngularForce(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("damperAngularForce"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDamperForce(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("damperForce"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDecayRate(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("decayRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDespawnableActors(::BNM::Structures::Mono::List<::GlobalNamespace::CrittersActor*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::CrittersActor*>*> _field = GetClass().GetField(O("despawnableActors"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDespawnDecayValue(::BNM::Structures::Mono::Dictionary<::GlobalNamespace::CrittersActor_CrittersActorType, float>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::CrittersActor_CrittersActorType, float>*> _field = GetClass().GetField(O("despawnDecayValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDespawnIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("despawnIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDespawnThreshold(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("despawnThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFastThrowMultiplier(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("fastThrowMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFastThrowThreshold(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("fastThrowThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFoodPrefab(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("foodPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFoodSpawnerPrefab(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("foodSpawnerPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGrabberPrefab(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("grabberPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGuard(::GlobalNamespace::RequestableOwnershipGuard* value) {
            static BNM::Field<::GlobalNamespace::RequestableOwnershipGuard*> _field = GetClass().GetField(O("guard"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasNewlyInitialized(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasNewlyInitialized"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHeavyMass(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("heavyMass"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIndividualBinSide(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("individualBinSide"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInitRequestCooldown(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("initRequestCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetInstance(::GlobalNamespace::CrittersManager* value) {
            static BNM::Field<::GlobalNamespace::CrittersManager*> _field = GetClass().GetField(O("instance"));
            _field.Set(value);
        }
        void SetIntialized(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("intialized"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastRequest(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lastRequest"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastSpawnTime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("lastSpawnTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLightMass(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lightMass"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLocalInZone(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("localInZone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLowPriorityActorsPerFrame(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("lowPriorityActorsPerFrame"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLowPriorityIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("lowPriorityIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLowPriorityPawnsToProcess(::BNM::Structures::Mono::List<::GlobalNamespace::CrittersActor*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::CrittersActor*>*> _field = GetClass().GetField(O("lowPriorityPawnsToProcess"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxAttachSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("MaxAttachSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxGrabDistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxGrabDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMovementLayers(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("movementLayers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNearbyActors(::BNM::Structures::Mono::List<::GlobalNamespace::CrittersActor*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::CrittersActor*>*> _field = GetClass().GetField(O("nearbyActors"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNewlyDisabledActors(::BNM::Structures::Mono::List<::GlobalNamespace::CrittersActor*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::CrittersActor*>*> _field = GetClass().GetField(O("newlyDisabledActors"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNoiseMakerPrefab(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("noiseMakerPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNoisePrefab(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("noisePrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetObjectLayers(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("objectLayers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetObjList(::BNM::Structures::Mono::List<void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<void*>*> _field = GetClass().GetField(O("objList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnCritterEventReceived(::BNM::Structures::Mono::Action<::GlobalNamespace::CrittersManager_CritterEvent, int, ::BNM::Structures::Unity::Vector3, ::BNM::Structures::Unity::Quaternion>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::CrittersManager_CritterEvent, int, ::BNM::Structures::Unity::Vector3, ::BNM::Structures::Unity::Quaternion>*> _field = GetClass().GetField(O("OnCritterEventReceived"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOverlapDistanceMax(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("overlapDistanceMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPersistentActors(::BNM::Structures::Mono::List<::GlobalNamespace::CrittersActor*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::CrittersActor*>*> _field = GetClass().GetField(O("persistentActors"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayersToUpdate(::BNM::Structures::Mono::List<::GlobalNamespace::NetPlayer*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::NetPlayer*>*> _field = GetClass().GetField(O("playersToUpdate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPoolCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("poolCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPoolCounts(::BNM::Structures::Mono::Dictionary<::GlobalNamespace::CrittersActor_CrittersActorType, int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::CrittersActor_CrittersActorType, int>*> _field = GetClass().GetField(O("poolCounts"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPoolIndexDict(::BNM::Structures::Mono::Dictionary<::GlobalNamespace::CrittersActor_CrittersActorType, int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::CrittersActor_CrittersActorType, int>*> _field = GetClass().GetField(O("poolIndexDict"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPoolParent(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("poolParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPriorityBins(::BNM::Structures::Mono::Array<bool>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<bool>*> _field = GetClass().GetField(O("priorityBins"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPrivateRoomGrabbingFlags(::GlobalNamespace::CrittersManager_AllowGrabbingFlags value) {
            static BNM::Field<::GlobalNamespace::CrittersManager_AllowGrabbingFlags> _field = GetClass().GetField(O("privateRoomGrabbingFlags"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPublicRoomGrabbingFlags(::GlobalNamespace::CrittersManager_AllowGrabbingFlags value) {
            static BNM::Field<::GlobalNamespace::CrittersManager_AllowGrabbingFlags> _field = GetClass().GetField(O("publicRoomGrabbingFlags"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRigActorId(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("rigActorId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRigActorSetups(::BNM::Structures::Mono::List<::GlobalNamespace::CrittersRigActorSetup*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::CrittersRigActorSetup*>*> _field = GetClass().GetField(O("rigActorSetups"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRigSetupByRig(::BNM::Structures::Mono::Dictionary<::GlobalNamespace::VRRig*, ::GlobalNamespace::CrittersRigActorSetup*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::VRRig*, ::GlobalNamespace::CrittersRigActorSetup*>*> _field = GetClass().GetField(O("rigSetupByRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSoftJointGracePeriod(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("softJointGracePeriod"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpawnDelay(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("spawnDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpawnerIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("spawnerIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpringAngularForce(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("springAngularForce"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpringForce(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("springForce"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStickyGooPrefab(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("stickyGooPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStickyTrapPrefab(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("stickyTrapPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStunBombPrefab(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("stunBombPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTotalBinsApproximate(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("totalBinsApproximate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUniversalActorId(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("universalActorId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUpdatesToSend(::BNM::Structures::Mono::List<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("updatesToSend"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUpdatingPlayers(::BNM::Structures::Mono::List<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("updatingPlayers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetXLength(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("xLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetZLength(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("zLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void add_OnCritterEventReceived_1(::BNM::Structures::Mono::Action<::GlobalNamespace::CrittersManager_CritterEvent, int, ::BNM::Structures::Unity::Vector3, ::BNM::Structures::Unity::Quaternion>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnCritterEventReceived"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        static bool AnyFoodNearby(::GlobalNamespace::CrittersPawn* creature) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("AnyFoodNearby"), {"creature"});
            return _m.Call(creature);
        }
        bool BuildValidationCheck() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("BuildValidationCheck"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void CamCapture() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CamCapture"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void CheckInitialize() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CheckInitialize"));
            _m.Call();
        }
        void CheckOwnership() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CheckOwnership"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CheckValidRemoteActorGrab(int actorBeingGrabbedActorID, int grabbingActorID, ::BNM::Structures::Unity::Quaternion offsetRotation, ::BNM::Structures::Unity::Vector3 offsetPosition, bool isGrabDisabled, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CheckValidRemoteActorGrab"), {"actorBeingGrabbedActorID", "grabbingActorID", "offsetRotation", "offsetPosition", "isGrabDisabled", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(actorBeingGrabbedActorID, grabbingActorID, offsetRotation, offsetPosition, isGrabDisabled, info);
        }
        void CheckValidRemoteActorRelease(int releasedActorID, bool keepWorldPosition, ::BNM::Structures::Unity::Quaternion rotation, ::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Vector3 velocity, ::BNM::Structures::Unity::Vector3 angularVelocity, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CheckValidRemoteActorRelease"), {"releasedActorID", "keepWorldPosition", "rotation", "position", "velocity", "angularVelocity", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(releasedActorID, keepWorldPosition, rotation, position, velocity, angularVelocity, info);
        }
        static ::GlobalNamespace::CrittersFood* ClosestFood(::GlobalNamespace::CrittersPawn* creature) {
            static BNM::Method<::GlobalNamespace::CrittersFood*> _m = GetClass().GetMethod(O("ClosestFood"), {"creature"});
            return _m.Call(creature);
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
        static bool CritterAwareOfAny(::GlobalNamespace::CrittersPawn* creature) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CritterAwareOfAny"), {"creature"});
            return _m.Call(creature);
        }
        void DeactivateActor(::GlobalNamespace::CrittersActor* actor) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DeactivateActor"), {"actor"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(actor);
        }
        void DecrementPoolCount(::GlobalNamespace::CrittersActor_CrittersActorType type) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DecrementPoolCount"), {"type"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(type);
        }
        ::BNM::Coroutine::IEnumerator* DelayedInitialization(::GlobalNamespace::NetPlayer* player, ::BNM::Structures::Mono::List<void*>* nonPlayerActorObjList) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("DelayedInitialization"), {"player", "nonPlayerActorObjList"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(player, nonPlayerActorObjList);
        }
        static void DeregisterActor(::GlobalNamespace::CrittersActor* actor) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DeregisterActor"), {"actor"});
            _m.Call(actor);
        }
        static void DeregisterCritter(::GlobalNamespace::CrittersPawn* crittersPawn) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DeregisterCritter"), {"crittersPawn"});
            _m.Call(crittersPawn);
        }
        void DespawnActor(::GlobalNamespace::CrittersActor* actor) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DespawnActor"), {"actor"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(actor);
        }
        void DespawnCritter(::GlobalNamespace::CrittersPawn* crittersPawn) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DespawnCritter"), {"crittersPawn"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(crittersPawn);
        }
        static ::BNM::IL2CPP::Il2CppObject* DuplicateCapsuleCollider(::Transform* targetTransform, ::BNM::IL2CPP::Il2CppObject* sourceCollider) {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("DuplicateCapsuleCollider"), {"targetTransform", "sourceCollider"});
            return _m.Call(targetTransform, sourceCollider);
        }
        bool get_allowGrabbingEntireBag() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_allowGrabbingEntireBag"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_allowGrabbingFromBags() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_allowGrabbingFromBags"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_allowGrabbingOutOfHands() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_allowGrabbingOutOfHands"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static bool get_hasInstance() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_hasInstance"));
            return _m.Call();
        }
        bool get_LocalInZone() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_LocalInZone"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_TickRunning() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_TickRunning"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int GetNextSpawnRegion() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetNextSpawnRegion"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void HandleZonesAndOwnership() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleZonesAndOwnership"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void IncrementPoolCount(::GlobalNamespace::CrittersActor_CrittersActorType type) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("IncrementPoolCount"), {"type"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(type);
        }
        static void InitializeCrittersManager() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitializeCrittersManager"));
            _m.Call();
        }
        void JoinedRoomEvent() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("JoinedRoomEvent"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void LeftRoomEvent() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LeftRoomEvent"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void LoadGrabSettings() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LoadGrabSettings"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool LocalAuthority() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("LocalAuthority"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
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
        void OwnerSentError(::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OwnerSentError"), {"info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(info);
        }
        static void PlayHaptics(::AudioClip* clip, float strength, bool isLeftHand) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayHaptics"), {"clip", "strength", "isLeftHand"});
            _m.Call(clip, strength, isLeftHand);
        }
        void PopulatePools() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PopulatePools"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ProcessActorBinLocations() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ProcessActorBinLocations"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ProcessActors() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ProcessActors"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ProcessCritterAwareness() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ProcessCritterAwareness"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ProcessDespawningIdles() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ProcessDespawningIdles"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ProcessNewlyDisabledActors() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ProcessNewlyDisabledActors"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ProcessRigSetups() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ProcessRigSetups"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ProcessSpawning() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ProcessSpawning"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void QueueDespawnAllCritters() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("QueueDespawnAllCritters"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
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
        static void RegisterActor(::GlobalNamespace::CrittersActor* actor) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RegisterActor"), {"actor"});
            _m.Call(actor);
        }
        static void RegisterCritter(::GlobalNamespace::CrittersPawn* crittersPawn) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RegisterCritter"), {"crittersPawn"});
            _m.Call(crittersPawn);
        }
        static void RegisterRigActorSetup(::GlobalNamespace::CrittersRigActorSetup* setup) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RegisterRigActorSetup"), {"setup"});
            _m.Call(setup);
        }
        void RemoteCritterActorReleased(int releasedActorID, bool keepWorldPosition, ::BNM::Structures::Unity::Quaternion rotation, ::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Vector3 velocity, ::BNM::Structures::Unity::Vector3 angularVelocity, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoteCritterActorReleased"), {"releasedActorID", "keepWorldPosition", "rotation", "position", "velocity", "angularVelocity", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(releasedActorID, keepWorldPosition, rotation, position, velocity, angularVelocity, info);
        }
        void RemoteCrittersActorGrabbedby(int grabbedActorID, int grabberActorID, ::BNM::Structures::Unity::Quaternion offsetRotation, ::BNM::Structures::Unity::Vector3 offsetPosition, bool isGrabDisabled, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoteCrittersActorGrabbedby"), {"grabbedActorID", "grabberActorID", "offsetRotation", "offsetPosition", "isGrabDisabled", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(grabbedActorID, grabberActorID, offsetRotation, offsetPosition, isGrabDisabled, info);
        }
        ::BNM::Coroutine::IEnumerator* RemoteDataInitialization(::GlobalNamespace::NetPlayer* player, int actorNumber) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("RemoteDataInitialization"), {"player", "actorNumber"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(player, actorNumber);
        }
        void RemoteReceivedCritterEvent(::GlobalNamespace::CrittersManager_CritterEvent eventType, int sourceActor, ::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Quaternion rotation, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoteReceivedCritterEvent"), {"eventType", "sourceActor", "position", "rotation", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(eventType, sourceActor, position, rotation, info);
        }
        void RemoteSpawnCreature(int actorID, int regionId, ::BNM::Structures::Mono::Array<void*>* spawnData, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoteSpawnCreature"), {"actorID", "regionId", "spawnData", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(actorID, regionId, spawnData, info);
        }
        void RemoteUpdateCritterData(::BNM::Structures::Mono::Array<void*>* data, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoteUpdateCritterData"), {"data", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(data, info);
        }
        void RemoteUpdatePlayerCrittersActorData(::BNM::Structures::Mono::Array<void*>* data, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoteUpdatePlayerCrittersActorData"), {"data", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(data, info);
        }
        void remove_OnCritterEventReceived_1(::BNM::Structures::Mono::Action<::GlobalNamespace::CrittersManager_CritterEvent, int, ::BNM::Structures::Unity::Vector3, ::BNM::Structures::Unity::Quaternion>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnCritterEventReceived"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void RemoveInitializingPlayer(int actorNumber) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveInitializingPlayer"), {"actorNumber"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(actorNumber);
        }
        void RequestDataInitialization(::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestDataInitialization"), {"info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(info);
        }
        void ResetRoom() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetRoom"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool SenderIsOwner(::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("SenderIsOwner"), {"info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(info);
        }
        static void set_hasInstance(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_hasInstance"), {"value"});
            _m.Call(value);
        }
        void set_TickRunning(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_TickRunning"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetCritterRegion(::GlobalNamespace::CrittersPawn* critter, ::GlobalNamespace::CrittersRegion* region) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetCritterRegion"), {"critter", "region"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(critter, region);
        }
        void SetCritterRegion(::GlobalNamespace::CrittersPawn* critter, int regionId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetCritterRegion"), {"critter", "regionId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(critter, regionId);
        }
        ::GlobalNamespace::CrittersActor* SpawnActor(::GlobalNamespace::CrittersActor_CrittersActorType type, int subObjectIndex) {
            static BNM::Method<::GlobalNamespace::CrittersActor*> _m = GetClass().GetMethod(O("SpawnActor"), {"type", "subObjectIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(type, subObjectIndex);
        }
        ::GlobalNamespace::CrittersPawn* SpawnCritter(int regionIndex) {
            static BNM::Method<::GlobalNamespace::CrittersPawn*> _m = GetClass().GetMethod(O("SpawnCritter"), {"regionIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(regionIndex);
        }
        ::GlobalNamespace::CrittersPawn* SpawnCritter(int critterType, ::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Quaternion rotation) {
            static BNM::Method<::GlobalNamespace::CrittersPawn*> _m = GetClass().GetMethod(O("SpawnCritter"), {"critterType", "position", "rotation"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(critterType, position, rotation);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void StopHaptics(bool isLeftHand) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StopHaptics"), {"isLeftHand"});
            _m.Call(isLeftHand);
        }
        void Tick() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Tick"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::GlobalNamespace::CrittersActor* TopLevelCritterGrabber(::GlobalNamespace::CrittersActor* baseActor) {
            static BNM::Method<::GlobalNamespace::CrittersActor*> _m = GetClass().GetMethod(O("TopLevelCritterGrabber"), {"baseActor"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(baseActor);
        }
        void TriggerEvent(::GlobalNamespace::CrittersManager_CritterEvent eventType, int sourceActor, ::BNM::Structures::Unity::Vector3 position) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TriggerEvent"), {"eventType", "sourceActor", "position"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(eventType, sourceActor, position);
        }
        void TriggerEvent(::GlobalNamespace::CrittersManager_CritterEvent eventType, int sourceActor, ::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Quaternion rotation) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TriggerEvent"), {"eventType", "sourceActor", "position", "rotation"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(eventType, sourceActor, position, rotation);
        }
        bool UpdateActorByType(::Photon_Pun::PhotonStream* stream) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("UpdateActorByType"), {"stream"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(stream);
        }
        template <typename T>
        void UpdatePool(::BNM::IL2CPP::Il2CppObject*& dict, ::GameObject* prefab, ::GlobalNamespace::CrittersActor_CrittersActorType crittersActorType, ::Transform* parent, int poolAmount, ::BNM::Structures::Mono::List<::GlobalNamespace::CrittersActor*>* sceneActors) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdatePool"), {"dict", "prefab", "crittersActorType", "parent", "poolAmount", "sceneActors"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&dict, prefab, crittersActorType, parent, poolAmount, sceneActors);
        }
        template <typename T, typename TP0 = void*>
        static bool ValidateDataType(TP0 obj, T& dataAsType) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ValidateDataType"), {"obj", "dataAsType"});
            return _m.Call(obj, &dataAsType);
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
