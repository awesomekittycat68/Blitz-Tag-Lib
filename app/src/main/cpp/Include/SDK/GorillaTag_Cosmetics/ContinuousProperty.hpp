#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GorillaTag/XformOffset.hpp"
#include "ContinuousProperty_Cast.hpp"
#include "ContinuousProperty_DataFlags.hpp"
#include "ContinuousProperty_EventMode.hpp"
#include "ContinuousProperty_InterpolationMode.hpp"
#include "ContinuousProperty_RotationAxis.hpp"
#include "ContinuousProperty_ThresholdOption.hpp"
#include "ContinuousProperty_ThresholdResult.hpp"
#include "ContinuousProperty_Type.hpp"

namespace GorillaTag_Cosmetics {
    struct ContinuousProperty : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.Cosmetics", "ContinuousProperty");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr const char* ENUM_ERROR = "Internal values were changed at some point. Please select a new value.";
        bool GetAxisError() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_AxisError"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetHasAxisMode() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_HasAxisMode"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetHasBezier() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_HasBezier"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetHasCurve() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_HasCurve"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetHasEventMode() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_HasEventMode"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetHasGradient() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_HasGradient"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetHasInt() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_HasInt"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetHasInterpolationMode() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_HasInterpolationMode"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetHasOffsets() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_HasOffsets"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetHasStopAction() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_HasStopAction"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetHasString() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_HasString"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetHasTarget() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_HasTarget"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetHasThreshold() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_HasThreshold"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetHasUnityEvent() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_HasUnityEvent"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetHasXforms() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_HasXforms"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetInterpolationError() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_InterpolationError"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetIntValue() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_IntValue"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsShaderPropertyCached() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsShaderProperty_Cached"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetIsShaderPropertyCached(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_IsShaderProperty_Cached"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetMissingBezier() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_MissingBezier"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetMissingXforms() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_MissingXforms"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GorillaTag_Cosmetics::ContinuousPropertyModeSO* GetMode() {
            static BNM::Method<::GorillaTag_Cosmetics::ContinuousPropertyModeSO*> _method = GetClass().GetMethod(O("get_Mode"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::String* GetModeErrorMessage() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_ModeErrorMessage"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetModeErrorVisible() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_ModeErrorVisible"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetModeInfoVisible() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_ModeInfoVisible"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::String* GetModeTooltip() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_ModeTooltip"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GorillaTag_Cosmetics::ContinuousProperty_Type GetMyType() {
            static BNM::Method<::GorillaTag_Cosmetics::ContinuousProperty_Type> _method = GetClass().GetMethod(O("get_MyType"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetRunOnlyLocally() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_RunOnlyLocally"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetShiftButtonsVisible() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_ShiftButtonsVisible"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::String* GetStringValue() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_StringValue"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::IL2CPP::Il2CppObject* GetTarget() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _method = GetClass().GetMethod(O("get_Target"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetTargetInfoVisible() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_TargetInfoVisible"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::String* GetTargetTooltip() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_TargetTooltip"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetThresholdError() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_ThresholdError"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::String* GetThresholdErrorMessage() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_ThresholdErrorMessage"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::String* GetThresholdTooltip() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_ThresholdTooltip"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetUsesThresholdCached() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_UsesThreshold_Cached"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetUsesThresholdCached(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_UsesThreshold_Cached"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GlobalNamespace::BezierCurve* GetBezierCurve() {
            static BNM::Field<::GlobalNamespace::BezierCurve*> _field = GetClass().GetField(O("bezierCurve"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Gradient* GetColor() {
            static BNM::Field<::Gradient*> _field = GetClass().GetField(O("color"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetCurve() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("curve"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Cosmetics::ContinuousProperty_EventMode GetEventMode() {
            static BNM::Field<::GorillaTag_Cosmetics::ContinuousProperty_EventMode> _field = GetClass().GetField(O("eventMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFrequencyTimer() {
            static BNM::Field<float> _field = GetClass().GetField(O("frequencyTimer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetInternalSwitchValue() {
            static BNM::Field<int> _field = GetClass().GetField(O("internalSwitchValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Cosmetics::ContinuousProperty_InterpolationMode GetInterpolationMode() {
            static BNM::Field<::GorillaTag_Cosmetics::ContinuousProperty_InterpolationMode> _field = GetClass().GetField(O("interpolationMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetIntValue_f() {
            static BNM::Field<int> _field = GetClass().GetField(O("intValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Cosmetics::ContinuousProperty_RotationAxis GetLocalAxis() {
            static BNM::Field<::GorillaTag_Cosmetics::ContinuousProperty_RotationAxis> _field = GetClass().GetField(O("localAxis"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Cosmetics::ContinuousPropertyModeSO* GetMode_f() {
            static BNM::Field<::GorillaTag_Cosmetics::ContinuousPropertyModeSO*> _field = GetClass().GetField(O("mode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag::XformOffset GetOffsetA() {
            static BNM::Field<::GorillaTag::XformOffset> _field = GetClass().GetField(O("offsetA"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag::XformOffset GetOffsetB() {
            static BNM::Field<::GorillaTag::XformOffset> _field = GetClass().GetField(O("offsetB"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetParticleEmission() {
            static BNM::Field<void*> _field = GetClass().GetField(O("particleEmission"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetParticleMain() {
            static BNM::Field<void*> _field = GetClass().GetField(O("particleMain"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetPreviousBoolValue() {
            static BNM::Field<bool> _field = GetClass().GetField(O("previousBoolValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector2 GetRange() {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("range"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetRateCurveCache() {
            static BNM::Field<void*> _field = GetClass().GetField(O("rateCurveCache"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRigLocal() {
            static BNM::Field<bool> _field = GetClass().GetField(O("rigLocal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRunOnlyLocally_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("runOnlyLocally"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetSpeedCurveCache() {
            static BNM::Field<void*> _field = GetClass().GetField(O("speedCurveCache"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetStopType() {
            static BNM::Field<void*> _field = GetClass().GetField(O("stopType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetStringHash() {
            static BNM::Field<int> _field = GetClass().GetField(O("stringHash"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetStringValue_f() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("stringValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetTarget_f() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("target"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Cosmetics::ContinuousProperty_ThresholdOption GetThresholdOption() {
            static BNM::Field<::GorillaTag_Cosmetics::ContinuousProperty_ThresholdOption> _field = GetClass().GetField(O("thresholdOption"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetTransformA() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("transformA"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetTransformB() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("transformB"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetUnityEvent() {
            static BNM::Field<void*> _field = GetClass().GetField(O("unityEvent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBezierCurve(::GlobalNamespace::BezierCurve* value) {
            static BNM::Field<::GlobalNamespace::BezierCurve*> _field = GetClass().GetField(O("bezierCurve"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetColor(::Gradient* value) {
            static BNM::Field<::Gradient*> _field = GetClass().GetField(O("color"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurve(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("curve"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEventMode(::GorillaTag_Cosmetics::ContinuousProperty_EventMode value) {
            static BNM::Field<::GorillaTag_Cosmetics::ContinuousProperty_EventMode> _field = GetClass().GetField(O("eventMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFrequencyTimer(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("frequencyTimer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInternalSwitchValue(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("internalSwitchValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInterpolationMode(::GorillaTag_Cosmetics::ContinuousProperty_InterpolationMode value) {
            static BNM::Field<::GorillaTag_Cosmetics::ContinuousProperty_InterpolationMode> _field = GetClass().GetField(O("interpolationMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIntValue(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("intValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLocalAxis(::GorillaTag_Cosmetics::ContinuousProperty_RotationAxis value) {
            static BNM::Field<::GorillaTag_Cosmetics::ContinuousProperty_RotationAxis> _field = GetClass().GetField(O("localAxis"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMode(::GorillaTag_Cosmetics::ContinuousPropertyModeSO* value) {
            static BNM::Field<::GorillaTag_Cosmetics::ContinuousPropertyModeSO*> _field = GetClass().GetField(O("mode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOffsetA(::GorillaTag::XformOffset value) {
            static BNM::Field<::GorillaTag::XformOffset> _field = GetClass().GetField(O("offsetA"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOffsetB(::GorillaTag::XformOffset value) {
            static BNM::Field<::GorillaTag::XformOffset> _field = GetClass().GetField(O("offsetB"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetParticleEmission(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("particleEmission"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetParticleMain(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("particleMain"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPreviousBoolValue(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("previousBoolValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRange(::BNM::Structures::Unity::Vector2 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("range"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRateCurveCache(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("rateCurveCache"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRigLocal(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("rigLocal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRunOnlyLocally(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("runOnlyLocally"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpeedCurveCache(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("speedCurveCache"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStopType(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("stopType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStringHash(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("stringHash"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStringValue(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("stringValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTarget(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("target"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetThresholdOption(::GorillaTag_Cosmetics::ContinuousProperty_ThresholdOption value) {
            static BNM::Field<::GorillaTag_Cosmetics::ContinuousProperty_ThresholdOption> _field = GetClass().GetField(O("thresholdOption"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTransformA(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("transformA"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTransformB(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("transformB"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUnityEvent(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("unityEvent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Apply(float f, float deltaTime, ::BNM::IL2CPP::Il2CppObject* mpb) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Apply"), {"f", "deltaTime", "mpb"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(f, deltaTime, mpb);
        }
        static bool CastMatches(::GorillaTag_Cosmetics::ContinuousProperty_Cast cast, ::GorillaTag_Cosmetics::ContinuousProperty_Cast test) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CastMatches"), {"cast", "test"});
            return _m.Call(cast, test);
        }
        bool CheckContinuousEvent(float f, float deltaTime) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CheckContinuousEvent"), {"f", "deltaTime"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(f, deltaTime);
        }
        ::GorillaTag_Cosmetics::ContinuousProperty_ThresholdResult CheckThreshold(float f) {
            static BNM::Method<::GorillaTag_Cosmetics::ContinuousProperty_ThresholdResult> _m = GetClass().GetMethod(O("CheckThreshold"), {"f"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(f);
        }
        ::BNM::Structures::Mono::String* DynamicIntLabel() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("DynamicIntLabel"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* DynamicStringLabel() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("DynamicStringLabel"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_AxisError() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_AxisError"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_HasAxisMode() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_HasAxisMode"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_HasBezier() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_HasBezier"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_HasCurve() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_HasCurve"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_HasEventMode() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_HasEventMode"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_HasGradient() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_HasGradient"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_HasInt() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_HasInt"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_HasInterpolationMode() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_HasInterpolationMode"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_HasOffsets() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_HasOffsets"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_HasStopAction() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_HasStopAction"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_HasString() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_HasString"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_HasTarget() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_HasTarget"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_HasThreshold() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_HasThreshold"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_HasUnityEvent() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_HasUnityEvent"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_HasXforms() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_HasXforms"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_InterpolationError() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_InterpolationError"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_IntValue() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_IntValue"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsShaderProperty_Cached() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsShaderProperty_Cached"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_MissingBezier() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_MissingBezier"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_MissingXforms() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_MissingXforms"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GorillaTag_Cosmetics::ContinuousPropertyModeSO* get_Mode() {
            static BNM::Method<::GorillaTag_Cosmetics::ContinuousPropertyModeSO*> _m = GetClass().GetMethod(O("get_Mode"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* get_ModeErrorMessage() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_ModeErrorMessage"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_ModeErrorVisible() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_ModeErrorVisible"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_ModeInfoVisible() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_ModeInfoVisible"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* get_ModeTooltip() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_ModeTooltip"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GorillaTag_Cosmetics::ContinuousProperty_Type get_MyType() {
            static BNM::Method<::GorillaTag_Cosmetics::ContinuousProperty_Type> _m = GetClass().GetMethod(O("get_MyType"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_RunOnlyLocally() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_RunOnlyLocally"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_ShiftButtonsVisible() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_ShiftButtonsVisible"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* get_StringValue() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_StringValue"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::IL2CPP::Il2CppObject* get_Target() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("get_Target"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_TargetInfoVisible() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_TargetInfoVisible"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* get_TargetTooltip() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_TargetTooltip"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_ThresholdError() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_ThresholdError"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* get_ThresholdErrorMessage() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_ThresholdErrorMessage"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* get_ThresholdTooltip() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_ThresholdTooltip"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_UsesThreshold_Cached() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_UsesThreshold_Cached"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static void GetAllValidObjectsNonAlloc(::Transform* t, ::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>* objects) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetAllValidObjectsNonAlloc"), {"t", "objects"});
            _m.Call(t, objects);
        }
        static ::GorillaTag_Cosmetics::ContinuousProperty_Cast GetTargetCast(::BNM::IL2CPP::Il2CppObject* o) {
            static BNM::Method<::GorillaTag_Cosmetics::ContinuousProperty_Cast> _m = GetClass().GetMethod(O("GetTargetCast"), {"o"});
            return _m.Call(o);
        }
        int GetTargetInstanceID() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetTargetInstanceID"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool HasAllFlags(::GorillaTag_Cosmetics::ContinuousProperty_DataFlags test) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("HasAllFlags"), {"test"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(test);
        }
        static bool HasAllFlags(::GorillaTag_Cosmetics::ContinuousProperty_DataFlags flags, ::GorillaTag_Cosmetics::ContinuousProperty_DataFlags test) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("HasAllFlags"), {"flags", "test"});
            return _m.Call(flags, test);
        }
        bool HasAnyFlag(::GorillaTag_Cosmetics::ContinuousProperty_DataFlags test) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("HasAnyFlag"), {"test"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(test);
        }
        static bool HasAnyFlag(::GorillaTag_Cosmetics::ContinuousProperty_DataFlags flags, ::GorillaTag_Cosmetics::ContinuousProperty_DataFlags test) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("HasAnyFlag"), {"flags", "test"});
            return _m.Call(flags, test);
        }
        void Init() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Init"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void InitThreshold() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitThreshold"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool IsValid() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsValid"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static bool IsValidObject(::BNM::MonoType* t) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsValidObject"), {"t"});
            return _m.Call(t);
        }
        void NextTarget() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("NextTarget"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnModeOrTargetChanged() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnModeOrTargetChanged"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PreviousTarget() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PreviousTarget"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void* ScaleCurve(void*& inCurve, float scale) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("ScaleCurve"), {"inCurve", "scale"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(&inCurve, scale);
        }
        void set_IsShaderProperty_Cached(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_IsShaderProperty_Cached"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_UsesThreshold_Cached(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_UsesThreshold_Cached"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetRigIsLocal(bool v) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetRigIsLocal"), {"v"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(v);
        }
        bool ShiftTarget(int shiftAmount) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ShiftTarget"), {"shiftAmount"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(shiftAmount);
        }
    };
}
