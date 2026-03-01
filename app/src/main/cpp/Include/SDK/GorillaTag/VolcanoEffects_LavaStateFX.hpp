#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTag {
    struct VolcanoEffects_LavaStateFX : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag", "VolcanoEffects").GetInnerClass("LavaStateFX");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::AudioClip* GetEndSound() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("endSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetEndSoundAudioSrc() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("endSoundAudioSrc"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetEndSoundExists() {
            static BNM::Field<bool> _field = GetClass().GetField(O("endSoundExists"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetEndSoundPadTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("endSoundPadTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetEndSoundPlayed() {
            static BNM::Field<bool> _field = GetClass().GetField(O("endSoundPlayed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetEndSoundVol() {
            static BNM::Field<float> _field = GetClass().GetField(O("endSoundVol"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetLavaLightAttenuationAnim() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("lavaLightAttenuationAnim"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Gradient* GetLavaLightColor() {
            static BNM::Field<::Gradient*> _field = GetClass().GetField(O("lavaLightColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetLavaLightIntensityAnim() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("lavaLightIntensityAnim"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetLavaSpewEmissionAnim() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("lavaSpewEmissionAnim"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetLoop1AudioSrc() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("loop1AudioSrc"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLoop1DefaultVolume() {
            static BNM::Field<float> _field = GetClass().GetField(O("loop1DefaultVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetLoop1Exists() {
            static BNM::Field<bool> _field = GetClass().GetField(O("loop1Exists"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetLoop1VolAnim() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("loop1VolAnim"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetLoop2AudioSrc() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("loop2AudioSrc"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLoop2DefaultVolume() {
            static BNM::Field<float> _field = GetClass().GetField(O("loop2DefaultVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetLoop2Exists() {
            static BNM::Field<bool> _field = GetClass().GetField(O("loop2Exists"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetLoop2VolAnim() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("loop2VolAnim"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetSmokeEmissionAnim() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("smokeEmissionAnim"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Gradient* GetSmokeStartColorAnim() {
            static BNM::Field<::Gradient*> _field = GetClass().GetField(O("smokeStartColorAnim"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetStartSound() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("startSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetStartSoundAudioSrc() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("startSoundAudioSrc"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetStartSoundDelay() {
            static BNM::Field<float> _field = GetClass().GetField(O("startSoundDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetStartSoundExists() {
            static BNM::Field<bool> _field = GetClass().GetField(O("startSoundExists"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetStartSoundPlayed() {
            static BNM::Field<bool> _field = GetClass().GetField(O("startSoundPlayed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetStartSoundVol() {
            static BNM::Field<float> _field = GetClass().GetField(O("startSoundVol"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetEndSound(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("endSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEndSoundAudioSrc(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("endSoundAudioSrc"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEndSoundExists(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("endSoundExists"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEndSoundPadTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("endSoundPadTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEndSoundPlayed(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("endSoundPlayed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEndSoundVol(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("endSoundVol"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLavaLightAttenuationAnim(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("lavaLightAttenuationAnim"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLavaLightColor(::Gradient* value) {
            static BNM::Field<::Gradient*> _field = GetClass().GetField(O("lavaLightColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLavaLightIntensityAnim(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("lavaLightIntensityAnim"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLavaSpewEmissionAnim(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("lavaSpewEmissionAnim"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLoop1AudioSrc(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("loop1AudioSrc"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLoop1DefaultVolume(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("loop1DefaultVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLoop1Exists(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("loop1Exists"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLoop1VolAnim(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("loop1VolAnim"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLoop2AudioSrc(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("loop2AudioSrc"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLoop2DefaultVolume(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("loop2DefaultVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLoop2Exists(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("loop2Exists"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLoop2VolAnim(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("loop2VolAnim"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSmokeEmissionAnim(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("smokeEmissionAnim"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSmokeStartColorAnim(::Gradient* value) {
            static BNM::Field<::Gradient*> _field = GetClass().GetField(O("smokeStartColorAnim"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartSound(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("startSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartSoundAudioSrc(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("startSoundAudioSrc"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartSoundDelay(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("startSoundDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartSoundExists(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("startSoundExists"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartSoundPlayed(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("startSoundPlayed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartSoundVol(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("startSoundVol"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
