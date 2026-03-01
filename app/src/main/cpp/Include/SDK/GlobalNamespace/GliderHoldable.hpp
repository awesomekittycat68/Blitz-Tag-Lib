#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GliderHoldable_CosmeticMaterialOverride.hpp"
#include "GliderHoldable_GliderState.hpp"
#include "GliderHoldable_SyncedState.hpp"
#include "NetworkHoldableObject.hpp"
#include "../Photon_Pun/PhotonMessageInfo.hpp"

namespace GlobalNamespace {
    struct GliderHoldable : ::GlobalNamespace::NetworkHoldableObject {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GliderHoldable");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr float accelAveragingWindow = 0.1f;
        ::GlobalNamespace::GliderHoldable_SyncedState GetData() {
            static BNM::Method<::GlobalNamespace::GliderHoldable_SyncedState> _method = GetClass().GetMethod(O("get_Data"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetData(::GlobalNamespace::GliderHoldable_SyncedState value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Data"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetOutOfBounds() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_OutOfBounds"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetTwoHanded() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_TwoHanded"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::GliderHoldable_SyncedState GetData_f() {
            static BNM::Field<::GlobalNamespace::GliderHoldable_SyncedState> _field = GetClass().GetField(O("_Data"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::AverageVector3* GetAccelerationAverage() {
            static BNM::Field<::GlobalNamespace::AverageVector3*> _field = GetClass().GetField(O("accelerationAverage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetAccelerationSmoothed() {
            static BNM::Field<float> _field = GetClass().GetField(O("accelerationSmoothed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetAccelSmoothingFollowRate() {
            static BNM::Field<float> _field = GetClass().GetField(O("accelSmoothingFollowRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetAccelSmoothingFollowRateExp() {
            static BNM::Field<float> _field = GetClass().GetField(O("accelSmoothingFollowRateExp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetActiveAudio() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("activeAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetAttackDragFactor() {
            static BNM::Field<float> _field = GetClass().GetField(O("attackDragFactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetAudioLevel() {
            static BNM::Field<float> _field = GetClass().GetField(O("audioLevel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetAudioVolumeMultiplier() {
            static BNM::Field<float> _field = GetClass().GetField(O("audioVolumeMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetBaseLeafMaterial() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("baseLeafMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::VRRig* GetCachedRig() {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("cachedRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetCalmAudio() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("calmAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::GliderHoldable_CosmeticMaterialOverride>* GetCosmeticMaterialOverrides() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GliderHoldable_CosmeticMaterialOverride>*> _field = GetClass().GetField(O("cosmeticMaterialOverrides"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetCurrentVelocity() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("currentVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDebugDrawTagRange() {
            static BNM::Field<bool> _field = GetClass().GetField(O("debugDrawTagRange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDefaultMaxDistanceBeforeRespawn() {
            static BNM::Field<float> _field = GetClass().GetField(O("defaultMaxDistanceBeforeRespawn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetDragVsAttack() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("dragVsAttack"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetDragVsSpeed() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("dragVsSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDragVsSpeedDragFactor() {
            static BNM::Field<float> _field = GetClass().GetField(O("dragVsSpeedDragFactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDragVsSpeedMaxSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("dragVsSpeedMaxSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetExtendTagRangeInFlight() {
            static BNM::Field<bool> _field = GetClass().GetField(O("extendTagRangeInFlight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFallingGravityReduction() {
            static BNM::Field<float> _field = GetClass().GetField(O("fallingGravityReduction"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetFrozenLeafMaterial() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("frozenLeafMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GliderHoldable_GliderState GetGliderState() {
            static BNM::Field<::GlobalNamespace::GliderHoldable_GliderState> _field = GetClass().GetField(O("gliderState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetGravityCompensation() {
            static BNM::Field<float> _field = GetClass().GetField(O("gravityCompensation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetGravityUprightTorqueMultiplier() {
            static BNM::Field<float> _field = GetClass().GetField(O("gravityUprightTorqueMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::InteractionPoint* GetHandle() {
            static BNM::Field<::GlobalNamespace::InteractionPoint*> _field = GetClass().GetField(O("handle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector2 GetHapticAccelInputRange() {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("hapticAccelInputRange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHapticAccelOutputMax() {
            static BNM::Field<float> _field = GetClass().GetField(O("hapticAccelOutputMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector2 GetHapticMaxSpeedInputRange() {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("hapticMaxSpeedInputRange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector2 GetHapticSpeedInputRange() {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("hapticSpeedInputRange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHapticSpeedOutputMax() {
            static BNM::Field<float> _field = GetClass().GetField(O("hapticSpeedOutputMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHoldingTwoGliders() {
            static BNM::Field<bool> _field = GetClass().GetField(O("holdingTwoGliders"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetInfectedAudioVolumeMultiplier() {
            static BNM::Field<float> _field = GetClass().GetField(O("infectedAudioVolumeMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetInfectedLeafMaterial() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("infectedLeafMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetInfectedSpeedIncrease() {
            static BNM::Field<float> _field = GetClass().GetField(O("infectedSpeedIncrease"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetInfectedState() {
            static BNM::Field<bool> _field = GetClass().GetField(O("infectedState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLastHeldTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("lastHeldTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::MeshRenderer* GetLeafMesh() {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("leafMesh"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GliderHoldable_HoldingHand* GetLeftHold() {
            static BNM::Field<::GlobalNamespace::GliderHoldable_HoldingHand*> _field = GetClass().GetField(O("leftHold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetLeftHoldPositionLocal() {
            static BNM::Field<void*> _field = GetClass().GetField(O("leftHoldPositionLocal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetLeftWhooshAudio() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("leftWhooshAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetLeftWhooshHitPoint() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("leftWhooshHitPoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLeftWhooshStartTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("leftWhooshStartTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetLiftIncreaseVsRoll() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("liftIncreaseVsRoll"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLiftIncreaseVsRollMaxAngle() {
            static BNM::Field<float> _field = GetClass().GetField(O("liftIncreaseVsRollMaxAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetLiftVsAttack() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("liftVsAttack"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxDistanceBeforeRespawn() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxDistanceBeforeRespawn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetMaxDistanceRespawnOrigin() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("maxDistanceRespawnOrigin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxDroppedTimeToRespawn() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxDroppedTimeToRespawn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxSlipOverrideSpeedThreshold() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxSlipOverrideSpeedThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetNetworkSyncFollowRate() {
            static BNM::Field<float> _field = GetClass().GetField(O("networkSyncFollowRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetNetworkSyncFollowRateExp() {
            static BNM::Field<float> _field = GetClass().GetField(O("networkSyncFollowRateExp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetOneHandHoldRotationRate() {
            static BNM::Field<float> _field = GetClass().GetField(O("oneHandHoldRotationRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetOneHandPitchMultiplier() {
            static BNM::Field<float> _field = GetClass().GetField(O("oneHandPitchMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetOneHandRotationRateExp() {
            static BNM::Field<float> _field = GetClass().GetField(O("oneHandRotationRateExp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetOneHandSimulatedHoldOffset() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("oneHandSimulatedHoldOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::RequestableOwnershipGuard* GetOwnershipGuard() {
            static BNM::Field<::GlobalNamespace::RequestableOwnershipGuard*> _field = GetClass().GetField(O("ownershipGuard"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetPendingOwnershipRequest() {
            static BNM::Field<bool> _field = GetClass().GetField(O("pendingOwnershipRequest"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPitch() {
            static BNM::Field<float> _field = GetClass().GetField(O("pitch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPitchHalfLife() {
            static BNM::Field<float> _field = GetClass().GetField(O("pitchHalfLife"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector2 GetPitchMinMax() {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("pitchMinMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPitchVel() {
            static BNM::Field<float> _field = GetClass().GetField(O("pitchVel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPitchVelocityFollowRateAngle() {
            static BNM::Field<float> _field = GetClass().GetField(O("pitchVelocityFollowRateAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPitchVelocityFollowRateMagnitude() {
            static BNM::Field<float> _field = GetClass().GetField(O("pitchVelocityFollowRateMagnitude"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector2 GetPitchVelocityRampTimeMinMax() {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("pitchVelocityRampTimeMinMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector2 GetPitchVelocityTargetMinMax() {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("pitchVelocityTargetMinMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Quaternion GetPlayerFacingRotationOffset() {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("playerFacingRotationOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetPositionLocalToVRRig() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("positionLocalToVRRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetPreviousVelocity() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("previousVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPullUpLiftActivationAcceleration() {
            static BNM::Field<float> _field = GetClass().GetField(O("pullUpLiftActivationAcceleration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPullUpLiftActivationVelocity() {
            static BNM::Field<float> _field = GetClass().GetField(O("pullUpLiftActivationVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPullUpLiftBonus() {
            static BNM::Field<float> _field = GetClass().GetField(O("pullUpLiftBonus"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Rigidbody* GetRb() {
            static BNM::Field<::Rigidbody*> _field = GetClass().GetField(O("rb"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetReenableOwnershipRequestCoroutine() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("reenableOwnershipRequestCoroutine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetRiderId() {
            static BNM::Field<int> _field = GetClass().GetField(O("riderId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRiderPosDirectPitchMax() {
            static BNM::Field<float> _field = GetClass().GetField(O("riderPosDirectPitchMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector2 GetRiderPosition() {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("riderPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector2 GetRiderPosRange() {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("riderPosRange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector2 GetRiderPosRangeNormalizedDeadzone() {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("riderPosRangeNormalizedDeadzone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRiderPosRangeOffset() {
            static BNM::Field<float> _field = GetClass().GetField(O("riderPosRangeOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetRidersMaterialOverideIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("ridersMaterialOverideIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GliderHoldable_HoldingHand* GetRightHold() {
            static BNM::Field<::GlobalNamespace::GliderHoldable_HoldingHand*> _field = GetClass().GetField(O("rightHold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetRightHoldPositionLocal() {
            static BNM::Field<void*> _field = GetClass().GetField(O("rightHoldPositionLocal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetRightWhooshAudio() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("rightWhooshAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetRightWhooshHitPoint() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("rightWhooshHitPoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRightWhooshStartTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("rightWhooshStartTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRoll() {
            static BNM::Field<float> _field = GetClass().GetField(O("roll"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector2 GetRollMinMax() {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("rollMinMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRollVel() {
            static BNM::Field<float> _field = GetClass().GetField(O("rollVel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Quaternion GetRotationLocalToVRRig() {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("rotationLocalToVRRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetSetMaxHandSlipDuringFlight() {
            static BNM::Field<bool> _field = GetClass().GetField(O("setMaxHandSlipDuringFlight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetSkyJungleRespawnOrigin() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("skyJungleRespawnOrigin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetSkyJungleSpawnPostion() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("skyJungleSpawnPostion"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Quaternion GetSkyJungleSpawnRotation() {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("skyJungleSpawnRotation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetSpawnPosition() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("spawnPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Quaternion GetSpawnRotation() {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("spawnRotation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSubtlePlayerPitch() {
            static BNM::Field<float> _field = GetClass().GetField(O("subtlePlayerPitch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector2 GetSubtlePlayerPitchAccelMinMax() {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("subtlePlayerPitchAccelMinMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetSubtlePlayerPitchActive() {
            static BNM::Field<bool> _field = GetClass().GetField(O("subtlePlayerPitchActive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSubtlePlayerPitchFactor() {
            static BNM::Field<float> _field = GetClass().GetField(O("subtlePlayerPitchFactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSubtlePlayerPitchRate() {
            static BNM::Field<float> _field = GetClass().GetField(O("subtlePlayerPitchRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSubtlePlayerPitchRateExp() {
            static BNM::Field<float> _field = GetClass().GetField(O("subtlePlayerPitchRateExp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSubtlePlayerRoll() {
            static BNM::Field<float> _field = GetClass().GetField(O("subtlePlayerRoll"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector2 GetSubtlePlayerRollAccelMinMax() {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("subtlePlayerRollAccelMinMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetSubtlePlayerRollActive() {
            static BNM::Field<bool> _field = GetClass().GetField(O("subtlePlayerRollActive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSubtlePlayerRollFactor() {
            static BNM::Field<float> _field = GetClass().GetField(O("subtlePlayerRollFactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSubtlePlayerRollRate() {
            static BNM::Field<float> _field = GetClass().GetField(O("subtlePlayerRollRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSubtlePlayerRollRateExp() {
            static BNM::Field<float> _field = GetClass().GetField(O("subtlePlayerRollRateExp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector2 GetSubtlePlayerRotationSpeedRampMinMax() {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("subtlePlayerRotationSpeedRampMinMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GliderHoldable_SyncedState GetSyncedState() {
            static BNM::Field<::GlobalNamespace::GliderHoldable_SyncedState> _field = GetClass().GetField(O("syncedState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector2 GetTagRangeOutput() {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("tagRangeOutput"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector2 GetTagRangeSpeedInput() {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("tagRangeSpeedInput"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTurnAccelerationSmoothed() {
            static BNM::Field<float> _field = GetClass().GetField(O("turnAccelerationSmoothed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetTwoHandGliderInversionOnYawInsteadOfRoll() {
            static BNM::Field<bool> _field = GetClass().GetField(O("twoHandGliderInversionOnYawInsteadOfRoll"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTwoHandHoldRotationRate() {
            static BNM::Field<float> _field = GetClass().GetField(O("twoHandHoldRotationRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTwoHandRotationOffsetAngle() {
            static BNM::Field<float> _field = GetClass().GetField(O("twoHandRotationOffsetAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetTwoHandRotationOffsetAxis() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("twoHandRotationOffsetAxis"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTwoHandRotationRateExp() {
            static BNM::Field<float> _field = GetClass().GetField(O("twoHandRotationRateExp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetWhistlingAudio() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("whistlingAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector2 GetWhistlingAudioSpeedInputRange() {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("whistlingAudioSpeedInputRange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetWhooshAudioPositionOffset() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("whooshAudioPositionOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetWhooshCheckDistance() {
            static BNM::Field<float> _field = GetClass().GetField(O("whooshCheckDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetWhooshSoundDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("whooshSoundDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetWhooshSoundRetriggerThreshold() {
            static BNM::Field<float> _field = GetClass().GetField(O("whooshSoundRetriggerThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector2 GetWhooshSpeedThresholdInput() {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("whooshSpeedThresholdInput"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector2 GetWhooshVolumeOutput() {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("whooshVolumeOutput"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetWindUprightTorqueMultiplier() {
            static BNM::Field<float> _field = GetClass().GetField(O("windUprightTorqueMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetWindVolumeForceAppliedFrame() {
            static BNM::Field<int> _field = GetClass().GetField(O("windVolumeForceAppliedFrame"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetYaw() {
            static BNM::Field<float> _field = GetClass().GetField(O("yaw"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetYawVel() {
            static BNM::Field<float> _field = GetClass().GetField(O("yawVel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetData_fs(::GlobalNamespace::GliderHoldable_SyncedState value) {
            static BNM::Field<::GlobalNamespace::GliderHoldable_SyncedState> _field = GetClass().GetField(O("_Data"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAccelerationAverage(::GlobalNamespace::AverageVector3* value) {
            static BNM::Field<::GlobalNamespace::AverageVector3*> _field = GetClass().GetField(O("accelerationAverage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAccelerationSmoothed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("accelerationSmoothed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAccelSmoothingFollowRate(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("accelSmoothingFollowRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAccelSmoothingFollowRateExp(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("accelSmoothingFollowRateExp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetActiveAudio(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("activeAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAttackDragFactor(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("attackDragFactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAudioLevel(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("audioLevel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAudioVolumeMultiplier(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("audioVolumeMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBaseLeafMaterial(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("baseLeafMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCachedRig(::GlobalNamespace::VRRig* value) {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("cachedRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCalmAudio(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("calmAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCosmeticMaterialOverrides(::BNM::Structures::Mono::Array<::GlobalNamespace::GliderHoldable_CosmeticMaterialOverride>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GliderHoldable_CosmeticMaterialOverride>*> _field = GetClass().GetField(O("cosmeticMaterialOverrides"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentVelocity(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("currentVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDebugDrawTagRange(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("debugDrawTagRange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDefaultMaxDistanceBeforeRespawn(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("defaultMaxDistanceBeforeRespawn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDragVsAttack(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("dragVsAttack"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDragVsSpeed(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("dragVsSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDragVsSpeedDragFactor(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("dragVsSpeedDragFactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDragVsSpeedMaxSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("dragVsSpeedMaxSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetExtendTagRangeInFlight(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("extendTagRangeInFlight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFallingGravityReduction(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("fallingGravityReduction"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFrozenLeafMaterial(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("frozenLeafMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGliderState(::GlobalNamespace::GliderHoldable_GliderState value) {
            static BNM::Field<::GlobalNamespace::GliderHoldable_GliderState> _field = GetClass().GetField(O("gliderState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGravityCompensation(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("gravityCompensation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGravityUprightTorqueMultiplier(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("gravityUprightTorqueMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHandle(::GlobalNamespace::InteractionPoint* value) {
            static BNM::Field<::GlobalNamespace::InteractionPoint*> _field = GetClass().GetField(O("handle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHapticAccelInputRange(::BNM::Structures::Unity::Vector2 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("hapticAccelInputRange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHapticAccelOutputMax(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("hapticAccelOutputMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHapticMaxSpeedInputRange(::BNM::Structures::Unity::Vector2 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("hapticMaxSpeedInputRange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHapticSpeedInputRange(::BNM::Structures::Unity::Vector2 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("hapticSpeedInputRange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHapticSpeedOutputMax(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("hapticSpeedOutputMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHoldingTwoGliders(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("holdingTwoGliders"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInfectedAudioVolumeMultiplier(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("infectedAudioVolumeMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInfectedLeafMaterial(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("infectedLeafMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInfectedSpeedIncrease(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("infectedSpeedIncrease"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInfectedState(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("infectedState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastHeldTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lastHeldTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeafMesh(::MeshRenderer* value) {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("leafMesh"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftHold(::GlobalNamespace::GliderHoldable_HoldingHand* value) {
            static BNM::Field<::GlobalNamespace::GliderHoldable_HoldingHand*> _field = GetClass().GetField(O("leftHold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftHoldPositionLocal(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("leftHoldPositionLocal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftWhooshAudio(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("leftWhooshAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftWhooshHitPoint(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("leftWhooshHitPoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftWhooshStartTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("leftWhooshStartTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLiftIncreaseVsRoll(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("liftIncreaseVsRoll"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLiftIncreaseVsRollMaxAngle(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("liftIncreaseVsRollMaxAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLiftVsAttack(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("liftVsAttack"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxDistanceBeforeRespawn(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxDistanceBeforeRespawn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxDistanceRespawnOrigin(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("maxDistanceRespawnOrigin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxDroppedTimeToRespawn(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxDroppedTimeToRespawn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxSlipOverrideSpeedThreshold(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxSlipOverrideSpeedThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNetworkSyncFollowRate(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("networkSyncFollowRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNetworkSyncFollowRateExp(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("networkSyncFollowRateExp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOneHandHoldRotationRate(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("oneHandHoldRotationRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOneHandPitchMultiplier(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("oneHandPitchMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOneHandRotationRateExp(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("oneHandRotationRateExp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOneHandSimulatedHoldOffset(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("oneHandSimulatedHoldOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOwnershipGuard(::GlobalNamespace::RequestableOwnershipGuard* value) {
            static BNM::Field<::GlobalNamespace::RequestableOwnershipGuard*> _field = GetClass().GetField(O("ownershipGuard"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPendingOwnershipRequest(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("pendingOwnershipRequest"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPitch(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("pitch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPitchHalfLife(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("pitchHalfLife"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPitchMinMax(::BNM::Structures::Unity::Vector2 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("pitchMinMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPitchVel(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("pitchVel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPitchVelocityFollowRateAngle(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("pitchVelocityFollowRateAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPitchVelocityFollowRateMagnitude(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("pitchVelocityFollowRateMagnitude"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPitchVelocityRampTimeMinMax(::BNM::Structures::Unity::Vector2 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("pitchVelocityRampTimeMinMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPitchVelocityTargetMinMax(::BNM::Structures::Unity::Vector2 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("pitchVelocityTargetMinMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerFacingRotationOffset(::BNM::Structures::Unity::Quaternion value) {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("playerFacingRotationOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPositionLocalToVRRig(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("positionLocalToVRRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPreviousVelocity(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("previousVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPullUpLiftActivationAcceleration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("pullUpLiftActivationAcceleration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPullUpLiftActivationVelocity(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("pullUpLiftActivationVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPullUpLiftBonus(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("pullUpLiftBonus"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRb(::Rigidbody* value) {
            static BNM::Field<::Rigidbody*> _field = GetClass().GetField(O("rb"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReenableOwnershipRequestCoroutine(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("reenableOwnershipRequestCoroutine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRiderId(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("riderId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRiderPosDirectPitchMax(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("riderPosDirectPitchMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRiderPosition(::BNM::Structures::Unity::Vector2 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("riderPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRiderPosRange(::BNM::Structures::Unity::Vector2 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("riderPosRange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRiderPosRangeNormalizedDeadzone(::BNM::Structures::Unity::Vector2 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("riderPosRangeNormalizedDeadzone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRiderPosRangeOffset(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("riderPosRangeOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRidersMaterialOverideIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("ridersMaterialOverideIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightHold(::GlobalNamespace::GliderHoldable_HoldingHand* value) {
            static BNM::Field<::GlobalNamespace::GliderHoldable_HoldingHand*> _field = GetClass().GetField(O("rightHold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightHoldPositionLocal(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("rightHoldPositionLocal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightWhooshAudio(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("rightWhooshAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightWhooshHitPoint(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("rightWhooshHitPoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightWhooshStartTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("rightWhooshStartTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRoll(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("roll"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRollMinMax(::BNM::Structures::Unity::Vector2 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("rollMinMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRollVel(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("rollVel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRotationLocalToVRRig(::BNM::Structures::Unity::Quaternion value) {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("rotationLocalToVRRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSetMaxHandSlipDuringFlight(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("setMaxHandSlipDuringFlight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSkyJungleRespawnOrigin(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("skyJungleRespawnOrigin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSkyJungleSpawnPostion(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("skyJungleSpawnPostion"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSkyJungleSpawnRotation(::BNM::Structures::Unity::Quaternion value) {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("skyJungleSpawnRotation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpawnPosition(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("spawnPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpawnRotation(::BNM::Structures::Unity::Quaternion value) {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("spawnRotation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSubtlePlayerPitch(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("subtlePlayerPitch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSubtlePlayerPitchAccelMinMax(::BNM::Structures::Unity::Vector2 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("subtlePlayerPitchAccelMinMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSubtlePlayerPitchActive(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("subtlePlayerPitchActive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSubtlePlayerPitchFactor(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("subtlePlayerPitchFactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSubtlePlayerPitchRate(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("subtlePlayerPitchRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSubtlePlayerPitchRateExp(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("subtlePlayerPitchRateExp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSubtlePlayerRoll(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("subtlePlayerRoll"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSubtlePlayerRollAccelMinMax(::BNM::Structures::Unity::Vector2 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("subtlePlayerRollAccelMinMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSubtlePlayerRollActive(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("subtlePlayerRollActive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSubtlePlayerRollFactor(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("subtlePlayerRollFactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSubtlePlayerRollRate(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("subtlePlayerRollRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSubtlePlayerRollRateExp(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("subtlePlayerRollRateExp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSubtlePlayerRotationSpeedRampMinMax(::BNM::Structures::Unity::Vector2 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("subtlePlayerRotationSpeedRampMinMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSyncedState(::GlobalNamespace::GliderHoldable_SyncedState value) {
            static BNM::Field<::GlobalNamespace::GliderHoldable_SyncedState> _field = GetClass().GetField(O("syncedState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTagRangeOutput(::BNM::Structures::Unity::Vector2 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("tagRangeOutput"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTagRangeSpeedInput(::BNM::Structures::Unity::Vector2 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("tagRangeSpeedInput"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTurnAccelerationSmoothed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("turnAccelerationSmoothed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTwoHandGliderInversionOnYawInsteadOfRoll(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("twoHandGliderInversionOnYawInsteadOfRoll"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTwoHandHoldRotationRate(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("twoHandHoldRotationRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTwoHandRotationOffsetAngle(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("twoHandRotationOffsetAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTwoHandRotationOffsetAxis(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("twoHandRotationOffsetAxis"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTwoHandRotationRateExp(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("twoHandRotationRateExp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWhistlingAudio(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("whistlingAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWhistlingAudioSpeedInputRange(::BNM::Structures::Unity::Vector2 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("whistlingAudioSpeedInputRange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWhooshAudioPositionOffset(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("whooshAudioPositionOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWhooshCheckDistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("whooshCheckDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWhooshSoundDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("whooshSoundDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWhooshSoundRetriggerThreshold(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("whooshSoundRetriggerThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWhooshSpeedThresholdInput(::BNM::Structures::Unity::Vector2 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("whooshSpeedThresholdInput"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWhooshVolumeOutput(::BNM::Structures::Unity::Vector2 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("whooshVolumeOutput"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWindUprightTorqueMultiplier(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("windUprightTorqueMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWindVolumeForceAppliedFrame(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("windVolumeForceAppliedFrame"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetYaw(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("yaw"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetYawVel(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("yawVel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AuthorityUpdate(float dt) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AuthorityUpdate"), {"dt"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(dt);
        }
        void AuthorityUpdateHeld(float dt) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AuthorityUpdateHeld"), {"dt"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(dt);
        }
        void AuthorityUpdateUnheld(float dt) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AuthorityUpdateUnheld"), {"dt"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(dt);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Structures::Unity::Vector3 ClosestPointInHandle(::BNM::Structures::Unity::Vector3 startingPoint, ::GlobalNamespace::InteractionPoint* interactionPoint) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("ClosestPointInHandle"), {"startingPoint", "interactionPoint"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(startingPoint, interactionPoint);
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
        void CustomMapLoad(::Transform* placeholderTransform, float respawnDistance) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CustomMapLoad"), {"placeholderTransform", "respawnDistance"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(placeholderTransform, respawnDistance);
        }
        void CustomMapUnload() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CustomMapUnload"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void DropItemCleanup() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DropItemCleanup"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void FixedUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FixedUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::GlobalNamespace::GliderHoldable_SyncedState get_Data() {
            static BNM::Method<::GlobalNamespace::GliderHoldable_SyncedState> _m = GetClass().GetMethod(O("get_Data"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_OutOfBounds() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_OutOfBounds"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_TwoHanded() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_TwoHanded"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void GetHandsOrientationVectors(::BNM::Structures::Unity::Vector3 leftHandPos, ::BNM::Structures::Unity::Vector3 rightHandPos, ::Transform* head, bool flipBasedOnFacingDir, ::BNM::Structures::Unity::Vector3& handsVector, ::BNM::Structures::Unity::Vector3& handsUpVector) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetHandsOrientationVectors"), {"leftHandPos", "rightHandPos", "head", "flipBasedOnFacingDir", "handsVector", "handsUpVector"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(leftHandPos, rightHandPos, head, flipBasedOnFacingDir, &handsVector, &handsUpVector);
        }
        ::BNM::Structures::Unity::Vector3 GetHandsVector(::BNM::Structures::Unity::Vector3 leftHandPos, ::BNM::Structures::Unity::Vector3 rightHandPos, ::BNM::Structures::Unity::Vector3 headPos, bool flipBasedOnFacingDir) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("GetHandsVector"), {"leftHandPos", "rightHandPos", "headPos", "flipBasedOnFacingDir"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(leftHandPos, rightHandPos, headPos, flipBasedOnFacingDir);
        }
        ::Material* GetInfectedMaterial() {
            static BNM::Method<::Material*> _m = GetClass().GetMethod(O("GetInfectedMaterial"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Material* GetMaterialFromIndex(uint8_t materialIndex) {
            static BNM::Method<::Material*> _m = GetClass().GetMethod(O("GetMaterialFromIndex"), {"materialIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(materialIndex);
        }
        ::GlobalNamespace::VRRig* getNewHolderRig(int riderId) {
            static BNM::Method<::GlobalNamespace::VRRig*> _m = GetClass().GetMethod(O("getNewHolderRig"), {"riderId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(riderId);
        }
        float GetRollAngle180Wrapping() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("GetRollAngle180Wrapping"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void LateUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LateUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        float NormalizeAngle180(float angle) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("NormalizeAngle180"), {"angle"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(angle);
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
        void OnGrab(::GlobalNamespace::InteractionPoint* pointGrabbed, ::GameObject* grabbingHand) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnGrab"), {"pointGrabbed", "grabbingHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pointGrabbed, grabbingHand);
        }
        void OnGrabAuthority(::GlobalNamespace::InteractionPoint* pointGrabbed, ::GameObject* grabbingHand) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnGrabAuthority"), {"pointGrabbed", "grabbingHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pointGrabbed, grabbingHand);
        }
        void OnHover(::GlobalNamespace::InteractionPoint* pointHovered, ::GameObject* hoveringHand) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnHover"), {"pointHovered", "hoveringHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pointHovered, hoveringHand);
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
        bool OnRelease(::GlobalNamespace::DropZone* zoneReleased, ::GameObject* releasingHand) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("OnRelease"), {"zoneReleased", "releasingHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(zoneReleased, releasingHand);
        }
        void OnTriggerStay(::Collider* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTriggerStay"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(other);
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
        ::BNM::Coroutine::IEnumerator* ReenableOwnershipRequest() {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("ReenableOwnershipRequest"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void RemoteSyncUpdate(float dt) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoteSyncUpdate"), {"dt"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(dt);
        }
        void Respawn() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Respawn"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void set_Data(::GlobalNamespace::GliderHoldable_SyncedState value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Data"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        float SignedAngleInPlane(::BNM::Structures::Unity::Vector3 from, ::BNM::Structures::Unity::Vector3 to, ::BNM::Structures::Unity::Vector3 normal) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("SignedAngleInPlane"), {"from", "to", "normal"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(from, to, normal);
        }
        void UpdateAudioSource(::AudioSource* source, float level) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateAudioSource"), {"source", "level"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(source, level);
        }
        void UpdateGliderPosition() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateGliderPosition"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Structures::Unity::Vector3 WindResistanceForceOffset(::BNM::Structures::Unity::Vector3 upDir, ::BNM::Structures::Unity::Vector3 windDir) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("WindResistanceForceOffset"), {"upDir", "windDir"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(upDir, windDir);
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
