#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GorillaTag_GuidedRefs/BaseGuidedRefTargetMono.hpp"

namespace GorillaTag {
    struct VolcanoEffects : ::GorillaTag_GuidedRefs::BaseGuidedRefTargetMono {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag", "VolcanoEffects");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetApplyShaderGlobals() {
            static BNM::Field<bool> _field = GetClass().GetField(O("applyShaderGlobals"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag::VolcanoEffects_LavaStateFX* GetCurrentStateFX() {
            static BNM::Field<::GorillaTag::VolcanoEffects_LavaStateFX*> _field = GetClass().GetField(O("currentStateFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag::VolcanoEffects_LavaStateFX* GetDrainedStateFX() {
            static BNM::Field<::GorillaTag::VolcanoEffects_LavaStateFX*> _field = GetClass().GetField(O("drainedStateFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag::VolcanoEffects_LavaStateFX* GetDrainingStateFX() {
            static BNM::Field<::GorillaTag::VolcanoEffects_LavaStateFX*> _field = GetClass().GetField(O("drainingStateFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag::VolcanoEffects_LavaStateFX* GetEruptingStateFX() {
            static BNM::Field<::GorillaTag::VolcanoEffects_LavaStateFX*> _field = GetClass().GetField(O("eruptingStateFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetForestSpeakerAudioSrc() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("forestSpeakerAudioSrc"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag::VolcanoEffects_LavaStateFX* GetFullStateFX() {
            static BNM::Field<::GorillaTag::VolcanoEffects_LavaStateFX*> _field = GetClass().GetField(O("fullStateFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasForestSpeakerAudioSrc() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasForestSpeakerAudioSrc"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasVolcanoAudioSrc() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasVolcanoAudioSrc"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<void*>* GetLavaSpewAdjustedEmitBursts() {
            static BNM::Field<::BNM::Structures::Mono::Array<void*>*> _field = GetClass().GetField(O("lavaSpewAdjustedEmitBursts"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<void*>* GetLavaSpewDefaultEmitBursts() {
            static BNM::Field<::BNM::Structures::Mono::Array<void*>*> _field = GetClass().GetField(O("lavaSpewDefaultEmitBursts"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<float>* GetLavaSpewEmissionDefaultRateMultipliers() {
            static BNM::Field<::BNM::Structures::Mono::Array<float>*> _field = GetClass().GetField(O("lavaSpewEmissionDefaultRateMultipliers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<void*>* GetLavaSpewEmissionModules() {
            static BNM::Field<::BNM::Structures::Mono::Array<void*>*> _field = GetClass().GetField(O("lavaSpewEmissionModules"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::ParticleSystem*>* GetLavaSpewParticleSystems() {
            static BNM::Field<::BNM::Structures::Mono::Array<::ParticleSystem*>*> _field = GetClass().GetField(O("lavaSpewParticleSystems"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::AudioSource*>* GetLavaSurfaceAudioSrcs() {
            static BNM::Field<::BNM::Structures::Mono::Array<::AudioSource*>*> _field = GetClass().GetField(O("lavaSurfaceAudioSrcs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag::VolcanoEffects_LavaStateFX* GetRisingStateFX() {
            static BNM::Field<::GorillaTag::VolcanoEffects_LavaStateFX*> _field = GetClass().GetField(O("risingStateFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetShaderPropZoneLiquidLightColor() {
            static BNM::Field<int> _field = GetClass().GetField(O("shaderProp_ZoneLiquidLightColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetShaderPropZoneLiquidLightDistScale() {
            static BNM::Field<int> _field = GetClass().GetField(O("shaderProp_ZoneLiquidLightDistScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<float>* GetSmokeEmissionDefaultRateMultipliers() {
            static BNM::Field<::BNM::Structures::Mono::Array<float>*> _field = GetClass().GetField(O("smokeEmissionDefaultRateMultipliers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<void*>* GetSmokeEmissionModules() {
            static BNM::Field<::BNM::Structures::Mono::Array<void*>*> _field = GetClass().GetField(O("smokeEmissionModules"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<void*>* GetSmokeMainModules() {
            static BNM::Field<::BNM::Structures::Mono::Array<void*>*> _field = GetClass().GetField(O("smokeMainModules"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::ParticleSystem*>* GetSmokeParticleSystems() {
            static BNM::Field<::BNM::Structures::Mono::Array<::ParticleSystem*>*> _field = GetClass().GetField(O("smokeParticleSystems"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTimeVolcanoBellyWasLastEmpty() {
            static BNM::Field<float> _field = GetClass().GetField(O("timeVolcanoBellyWasLastEmpty"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetVolcanoAcceptLastStone() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("volcanoAcceptLastStone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetVolcanoAcceptStone() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("volcanoAcceptStone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetVolcanoAudioSource() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("volcanoAudioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetWarnVolcanoBellyEmptied() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("warnVolcanoBellyEmptied"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetApplyShaderGlobals(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("applyShaderGlobals"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentStateFX(::GorillaTag::VolcanoEffects_LavaStateFX* value) {
            static BNM::Field<::GorillaTag::VolcanoEffects_LavaStateFX*> _field = GetClass().GetField(O("currentStateFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDrainedStateFX(::GorillaTag::VolcanoEffects_LavaStateFX* value) {
            static BNM::Field<::GorillaTag::VolcanoEffects_LavaStateFX*> _field = GetClass().GetField(O("drainedStateFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDrainingStateFX(::GorillaTag::VolcanoEffects_LavaStateFX* value) {
            static BNM::Field<::GorillaTag::VolcanoEffects_LavaStateFX*> _field = GetClass().GetField(O("drainingStateFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEruptingStateFX(::GorillaTag::VolcanoEffects_LavaStateFX* value) {
            static BNM::Field<::GorillaTag::VolcanoEffects_LavaStateFX*> _field = GetClass().GetField(O("eruptingStateFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetForestSpeakerAudioSrc(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("forestSpeakerAudioSrc"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFullStateFX(::GorillaTag::VolcanoEffects_LavaStateFX* value) {
            static BNM::Field<::GorillaTag::VolcanoEffects_LavaStateFX*> _field = GetClass().GetField(O("fullStateFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasForestSpeakerAudioSrc(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasForestSpeakerAudioSrc"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasVolcanoAudioSrc(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasVolcanoAudioSrc"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLavaSpewAdjustedEmitBursts(::BNM::Structures::Mono::Array<void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<void*>*> _field = GetClass().GetField(O("lavaSpewAdjustedEmitBursts"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLavaSpewDefaultEmitBursts(::BNM::Structures::Mono::Array<void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<void*>*> _field = GetClass().GetField(O("lavaSpewDefaultEmitBursts"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLavaSpewEmissionDefaultRateMultipliers(::BNM::Structures::Mono::Array<float>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<float>*> _field = GetClass().GetField(O("lavaSpewEmissionDefaultRateMultipliers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLavaSpewEmissionModules(::BNM::Structures::Mono::Array<void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<void*>*> _field = GetClass().GetField(O("lavaSpewEmissionModules"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLavaSpewParticleSystems(::BNM::Structures::Mono::Array<::ParticleSystem*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::ParticleSystem*>*> _field = GetClass().GetField(O("lavaSpewParticleSystems"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLavaSurfaceAudioSrcs(::BNM::Structures::Mono::Array<::AudioSource*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::AudioSource*>*> _field = GetClass().GetField(O("lavaSurfaceAudioSrcs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRisingStateFX(::GorillaTag::VolcanoEffects_LavaStateFX* value) {
            static BNM::Field<::GorillaTag::VolcanoEffects_LavaStateFX*> _field = GetClass().GetField(O("risingStateFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShaderPropZoneLiquidLightColor(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("shaderProp_ZoneLiquidLightColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShaderPropZoneLiquidLightDistScale(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("shaderProp_ZoneLiquidLightDistScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSmokeEmissionDefaultRateMultipliers(::BNM::Structures::Mono::Array<float>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<float>*> _field = GetClass().GetField(O("smokeEmissionDefaultRateMultipliers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSmokeEmissionModules(::BNM::Structures::Mono::Array<void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<void*>*> _field = GetClass().GetField(O("smokeEmissionModules"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSmokeMainModules(::BNM::Structures::Mono::Array<void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<void*>*> _field = GetClass().GetField(O("smokeMainModules"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSmokeParticleSystems(::BNM::Structures::Mono::Array<::ParticleSystem*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::ParticleSystem*>*> _field = GetClass().GetField(O("smokeParticleSystems"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimeVolcanoBellyWasLastEmpty(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("timeVolcanoBellyWasLastEmpty"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVolcanoAcceptLastStone(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("volcanoAcceptLastStone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVolcanoAcceptStone(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("volcanoAcceptStone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVolcanoAudioSource(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("volcanoAudioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWarnVolcanoBellyEmptied(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("warnVolcanoBellyEmptied"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void InitState(::GorillaTag::VolcanoEffects_LavaStateFX* fx) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitState"), {"fx"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(fx);
        }
        void LogNullsFoundInArray(::BNM::Structures::Mono::String* nameOfArray) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LogNullsFoundInArray"), {"nameOfArray"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(nameOfArray);
        }
        void OnStoneAccepted(double activationProgress) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnStoneAccepted"), {"activationProgress"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(activationProgress);
        }
        void OnVolcanoBellyEmpty() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnVolcanoBellyEmpty"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        template <typename T>
        bool RemoveNullsFromArray(T& array) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("RemoveNullsFromArray"), {"array"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(&array);
        }
        void ResetState() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetDrainedState() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetDrainedState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetDrainingState() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetDrainingState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetEruptingState() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetEruptingState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetFullState() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetFullState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetLavaAudioEnabled(bool toEnable) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetLavaAudioEnabled"), {"toEnable"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(toEnable);
        }
        void SetLavaAudioEnabled(bool toEnable, float volume) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetLavaAudioEnabled"), {"toEnable", "volume"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(toEnable, volume);
        }
        void SetParticleEmissionRateAndBurst(float multiplier, ::BNM::Structures::Mono::Array<void*>* emissionModules, ::BNM::Structures::Mono::Array<float>* defaultRateMultipliers, ::BNM::Structures::Mono::Array<void*>* defaultEmitBursts, ::BNM::Structures::Mono::Array<void*>* adjustedEmitBursts) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetParticleEmissionRateAndBurst"), {"multiplier", "emissionModules", "defaultRateMultipliers", "defaultEmitBursts", "adjustedEmitBursts"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(multiplier, emissionModules, defaultRateMultipliers, defaultEmitBursts, adjustedEmitBursts);
        }
        void SetRisingState() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetRisingState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateDrainedState(float time) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateDrainedState"), {"time"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(time);
        }
        void UpdateDrainingState(float time, float timeRemaining, float progress) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateDrainingState"), {"time", "timeRemaining", "progress"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(time, timeRemaining, progress);
        }
        void UpdateEruptingState(float time, float timeRemaining, float progress) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateEruptingState"), {"time", "timeRemaining", "progress"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(time, timeRemaining, progress);
        }
        void UpdateFullState(float time, float timeRemaining, float progress) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateFullState"), {"time", "timeRemaining", "progress"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(time, timeRemaining, progress);
        }
        void UpdateRisingState(float time, float timeRemaining, float progress) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateRisingState"), {"time", "timeRemaining", "progress"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(time, timeRemaining, progress);
        }
        void UpdateState(float time, float timeRemaining, float progress) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateState"), {"time", "timeRemaining", "progress"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(time, timeRemaining, progress);
        }
    };
}
