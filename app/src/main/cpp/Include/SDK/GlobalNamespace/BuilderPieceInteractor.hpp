#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "BuilderPieceInteractor_HandState.hpp"
#include "BuilderPieceInteractor_HandType.hpp"
#include "../GorillaTagScripts/BuilderPotentialPlacement.hpp"

namespace GlobalNamespace {
    struct BuilderPieceInteractor : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "BuilderPieceInteractor");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::BuilderPieceInteractor* GetInstance() {
            static BNM::Field<::GlobalNamespace::BuilderPieceInteractor*> field = GetClass().GetField("instance");
            return field.Get();
        }
        static constexpr int NUM_HANDS = 2;
        static constexpr int MAX_SPHERE_CHECK_RESULTS = 1024;
        static constexpr float GRAB_CAST_RADIUS = 0.0375f;
        static constexpr int MAX_GRAB_CAST_RESULTS = 64;
        static constexpr int MAX_GRID_PLANES = 8192;
        static constexpr float PIECE_DISTANCE_DISABLE = 0.15f;
        static constexpr float PIECE_DISTANCE_ENABLE = 0.2f;
        static ::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>* GetAllPotentialPlacements() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("allPotentialPlacements"));
            return _field.Get();
        }
        void* GetCheckNearbyPiecesHandle() {
            static BNM::Field<void*> _field = GetClass().GetField(O("checkNearbyPiecesHandle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetCheckPiecesInSphere() {
            static BNM::Field<void*> _field = GetClass().GetField(O("checkPiecesInSphere"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetCheckPiecesInSphereResults() {
            static BNM::Field<void*> _field = GetClass().GetField(O("checkPiecesInSphereResults"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GameObject*>* GetCollisionDisabledPiecesLeft() {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("collisionDisabledPiecesLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GameObject*>* GetCollisionDisabledPiecesRight() {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("collisionDisabledPiecesRight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts::BuilderTable* GetCurrentTable() {
            static BNM::Field<::GorillaTagScripts::BuilderTable*> _field = GetClass().GetField(O("currentTable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<float>* GetDelayedPlacementTime() {
            static BNM::Field<::BNM::Structures::Mono::List<float>*> _field = GetClass().GetField(O("delayedPlacementTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GorillaTagScripts::BuilderPotentialPlacement>* GetDelayedPotentialPlacement() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTagScripts::BuilderPotentialPlacement>*> _field = GetClass().GetField(O("delayedPotentialPlacement"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::RaycastHit GetEmptyRaycastHit() {
            static BNM::Field<::BNM::Structures::Unity::RaycastHit> _field = GetClass().GetField(O("emptyRaycastHit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::EquipmentInteractor* GetEquipmentInteractor() {
            static BNM::Field<::GlobalNamespace::EquipmentInteractor*> _field = GetClass().GetField(O("equipmentInteractor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetFindNearbyJobHandle() {
            static BNM::Field<void*> _field = GetClass().GetField(O("findNearbyJobHandle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetFindPiecesToGrab() {
            static BNM::Field<void*> _field = GetClass().GetField(O("findPiecesToGrab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::BuilderBumpGlow* GetGlowBumpPrefab() {
            static BNM::Field<::GlobalNamespace::BuilderBumpGlow*> _field = GetClass().GetField(O("glowBumpPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderBumpGlow*>*>* GetGlowBumps() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderBumpGlow*>*>*> _field = GetClass().GetField(O("glowBumps"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetGrabSphereCast() {
            static BNM::Field<void*> _field = GetClass().GetField(O("grabSphereCast"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetGrabSphereCastResults() {
            static BNM::Field<void*> _field = GetClass().GetField(O("grabSphereCastResults"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<void*>* GetHandGridPlaneData() {
            static BNM::Field<::BNM::Structures::Mono::Array<void*>*> _field = GetClass().GetField(O("handGridPlaneData"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<void*>* GetHandPieceData() {
            static BNM::Field<::BNM::Structures::Mono::Array<void*>*> _field = GetClass().GetField(O("handPieceData"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPieceInteractor_HandState>* GetHandState() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPieceInteractor_HandState>*> _field = GetClass().GetField(O("handState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static bool GetHasInstance() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasInstance"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::BNM::Structures::Mono::Array<int>*>* GetHeldChainCost() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::Array<int>*>*> _field = GetClass().GetField(O("heldChainCost"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<int>* GetHeldChainLength() {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("heldChainLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::BNM::Structures::Unity::Vector3>* GetHeldCurrentPos() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Unity::Vector3>*> _field = GetClass().GetField(O("heldCurrentPos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::BNM::Structures::Unity::Quaternion>* GetHeldCurrentRot() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Unity::Quaternion>*> _field = GetClass().GetField(O("heldCurrentRot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::BNM::Structures::Unity::Vector3>* GetHeldInitialPos() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Unity::Vector3>*> _field = GetClass().GetField(O("heldInitialPos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::BNM::Structures::Unity::Quaternion>* GetHeldInitialRot() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Unity::Quaternion>*> _field = GetClass().GetField(O("heldInitialRot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPiece*>* GetHeldPiece() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPiece*>*> _field = GetClass().GetField(O("heldPiece"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GlobalNamespace::BuilderPieceInteractor* GetInstance_f() {
            static BNM::Field<::GlobalNamespace::BuilderPieceInteractor*> _field = GetClass().GetField(O("instance"));
            return _field.Get();
        }
        bool GetIsRigSmall() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isRigSmall"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::BuilderLaserSight*>* GetLaserSight() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderLaserSight*>*> _field = GetClass().GetField(O("laserSight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::BuilderLaserSight* GetLaserSightLeft() {
            static BNM::Field<::GlobalNamespace::BuilderLaserSight*> _field = GetClass().GetField(O("laserSightLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::BuilderLaserSight* GetLaserSightRight() {
            static BNM::Field<::GlobalNamespace::BuilderLaserSight*> _field = GetClass().GetField(O("laserSightRight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<void*>* GetLocalAttachableGridPlaneData() {
            static BNM::Field<::BNM::Structures::Mono::Array<void*>*> _field = GetClass().GetField(O("localAttachableGridPlaneData"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<void*>* GetLocalAttachablePieceData() {
            static BNM::Field<::BNM::Structures::Mono::Array<void*>*> _field = GetClass().GetField(O("localAttachablePieceData"));
            return _field.Get();
        }
        int GetMaxHoldablePieceStackCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("maxHoldablePieceStackCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<float>* GetPotentialGrabbedOffsetDist() {
            static BNM::Field<::BNM::Structures::Mono::List<float>*> _field = GetClass().GetField(O("potentialGrabbedOffsetDist"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPiece*>* GetPotentialHeldPiece() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPiece*>*> _field = GetClass().GetField(O("potentialHeldPiece"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GorillaTagScripts::BuilderPotentialPlacement>* GetPrevPotentialPlacement() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTagScripts::BuilderPotentialPlacement>*> _field = GetClass().GetField(O("prevPotentialPlacement"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<::Collider*>* GetTempDisableColliders() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Collider*>*> _field = GetClass().GetField(O("tempDisableColliders"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<::BNM::Structures::Unity::RaycastHit>* GetTempHitResults() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::RaycastHit>*> _field = GetClass().GetField(O("tempHitResults"));
            return _field.Get();
        }
        static void* GetTempPieceSet() {
            static BNM::Field<void*> _field = GetClass().GetField(O("tempPieceSet"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GorillaVelocityEstimator*>* GetVelocityEstimator() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GorillaVelocityEstimator*>*> _field = GetClass().GetField(O("velocityEstimator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaVelocityEstimator* GetVelocityEstimatorLeft() {
            static BNM::Field<::GlobalNamespace::GorillaVelocityEstimator*> _field = GetClass().GetField(O("velocityEstimatorLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaVelocityEstimator* GetVelocityEstimatorRight() {
            static BNM::Field<::GlobalNamespace::GorillaVelocityEstimator*> _field = GetClass().GetField(O("velocityEstimatorRight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static void SetAllPotentialPlacements(::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("allPotentialPlacements"));
            _field.Set(value);
        }
        void SetCheckNearbyPiecesHandle(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("checkNearbyPiecesHandle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCheckPiecesInSphere(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("checkPiecesInSphere"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCheckPiecesInSphereResults(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("checkPiecesInSphereResults"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCollisionDisabledPiecesLeft(::BNM::Structures::Mono::List<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("collisionDisabledPiecesLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCollisionDisabledPiecesRight(::BNM::Structures::Mono::List<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("collisionDisabledPiecesRight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentTable(::GorillaTagScripts::BuilderTable* value) {
            static BNM::Field<::GorillaTagScripts::BuilderTable*> _field = GetClass().GetField(O("currentTable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDelayedPlacementTime(::BNM::Structures::Mono::List<float>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<float>*> _field = GetClass().GetField(O("delayedPlacementTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDelayedPotentialPlacement(::BNM::Structures::Mono::List<::GorillaTagScripts::BuilderPotentialPlacement>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTagScripts::BuilderPotentialPlacement>*> _field = GetClass().GetField(O("delayedPotentialPlacement"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEmptyRaycastHit(::BNM::Structures::Unity::RaycastHit value) {
            static BNM::Field<::BNM::Structures::Unity::RaycastHit> _field = GetClass().GetField(O("emptyRaycastHit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEquipmentInteractor(::GlobalNamespace::EquipmentInteractor* value) {
            static BNM::Field<::GlobalNamespace::EquipmentInteractor*> _field = GetClass().GetField(O("equipmentInteractor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFindNearbyJobHandle(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("findNearbyJobHandle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFindPiecesToGrab(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("findPiecesToGrab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGlowBumpPrefab(::GlobalNamespace::BuilderBumpGlow* value) {
            static BNM::Field<::GlobalNamespace::BuilderBumpGlow*> _field = GetClass().GetField(O("glowBumpPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGlowBumps(::BNM::Structures::Mono::List<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderBumpGlow*>*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderBumpGlow*>*>*> _field = GetClass().GetField(O("glowBumps"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGrabSphereCast(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("grabSphereCast"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGrabSphereCastResults(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("grabSphereCastResults"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetHandGridPlaneData(::BNM::Structures::Mono::Array<void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<void*>*> _field = GetClass().GetField(O("handGridPlaneData"));
            _field.Set(value);
        }
        static void SetHandPieceData(::BNM::Structures::Mono::Array<void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<void*>*> _field = GetClass().GetField(O("handPieceData"));
            _field.Set(value);
        }
        void SetHandState(::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPieceInteractor_HandState>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPieceInteractor_HandState>*> _field = GetClass().GetField(O("handState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetHasInstance(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasInstance"));
            _field.Set(value);
        }
        void SetHeldChainCost(::BNM::Structures::Mono::List<::BNM::Structures::Mono::Array<int>*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::Array<int>*>*> _field = GetClass().GetField(O("heldChainCost"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHeldChainLength(::BNM::Structures::Mono::Array<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("heldChainLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHeldCurrentPos(::BNM::Structures::Mono::List<::BNM::Structures::Unity::Vector3>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Unity::Vector3>*> _field = GetClass().GetField(O("heldCurrentPos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHeldCurrentRot(::BNM::Structures::Mono::List<::BNM::Structures::Unity::Quaternion>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Unity::Quaternion>*> _field = GetClass().GetField(O("heldCurrentRot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHeldInitialPos(::BNM::Structures::Mono::List<::BNM::Structures::Unity::Vector3>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Unity::Vector3>*> _field = GetClass().GetField(O("heldInitialPos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHeldInitialRot(::BNM::Structures::Mono::List<::BNM::Structures::Unity::Quaternion>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Unity::Quaternion>*> _field = GetClass().GetField(O("heldInitialRot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHeldPiece(::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPiece*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPiece*>*> _field = GetClass().GetField(O("heldPiece"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetInstance(::GlobalNamespace::BuilderPieceInteractor* value) {
            static BNM::Field<::GlobalNamespace::BuilderPieceInteractor*> _field = GetClass().GetField(O("instance"));
            _field.Set(value);
        }
        void SetIsRigSmall(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isRigSmall"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLaserSight(::BNM::Structures::Mono::List<::GlobalNamespace::BuilderLaserSight*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderLaserSight*>*> _field = GetClass().GetField(O("laserSight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLaserSightLeft(::GlobalNamespace::BuilderLaserSight* value) {
            static BNM::Field<::GlobalNamespace::BuilderLaserSight*> _field = GetClass().GetField(O("laserSightLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLaserSightRight(::GlobalNamespace::BuilderLaserSight* value) {
            static BNM::Field<::GlobalNamespace::BuilderLaserSight*> _field = GetClass().GetField(O("laserSightRight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetLocalAttachableGridPlaneData(::BNM::Structures::Mono::Array<void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<void*>*> _field = GetClass().GetField(O("localAttachableGridPlaneData"));
            _field.Set(value);
        }
        static void SetLocalAttachablePieceData(::BNM::Structures::Mono::Array<void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<void*>*> _field = GetClass().GetField(O("localAttachablePieceData"));
            _field.Set(value);
        }
        void SetMaxHoldablePieceStackCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("maxHoldablePieceStackCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPotentialGrabbedOffsetDist(::BNM::Structures::Mono::List<float>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<float>*> _field = GetClass().GetField(O("potentialGrabbedOffsetDist"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPotentialHeldPiece(::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPiece*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPiece*>*> _field = GetClass().GetField(O("potentialHeldPiece"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPrevPotentialPlacement(::BNM::Structures::Mono::List<::GorillaTagScripts::BuilderPotentialPlacement>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTagScripts::BuilderPotentialPlacement>*> _field = GetClass().GetField(O("prevPotentialPlacement"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetTempDisableColliders(::BNM::Structures::Mono::Array<::Collider*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Collider*>*> _field = GetClass().GetField(O("tempDisableColliders"));
            _field.Set(value);
        }
        static void SetTempHitResults(::BNM::Structures::Mono::Array<::BNM::Structures::Unity::RaycastHit>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::RaycastHit>*> _field = GetClass().GetField(O("tempHitResults"));
            _field.Set(value);
        }
        static void SetTempPieceSet(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("tempPieceSet"));
            _field.Set(value);
        }
        void SetVelocityEstimator(::BNM::Structures::Mono::List<::GlobalNamespace::GorillaVelocityEstimator*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GorillaVelocityEstimator*>*> _field = GetClass().GetField(O("velocityEstimator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVelocityEstimatorLeft(::GlobalNamespace::GorillaVelocityEstimator* value) {
            static BNM::Field<::GlobalNamespace::GorillaVelocityEstimator*> _field = GetClass().GetField(O("velocityEstimatorLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVelocityEstimatorRight(::GlobalNamespace::GorillaVelocityEstimator* value) {
            static BNM::Field<::GlobalNamespace::GorillaVelocityEstimator*> _field = GetClass().GetField(O("velocityEstimatorRight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AddGlowBumps(int handIndex, ::BNM::Structures::Mono::List<::GorillaTagScripts::BuilderPotentialPlacement>* allPotentialPlacements) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddGlowBumps"), {"handIndex", "allPotentialPlacements"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(handIndex, allPotentialPlacements);
        }
        void AddPieceToHand(::GlobalNamespace::BuilderPiece* piece, int handIndex, ::BNM::Structures::Unity::Vector3 localPosition, ::BNM::Structures::Unity::Quaternion localRotation) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddPieceToHand"), {"piece", "handIndex", "localPosition", "localRotation"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(piece, handIndex, localPosition, localRotation);
        }
        void AddPieceToHeld(::GlobalNamespace::BuilderPiece* piece, bool isLeft, ::BNM::Structures::Unity::Vector3 localPosition, ::BNM::Structures::Unity::Quaternion localRotation) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddPieceToHeld"), {"piece", "isLeft", "localPosition", "localRotation"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(piece, isLeft, localPosition, localRotation);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool BlockSnowballCreation() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("BlockSnowballCreation"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void CalcLocalGridPlanes() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CalcLocalGridPlanes"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CalcPieceLocalPosAndRot(::BNM::Structures::Unity::Vector3 worldPosition, ::BNM::Structures::Unity::Quaternion worldRotation, ::Transform* attachPoint, ::BNM::Structures::Unity::Vector3& localPosition, ::BNM::Structures::Unity::Quaternion& localRotation) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CalcPieceLocalPosAndRot"), {"worldPosition", "worldRotation", "attachPoint", "localPosition", "localRotation"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(worldPosition, worldRotation, attachPoint, &localPosition, &localRotation);
        }
        void ClearGlowBumps(int handIndex) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearGlowBumps"), {"handIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(handIndex);
        }
        void ClearUnSnapOffset(int handIndex, ::GlobalNamespace::BuilderPiece* potentialGrabPiece) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearUnSnapOffset"), {"handIndex", "potentialGrabPiece"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(handIndex, potentialGrabPiece);
        }
        void DisableCollisionsWithHand(bool leftHand) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DisableCollisionsWithHand"), {"leftHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(leftHand);
        }
        void DisableCollisionsWithHands() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DisableCollisionsWithHands"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        template <typename TP0 = void*>
        bool GetIsHolding(TP0 node) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("GetIsHolding"), {"node"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(node);
        }
        void OnCountChangedForRoot(::GlobalNamespace::BuilderPiece* piece) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnCountChangedForRoot"), {"piece"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(piece);
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnLateUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnLateUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PreInteract() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PreInteract"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RemovePieceFromHand(::GlobalNamespace::BuilderPiece* piece, int handIndex) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemovePieceFromHand"), {"piece", "handIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(piece, handIndex);
        }
        void RemovePieceFromHeld(::GlobalNamespace::BuilderPiece* piece) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemovePieceFromHeld"), {"piece"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(piece);
        }
        void RemovePiecesFromHands() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemovePiecesFromHands"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetHandState_1(int handIndex, ::GlobalNamespace::BuilderPieceInteractor_HandState newState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetHandState"), {"handIndex", "newState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(handIndex, newState);
        }
        void StartFindNearbyPieces() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StartFindNearbyPieces"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateGlowBumps(int handIndex, float intensity) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateGlowBumps"), {"handIndex", "intensity"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(handIndex, intensity);
        }
        template <typename TP6 = void*>
        void UpdateHandState(::GlobalNamespace::BuilderPieceInteractor_HandType handType, ::Transform* handTransform, ::BNM::Structures::Unity::Vector3 palmForwardLocal, ::Transform* handAttachPoint, bool isGrabbing, bool wasGrabPressed, TP6 heldEquipment, bool grabDisabled) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateHandState"), {"handType", "handTransform", "palmForwardLocal", "handAttachPoint", "isGrabbing", "wasGrabPressed", "heldEquipment", "grabDisabled"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(handType, handTransform, palmForwardLocal, handAttachPoint, isGrabbing, wasGrabPressed, heldEquipment, grabDisabled);
        }
        void UpdatePieceDisables() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdatePieceDisables"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdatePieceDisablesForHand(bool leftHand) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdatePieceDisablesForHand"), {"leftHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(leftHand);
        }
        void UpdatePullApartOffset(int handIndex, ::GlobalNamespace::BuilderPiece* potentialGrabPiece, ::BNM::Structures::Unity::Vector3 pullApartDiff) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdatePullApartOffset"), {"handIndex", "potentialGrabPiece", "pullApartDiff"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(handIndex, potentialGrabPiece, pullApartDiff);
        }
    };
}
