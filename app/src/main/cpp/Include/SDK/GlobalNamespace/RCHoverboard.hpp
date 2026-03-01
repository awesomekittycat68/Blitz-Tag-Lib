#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "RCHoverboard__SingleInputOption.hpp"
#include "../GorillaTag_Cosmetics/RCVehicle.hpp"

namespace GlobalNamespace {
    struct RCHoverboard : ::GorillaTag_Cosmetics::RCVehicle {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "RCHoverboard");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetMaxForwardSpeed() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get__MaxForwardSpeed"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetMaxForwardSpeed(float value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set__MaxForwardSpeed"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        float GetMaxTiltAngle() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get__MaxTiltAngle"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetMaxTiltAngle(float value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set__MaxTiltAngle"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        float GetMaxTurnRate() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get__MaxTurnRate"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetMaxTurnRate(float value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set__MaxTurnRate"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        float GetCurrentTiltAngle() {
            static BNM::Field<float> _field = GetClass().GetField(O("_currentTiltAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCurrentTurnAngle() {
            static BNM::Field<float> _field = GetClass().GetField(O("_currentTurnAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCurrentTurnRate() {
            static BNM::Field<float> _field = GetClass().GetField(O("_currentTurnRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetForwardAccel() {
            static BNM::Field<float> _field = GetClass().GetField(O("_forwardAccel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasAudioSource() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_hasAudioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasHoverSound() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_hasHoverSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasJumped() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_hasJumped"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMotorLevel() {
            static BNM::Field<float> _field = GetClass().GetField(O("_motorLevel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTiltAccel() {
            static BNM::Field<float> _field = GetClass().GetField(O("_tiltAccel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTurnAccel() {
            static BNM::Field<float> _field = GetClass().GetField(O("_turnAccel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetEnableJumpInput() {
            static BNM::Field<bool> _field = GetClass().GetField(O("enableJumpInput"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetMAudioSource() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("m_audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMForwardAccelTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("m_forwardAccelTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMHoverDamp() {
            static BNM::Field<float> _field = GetClass().GetField(O("m_hoverDamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMHoverForce() {
            static BNM::Field<float> _field = GetClass().GetField(O("m_hoverForce"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMHoverHeight() {
            static BNM::Field<float> _field = GetClass().GetField(O("m_hoverHeight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetMHoverSound() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("m_hoverSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetMHoverSoundVolumeMinMax() {
            static BNM::Field<void*> _field = GetClass().GetField(O("m_hoverSoundVolumeMinMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMHoverSoundVolumeRampTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("m_hoverSoundVolumeRampTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::RCHoverboard__SingleInputOption GetMInputJump() {
            static BNM::Field<::GlobalNamespace::RCHoverboard__SingleInputOption> _field = GetClass().GetField(O("m_inputJump"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::RCHoverboard__SingleInputOption GetMInputThrustBack() {
            static BNM::Field<::GlobalNamespace::RCHoverboard__SingleInputOption> _field = GetClass().GetField(O("m_inputThrustBack"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::RCHoverboard__SingleInputOption GetMInputThrustForward() {
            static BNM::Field<::GlobalNamespace::RCHoverboard__SingleInputOption> _field = GetClass().GetField(O("m_inputThrustForward"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::RCHoverboard__SingleInputOption GetMInputTurn() {
            static BNM::Field<::GlobalNamespace::RCHoverboard__SingleInputOption> _field = GetClass().GetField(O("m_inputTurn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMJumpForce() {
            static BNM::Field<float> _field = GetClass().GetField(O("m_jumpForce"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMMaxForwardSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("m_maxForwardSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMMaxTiltAngle() {
            static BNM::Field<float> _field = GetClass().GetField(O("m_maxTiltAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMMaxTurnRate() {
            static BNM::Field<float> _field = GetClass().GetField(O("m_maxTurnRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMTiltTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("m_tiltTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMTurnAccelTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("m_turnAccelTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetRaycastLayers() {
            static BNM::Field<void*> _field = GetClass().GetField(O("raycastLayers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCurrentTiltAngle(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_currentTiltAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentTurnAngle(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_currentTurnAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentTurnRate(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_currentTurnRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetForwardAccel(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_forwardAccel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasAudioSource(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_hasAudioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasHoverSound(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_hasHoverSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasJumped(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_hasJumped"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMotorLevel(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_motorLevel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTiltAccel(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_tiltAccel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTurnAccel(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_turnAccel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEnableJumpInput(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("enableJumpInput"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMAudioSource(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("m_audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMForwardAccelTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m_forwardAccelTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMHoverDamp(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m_hoverDamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMHoverForce(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m_hoverForce"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMHoverHeight(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m_hoverHeight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMHoverSound(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("m_hoverSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMHoverSoundVolumeMinMax(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("m_hoverSoundVolumeMinMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMHoverSoundVolumeRampTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m_hoverSoundVolumeRampTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMInputJump(::GlobalNamespace::RCHoverboard__SingleInputOption value) {
            static BNM::Field<::GlobalNamespace::RCHoverboard__SingleInputOption> _field = GetClass().GetField(O("m_inputJump"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMInputThrustBack(::GlobalNamespace::RCHoverboard__SingleInputOption value) {
            static BNM::Field<::GlobalNamespace::RCHoverboard__SingleInputOption> _field = GetClass().GetField(O("m_inputThrustBack"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMInputThrustForward(::GlobalNamespace::RCHoverboard__SingleInputOption value) {
            static BNM::Field<::GlobalNamespace::RCHoverboard__SingleInputOption> _field = GetClass().GetField(O("m_inputThrustForward"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMInputTurn(::GlobalNamespace::RCHoverboard__SingleInputOption value) {
            static BNM::Field<::GlobalNamespace::RCHoverboard__SingleInputOption> _field = GetClass().GetField(O("m_inputTurn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMJumpForce(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m_jumpForce"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMMaxForwardSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m_maxForwardSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMMaxTiltAngle(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m_maxTiltAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMMaxTurnRate(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m_maxTurnRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMTiltTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m_tiltTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMTurnAccelTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m_turnAccelTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRaycastLayers(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("raycastLayers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        float _MoveTowards(float current, float target, float maxDelta) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("_MoveTowards"), {"current", "target", "maxDelta"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(current, target, maxDelta);
        }
        template <typename TP0 = void*, typename TP1 = void*>
        void* _ProjectOnPlane(TP0 vector, TP1 planeNormal) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("_ProjectOnPlane"), {"vector", "planeNormal"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(vector, planeNormal);
        }
        template <typename TP0 = void*, typename TP1 = void*, typename TP2 = void*>
        float _SignedAngle(TP0 from, TP1 to, TP2 axis) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("_SignedAngle"), {"from", "to", "axis"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(from, to, axis);
        }
        void AuthorityBeginDocked() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AuthorityBeginDocked"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void AuthorityUpdate(float dt) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AuthorityUpdate"), {"dt"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(dt);
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
        float get__MaxForwardSpeed() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get__MaxForwardSpeed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get__MaxTiltAngle() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get__MaxTiltAngle"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get__MaxTurnRate() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get__MaxTurnRate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnCollisionEnter(::BNM::IL2CPP::Il2CppObject* collision) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnCollisionEnter"), {"collision"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(collision);
        }
        void RemoteUpdate(float dt) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoteUpdate"), {"dt"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(dt);
        }
        void set__MaxForwardSpeed(float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set__MaxForwardSpeed"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set__MaxTiltAngle(float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set__MaxTiltAngle"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set__MaxTurnRate(float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set__MaxTurnRate"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SharedUpdate(float dt) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SharedUpdate"), {"dt"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(dt);
        }
    };
}
