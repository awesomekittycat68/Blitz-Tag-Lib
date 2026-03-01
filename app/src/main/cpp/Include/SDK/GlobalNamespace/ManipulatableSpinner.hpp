#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "ManipulatableObject.hpp"

namespace GlobalNamespace {
    struct ManipulatableSpinner : ::GlobalNamespace::ManipulatableObject {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ManipulatableSpinner");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetAngle() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_angle"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetAngle(float value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_angle"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetApplyReleaseVelocity() {
            static BNM::Field<bool> _field = GetClass().GetField(O("applyReleaseVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetBreakDistance() {
            static BNM::Field<float> _field = GetClass().GetField(O("breakDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCurrentHandT() {
            static BNM::Field<float> _field = GetClass().GetField(O("currentHandT"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLowSpeedDrag() {
            static BNM::Field<float> _field = GetClass().GetField(O("lowSpeedDrag"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLowSpeedThreshold() {
            static BNM::Field<float> _field = GetClass().GetField(O("lowSpeedThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPreviousHandT() {
            static BNM::Field<float> _field = GetClass().GetField(O("previousHandT"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetReleaseDrag() {
            static BNM::Field<float> _field = GetClass().GetField(O("releaseDrag"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::BezierSpline* GetSpline() {
            static BNM::Field<::GlobalNamespace::BezierSpline*> _field = GetClass().GetField(O("spline"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTVelocity() {
            static BNM::Field<float> _field = GetClass().GetField(O("tVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetApplyReleaseVelocity(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("applyReleaseVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBreakDistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("breakDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentHandT(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("currentHandT"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLowSpeedDrag(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lowSpeedDrag"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLowSpeedThreshold(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lowSpeedThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPreviousHandT(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("previousHandT"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReleaseDrag(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("releaseDrag"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpline(::GlobalNamespace::BezierSpline* value) {
            static BNM::Field<::GlobalNamespace::BezierSpline*> _field = GetClass().GetField(O("spline"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTVelocity(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("tVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        float FindPositionOnSpline(::BNM::Structures::Unity::Vector3 grabPoint) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("FindPositionOnSpline"), {"grabPoint"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(grabPoint);
        }
        float get_angle() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_angle"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnHeldUpdate(::GameObject* hand) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnHeldUpdate"), {"hand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(hand);
        }
        void OnReleasedUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnReleasedUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnStartManipulation(::GameObject* grabbingHand) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnStartManipulation"), {"grabbingHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(grabbingHand);
        }
        void OnStopManipulation(::GameObject* releasingHand, ::BNM::Structures::Unity::Vector3 releaseVelocity) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnStopManipulation"), {"releasingHand", "releaseVelocity"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(releasingHand, releaseVelocity);
        }
        void set_angle(float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_angle"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetAngle_1(float newAngle) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetAngle"), {"newAngle"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newAngle);
        }
        void SetVelocity(float newVelocity) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetVelocity"), {"newVelocity"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newVelocity);
        }
        bool ShouldHandDetach(::GameObject* hand) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ShouldHandDetach"), {"hand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(hand);
        }
    };
}
