#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaLocomotion {
    struct GTPlayer_HandState : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaLocomotion", "GTPlayer").GetInnerClass("HandState");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Unity::Vector3 GetBoostVectorThisFrame() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("boostVectorThisFrame"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetCanStun() {
            static BNM::Field<bool> _field = GetClass().GetField(O("canStun"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetCanTag() {
            static BNM::Field<bool> _field = GetClass().GetField(O("canTag"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetControllerTransform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("controllerTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCustomBoostFactor() {
            static BNM::Field<float> _field = GetClass().GetField(O("customBoostFactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetFinalPositionThisFrame() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("finalPositionThisFrame"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaLocomotion::GTPlayer* GetGtPlayer() {
            static BNM::Field<::GorillaLocomotion::GTPlayer*> _field = GetClass().GetField(O("gtPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetHandFollower() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("handFollower"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetHandOffset() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("handOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Quaternion GetHandRotOffset() {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("handRotOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasCustomBoost() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasCustomBoost"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::RaycastHit GetHitInfo() {
            static BNM::Field<::BNM::Structures::Unity::RaycastHit> _field = GetClass().GetField(O("hitInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetHitPoint() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("hitPoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaLocomotion_Climbing::GorillaVelocityTracker* GetInteractPointVelocityTracker() {
            static BNM::Field<::GorillaLocomotion_Climbing::GorillaVelocityTracker*> _field = GetClass().GetField(O("interactPointVelocityTracker"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsActive() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isActive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsColliding() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isColliding"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsHolding() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isHolding"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsLeftHand() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isLeftHand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsSliding() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isSliding"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::RaycastHit GetLastHitInfo() {
            static BNM::Field<::BNM::Structures::Unity::RaycastHit> _field = GetClass().GetField(O("lastHitInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetLastPosition() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("lastPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Quaternion GetLastRotation() {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("lastRotation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMaterialTouchIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("materialTouchIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxArmLength() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxArmLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetSlideNormal() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("slideNormal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSlipPercentage() {
            static BNM::Field<float> _field = GetClass().GetField(O("slipPercentage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSlipSetToMaxFrameIdx() {
            static BNM::Field<int> _field = GetClass().GetField(O("slipSetToMaxFrameIdx"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaSurfaceOverride* GetSurfaceOverride() {
            static BNM::Field<::GlobalNamespace::GorillaSurfaceOverride*> _field = GetClass().GetField(O("surfaceOverride"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTempFreezeUntilTimestamp() {
            static BNM::Field<float> _field = GetClass().GetField(O("tempFreezeUntilTimestamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaLocomotion_Climbing::GorillaVelocityTracker* GetVelocityTracker() {
            static BNM::Field<::GorillaLocomotion_Climbing::GorillaVelocityTracker*> _field = GetClass().GetField(O("velocityTracker"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetWasColliding() {
            static BNM::Field<bool> _field = GetClass().GetField(O("wasColliding"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetWasSliding() {
            static BNM::Field<bool> _field = GetClass().GetField(O("wasSliding"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBoostVectorThisFrame(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("boostVectorThisFrame"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCanStun(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("canStun"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCanTag(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("canTag"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetControllerTransform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("controllerTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCustomBoostFactor(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("customBoostFactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFinalPositionThisFrame(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("finalPositionThisFrame"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGtPlayer(::GorillaLocomotion::GTPlayer* value) {
            static BNM::Field<::GorillaLocomotion::GTPlayer*> _field = GetClass().GetField(O("gtPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHandFollower(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("handFollower"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHandOffset(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("handOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHandRotOffset(::BNM::Structures::Unity::Quaternion value) {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("handRotOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasCustomBoost(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasCustomBoost"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHitInfo(::BNM::Structures::Unity::RaycastHit value) {
            static BNM::Field<::BNM::Structures::Unity::RaycastHit> _field = GetClass().GetField(O("hitInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHitPoint(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("hitPoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInteractPointVelocityTracker(::GorillaLocomotion_Climbing::GorillaVelocityTracker* value) {
            static BNM::Field<::GorillaLocomotion_Climbing::GorillaVelocityTracker*> _field = GetClass().GetField(O("interactPointVelocityTracker"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsActive(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isActive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsColliding(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isColliding"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsHolding(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isHolding"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsLeftHand(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isLeftHand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsSliding(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isSliding"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastHitInfo(::BNM::Structures::Unity::RaycastHit value) {
            static BNM::Field<::BNM::Structures::Unity::RaycastHit> _field = GetClass().GetField(O("lastHitInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastPosition(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("lastPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastRotation(::BNM::Structures::Unity::Quaternion value) {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("lastRotation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaterialTouchIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("materialTouchIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxArmLength(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxArmLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSlideNormal(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("slideNormal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSlipPercentage(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("slipPercentage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSlipSetToMaxFrameIdx(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("slipSetToMaxFrameIdx"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSurfaceOverride(::GlobalNamespace::GorillaSurfaceOverride* value) {
            static BNM::Field<::GlobalNamespace::GorillaSurfaceOverride*> _field = GetClass().GetField(O("surfaceOverride"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTempFreezeUntilTimestamp(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("tempFreezeUntilTimestamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVelocityTracker(::GorillaLocomotion_Climbing::GorillaVelocityTracker* value) {
            static BNM::Field<::GorillaLocomotion_Climbing::GorillaVelocityTracker*> _field = GetClass().GetField(O("velocityTracker"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWasColliding(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("wasColliding"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWasSliding(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("wasSliding"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void FinalizeHandPosition() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FinalizeHandPosition"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void FirstIteration(::BNM::Structures::Unity::Vector3& totalMove, int& divisor, float paddleBoostFactor) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FirstIteration"), {"totalMove", "divisor", "paddleBoostFactor"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&totalMove, &divisor, paddleBoostFactor);
        }
        ::BNM::Structures::Unity::Vector3 GetCurrentHandPosition() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("GetCurrentHandPosition"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void GetHandTapData(bool& wasHandTouching, bool& wasSliding, int& handMatIndex, ::GlobalNamespace::GorillaSurfaceOverride*& surfaceOverride, ::BNM::Structures::Unity::RaycastHit& handHitInfo, ::BNM::Structures::Unity::Vector3& handPosition, ::GorillaLocomotion_Climbing::GorillaVelocityTracker*& handVelocityTracker) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetHandTapData"), {"wasHandTouching", "wasSliding", "handMatIndex", "surfaceOverride", "handHitInfo", "handPosition", "handVelocityTracker"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&wasHandTouching, &wasSliding, &handMatIndex, &surfaceOverride, &handHitInfo, &handPosition, &handVelocityTracker);
        }
        ::BNM::Structures::Unity::Vector3 GetLastPosition_1() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("GetLastPosition"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void Init(::GorillaLocomotion::GTPlayer* gtPlayer, bool isLeftHand, float maxArmLength) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Init"), {"gtPlayer", "isLeftHand", "maxArmLength"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(gtPlayer, isLeftHand, maxArmLength);
        }
        bool IsSlipOverriddenToMax() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsSlipOverriddenToMax"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnEndOfFrame() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEndOfFrame"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnTeleport() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTeleport"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PositionHandFollower() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PositionHandFollower"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool SlipOverriddenToMax() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("SlipOverriddenToMax"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void TempFreezeHand(float freezeDuration) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TempFreezeHand"), {"freezeDuration"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(freezeDuration);
        }
    };
}
