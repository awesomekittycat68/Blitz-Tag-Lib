#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GorillaTag/HashWrapper.hpp"
#include "ProjectileShooterCosmetic_ShootActivator.hpp"
#include "ProjectileShooterCosmetic_ShootDirection.hpp"

namespace GorillaTag_Cosmetics {
    struct ProjectileShooterCosmetic : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.Cosmetics", "ProjectileShooterCosmetic");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr const char* CHARGE_STR = "allowCharging";
        static constexpr const char* CHARGE_MSG = "only enabled when allowCharging is true.";
        static constexpr const char* HAPTICS_STR = "enableHaptics";
        static constexpr const char* MOVE_STR = "IsMovementShoot";
        bool GetIsCoolingDown() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsCoolingDown"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetShootingAllowed() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_shootingAllowed"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetShootingAllowed(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_shootingAllowed"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
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
        bool GetAllowCharging() {
            static BNM::Field<bool> _field = GetClass().GetField(O("allowCharging"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetChargeDecaySpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("chargeDecaySpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetChargeHapticsIntensity() {
            static BNM::Field<float> _field = GetClass().GetField(O("chargeHapticsIntensity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetChargeRateCurve() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("chargeRateCurve"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetChargeTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("chargeTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetChargeToShotSpeedCurve() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("chargeToShotSpeedCurve"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Cosmetics::ContinuousPropertyArray* GetContinuousChargingProperties() {
            static BNM::Field<::GorillaTag_Cosmetics::ContinuousPropertyArray*> _field = GetClass().GetField(O("continuousChargingProperties"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCooldownRemaining() {
            static BNM::Field<float> _field = GetClass().GetField(O("cooldownRemaining"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCooldownSeconds() {
            static BNM::Field<float> _field = GetClass().GetField(O("cooldownSeconds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCurrentStep() {
            static BNM::Field<int> _field = GetClass().GetField(O("currentStep"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetDebugShootDirection() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("debugShootDirection"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDrawShootVector() {
            static BNM::Field<bool> _field = GetClass().GetField(O("drawShootVector"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetEnableHaptics() {
            static BNM::Field<bool> _field = GetClass().GetField(O("enableHaptics"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHapticsBothHands() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hapticsBothHands"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsLocal() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isLocal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsPressed() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isPressed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLastStep() {
            static BNM::Field<int> _field = GetClass().GetField(O("lastStep"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetLogVelocityEstimatorSpeed() {
            static BNM::Field<bool> _field = GetClass().GetField(O("logVelocityEstimatorSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxChargeHapticsIntensity() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxChargeHapticsIntensity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxChargeSeconds() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxChargeSeconds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetNumberOfProgressSteps() {
            static BNM::Field<int> _field = GetClass().GetField(O("numberOfProgressSteps"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetOffsetRigPosition() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("offsetRigPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetOnChargeCancelled() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("onChargeCancelled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetOnCooldownFinished() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("onCooldownFinished"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetOnMaxCharge() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("onMaxCharge"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetOnMovedToNextStep() {
            static BNM::Field<void*> _field = GetClass().GetField(O("onMovedToNextStep"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetOnReachedLastProgressStep() {
            static BNM::Field<void*> _field = GetClass().GetField(O("onReachedLastProgressStep"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetOnShoot() {
            static BNM::Field<void*> _field = GetClass().GetField(O("onShoot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetOnShootLocal() {
            static BNM::Field<void*> _field = GetClass().GetField(O("onShootLocal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag::HashWrapper GetProjectilePrefab() {
            static BNM::Field<::GorillaTag::HashWrapper> _field = GetClass().GetField(O("projectilePrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag::HashWrapper GetProjectileTrailPrefab() {
            static BNM::Field<::GorillaTag::HashWrapper> _field = GetClass().GetField(O("projectileTrailPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::VRRig* GetRig() {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("rig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRunChargeCancelledEventOnShoot() {
            static BNM::Field<bool> _field = GetClass().GetField(O("runChargeCancelledEventOnShoot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Cosmetics::ProjectileShooterCosmetic_ShootActivator GetShootActivatorType() {
            static BNM::Field<::GorillaTag_Cosmetics::ProjectileShooterCosmetic_ShootActivator> _field = GetClass().GetField(O("shootActivatorType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Cosmetics::ProjectileShooterCosmetic_ShootDirection GetShootDirectionType() {
            static BNM::Field<::GorillaTag_Cosmetics::ProjectileShooterCosmetic_ShootDirection> _field = GetClass().GetField(O("shootDirectionType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetShootFromTransform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("shootFromTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetShootHapticsDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("shootHapticsDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetShootHapticsIntensity() {
            static BNM::Field<float> _field = GetClass().GetField(O("shootHapticsIntensity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetShootMaxSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("shootMaxSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetShootMinSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("shootMinSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSnapToMaxChargeAt() {
            static BNM::Field<float> _field = GetClass().GetField(O("snapToMaxChargeAt"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::TransferrableObject* GetTransferrableObject() {
            static BNM::Field<::GlobalNamespace::TransferrableObject*> _field = GetClass().GetField(O("transferrableObject"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaVelocityEstimator* GetVelocityEstimator() {
            static BNM::Field<::GlobalNamespace::GorillaVelocityEstimator*> _field = GetClass().GetField(O("velocityEstimator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetVelocityEstimatorMinRigDotProduct() {
            static BNM::Field<float> _field = GetClass().GetField(O("velocityEstimatorMinRigDotProduct"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetVelocityEstimatorStartGestureSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("velocityEstimatorStartGestureSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetVelocityEstimatorStopGestureSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("velocityEstimatorStopGestureSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetVelocityEstimatorThresholdMet() {
            static BNM::Field<bool> _field = GetClass().GetField(O("velocityEstimatorThresholdMet"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetWhileCharging() {
            static BNM::Field<void*> _field = GetClass().GetField(O("whileCharging"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAllowCharging(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("allowCharging"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetChargeDecaySpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("chargeDecaySpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetChargeHapticsIntensity(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("chargeHapticsIntensity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetChargeRateCurve(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("chargeRateCurve"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetChargeTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("chargeTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetChargeToShotSpeedCurve(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("chargeToShotSpeedCurve"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetContinuousChargingProperties(::GorillaTag_Cosmetics::ContinuousPropertyArray* value) {
            static BNM::Field<::GorillaTag_Cosmetics::ContinuousPropertyArray*> _field = GetClass().GetField(O("continuousChargingProperties"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCooldownRemaining(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("cooldownRemaining"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCooldownSeconds(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("cooldownSeconds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentStep(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("currentStep"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDebugShootDirection(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("debugShootDirection"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDrawShootVector(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("drawShootVector"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEnableHaptics(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("enableHaptics"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHapticsBothHands(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hapticsBothHands"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsLocal(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isLocal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsPressed(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isPressed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastStep(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("lastStep"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLogVelocityEstimatorSpeed(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("logVelocityEstimatorSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxChargeHapticsIntensity(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxChargeHapticsIntensity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxChargeSeconds(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxChargeSeconds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNumberOfProgressSteps(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("numberOfProgressSteps"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOffsetRigPosition(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("offsetRigPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnChargeCancelled(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("onChargeCancelled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnCooldownFinished(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("onCooldownFinished"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnMaxCharge(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("onMaxCharge"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnMovedToNextStep(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("onMovedToNextStep"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnReachedLastProgressStep(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("onReachedLastProgressStep"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnShoot(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("onShoot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnShootLocal(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("onShootLocal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProjectilePrefab(::GorillaTag::HashWrapper value) {
            static BNM::Field<::GorillaTag::HashWrapper> _field = GetClass().GetField(O("projectilePrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProjectileTrailPrefab(::GorillaTag::HashWrapper value) {
            static BNM::Field<::GorillaTag::HashWrapper> _field = GetClass().GetField(O("projectileTrailPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRig(::GlobalNamespace::VRRig* value) {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("rig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRunChargeCancelledEventOnShoot(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("runChargeCancelledEventOnShoot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShootActivatorType(::GorillaTag_Cosmetics::ProjectileShooterCosmetic_ShootActivator value) {
            static BNM::Field<::GorillaTag_Cosmetics::ProjectileShooterCosmetic_ShootActivator> _field = GetClass().GetField(O("shootActivatorType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShootDirectionType(::GorillaTag_Cosmetics::ProjectileShooterCosmetic_ShootDirection value) {
            static BNM::Field<::GorillaTag_Cosmetics::ProjectileShooterCosmetic_ShootDirection> _field = GetClass().GetField(O("shootDirectionType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShootFromTransform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("shootFromTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShootHapticsDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("shootHapticsDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShootHapticsIntensity(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("shootHapticsIntensity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShootMaxSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("shootMaxSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShootMinSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("shootMinSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSnapToMaxChargeAt(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("snapToMaxChargeAt"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTransferrableObject(::GlobalNamespace::TransferrableObject* value) {
            static BNM::Field<::GlobalNamespace::TransferrableObject*> _field = GetClass().GetField(O("transferrableObject"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVelocityEstimator(::GlobalNamespace::GorillaVelocityEstimator* value) {
            static BNM::Field<::GlobalNamespace::GorillaVelocityEstimator*> _field = GetClass().GetField(O("velocityEstimator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVelocityEstimatorMinRigDotProduct(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("velocityEstimatorMinRigDotProduct"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVelocityEstimatorStartGestureSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("velocityEstimatorStartGestureSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVelocityEstimatorStopGestureSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("velocityEstimatorStopGestureSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVelocityEstimatorThresholdMet(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("velocityEstimatorThresholdMet"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWhileCharging(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("whileCharging"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AttachTrail(int trailHash, ::GameObject* newProjectile, ::BNM::Structures::Unity::Vector3 location, bool blueTeam, bool orangeTeam) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AttachTrail"), {"trailHash", "newProjectile", "location", "blueTeam", "orangeTeam"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(trailHash, newProjectile, location, blueTeam, orangeTeam);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool get_IsCoolingDown() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsCoolingDown"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_shootingAllowed() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_shootingAllowed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_TickRunning() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_TickRunning"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float GetChargeFrac() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("GetChargeFrac"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void GetShootPositionAndRotation(::BNM::Structures::Unity::Vector3& position, ::BNM::Structures::Unity::Quaternion& rotation) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetShootPositionAndRotation"), {"position", "rotation"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&position, &rotation);
        }
        ::BNM::Structures::Unity::Vector3 GetVectorFromBodyToLaunchPosition() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("GetVectorFromBodyToLaunchPosition"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool IsMovementShoot() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsMovementShoot"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool IsRigDirection() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsRigDirection"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnButtonPressed() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnButtonPressed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnButtonReleased() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnButtonReleased"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ResetShoot() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetShoot"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void set_shootingAllowed(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_shootingAllowed"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_TickRunning(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_TickRunning"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetPressState(bool pressed) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetPressState"), {"pressed"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pressed);
        }
        void Shoot() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Shoot"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Tick() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Tick"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void TryRunHaptics(float intensity, float duration) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TryRunHaptics"), {"intensity", "duration"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(intensity, duration);
        }
        bool TryShoot() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryShoot"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
