#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SplineFollow_SplineNode.hpp"

namespace GorillaLocomotion_Gameplay {
    struct SplineFollow : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaLocomotion.Gameplay", "SplineFollow");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetApproximate() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_approximate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GorillaLocomotion_Gameplay::SplineFollow_SplineNode>* GetApproximationNodes() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaLocomotion_Gameplay::SplineFollow_SplineNode>*> _field = GetClass().GetField(O("_approximationNodes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetApproximationResolution() {
            static BNM::Field<int> _field = GetClass().GetField(O("_approximationResolution"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("_duration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetNativeSpline() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_nativeSpline"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetProgress() {
            static BNM::Field<float> _field = GetClass().GetField(O("_progress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetProgressPerFixedUpdate() {
            static BNM::Field<float> _field = GetClass().GetField(O("_progressPerFixedUpdate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Quaternion GetRotationFix() {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("_rotationFix"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetSecondsToCycles() {
            static BNM::Field<double> _field = GetClass().GetField(O("_secondsToCycles"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSmoothRotationTrackingRate() {
            static BNM::Field<float> _field = GetClass().GetField(O("_smoothRotationTrackingRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSmoothRotationTrackingRateExp() {
            static BNM::Field<float> _field = GetClass().GetField(O("_smoothRotationTrackingRateExp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSplineProgressOffset() {
            static BNM::Field<float> _field = GetClass().GetField(O("_splineProgressOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetUnitySpline() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_unitySpline"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetApproximate(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_approximate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetApproximationResolution(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_approximationResolution"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_duration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNativeSpline(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("_nativeSpline"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProgress(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_progress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProgressPerFixedUpdate(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_progressPerFixedUpdate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRotationFix(::BNM::Structures::Unity::Quaternion value) {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("_rotationFix"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSecondsToCycles(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("_secondsToCycles"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSmoothRotationTrackingRate(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_smoothRotationTrackingRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSmoothRotationTrackingRateExp(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_smoothRotationTrackingRateExp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSplineProgressOffset(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_splineProgressOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUnitySpline(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_unitySpline"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void CalculateApproximationNodes() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CalculateApproximationNodes"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::GorillaLocomotion_Gameplay::SplineFollow_SplineNode EvaluateSpline(float t) {
            static BNM::Method<::GorillaLocomotion_Gameplay::SplineFollow_SplineNode> _m = GetClass().GetMethod(O("EvaluateSpline"), {"t"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(t);
        }
        void FixedUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FixedUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void FollowSpline() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FollowSpline"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
