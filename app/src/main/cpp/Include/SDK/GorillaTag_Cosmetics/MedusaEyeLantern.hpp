#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "MedusaEyeLantern_State.hpp"

namespace GorillaTag_Cosmetics {
    struct MedusaEyeLantern : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.Cosmetics", "MedusaEyeLantern");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Array<::GorillaTag_Cosmetics::MedusaEyeLantern_EyeState*>* GetAllStates() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTag_Cosmetics::MedusaEyeLantern_EyeState*>*> _field = GetClass().GetField(O("allStates"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::GorillaTag_Cosmetics::MedusaEyeLantern_State, ::GorillaTag_Cosmetics::MedusaEyeLantern_EyeState*>* GetAllStatesDict() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GorillaTag_Cosmetics::MedusaEyeLantern_State, ::GorillaTag_Cosmetics::MedusaEyeLantern_EyeState*>*> _field = GetClass().GetField(O("allStatesDict"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Cosmetics::MedusaEyeLantern_State GetCurrentState() {
            static BNM::Field<::GorillaTag_Cosmetics::MedusaEyeLantern_State> _field = GetClass().GetField(O("currentState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Cosmetics::DistanceCheckerCosmetic* GetDistanceChecker() {
            static BNM::Field<::GorillaTag_Cosmetics::DistanceCheckerCosmetic*> _field = GetClass().GetField(O("distanceChecker"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFaceDistanceOffset() {
            static BNM::Field<float> _field = GetClass().GetField(O("faceDistanceOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Quaternion GetInitialRotation() {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("initialRotation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Cosmetics::MedusaEyeLantern_State GetLastState() {
            static BNM::Field<::GorillaTag_Cosmetics::MedusaEyeLantern_State> _field = GetClass().GetField(O("lastState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLookAtEyeAngleThreshold() {
            static BNM::Field<float> _field = GetClass().GetField(O("lookAtEyeAngleThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLookAtTargetSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("lookAtTargetSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxRotationAngle() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxRotationAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetOnPetrification() {
            static BNM::Field<void*> _field = GetClass().GetField(O("OnPetrification"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPetrificationDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("petrificationDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPetrificationStarted() {
            static BNM::Field<float> _field = GetClass().GetField(O("petrificationStarted"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetResetCooldown() {
            static BNM::Field<float> _field = GetClass().GetField(O("resetCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetResetTargetTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("resetTargetTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetResetTargetTimer() {
            static BNM::Field<float> _field = GetClass().GetField(O("resetTargetTimer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetRotatingObjectTransform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("rotatingObjectTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRotationSmoothing() {
            static BNM::Field<float> _field = GetClass().GetField(O("rotationSmoothing"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRotationSpeedMultiplier() {
            static BNM::Field<float> _field = GetClass().GetField(O("rotationSpeedMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSloshVelocityThreshold() {
            static BNM::Field<float> _field = GetClass().GetField(O("sloshVelocityThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTargetHeadAngleThreshold() {
            static BNM::Field<float> _field = GetClass().GetField(O("targetHeadAngleThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::VRRig* GetTargetRig() {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("targetRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Quaternion GetTargetRotation() {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("targetRotation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::TransferrableObject* GetTransferableParent() {
            static BNM::Field<::GlobalNamespace::TransferrableObject*> _field = GetClass().GetField(O("transferableParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaLocomotion_Climbing::GorillaVelocityTracker* GetVelocityTracker() {
            static BNM::Field<::GorillaLocomotion_Climbing::GorillaVelocityTracker*> _field = GetClass().GetField(O("velocityTracker"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetWarmupCounter() {
            static BNM::Field<float> _field = GetClass().GetField(O("warmupCounter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetWarmUpProgressTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("warmUpProgressTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAllStates(::BNM::Structures::Mono::Array<::GorillaTag_Cosmetics::MedusaEyeLantern_EyeState*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTag_Cosmetics::MedusaEyeLantern_EyeState*>*> _field = GetClass().GetField(O("allStates"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAllStatesDict(::BNM::Structures::Mono::Dictionary<::GorillaTag_Cosmetics::MedusaEyeLantern_State, ::GorillaTag_Cosmetics::MedusaEyeLantern_EyeState*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GorillaTag_Cosmetics::MedusaEyeLantern_State, ::GorillaTag_Cosmetics::MedusaEyeLantern_EyeState*>*> _field = GetClass().GetField(O("allStatesDict"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentState(::GorillaTag_Cosmetics::MedusaEyeLantern_State value) {
            static BNM::Field<::GorillaTag_Cosmetics::MedusaEyeLantern_State> _field = GetClass().GetField(O("currentState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDistanceChecker(::GorillaTag_Cosmetics::DistanceCheckerCosmetic* value) {
            static BNM::Field<::GorillaTag_Cosmetics::DistanceCheckerCosmetic*> _field = GetClass().GetField(O("distanceChecker"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFaceDistanceOffset(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("faceDistanceOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInitialRotation(::BNM::Structures::Unity::Quaternion value) {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("initialRotation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastState(::GorillaTag_Cosmetics::MedusaEyeLantern_State value) {
            static BNM::Field<::GorillaTag_Cosmetics::MedusaEyeLantern_State> _field = GetClass().GetField(O("lastState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLookAtEyeAngleThreshold(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lookAtEyeAngleThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLookAtTargetSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lookAtTargetSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxRotationAngle(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxRotationAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnPetrification(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("OnPetrification"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPetrificationDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("petrificationDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPetrificationStarted(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("petrificationStarted"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetResetCooldown(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("resetCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetResetTargetTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("resetTargetTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetResetTargetTimer(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("resetTargetTimer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRotatingObjectTransform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("rotatingObjectTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRotationSmoothing(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("rotationSmoothing"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRotationSpeedMultiplier(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("rotationSpeedMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSloshVelocityThreshold(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("sloshVelocityThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTargetHeadAngleThreshold(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("targetHeadAngleThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTargetRig(::GlobalNamespace::VRRig* value) {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("targetRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTargetRotation(::BNM::Structures::Unity::Quaternion value) {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("targetRotation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTransferableParent(::GlobalNamespace::TransferrableObject* value) {
            static BNM::Field<::GlobalNamespace::TransferrableObject*> _field = GetClass().GetField(O("transferableParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVelocityTracker(::GorillaLocomotion_Climbing::GorillaVelocityTracker* value) {
            static BNM::Field<::GorillaLocomotion_Climbing::GorillaVelocityTracker*> _field = GetClass().GetField(O("velocityTracker"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWarmupCounter(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("warmupCounter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWarmUpProgressTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("warmUpProgressTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool EyeIsLockedOn() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("EyeIsLockedOn"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void FaceTarget() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FaceTarget"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void HandleOnNewPlayerDetected(::GlobalNamespace::VRRig* target, float distance) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleOnNewPlayerDetected"), {"target", "distance"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(target, distance);
        }
        void HandleOnNoOneInRange() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleOnNoOneInRange"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool IsTargetLookingAtEye() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsTargetLookingAtEye"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PlayHaptic(::GorillaTag_Cosmetics::MedusaEyeLantern_State state) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayHaptic"), {"state"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(state);
        }
        void Sloshing() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Sloshing"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SwitchState(::GorillaTag_Cosmetics::MedusaEyeLantern_State newState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SwitchState"), {"newState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newState);
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateState() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
