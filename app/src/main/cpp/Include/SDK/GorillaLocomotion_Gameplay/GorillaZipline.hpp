#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaLocomotion_Gameplay {
    struct GorillaZipline : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaLocomotion.Gameplay", "GorillaZipline");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr float inheritVelocityRechargeRate = 0.2f;
        static constexpr float inheritVelocityValueOnRelease = 0.55f;
        float GetCurrentSpeed() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_currentSpeed"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetCurrentSpeed(float value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_currentSpeed"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::AudioSource* GetAudioSlide() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSlide"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetClimbOffsetHelper() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("climbOffsetHelper"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaLocomotion_Climbing::GorillaHandClimber* GetCurrentClimber() {
            static BNM::Field<::GorillaLocomotion_Climbing::GorillaHandClimber*> _field = GetClass().GetField(O("currentClimber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCurrentInheritVelocityMulti() {
            static BNM::Field<float> _field = GetClass().GetField(O("currentInheritVelocityMulti"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCurrentT() {
            static BNM::Field<float> _field = GetClass().GetField(O("currentT"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSegmentDistance() {
            static BNM::Field<float> _field = GetClass().GetField(O("segmentDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetSegmentPrefab() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("segmentPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetSegmentsRoot() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("segmentsRoot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaLocomotion_Gameplay::GorillaZiplineSettings* GetSettings() {
            static BNM::Field<::GorillaLocomotion_Gameplay::GorillaZiplineSettings*> _field = GetClass().GetField(O("settings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaLocomotion_Climbing::GorillaClimbable* GetSlideHelper() {
            static BNM::Field<::GorillaLocomotion_Climbing::GorillaClimbable*> _field = GetClass().GetField(O("slideHelper"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::BezierSpline* GetSpline() {
            static BNM::Field<::GlobalNamespace::BezierSpline*> _field = GetClass().GetField(O("spline"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetZiplineDistance() {
            static BNM::Field<float> _field = GetClass().GetField(O("ziplineDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAudioSlide(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSlide"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetClimbOffsetHelper(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("climbOffsetHelper"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentClimber(::GorillaLocomotion_Climbing::GorillaHandClimber* value) {
            static BNM::Field<::GorillaLocomotion_Climbing::GorillaHandClimber*> _field = GetClass().GetField(O("currentClimber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentInheritVelocityMulti(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("currentInheritVelocityMulti"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentT(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("currentT"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSegmentDistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("segmentDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSegmentPrefab(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("segmentPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSegmentsRoot(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("segmentsRoot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSettings(::GorillaLocomotion_Gameplay::GorillaZiplineSettings* value) {
            static BNM::Field<::GorillaLocomotion_Gameplay::GorillaZiplineSettings*> _field = GetClass().GetField(O("settings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSlideHelper(::GorillaLocomotion_Climbing::GorillaClimbable* value) {
            static BNM::Field<::GorillaLocomotion_Climbing::GorillaClimbable*> _field = GetClass().GetField(O("slideHelper"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpline(::GlobalNamespace::BezierSpline* value) {
            static BNM::Field<::GlobalNamespace::BezierSpline*> _field = GetClass().GetField(O("spline"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetZiplineDistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("ziplineDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        float FindSlideHelperSpot(::BNM::Structures::Unity::Vector3 grabPoint) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("FindSlideHelperSpot"), {"grabPoint"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(grabPoint);
        }
        void FindTFromDistance(float& t, float distance, int steps) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FindTFromDistance"), {"t", "distance", "steps"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&t, distance, steps);
        }
        float get_currentSpeed() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_currentSpeed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Unity::Vector3 GetCurrentDirection() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("GetCurrentDirection"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnBeforeClimb(::GorillaLocomotion_Climbing::GorillaHandClimber* hand, ::GorillaLocomotion_Climbing::GorillaClimbableRef* climbRef) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnBeforeClimb"), {"hand", "climbRef"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(hand, climbRef);
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void set_currentSpeed(float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_currentSpeed"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Stop() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Stop"));
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
