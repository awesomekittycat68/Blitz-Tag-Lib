#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaLocomotion_Swimming {
    struct WaterCurrent : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaLocomotion.Swimming", "WaterCurrent");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetAccel() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_Accel"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        float GetInwardAccel() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_InwardAccel"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        float GetInwardSpeed() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_InwardSpeed"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        float GetSpeed() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_Speed"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        float GetCurrentAccel() {
            static BNM::Field<float> _field = GetClass().GetField(O("currentAccel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCurrentSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("currentSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDampingHalfLife() {
            static BNM::Field<float> _field = GetClass().GetField(O("dampingHalfLife"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetDebugCurrentVelocity() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("debugCurrentVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDebugDrawCurrentQueries() {
            static BNM::Field<bool> _field = GetClass().GetField(O("debugDrawCurrentQueries"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetDebugSplinePoint() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("debugSplinePoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFadeDistance() {
            static BNM::Field<float> _field = GetClass().GetField(O("fadeDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFullEffectDistance() {
            static BNM::Field<float> _field = GetClass().GetField(O("fullEffectDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetInwardCurrentAccel() {
            static BNM::Field<float> _field = GetClass().GetField(O("inwardCurrentAccel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetInwardCurrentFullEffectRadius() {
            static BNM::Field<float> _field = GetClass().GetField(O("inwardCurrentFullEffectRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetInwardCurrentNoEffectRadius() {
            static BNM::Field<float> _field = GetClass().GetField(O("inwardCurrentNoEffectRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetInwardCurrentSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("inwardCurrentSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::CatmullRomSpline*>* GetSplines() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::CatmullRomSpline*>*> _field = GetClass().GetField(O("splines"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetVelocityAnticipationAdjustment() {
            static BNM::Field<float> _field = GetClass().GetField(O("velocityAnticipationAdjustment"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCurrentAccel(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("currentAccel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("currentSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDampingHalfLife(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("dampingHalfLife"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDebugCurrentVelocity(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("debugCurrentVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDebugDrawCurrentQueries(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("debugDrawCurrentQueries"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDebugSplinePoint(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("debugSplinePoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFadeDistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("fadeDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFullEffectDistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("fullEffectDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInwardCurrentAccel(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("inwardCurrentAccel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInwardCurrentFullEffectRadius(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("inwardCurrentFullEffectRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInwardCurrentNoEffectRadius(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("inwardCurrentNoEffectRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInwardCurrentSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("inwardCurrentSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSplines(::BNM::Structures::Mono::List<::GlobalNamespace::CatmullRomSpline*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::CatmullRomSpline*>*> _field = GetClass().GetField(O("splines"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVelocityAnticipationAdjustment(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("velocityAnticipationAdjustment"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void DrawGizmoCircle(::BNM::Structures::Unity::Vector3 center, ::BNM::Structures::Unity::Quaternion rotation, float radius) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DrawGizmoCircle"), {"center", "rotation", "radius"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(center, rotation, radius);
        }
        float get_Accel() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_Accel"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_InwardAccel() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_InwardAccel"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_InwardSpeed() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_InwardSpeed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_Speed() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_Speed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool GetCurrentAtPoint(::BNM::Structures::Unity::Vector3 worldPoint, ::BNM::Structures::Unity::Vector3 startingVelocity, float dt, ::BNM::Structures::Unity::Vector3& currentVelocity, ::BNM::Structures::Unity::Vector3& velocityChange) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("GetCurrentAtPoint"), {"worldPoint", "startingVelocity", "dt", "currentVelocity", "velocityChange"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(worldPoint, startingVelocity, dt, &currentVelocity, &velocityChange);
        }
        void OnDrawGizmosSelected() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDrawGizmosSelected"));
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
