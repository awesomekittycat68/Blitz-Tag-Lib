#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct WaterSplashEffect : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "WaterSplashEffect");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::AudioSource* GetAudioSource() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::AudioClip*>* GetBigSplashAudioClips() {
            static BNM::Field<::BNM::Structures::Mono::Array<::AudioClip*>*> _field = GetClass().GetField(O("bigSplashAudioClips"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetBigSplashBaseGravityMultiplier() {
            static BNM::Field<float> _field = GetClass().GetField(O("bigSplashBaseGravityMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetBigSplashBaseSimulationSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("bigSplashBaseSimulationSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetBigSplashBaseStartSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("bigSplashBaseStartSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::ParticleSystem*>* GetBigSplashParticleSystems() {
            static BNM::Field<::BNM::Structures::Mono::Array<::ParticleSystem*>*> _field = GetClass().GetField(O("bigSplashParticleSystems"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static int GetLastPlayedBigSplashAudioClipIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("lastPlayedBigSplashAudioClipIndex"));
            return _field.Get();
        }
        static int GetLastPlayedSmallSplashEntryAudioClipIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("lastPlayedSmallSplashEntryAudioClipIndex"));
            return _field.Get();
        }
        static int GetLastPlayedSmallSplashExitAudioClipIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("lastPlayedSmallSplashExitAudioClipIndex"));
            return _field.Get();
        }
        float GetLifeTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("lifeTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSmallSplashBaseGravityMultiplier() {
            static BNM::Field<float> _field = GetClass().GetField(O("smallSplashBaseGravityMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSmallSplashBaseSimulationSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("smallSplashBaseSimulationSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSmallSplashBaseStartSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("smallSplashBaseStartSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::AudioClip*>* GetSmallSplashEntryAudioClips() {
            static BNM::Field<::BNM::Structures::Mono::Array<::AudioClip*>*> _field = GetClass().GetField(O("smallSplashEntryAudioClips"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::AudioClip*>* GetSmallSplashExitAudioClips() {
            static BNM::Field<::BNM::Structures::Mono::Array<::AudioClip*>*> _field = GetClass().GetField(O("smallSplashExitAudioClips"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::ParticleSystem*>* GetSmallSplashParticleSystems() {
            static BNM::Field<::BNM::Structures::Mono::Array<::ParticleSystem*>*> _field = GetClass().GetField(O("smallSplashParticleSystems"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetStartTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("startTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaLocomotion_Swimming::WaterVolume* GetWaterVolume() {
            static BNM::Field<::GorillaLocomotion_Swimming::WaterVolume*> _field = GetClass().GetField(O("waterVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAudioSource(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBigSplashAudioClips(::BNM::Structures::Mono::Array<::AudioClip*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::AudioClip*>*> _field = GetClass().GetField(O("bigSplashAudioClips"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBigSplashBaseGravityMultiplier(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("bigSplashBaseGravityMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBigSplashBaseSimulationSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("bigSplashBaseSimulationSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBigSplashBaseStartSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("bigSplashBaseStartSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBigSplashParticleSystems(::BNM::Structures::Mono::Array<::ParticleSystem*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::ParticleSystem*>*> _field = GetClass().GetField(O("bigSplashParticleSystems"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetLastPlayedBigSplashAudioClipIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("lastPlayedBigSplashAudioClipIndex"));
            _field.Set(value);
        }
        static void SetLastPlayedSmallSplashEntryAudioClipIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("lastPlayedSmallSplashEntryAudioClipIndex"));
            _field.Set(value);
        }
        static void SetLastPlayedSmallSplashExitAudioClipIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("lastPlayedSmallSplashExitAudioClipIndex"));
            _field.Set(value);
        }
        void SetLifeTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lifeTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSmallSplashBaseGravityMultiplier(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("smallSplashBaseGravityMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSmallSplashBaseSimulationSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("smallSplashBaseSimulationSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSmallSplashBaseStartSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("smallSplashBaseStartSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSmallSplashEntryAudioClips(::BNM::Structures::Mono::Array<::AudioClip*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::AudioClip*>*> _field = GetClass().GetField(O("smallSplashEntryAudioClips"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSmallSplashExitAudioClips(::BNM::Structures::Mono::Array<::AudioClip*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::AudioClip*>*> _field = GetClass().GetField(O("smallSplashExitAudioClips"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSmallSplashParticleSystems(::BNM::Structures::Mono::Array<::ParticleSystem*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::ParticleSystem*>*> _field = GetClass().GetField(O("smallSplashParticleSystems"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("startTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWaterVolume(::GorillaLocomotion_Swimming::WaterVolume* value) {
            static BNM::Field<::GorillaLocomotion_Swimming::WaterVolume*> _field = GetClass().GetField(O("waterVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void DeactivateParticleSystems(::BNM::Structures::Mono::Array<::ParticleSystem*>* particleSystems) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DeactivateParticleSystems"), {"particleSystems"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(particleSystems);
        }
        void Destroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Destroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PlayEffect(bool isBigSplash, bool isEntry, float scale, ::GorillaLocomotion_Swimming::WaterVolume* volume) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayEffect"), {"isBigSplash", "isEntry", "scale", "volume"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(isBigSplash, isEntry, scale, volume);
        }
        void PlayParticleEffects(::BNM::Structures::Mono::Array<::ParticleSystem*>* particleSystems) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayParticleEffects"), {"particleSystems"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(particleSystems);
        }
        void PlayRandomAudioClipWithoutRepeats(::BNM::Structures::Mono::Array<::AudioClip*>* audioClips, int& lastPlayedAudioClipIndex) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayRandomAudioClipWithoutRepeats"), {"audioClips", "lastPlayedAudioClipIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(audioClips, &lastPlayedAudioClipIndex);
        }
        void SetParticleEffectParameters(::BNM::Structures::Mono::Array<::ParticleSystem*>* particleSystems, float scale, float baseGravMultiplier, float baseStartSpeed, float baseSimulationSpeed, ::GorillaLocomotion_Swimming::WaterVolume* waterVolume) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetParticleEffectParameters"), {"particleSystems", "scale", "baseGravMultiplier", "baseStartSpeed", "baseSimulationSpeed", "waterVolume"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(particleSystems, scale, baseGravMultiplier, baseStartSpeed, baseSimulationSpeed, waterVolume);
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
