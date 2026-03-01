#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaLocomotion_Swimming {
    struct PlayerSwimmingParameters : BNM::UnityEngine::Object {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaLocomotion.Swimming", "PlayerSwimmingParameters");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetAllowWaterSurfaceJumps() {
            static BNM::Field<bool> _field = GetClass().GetField(O("allowWaterSurfaceJumps"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetApplyDiveDampingMultiplier() {
            static BNM::Field<bool> _field = GetClass().GetField(O("applyDiveDampingMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetApplyDiveSteering() {
            static BNM::Field<bool> _field = GetClass().GetField(O("applyDiveSteering"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetApplyDiveSwimVelocityConversion() {
            static BNM::Field<bool> _field = GetClass().GetField(O("applyDiveSwimVelocityConversion"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetBaseUnderWaterDampingHalfLife() {
            static BNM::Field<float> _field = GetClass().GetField(O("baseUnderWaterDampingHalfLife"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetBuoyancyExtensionDecayHalflife() {
            static BNM::Field<float> _field = GetClass().GetField(O("buoyancyExtensionDecayHalflife"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetBuoyancyFadeDist() {
            static BNM::Field<float> _field = GetClass().GetField(O("buoyancyFadeDist"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDiveDampingMultiplier() {
            static BNM::Field<float> _field = GetClass().GetField(O("diveDampingMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDiveMaxSwimVelocityConversion() {
            static BNM::Field<float> _field = GetClass().GetField(O("diveMaxSwimVelocityConversion"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDiveSwimVelocityConversionRate() {
            static BNM::Field<float> _field = GetClass().GetField(O("diveSwimVelocityConversionRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDiveVelocityAveragingWindow() {
            static BNM::Field<float> _field = GetClass().GetField(O("diveVelocityAveragingWindow"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetExtendBouyancyFromSpeed() {
            static BNM::Field<bool> _field = GetClass().GetField(O("extendBouyancyFromSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFloatingWaterLevelBelowHead() {
            static BNM::Field<float> _field = GetClass().GetField(O("floatingWaterLevelBelowHead"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetHandAccelToRedirectAmount() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("handAccelToRedirectAmount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector2 GetHandAccelToRedirectAmountMinMax() {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("handAccelToRedirectAmountMinMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetHandSpeedToRedirectAmount() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("handSpeedToRedirectAmount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector2 GetHandSpeedToRedirectAmountMinMax() {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("handSpeedToRedirectAmountMinMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxDiveSteerAnglePerStep() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxDiveSteerAnglePerStep"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetNonDiveDampingHapticsAmount() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("nonDiveDampingHapticsAmount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector2 GetNonDiveDampingHapticsAmountMinMax() {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("nonDiveDampingHapticsAmountMinMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetPalmFacingToRedirectAmount() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("palmFacingToRedirectAmount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector2 GetPalmFacingToRedirectAmountMinMax() {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("palmFacingToRedirectAmountMinMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetReduceDiveSteeringBelowPlaneFadeEndDist() {
            static BNM::Field<float> _field = GetClass().GetField(O("reduceDiveSteeringBelowPlaneFadeEndDist"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetReduceDiveSteeringBelowPlaneFadeStartDist() {
            static BNM::Field<float> _field = GetClass().GetField(O("reduceDiveSteeringBelowPlaneFadeStartDist"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetReduceDiveSteeringBelowVelocityPlane() {
            static BNM::Field<bool> _field = GetClass().GetField(O("reduceDiveSteeringBelowVelocityPlane"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetSpeedToBouyancyExtension() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("speedToBouyancyExtension"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector2 GetSpeedToBouyancyExtensionMinMax() {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("speedToBouyancyExtensionMinMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSwimmingHapticsStrength() {
            static BNM::Field<float> _field = GetClass().GetField(O("swimmingHapticsStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSwimmingVelocityOutOfWaterDrainRate() {
            static BNM::Field<float> _field = GetClass().GetField(O("swimmingVelocityOutOfWaterDrainRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetSwimSpeedToMaxRedirectAngle() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("swimSpeedToMaxRedirectAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector2 GetSwimSpeedToMaxRedirectAngleMinMax() {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("swimSpeedToMaxRedirectAngleMinMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetSwimSpeedToRedirectAmount() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("swimSpeedToRedirectAmount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector2 GetSwimSpeedToRedirectAmountMinMax() {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("swimSpeedToRedirectAmountMinMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSwimUnderWaterDampingHalfLife() {
            static BNM::Field<float> _field = GetClass().GetField(O("swimUnderWaterDampingHalfLife"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetUnderwaterJumpsAsSwimVelocityFactor() {
            static BNM::Field<float> _field = GetClass().GetField(O("underwaterJumpsAsSwimVelocityFactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetWaterSurfaceJumpAmount() {
            static BNM::Field<float> _field = GetClass().GetField(O("waterSurfaceJumpAmount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetWaterSurfaceJumpHandSpeedThreshold() {
            static BNM::Field<float> _field = GetClass().GetField(O("waterSurfaceJumpHandSpeedThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetWaterSurfaceJumpHandVelocityFacingCurve() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("waterSurfaceJumpHandVelocityFacingCurve"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetWaterSurfaceJumpMaxSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("waterSurfaceJumpMaxSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetWaterSurfaceJumpPalmFacingCurve() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("waterSurfaceJumpPalmFacingCurve"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAllowWaterSurfaceJumps(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("allowWaterSurfaceJumps"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetApplyDiveDampingMultiplier(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("applyDiveDampingMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetApplyDiveSteering(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("applyDiveSteering"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetApplyDiveSwimVelocityConversion(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("applyDiveSwimVelocityConversion"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBaseUnderWaterDampingHalfLife(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("baseUnderWaterDampingHalfLife"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBuoyancyExtensionDecayHalflife(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("buoyancyExtensionDecayHalflife"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBuoyancyFadeDist(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("buoyancyFadeDist"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDiveDampingMultiplier(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("diveDampingMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDiveMaxSwimVelocityConversion(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("diveMaxSwimVelocityConversion"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDiveSwimVelocityConversionRate(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("diveSwimVelocityConversionRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDiveVelocityAveragingWindow(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("diveVelocityAveragingWindow"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetExtendBouyancyFromSpeed(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("extendBouyancyFromSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFloatingWaterLevelBelowHead(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("floatingWaterLevelBelowHead"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHandAccelToRedirectAmount(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("handAccelToRedirectAmount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHandAccelToRedirectAmountMinMax(::BNM::Structures::Unity::Vector2 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("handAccelToRedirectAmountMinMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHandSpeedToRedirectAmount(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("handSpeedToRedirectAmount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHandSpeedToRedirectAmountMinMax(::BNM::Structures::Unity::Vector2 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("handSpeedToRedirectAmountMinMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxDiveSteerAnglePerStep(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxDiveSteerAnglePerStep"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNonDiveDampingHapticsAmount(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("nonDiveDampingHapticsAmount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNonDiveDampingHapticsAmountMinMax(::BNM::Structures::Unity::Vector2 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("nonDiveDampingHapticsAmountMinMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPalmFacingToRedirectAmount(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("palmFacingToRedirectAmount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPalmFacingToRedirectAmountMinMax(::BNM::Structures::Unity::Vector2 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("palmFacingToRedirectAmountMinMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReduceDiveSteeringBelowPlaneFadeEndDist(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("reduceDiveSteeringBelowPlaneFadeEndDist"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReduceDiveSteeringBelowPlaneFadeStartDist(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("reduceDiveSteeringBelowPlaneFadeStartDist"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReduceDiveSteeringBelowVelocityPlane(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("reduceDiveSteeringBelowVelocityPlane"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpeedToBouyancyExtension(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("speedToBouyancyExtension"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpeedToBouyancyExtensionMinMax(::BNM::Structures::Unity::Vector2 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("speedToBouyancyExtensionMinMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSwimmingHapticsStrength(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("swimmingHapticsStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSwimmingVelocityOutOfWaterDrainRate(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("swimmingVelocityOutOfWaterDrainRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSwimSpeedToMaxRedirectAngle(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("swimSpeedToMaxRedirectAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSwimSpeedToMaxRedirectAngleMinMax(::BNM::Structures::Unity::Vector2 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("swimSpeedToMaxRedirectAngleMinMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSwimSpeedToRedirectAmount(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("swimSpeedToRedirectAmount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSwimSpeedToRedirectAmountMinMax(::BNM::Structures::Unity::Vector2 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("swimSpeedToRedirectAmountMinMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSwimUnderWaterDampingHalfLife(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("swimUnderWaterDampingHalfLife"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUnderwaterJumpsAsSwimVelocityFactor(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("underwaterJumpsAsSwimVelocityFactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWaterSurfaceJumpAmount(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("waterSurfaceJumpAmount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWaterSurfaceJumpHandSpeedThreshold(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("waterSurfaceJumpHandSpeedThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWaterSurfaceJumpHandVelocityFacingCurve(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("waterSurfaceJumpHandVelocityFacingCurve"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWaterSurfaceJumpMaxSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("waterSurfaceJumpMaxSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWaterSurfaceJumpPalmFacingCurve(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("waterSurfaceJumpPalmFacingCurve"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
