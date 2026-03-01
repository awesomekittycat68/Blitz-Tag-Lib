#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "Bits32.hpp"
#include "BoingEffector_Params.hpp"
#include "BoingWork_Params_InstanceData.hpp"
#include "ParameterMode.hpp"
#include "TwoDPlaneEnum.hpp"

namespace BoingKit {
    struct BoingWork_Params : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("BoingKit", "BoingWork").GetInnerClass("Params");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetAngularImpulseMultiplier() {
            static BNM::Field<float> _field = GetClass().GetField(O("AngularImpulseMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BoingKit::Bits32 GetBits() {
            static BNM::Field<::BoingKit::Bits32> _field = GetClass().GetField(O("Bits"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BoingKit::BoingWork_Params_InstanceData GetInstance() {
            static BNM::Field<::BoingKit::BoingWork_Params_InstanceData> _field = GetClass().GetField(O("Instance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetInstanceID() {
            static BNM::Field<int> _field = GetClass().GetField(O("InstanceID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLinearImpulseMultiplier() {
            static BNM::Field<float> _field = GetClass().GetField(O("LinearImpulseMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMPadding0() {
            static BNM::Field<int> _field = GetClass().GetField(O("m_padding0"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMPadding1() {
            static BNM::Field<int> _field = GetClass().GetField(O("m_padding1"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMPadding2() {
            static BNM::Field<float> _field = GetClass().GetField(O("m_padding2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMoveReactionMultiplier() {
            static BNM::Field<float> _field = GetClass().GetField(O("MoveReactionMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPositionExponentialHalfLife() {
            static BNM::Field<float> _field = GetClass().GetField(O("PositionExponentialHalfLife"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPositionOscillationDampingRatio() {
            static BNM::Field<float> _field = GetClass().GetField(O("PositionOscillationDampingRatio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPositionOscillationFrequency() {
            static BNM::Field<float> _field = GetClass().GetField(O("PositionOscillationFrequency"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPositionOscillationHalfLife() {
            static BNM::Field<float> _field = GetClass().GetField(O("PositionOscillationHalfLife"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BoingKit::ParameterMode GetPositionParameterMode() {
            static BNM::Field<::BoingKit::ParameterMode> _field = GetClass().GetField(O("PositionParameterMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRotationExponentialHalfLife() {
            static BNM::Field<float> _field = GetClass().GetField(O("RotationExponentialHalfLife"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRotationOscillationDampingRatio() {
            static BNM::Field<float> _field = GetClass().GetField(O("RotationOscillationDampingRatio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRotationOscillationFrequency() {
            static BNM::Field<float> _field = GetClass().GetField(O("RotationOscillationFrequency"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRotationOscillationHalfLife() {
            static BNM::Field<float> _field = GetClass().GetField(O("RotationOscillationHalfLife"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BoingKit::ParameterMode GetRotationParameterMode() {
            static BNM::Field<::BoingKit::ParameterMode> _field = GetClass().GetField(O("RotationParameterMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRotationReactionMultiplier() {
            static BNM::Field<float> _field = GetClass().GetField(O("RotationReactionMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetRotationReactionUp() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("RotationReactionUp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetScaleExponentialHalfLife() {
            static BNM::Field<float> _field = GetClass().GetField(O("ScaleExponentialHalfLife"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetScaleOscillationDampingRatio() {
            static BNM::Field<float> _field = GetClass().GetField(O("ScaleOscillationDampingRatio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetScaleOscillationFrequency() {
            static BNM::Field<float> _field = GetClass().GetField(O("ScaleOscillationFrequency"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetScaleOscillationHalfLife() {
            static BNM::Field<float> _field = GetClass().GetField(O("ScaleOscillationHalfLife"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BoingKit::ParameterMode GetScaleParameterMode() {
            static BNM::Field<::BoingKit::ParameterMode> _field = GetClass().GetField(O("ScaleParameterMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static int GetStride() {
            static BNM::Field<int> _field = GetClass().GetField(O("Stride"));
            return _field.Get();
        }
        ::BoingKit::TwoDPlaneEnum GetTwoDPlane() {
            static BNM::Field<::BoingKit::TwoDPlaneEnum> _field = GetClass().GetField(O("TwoDPlane"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAngularImpulseMultiplier(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("AngularImpulseMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBits(::BoingKit::Bits32 value) {
            static BNM::Field<::BoingKit::Bits32> _field = GetClass().GetField(O("Bits"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInstance(::BoingKit::BoingWork_Params_InstanceData value) {
            static BNM::Field<::BoingKit::BoingWork_Params_InstanceData> _field = GetClass().GetField(O("Instance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInstanceID(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("InstanceID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLinearImpulseMultiplier(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("LinearImpulseMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMPadding0(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("m_padding0"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMPadding1(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("m_padding1"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMPadding2(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m_padding2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMoveReactionMultiplier(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("MoveReactionMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPositionExponentialHalfLife(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("PositionExponentialHalfLife"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPositionOscillationDampingRatio(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("PositionOscillationDampingRatio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPositionOscillationFrequency(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("PositionOscillationFrequency"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPositionOscillationHalfLife(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("PositionOscillationHalfLife"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPositionParameterMode(::BoingKit::ParameterMode value) {
            static BNM::Field<::BoingKit::ParameterMode> _field = GetClass().GetField(O("PositionParameterMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRotationExponentialHalfLife(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("RotationExponentialHalfLife"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRotationOscillationDampingRatio(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("RotationOscillationDampingRatio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRotationOscillationFrequency(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("RotationOscillationFrequency"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRotationOscillationHalfLife(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("RotationOscillationHalfLife"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRotationParameterMode(::BoingKit::ParameterMode value) {
            static BNM::Field<::BoingKit::ParameterMode> _field = GetClass().GetField(O("RotationParameterMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRotationReactionMultiplier(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("RotationReactionMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRotationReactionUp(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("RotationReactionUp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScaleExponentialHalfLife(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("ScaleExponentialHalfLife"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScaleOscillationDampingRatio(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("ScaleOscillationDampingRatio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScaleOscillationFrequency(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("ScaleOscillationFrequency"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScaleOscillationHalfLife(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("ScaleOscillationHalfLife"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScaleParameterMode(::BoingKit::ParameterMode value) {
            static BNM::Field<::BoingKit::ParameterMode> _field = GetClass().GetField(O("ScaleParameterMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTwoDPlane(::BoingKit::TwoDPlaneEnum value) {
            static BNM::Field<::BoingKit::TwoDPlaneEnum> _field = GetClass().GetField(O("TwoDPlane"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AccumulateTarget(::BoingKit::BoingEffector_Params& effector, float dt) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AccumulateTarget"), {"effector", "dt"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&effector, dt);
        }
        static void Copy(::BoingKit::BoingWork_Params& from, ::BoingKit::BoingWork_Params& to) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Copy"), {"from", "to"});
            _m.Call(&from, &to);
        }
        void EndAccumulateTargets() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EndAccumulateTargets"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Execute(float dt) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Execute"), {"dt"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(dt);
        }
        void Execute(::BoingKit::BoingBones* bones, float dt) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Execute"), {"bones", "dt"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(bones, dt);
        }
        void Init() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Init"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PullResults(::BoingKit::BoingBones* bones) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PullResults"), {"bones"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(bones);
        }
        void SuppressWarnings() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SuppressWarnings"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
