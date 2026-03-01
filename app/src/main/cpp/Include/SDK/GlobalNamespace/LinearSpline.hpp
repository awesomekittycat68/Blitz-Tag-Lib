#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "LinearSpline_CurveBoundary.hpp"

namespace GlobalNamespace {
    struct LinearSpline : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "LinearSpline");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::BNM::Structures::Unity::Vector3>* GetControlPoints() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Unity::Vector3>*> _field = GetClass().GetField(O("controlPoints"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::Transform*>* GetControlPointTransforms() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Transform*>*> _field = GetClass().GetField(O("controlPointTransforms"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCornerRadius() {
            static BNM::Field<float> _field = GetClass().GetField(O("cornerRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::LinearSpline_CurveBoundary>* GetCurveBoundaries() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::LinearSpline_CurveBoundary>*> _field = GetClass().GetField(O("curveBoundaries"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetDebugTransform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("debugTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<float>* GetDistances() {
            static BNM::Field<::BNM::Structures::Mono::List<float>*> _field = GetClass().GetField(O("distances"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetGizmoResolution() {
            static BNM::Field<int> _field = GetClass().GetField(O("gizmoResolution"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetLooping() {
            static BNM::Field<bool> _field = GetClass().GetField(O("looping"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRoundCorners() {
            static BNM::Field<bool> _field = GetClass().GetField(O("roundCorners"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTestFloat() {
            static BNM::Field<float> _field = GetClass().GetField(O("testFloat"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTotalDistance() {
            static BNM::Field<float> _field = GetClass().GetField(O("totalDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetControlPoints(::BNM::Structures::Mono::List<::BNM::Structures::Unity::Vector3>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Unity::Vector3>*> _field = GetClass().GetField(O("controlPoints"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetControlPointTransforms(::BNM::Structures::Mono::Array<::Transform*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Transform*>*> _field = GetClass().GetField(O("controlPointTransforms"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCornerRadius(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("cornerRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurveBoundaries(::BNM::Structures::Mono::List<::GlobalNamespace::LinearSpline_CurveBoundary>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::LinearSpline_CurveBoundary>*> _field = GetClass().GetField(O("curveBoundaries"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDebugTransform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("debugTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDistances(::BNM::Structures::Mono::List<float>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<float>*> _field = GetClass().GetField(O("distances"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGizmoResolution(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("gizmoResolution"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLooping(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("looping"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRoundCorners(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("roundCorners"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTestFloat(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("testFloat"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTotalDistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("totalDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Structures::Unity::Vector3 Evaluate(float t) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("Evaluate"), {"t"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(t);
        }
        ::BNM::Structures::Unity::Vector3 GetForwardTangent(float t, float step) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("GetForwardTangent"), {"t", "step"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(t, step);
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
