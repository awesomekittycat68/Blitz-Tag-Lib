#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct KiteDynamics : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "KiteDynamics");
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
        ::BNM::Structures::Unity::Quaternion GetCtrlRotation() {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("ctrlRotation"));
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
        ::BNM::Structures::Unity::Vector3 GetGrabPtPosition() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("grabPtPosition"));
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
        float GetReturnSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("returnSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAirResistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("airResistance"));
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
        void SetCtrlRotation(::BNM::Structures::Unity::Quaternion value) {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("ctrlRotation"));
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
        void SetGrabPtPosition(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("grabPtPosition"));
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
        void SetReturnSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("returnSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
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
