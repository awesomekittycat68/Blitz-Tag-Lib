#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct BalloonDynamics : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "BalloonDynamics");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetColliderEnabled() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_ColliderEnabled"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        float GetAirResistance() {
            static BNM::Field<float> _field = GetClass().GetField(O("airResistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetAntiSpinTorque() {
            static BNM::Field<float> _field = GetClass().GetField(O("antiSpinTorque"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetBalloonBopSource() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("balloonBopSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Collider* GetBalloonCollider() {
            static BNM::Field<::Collider*> _field = GetClass().GetField(O("balloonCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetBalloonScale() {
            static BNM::Field<float> _field = GetClass().GetField(O("balloonScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetBopSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("bopSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetBopSpeedCap() {
            static BNM::Field<float> _field = GetClass().GetField(O("bopSpeedCap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetBounds() {
            static BNM::Field<void*> _field = GetClass().GetField(O("bounds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetBouyancyActualHeight() {
            static BNM::Field<float> _field = GetClass().GetField(O("bouyancyActualHeight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetBouyancyForce() {
            static BNM::Field<float> _field = GetClass().GetField(O("bouyancyForce"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetBouyancyMaxHeight() {
            static BNM::Field<float> _field = GetClass().GetField(O("bouyancyMaxHeight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetBouyancyMinHeight() {
            static BNM::Field<float> _field = GetClass().GetField(O("bouyancyMinHeight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetEnableDistanceConstraints() {
            static BNM::Field<bool> _field = GetClass().GetField(O("enableDistanceConstraints"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetEnableDynamics() {
            static BNM::Field<bool> _field = GetClass().GetField(O("enableDynamics"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetGrabPt() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("grabPt"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetGrabPtInitParent() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("grabPtInitParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetKnot() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("knot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Rigidbody* GetKnotRb() {
            static BNM::Field<::Rigidbody*> _field = GetClass().GetField(O("knotRb"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaximumVelocity() {
            static BNM::Field<float> _field = GetClass().GetField(O("maximumVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Rigidbody* GetRb() {
            static BNM::Field<::Rigidbody*> _field = GetClass().GetField(O("rb"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetStringLength() {
            static BNM::Field<float> _field = GetClass().GetField(O("stringLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetStringStrength() {
            static BNM::Field<float> _field = GetClass().GetField(O("stringStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetStringStretch() {
            static BNM::Field<float> _field = GetClass().GetField(O("stringStretch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetUpRightTorque() {
            static BNM::Field<float> _field = GetClass().GetField(O("upRightTorque"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetVarianceMaxheight() {
            static BNM::Field<float> _field = GetClass().GetField(O("varianceMaxheight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAirResistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("airResistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAntiSpinTorque(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("antiSpinTorque"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBalloonBopSource(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("balloonBopSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBalloonCollider(::Collider* value) {
            static BNM::Field<::Collider*> _field = GetClass().GetField(O("balloonCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBalloonScale(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("balloonScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBopSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("bopSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBopSpeedCap(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("bopSpeedCap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBounds(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("bounds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBouyancyActualHeight(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("bouyancyActualHeight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBouyancyForce(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("bouyancyForce"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBouyancyMaxHeight(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("bouyancyMaxHeight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBouyancyMinHeight(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("bouyancyMinHeight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEnableDistanceConstraints(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("enableDistanceConstraints"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEnableDynamics(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("enableDynamics"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGrabPt(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("grabPt"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGrabPtInitParent(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("grabPtInitParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetKnot(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("knot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetKnotRb(::Rigidbody* value) {
            static BNM::Field<::Rigidbody*> _field = GetClass().GetField(O("knotRb"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaximumVelocity(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maximumVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRb(::Rigidbody* value) {
            static BNM::Field<::Rigidbody*> _field = GetClass().GetField(O("rb"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStringLength(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("stringLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStringStrength(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("stringStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStringStretch(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("stringStretch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUpRightTorque(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("upRightTorque"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVarianceMaxheight(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("varianceMaxheight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void ApplyAirResistance() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyAirResistance"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ApplyAntiSpinForce() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyAntiSpinForce"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ApplyBouyancyForce() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyBouyancyForce"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ApplyDistanceConstraint() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyDistanceConstraint"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ApplyUpRightForce() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyUpRightForce"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void EnableDistanceConstraints(bool enable, float scale) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EnableDistanceConstraints"), {"enable", "scale"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(enable, scale);
        }
        void EnableDynamics(bool enable, bool collider, bool kinematic) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EnableDynamics"), {"enable", "collider", "kinematic"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(enable, collider, kinematic);
        }
        void FixedUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FixedUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool get_ColliderEnabled() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_ColliderEnabled"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void ReParent() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReParent"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool ReturnStep() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ReturnStep"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
