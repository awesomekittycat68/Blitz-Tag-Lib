#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "RCVehicle.hpp"

namespace GorillaTag_Cosmetics {
    struct RCDragon : ::GorillaTag_Cosmetics::RCVehicle {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.Cosmetics", "RCDragon");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::IL2CPP::Il2CppObject* GetAnimation() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("animation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
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
        float GetAscendWhileFlyingAccelBoost() {
            static BNM::Field<float> _field = GetClass().GetField(O("ascendWhileFlyingAccelBoost"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetAudioSource() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::AudioClip*>* GetBreathFireSound() {
            static BNM::Field<::BNM::Structures::Mono::List<::AudioClip*>*> _field = GetClass().GetField(O("breathFireSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetBreathFireVolume() {
            static BNM::Field<float> _field = GetClass().GetField(O("breathFireVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetCrashAnimName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("crashAnimName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCrashAnimSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("crashAnimSpeed"));
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
        ::AudioClip* GetCrashSound() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("crashSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCrashSoundVolume() {
            static BNM::Field<float> _field = GetClass().GetField(O("crashSoundVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetDockedAnimName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("dockedAnimName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetFireBreath() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("fireBreath"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFireBreathDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("fireBreathDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFireBreathTimeRemaining() {
            static BNM::Field<float> _field = GetClass().GetField(O("fireBreathTimeRemaining"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFlapAnimEventTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("flapAnimEventTime"));
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
        ::BNM::Structures::Mono::String* GetIdleAnimName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("idleAnimName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsFlapping() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isFlapping"));
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
        ::BNM::Structures::Mono::String* GetMouthBreathFireAnimName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("mouthBreathFireAnimName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetMouthClosedAnimName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("mouthClosedAnimName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetNextFlapEventAnimTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("nextFlapEventAnimTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetShouldFlap() {
            static BNM::Field<bool> _field = GetClass().GetField(O("shouldFlap"));
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
        ::BNM::Structures::Mono::String* GetWingFlapAnimName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("wingFlapAnimName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetWingFlapAnimSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("wingFlapAnimSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::AudioClip*>* GetWingFlapSound() {
            static BNM::Field<::BNM::Structures::Mono::List<::AudioClip*>*> _field = GetClass().GetField(O("wingFlapSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetWingFlapVolume() {
            static BNM::Field<float> _field = GetClass().GetField(O("wingFlapVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAnimation(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("animation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
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
        void SetAscendWhileFlyingAccelBoost(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("ascendWhileFlyingAccelBoost"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAudioSource(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBreathFireSound(::BNM::Structures::Mono::List<::AudioClip*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::AudioClip*>*> _field = GetClass().GetField(O("breathFireSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBreathFireVolume(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("breathFireVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCrashAnimName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("crashAnimName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCrashAnimSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("crashAnimSpeed"));
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
        void SetCrashSound(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("crashSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCrashSoundVolume(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("crashSoundVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDockedAnimName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("dockedAnimName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFireBreath(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("fireBreath"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFireBreathDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("fireBreathDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFireBreathTimeRemaining(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("fireBreathTimeRemaining"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFlapAnimEventTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("flapAnimEventTime"));
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
        void SetIdleAnimName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("idleAnimName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsFlapping(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isFlapping"));
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
        void SetMouthBreathFireAnimName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("mouthBreathFireAnimName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMouthClosedAnimName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("mouthClosedAnimName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNextFlapEventAnimTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("nextFlapEventAnimTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShouldFlap(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("shouldFlap"));
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
        void SetWingFlapAnimName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("wingFlapAnimName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWingFlapAnimSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("wingFlapAnimSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWingFlapSound(::BNM::Structures::Mono::List<::AudioClip*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::AudioClip*>*> _field = GetClass().GetField(O("wingFlapSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWingFlapVolume(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("wingFlapVolume"));
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
        bool IsBreathingFire() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsBreathingFire"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
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
        void PlayRandomSound(::BNM::Structures::Mono::List<::AudioClip*>* clips, float volume) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayRandomSound"), {"clips", "volume"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(clips, volume);
        }
        void PlaySound(::AudioClip* clip, float volume) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlaySound"), {"clip", "volume"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(clip, volume);
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
        void StartBreathFire() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StartBreathFire"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void StopBreathFire() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StopBreathFire"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
