#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "RCVehicle.hpp"

namespace GorillaTag_Cosmetics {
    struct RCHelicopter : ::GorillaTag_Cosmetics::RCVehicle {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.Cosmetics", "RCHelicopter");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetAscendAccel() {
            static BNM::Field<float> _field = GetClass().GetField(O("ascendAccel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetAscendAccelTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("ascendAccelTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetBackPropellerSpinRate() {
            static BNM::Field<float> _field = GetClass().GetField(O("backPropellerSpinRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetGravityCompensation() {
            static BNM::Field<float> _field = GetClass().GetField(O("gravityCompensation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHorizontalAccel() {
            static BNM::Field<float> _field = GetClass().GetField(O("horizontalAccel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHorizontalAccelTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("horizontalAccelTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector2 GetMainPropellerSpinRateRange() {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("mainPropellerSpinRateRange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxAscendSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxAscendSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxHorizontalSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxHorizontalSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxHorizontalTiltAngle() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxHorizontalTiltAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxTurnRate() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxTurnRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTurnAccel() {
            static BNM::Field<float> _field = GetClass().GetField(O("turnAccel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTurnAccelTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("turnAccelTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetTurnPropeller() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("turnPropeller"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Quaternion GetTurnPropellerBaseRotation() {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("turnPropellerBaseRotation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTurnRate() {
            static BNM::Field<float> _field = GetClass().GetField(O("turnRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetVerticalPropeller() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("verticalPropeller"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Quaternion GetVerticalPropellerBaseRotation() {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("verticalPropellerBaseRotation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAscendAccel(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("ascendAccel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAscendAccelTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("ascendAccelTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBackPropellerSpinRate(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("backPropellerSpinRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGravityCompensation(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("gravityCompensation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHorizontalAccel(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("horizontalAccel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHorizontalAccelTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("horizontalAccelTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMainPropellerSpinRateRange(::BNM::Structures::Unity::Vector2 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("mainPropellerSpinRateRange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxAscendSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxAscendSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxHorizontalSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxHorizontalSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxHorizontalTiltAngle(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxHorizontalTiltAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxTurnRate(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxTurnRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTurnAccel(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("turnAccel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTurnAccelTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("turnAccelTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTurnPropeller(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("turnPropeller"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTurnPropellerBaseRotation(::BNM::Structures::Unity::Quaternion value) {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("turnPropellerBaseRotation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTurnRate(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("turnRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVerticalPropeller(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("verticalPropeller"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVerticalPropellerBaseRotation(::BNM::Structures::Unity::Quaternion value) {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("verticalPropellerBaseRotation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AuthorityBeginDocked() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AuthorityBeginDocked"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void FixedUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FixedUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnTriggerEnter(::Collider* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTriggerEnter"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(other);
        }
        void SharedUpdate(float dt) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SharedUpdate"), {"dt"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(dt);
        }
    };
}
