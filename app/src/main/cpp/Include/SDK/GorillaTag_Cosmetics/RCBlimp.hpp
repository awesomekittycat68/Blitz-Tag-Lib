#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "RCVehicle.hpp"

namespace GorillaTag_Cosmetics {
    struct RCBlimp : ::GorillaTag_Cosmetics::RCVehicle {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.Cosmetics", "RCBlimp");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr float propellerIdleAcc = 1.0f;
        static constexpr float propellerIdleSpinRate = 0.6f;
        static constexpr float propellerMaxAcc = 6.6666665f;
        static constexpr float propellerMaxSpinRate = 5.0f;
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
        ::AudioSource* GetAudioSource() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetBlimpDeflateBlendWeight() {
            static BNM::Field<float> _field = GetClass().GetField(O("blimpDeflateBlendWeight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::SkinnedMeshRenderer* GetBlimpMesh() {
            static BNM::Field<::SkinnedMeshRenderer*> _field = GetClass().GetField(O("blimpMesh"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Collider* GetCrashCollider() {
            static BNM::Field<::Collider*> _field = GetClass().GetField(O("crashCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCrashedGravityCompensation() {
            static BNM::Field<float> _field = GetClass().GetField(O("crashedGravityCompensation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDeflateRate() {
            static BNM::Field<float> _field = GetClass().GetField(O("deflateRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetDeflateSound() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("deflateSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDeflateSoundVolume() {
            static BNM::Field<float> _field = GetClass().GetField(O("deflateSoundVolume"));
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
        float GetHorizontalTiltTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("horizontalTiltTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetLeftPropeller() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("leftPropeller"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLeftPropellerAngle() {
            static BNM::Field<float> _field = GetClass().GetField(O("leftPropellerAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLeftPropellerSpinRate() {
            static BNM::Field<float> _field = GetClass().GetField(O("leftPropellerSpinRate"));
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
        float GetMotorLevel() {
            static BNM::Field<float> _field = GetClass().GetField(O("motorLevel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetMotorSound() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("motorSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector2 GetMotorSoundVolumeMinMax() {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("motorSoundVolumeMinMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMotorVolumeRampTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("motorVolumeRampTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetRightPropeller() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("rightPropeller"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRightPropellerAngle() {
            static BNM::Field<float> _field = GetClass().GetField(O("rightPropellerAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRightPropellerSpinRate() {
            static BNM::Field<float> _field = GetClass().GetField(O("rightPropellerSpinRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTiltAccel() {
            static BNM::Field<float> _field = GetClass().GetField(O("tiltAccel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTiltAngle() {
            static BNM::Field<float> _field = GetClass().GetField(O("tiltAngle"));
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
        float GetTurnAngle() {
            static BNM::Field<float> _field = GetClass().GetField(O("turnAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTurnRate() {
            static BNM::Field<float> _field = GetClass().GetField(O("turnRate"));
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
        void SetAudioSource(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBlimpDeflateBlendWeight(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("blimpDeflateBlendWeight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBlimpMesh(::SkinnedMeshRenderer* value) {
            static BNM::Field<::SkinnedMeshRenderer*> _field = GetClass().GetField(O("blimpMesh"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCrashCollider(::Collider* value) {
            static BNM::Field<::Collider*> _field = GetClass().GetField(O("crashCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCrashedGravityCompensation(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("crashedGravityCompensation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDeflateRate(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("deflateRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDeflateSound(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("deflateSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDeflateSoundVolume(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("deflateSoundVolume"));
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
        void SetHorizontalTiltTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("horizontalTiltTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftPropeller(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("leftPropeller"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftPropellerAngle(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("leftPropellerAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftPropellerSpinRate(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("leftPropellerSpinRate"));
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
        void SetMotorLevel(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("motorLevel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMotorSound(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("motorSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMotorSoundVolumeMinMax(::BNM::Structures::Unity::Vector2 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("motorSoundVolumeMinMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMotorVolumeRampTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("motorVolumeRampTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightPropeller(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("rightPropeller"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightPropellerAngle(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("rightPropellerAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightPropellerSpinRate(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("rightPropellerSpinRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTiltAccel(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("tiltAccel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTiltAngle(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("tiltAngle"));
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
        void SetTurnAngle(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("turnAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTurnRate(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("turnRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
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
        void OnDisable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnTriggerEnter(::Collider* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTriggerEnter"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(other);
        }
        void RemoteUpdate(float dt) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoteUpdate"), {"dt"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(dt);
        }
        void SharedUpdate(float dt) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SharedUpdate"), {"dt"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(dt);
        }
    };
}
