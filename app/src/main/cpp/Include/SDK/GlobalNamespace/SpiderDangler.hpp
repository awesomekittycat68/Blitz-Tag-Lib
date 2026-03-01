#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SpiderDangler_RopeSegment.hpp"

namespace GlobalNamespace {
    struct SpiderDangler : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SpiderDangler");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr int kSegmentCount = 6;
        static constexpr float kVelocityDamper = 0.95f;
        static constexpr int kConstraintCalculationIterations = 8;
        ::Transform* GetEndTransform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("endTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::LineRenderer* GetLineRenderer() {
            static BNM::Field<::LineRenderer*> _field = GetClass().GetField(O("lineRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRopeSegLen() {
            static BNM::Field<float> _field = GetClass().GetField(O("ropeSegLen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRopeSegLenScaled() {
            static BNM::Field<float> _field = GetClass().GetField(O("ropeSegLenScaled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::SpiderDangler_RopeSegment>* GetRopeSegs() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::SpiderDangler_RopeSegment>*> _field = GetClass().GetField(O("ropeSegs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector4 GetSpinScales() {
            static BNM::Field<::BNM::Structures::Unity::Vector4> _field = GetClass().GetField(O("spinScales"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector4 GetSpinSpeeds() {
            static BNM::Field<::BNM::Structures::Unity::Vector4> _field = GetClass().GetField(O("spinSpeeds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetEndTransform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("endTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLineRenderer(::LineRenderer* value) {
            static BNM::Field<::LineRenderer*> _field = GetClass().GetField(O("lineRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRopeSegLen(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("ropeSegLen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRopeSegLenScaled(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("ropeSegLenScaled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRopeSegs(::BNM::Structures::Mono::Array<::GlobalNamespace::SpiderDangler_RopeSegment>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::SpiderDangler_RopeSegment>*> _field = GetClass().GetField(O("ropeSegs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpinScales(::BNM::Structures::Unity::Vector4 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector4> _field = GetClass().GetField(O("spinScales"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpinSpeeds(::BNM::Structures::Unity::Vector4 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector4> _field = GetClass().GetField(O("spinSpeeds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void ApplyConstraint() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyConstraint"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ApplyConstraintSegment(::GlobalNamespace::SpiderDangler_RopeSegment& segA, ::GlobalNamespace::SpiderDangler_RopeSegment& segB, float dampenA, float dampenB) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyConstraintSegment"), {"segA", "segB", "dampenA", "dampenB"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&segA, &segB, dampenA, dampenB);
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
        void FixedUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FixedUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void LateUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LateUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Simulate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Simulate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
