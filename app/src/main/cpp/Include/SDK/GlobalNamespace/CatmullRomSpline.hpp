#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct CatmullRomSpline : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CatmullRomSpline");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::BNM::Structures::Unity::Vector3>* GetControlPoints() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Unity::Vector3>*> _field = GetClass().GetField(O("controlPoints"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::BNM::Structures::Unity::Matrix4x4>* GetControlPointsTransformationMatricies() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Unity::Matrix4x4>*> _field = GetClass().GetField(O("controlPointsTransformationMatricies"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::Transform*>* GetControlPointTransforms() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Transform*>*> _field = GetClass().GetField(O("controlPointTransforms"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetDebugTransform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("debugTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTestFloat() {
            static BNM::Field<float> _field = GetClass().GetField(O("testFloat"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetControlPoints(::BNM::Structures::Mono::List<::BNM::Structures::Unity::Vector3>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Unity::Vector3>*> _field = GetClass().GetField(O("controlPoints"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetControlPointsTransformationMatricies(::BNM::Structures::Mono::List<::BNM::Structures::Unity::Matrix4x4>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Unity::Matrix4x4>*> _field = GetClass().GetField(O("controlPointsTransformationMatricies"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetControlPointTransforms(::BNM::Structures::Mono::Array<::Transform*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Transform*>*> _field = GetClass().GetField(O("controlPointTransforms"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDebugTransform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("debugTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTestFloat(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("testFloat"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static ::BNM::Structures::Unity::Vector3 CatmullRom(float t, ::BNM::Structures::Unity::Vector3 p0, ::BNM::Structures::Unity::Vector3 p1, ::BNM::Structures::Unity::Vector3 p2, ::BNM::Structures::Unity::Vector3 p3) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("CatmullRom"), {"t", "p0", "p1", "p2", "p3"});
            return _m.Call(t, p0, p1, p2, p3);
        }
        static ::BNM::Structures::Unity::Matrix4x4 CatmullRom(float t, ::BNM::Structures::Unity::Matrix4x4 p0, ::BNM::Structures::Unity::Matrix4x4 p1, ::BNM::Structures::Unity::Matrix4x4 p2, ::BNM::Structures::Unity::Matrix4x4 p3) {
            static BNM::Method<::BNM::Structures::Unity::Matrix4x4> _m = GetClass().GetMethod(O("CatmullRom"), {"t", "p0", "p1", "p2", "p3"});
            return _m.Call(t, p0, p1, p2, p3);
        }
        ::BNM::Structures::Unity::Vector3 Evaluate(float t) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("Evaluate"), {"t"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(t);
        }
        static ::BNM::Structures::Unity::Vector3 Evaluate(::BNM::Structures::Mono::List<::BNM::Structures::Unity::Vector3>* controlPoints, float t) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("Evaluate"), {"controlPoints", "t"});
            return _m.Call(controlPoints, t);
        }
        static ::BNM::Structures::Unity::Matrix4x4 Evaluate(::BNM::Structures::Mono::List<::BNM::Structures::Unity::Matrix4x4>* controlPoints, float t) {
            static BNM::Method<::BNM::Structures::Unity::Matrix4x4> _m = GetClass().GetMethod(O("Evaluate"), {"controlPoints", "t"});
            return _m.Call(controlPoints, t);
        }
        float GetClosestEvaluationOnSpline(::BNM::Structures::Unity::Vector3 worldPoint, ::BNM::Structures::Unity::Vector3& linePoint) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("GetClosestEvaluationOnSpline"), {"worldPoint", "linePoint"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(worldPoint, &linePoint);
        }
        static float GetClosestEvaluationOnSpline(::BNM::Structures::Mono::List<::BNM::Structures::Unity::Vector3>* controlPoints, ::BNM::Structures::Unity::Vector3 worldPoint, ::BNM::Structures::Unity::Vector3& linePoint) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("GetClosestEvaluationOnSpline"), {"controlPoints", "worldPoint", "linePoint"});
            return _m.Call(controlPoints, worldPoint, &linePoint);
        }
        ::BNM::Structures::Unity::Vector3 GetForwardTangent(float t, float step) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("GetForwardTangent"), {"t", "step"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(t, step);
        }
        static ::BNM::Structures::Unity::Vector3 GetForwardTangent(::BNM::Structures::Mono::List<::BNM::Structures::Unity::Vector3>* controlPoints, float t, float step) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("GetForwardTangent"), {"controlPoints", "t", "step"});
            return _m.Call(controlPoints, t, step);
        }
        void OnDrawGizmosSelected() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDrawGizmosSelected"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RefreshControlPoints() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RefreshControlPoints"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
