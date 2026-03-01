#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "HangingClaw_RopeSegment.hpp"
#include "MonoBehaviourPostTick.hpp"

namespace GlobalNamespace {
    struct HangingClaw : ::GlobalNamespace::MonoBehaviourPostTick {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "HangingClaw");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetPostTickRunning() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_PostTickRunning"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetPostTickRunning(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_PostTickRunning"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        float GetBaseSegLen() {
            static BNM::Field<float> _field = GetClass().GetField(O("baseSegLen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetEndMassKg() {
            static BNM::Field<float> _field = GetClass().GetField(O("endMassKg"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetEndTransform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("endTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetGravity() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("gravity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetHeightCap() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("heightCap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<float>* GetInvMass() {
            static BNM::Field<::BNM::Structures::Mono::Array<float>*> _field = GetClass().GetField(O("invMass"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::LineRenderer* GetLineRenderer() {
            static BNM::Field<::LineRenderer*> _field = GetClass().GetField(O("lineRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxY() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxY"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::HangingClaw_RopeSegment>* GetRopeSegs() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::HangingClaw_RopeSegment>*> _field = GetClass().GetField(O("ropeSegs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRopeStiffness() {
            static BNM::Field<float> _field = GetClass().GetField(O("ropeStiffness"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSegmentCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("segmentCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSegmentMassKg() {
            static BNM::Field<float> _field = GetClass().GetField(O("segmentMassKg"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSlackFraction() {
            static BNM::Field<float> _field = GetClass().GetField(O("slackFraction"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTargetSegLenScaled() {
            static BNM::Field<float> _field = GetClass().GetField(O("targetSegLenScaled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetVelocityDamping() {
            static BNM::Field<float> _field = GetClass().GetField(O("velocityDamping"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBaseSegLen(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("baseSegLen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEndMassKg(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("endMassKg"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEndTransform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("endTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGravity(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("gravity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHeightCap(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("heightCap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInvMass(::BNM::Structures::Mono::Array<float>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<float>*> _field = GetClass().GetField(O("invMass"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLineRenderer(::LineRenderer* value) {
            static BNM::Field<::LineRenderer*> _field = GetClass().GetField(O("lineRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxY(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxY"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRopeSegs(::BNM::Structures::Mono::Array<::GlobalNamespace::HangingClaw_RopeSegment>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::HangingClaw_RopeSegment>*> _field = GetClass().GetField(O("ropeSegs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRopeStiffness(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("ropeStiffness"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSegmentCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("segmentCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSegmentMassKg(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("segmentMassKg"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSlackFraction(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("slackFraction"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTargetSegLenScaled(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("targetSegLenScaled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVelocityDamping(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("velocityDamping"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void ApplyConstraints(::BNM::Structures::Unity::Vector3 topPos) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyConstraints"), {"topPos"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(topPos);
        }
        void ApplyConstraintSegment(::GlobalNamespace::HangingClaw_RopeSegment& a, ::GlobalNamespace::HangingClaw_RopeSegment& b, float wA, float wB, float stiffness) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyConstraintSegment"), {"a", "b", "wA", "wB", "stiffness"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&a, &b, wA, wB, stiffness);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void DrawRope() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DrawRope"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool get_PostTickRunning() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_PostTickRunning"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void PostTick() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PostTick"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void set_PostTickRunning(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_PostTickRunning"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void Simulate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Simulate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
