#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "BoingEffector_Params.hpp"
#include "BoingWork_Params.hpp"
#include "QuaternionSpring.hpp"
#include "Vector3Spring.hpp"

namespace BoingKit {
    struct BoingWork_Params_InstanceData : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("BoingKit", "BoingWork").GetInnerClass("Params").GetInnerClass("InstanceData");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetMInstantAccumulation() {
            static BNM::Field<int> _field = GetClass().GetField(O("m_instantAccumulation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMMinScale() {
            static BNM::Field<float> _field = GetClass().GetField(O("m_minScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMNumEffectors() {
            static BNM::Field<int> _field = GetClass().GetField(O("m_numEffectors"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMPadding0() {
            static BNM::Field<float> _field = GetClass().GetField(O("m_padding0"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMPadding1() {
            static BNM::Field<float> _field = GetClass().GetField(O("m_padding1"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMPadding2() {
            static BNM::Field<float> _field = GetClass().GetField(O("m_padding2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMPadding3() {
            static BNM::Field<int> _field = GetClass().GetField(O("m_padding3"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMPadding4() {
            static BNM::Field<int> _field = GetClass().GetField(O("m_padding4"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMPadding5() {
            static BNM::Field<float> _field = GetClass().GetField(O("m_padding5"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetMUpWs() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("m_upWs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetPositionOrigin() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("PositionOrigin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetPositionPropagationWorkData() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("PositionPropagationWorkData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BoingKit::Vector3Spring GetPositionSpring() {
            static BNM::Field<::BoingKit::Vector3Spring> _field = GetClass().GetField(O("PositionSpring"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetPositionTarget() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("PositionTarget"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector4 GetRotationOrigin() {
            static BNM::Field<::BNM::Structures::Unity::Vector4> _field = GetClass().GetField(O("RotationOrigin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector4 GetRotationPropagationWorkData() {
            static BNM::Field<::BNM::Structures::Unity::Vector4> _field = GetClass().GetField(O("RotationPropagationWorkData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BoingKit::QuaternionSpring GetRotationSpring() {
            static BNM::Field<::BoingKit::QuaternionSpring> _field = GetClass().GetField(O("RotationSpring"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector4 GetRotationTarget() {
            static BNM::Field<::BNM::Structures::Unity::Vector4> _field = GetClass().GetField(O("RotationTarget"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BoingKit::Vector3Spring GetScaleSpring() {
            static BNM::Field<::BoingKit::Vector3Spring> _field = GetClass().GetField(O("ScaleSpring"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetScaleTarget() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("ScaleTarget"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static int GetStride() {
            static BNM::Field<int> _field = GetClass().GetField(O("Stride"));
            return _field.Get();
        }
        void SetMInstantAccumulation(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("m_instantAccumulation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMMinScale(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m_minScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMNumEffectors(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("m_numEffectors"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMPadding0(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m_padding0"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMPadding1(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m_padding1"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMPadding2(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m_padding2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMPadding3(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("m_padding3"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMPadding4(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("m_padding4"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMPadding5(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m_padding5"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMUpWs(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("m_upWs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPositionOrigin(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("PositionOrigin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPositionPropagationWorkData(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("PositionPropagationWorkData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPositionSpring(::BoingKit::Vector3Spring value) {
            static BNM::Field<::BoingKit::Vector3Spring> _field = GetClass().GetField(O("PositionSpring"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPositionTarget(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("PositionTarget"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRotationOrigin(::BNM::Structures::Unity::Vector4 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector4> _field = GetClass().GetField(O("RotationOrigin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRotationPropagationWorkData(::BNM::Structures::Unity::Vector4 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector4> _field = GetClass().GetField(O("RotationPropagationWorkData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRotationSpring(::BoingKit::QuaternionSpring value) {
            static BNM::Field<::BoingKit::QuaternionSpring> _field = GetClass().GetField(O("RotationSpring"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRotationTarget(::BNM::Structures::Unity::Vector4 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector4> _field = GetClass().GetField(O("RotationTarget"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScaleSpring(::BoingKit::Vector3Spring value) {
            static BNM::Field<::BoingKit::Vector3Spring> _field = GetClass().GetField(O("ScaleSpring"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScaleTarget(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("ScaleTarget"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AccumulateTarget(::BoingKit::BoingWork_Params& p, ::BoingKit::BoingEffector_Params& effector, float dt) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AccumulateTarget"), {"p", "effector", "dt"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&p, &effector, dt);
        }
        void EndAccumulateTargets(::BoingKit::BoingWork_Params& p) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EndAccumulateTargets"), {"p"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&p);
        }
        void Execute(::BoingKit::BoingWork_Params& p, float dt) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Execute"), {"p", "dt"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&p, dt);
        }
        void PrepareExecute(::BoingKit::BoingWork_Params& p, ::BNM::Structures::Unity::Vector3 gridCenter, ::BNM::Structures::Unity::Quaternion gridRotation, ::BNM::Structures::Unity::Vector3 cellOffset) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PrepareExecute"), {"p", "gridCenter", "gridRotation", "cellOffset"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&p, gridCenter, gridRotation, cellOffset);
        }
        void PrepareExecute(::BoingKit::BoingWork_Params& p, ::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Quaternion rotation, ::BNM::Structures::Unity::Vector3 scale, bool accumulateEffectors) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PrepareExecute"), {"p", "position", "rotation", "scale", "accumulateEffectors"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&p, position, rotation, scale, accumulateEffectors);
        }
        void PullResults(::BoingKit::BoingBones* bones) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PullResults"), {"bones"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(bones);
        }
        void Reset() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Reset"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Reset(::BNM::Structures::Unity::Vector3 position, bool instantAccumulation) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Reset"), {"position", "instantAccumulation"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(position, instantAccumulation);
        }
        void SuppressWarnings() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SuppressWarnings"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
