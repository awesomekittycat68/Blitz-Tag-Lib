#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "Vector3Spring.hpp"

namespace BoingKit {
    struct UFOController : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("BoingKit", "UFOController");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetAngularDrag() {
            static BNM::Field<float> _field = GetClass().GetField(O("AngularDrag"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetAngularThrust() {
            static BNM::Field<float> _field = GetClass().GetField(O("AngularThrust"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetBlinkInterval() {
            static BNM::Field<float> _field = GetClass().GetField(O("BlinkInterval"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetBubbleBaseEmissionRate() {
            static BNM::Field<float> _field = GetClass().GetField(O("BubbleBaseEmissionRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ParticleSystem* GetBubbleEmitter() {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("BubbleEmitter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetBubbleMaxEmissionRate() {
            static BNM::Field<float> _field = GetClass().GetField(O("BubbleMaxEmissionRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetEyes() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("Eyes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHover() {
            static BNM::Field<float> _field = GetClass().GetField(O("Hover"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLinearDrag() {
            static BNM::Field<float> _field = GetClass().GetField(O("LinearDrag"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLinearThrust() {
            static BNM::Field<float> _field = GetClass().GetField(O("LinearThrust"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMAngularVelocity() {
            static BNM::Field<float> _field = GetClass().GetField(O("m_angularVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMBlinkTimer() {
            static BNM::Field<float> _field = GetClass().GetField(O("m_blinkTimer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetMEyeInitPositionLs() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("m_eyeInitPositionLs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetMEyeInitScale() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("m_eyeInitScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BoingKit::Vector3Spring GetMEyePositionLsSpring() {
            static BNM::Field<::BoingKit::Vector3Spring> _field = GetClass().GetField(O("m_eyePositionLsSpring"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BoingKit::Vector3Spring GetMEyeScaleSpring() {
            static BNM::Field<::BoingKit::Vector3Spring> _field = GetClass().GetField(O("m_eyeScaleSpring"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetMHoverCenter() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("m_hoverCenter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMHoverPhase() {
            static BNM::Field<float> _field = GetClass().GetField(O("m_hoverPhase"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetMLastBlinkWasDouble() {
            static BNM::Field<bool> _field = GetClass().GetField(O("m_lastBlinkWasDouble"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetMLinearVelocity() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("m_linearVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMMotorAngle() {
            static BNM::Field<float> _field = GetClass().GetField(O("m_motorAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMYawAngle() {
            static BNM::Field<float> _field = GetClass().GetField(O("m_yawAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxAngularSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("MaxAngularSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxLinearSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("MaxLinearSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetMotor() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("Motor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMotorBaseAngularSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("MotorBaseAngularSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMotorMaxAngularSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("MotorMaxAngularSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTilt() {
            static BNM::Field<float> _field = GetClass().GetField(O("Tilt"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAngularDrag(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("AngularDrag"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAngularThrust(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("AngularThrust"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBlinkInterval(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("BlinkInterval"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBubbleBaseEmissionRate(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("BubbleBaseEmissionRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBubbleEmitter(::ParticleSystem* value) {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("BubbleEmitter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBubbleMaxEmissionRate(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("BubbleMaxEmissionRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEyes(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("Eyes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHover(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("Hover"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLinearDrag(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("LinearDrag"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLinearThrust(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("LinearThrust"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMAngularVelocity(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m_angularVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMBlinkTimer(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m_blinkTimer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMEyeInitPositionLs(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("m_eyeInitPositionLs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMEyeInitScale(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("m_eyeInitScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMEyePositionLsSpring(::BoingKit::Vector3Spring value) {
            static BNM::Field<::BoingKit::Vector3Spring> _field = GetClass().GetField(O("m_eyePositionLsSpring"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMEyeScaleSpring(::BoingKit::Vector3Spring value) {
            static BNM::Field<::BoingKit::Vector3Spring> _field = GetClass().GetField(O("m_eyeScaleSpring"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMHoverCenter(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("m_hoverCenter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMHoverPhase(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m_hoverPhase"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMLastBlinkWasDouble(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("m_lastBlinkWasDouble"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMLinearVelocity(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("m_linearVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMMotorAngle(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m_motorAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMYawAngle(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m_yawAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxAngularSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("MaxAngularSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxLinearSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("MaxLinearSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMotor(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("Motor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMotorBaseAngularSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("MotorBaseAngularSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMotorMaxAngularSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("MotorMaxAngularSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTilt(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("Tilt"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void FixedUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FixedUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
