#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct HoverboardAudio : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "HoverboardAudio");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetDidInitHum1BaseVolume() {
            static BNM::Field<bool> _field = GetClass().GetField(O("didInitHum1BaseVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFadeSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("fadeSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::AudioAnimator* GetGrindAnimator() {
            static BNM::Field<::GlobalNamespace::AudioAnimator*> _field = GetClass().GetField(O("grindAnimator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetHum1() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("hum1"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHum1BaseVolume() {
            static BNM::Field<float> _field = GetClass().GetField(O("hum1BaseVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMinAngleDeltaForTurnSound() {
            static BNM::Field<float> _field = GetClass().GetField(O("minAngleDeltaForTurnSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::AudioAnimator* GetMotorAnimator() {
            static BNM::Field<::GlobalNamespace::AudioAnimator*> _field = GetClass().GetField(O("motorAnimator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTurnSoundCooldownDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("turnSoundCooldownDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTurnSoundCooldownUntilTimestamp() {
            static BNM::Field<float> _field = GetClass().GetField(O("turnSoundCooldownUntilTimestamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SoundBankPlayer* GetTurnSounds() {
            static BNM::Field<::GlobalNamespace::SoundBankPlayer*> _field = GetClass().GetField(O("turnSounds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::AudioAnimator* GetWindRushAnimator() {
            static BNM::Field<::GlobalNamespace::AudioAnimator*> _field = GetClass().GetField(O("windRushAnimator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDidInitHum1BaseVolume(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("didInitHum1BaseVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFadeSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("fadeSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGrindAnimator(::GlobalNamespace::AudioAnimator* value) {
            static BNM::Field<::GlobalNamespace::AudioAnimator*> _field = GetClass().GetField(O("grindAnimator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHum1(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("hum1"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHum1BaseVolume(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("hum1BaseVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMinAngleDeltaForTurnSound(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("minAngleDeltaForTurnSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMotorAnimator(::GlobalNamespace::AudioAnimator* value) {
            static BNM::Field<::GlobalNamespace::AudioAnimator*> _field = GetClass().GetField(O("motorAnimator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTurnSoundCooldownDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("turnSoundCooldownDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTurnSoundCooldownUntilTimestamp(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("turnSoundCooldownUntilTimestamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTurnSounds(::GlobalNamespace::SoundBankPlayer* value) {
            static BNM::Field<::GlobalNamespace::SoundBankPlayer*> _field = GetClass().GetField(O("turnSounds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWindRushAnimator(::GlobalNamespace::AudioAnimator* value) {
            static BNM::Field<::GlobalNamespace::AudioAnimator*> _field = GetClass().GetField(O("windRushAnimator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void PlayTurnSound(float angle) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayTurnSound"), {"angle"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(angle);
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
        void UpdateAudioLoop(float speed, float airspeed, float strainLevel, float grindLevel) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateAudioLoop"), {"speed", "airspeed", "strainLevel", "grindLevel"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(speed, airspeed, strainLevel, grindLevel);
        }
    };
}
