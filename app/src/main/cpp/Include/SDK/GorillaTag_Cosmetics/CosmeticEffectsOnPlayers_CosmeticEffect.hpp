#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GorillaGameModes/GameModeType.hpp"
#include "CosmeticEffectsOnPlayers_EFFECTTYPE.hpp"
#include "CosmeticEffectsOnPlayers_TargetType.hpp"

namespace GorillaTag_Cosmetics {
    struct CosmeticEffectsOnPlayers_CosmeticEffect : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.Cosmetics", "CosmeticEffectsOnPlayers").GetInnerClass("CosmeticEffect");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetEffectDuration() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_EffectDuration"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetEffectDuration(float value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_EffectDuration"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        float GetEffectStartedTime() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_EffectStartedTime"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetEffectStartedTime(float value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_EffectStartedTime"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        float GetKnockbackStrengthMultiplier() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_knockbackStrengthMultiplier"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetKnockbackStrengthMultiplier(float value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_knockbackStrengthMultiplier"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetApplyScaleToKnockbackStrength() {
            static BNM::Field<bool> _field = GetClass().GetField(O("applyScaleToKnockbackStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetEffectDistanceRadius() {
            static BNM::Field<float> _field = GetClass().GetField(O("effectDistanceRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetEffectDurationOthers() {
            static BNM::Field<float> _field = GetClass().GetField(O("effectDurationOthers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetEffectDurationOwner() {
            static BNM::Field<float> _field = GetClass().GetField(O("effectDurationOwner"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Cosmetics::CosmeticEffectsOnPlayers_EFFECTTYPE GetEffectType() {
            static BNM::Field<::GorillaTag_Cosmetics::CosmeticEffectsOnPlayers_EFFECTTYPE> _field = GetClass().GetField(O("effectType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GorillaGameModes::GameModeType>* GetExcludeForGameModes() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaGameModes::GameModeType>*> _field = GetClass().GetField(O("excludeForGameModes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetForceOffTheGround() {
            static BNM::Field<bool> _field = GetClass().GetField(O("forceOffTheGround"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetKnockbackStrength() {
            static BNM::Field<float> _field = GetClass().GetField(O("knockbackStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetKnockbackVFX() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("knockbackVFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxKnockbackStrength() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxKnockbackStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMinKnockbackStrength() {
            static BNM::Field<float> _field = GetClass().GetField(O("minKnockbackStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetModesHash() {
            static BNM::Field<void*> _field = GetClass().GetField(O("modesHash"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaSkin* GetNewSkin() {
            static BNM::Field<::GlobalNamespace::GorillaSkin*> _field = GetClass().GetField(O("newSkin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::AudioClip*>* GetSfxAudioClip() {
            static BNM::Field<::BNM::Structures::Mono::List<::AudioClip*>*> _field = GetClass().GetField(O("sfxAudioClip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetSpecialVerticalForce() {
            static BNM::Field<bool> _field = GetClass().GetField(O("specialVerticalForce"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Cosmetics::CosmeticEffectsOnPlayers_TargetType GetTarget() {
            static BNM::Field<::GorillaTag_Cosmetics::CosmeticEffectsOnPlayers_TargetType> _field = GetClass().GetField(O("target"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetVFXGameObject() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("VFXGameObject"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::AudioClip*>* GetVoiceOverrideLoudClips() {
            static BNM::Field<::BNM::Structures::Mono::Array<::AudioClip*>*> _field = GetClass().GetField(O("voiceOverrideLoudClips"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetVoiceOverrideLoudThreshold() {
            static BNM::Field<float> _field = GetClass().GetField(O("voiceOverrideLoudThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetVoiceOverrideLoudVolume() {
            static BNM::Field<float> _field = GetClass().GetField(O("voiceOverrideLoudVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::AudioClip*>* GetVoiceOverrideNormalClips() {
            static BNM::Field<::BNM::Structures::Mono::Array<::AudioClip*>*> _field = GetClass().GetField(O("voiceOverrideNormalClips"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetVoiceOverrideNormalVolume() {
            static BNM::Field<float> _field = GetClass().GetField(O("voiceOverrideNormalVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetApplyScaleToKnockbackStrength(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("applyScaleToKnockbackStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEffectDistanceRadius(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("effectDistanceRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEffectDurationOthers(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("effectDurationOthers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEffectDurationOwner(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("effectDurationOwner"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEffectType(::GorillaTag_Cosmetics::CosmeticEffectsOnPlayers_EFFECTTYPE value) {
            static BNM::Field<::GorillaTag_Cosmetics::CosmeticEffectsOnPlayers_EFFECTTYPE> _field = GetClass().GetField(O("effectType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetExcludeForGameModes(::BNM::Structures::Mono::Array<::GorillaGameModes::GameModeType>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaGameModes::GameModeType>*> _field = GetClass().GetField(O("excludeForGameModes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetForceOffTheGround(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("forceOffTheGround"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetKnockbackStrength(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("knockbackStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetKnockbackVFX(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("knockbackVFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxKnockbackStrength(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxKnockbackStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMinKnockbackStrength(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("minKnockbackStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetModesHash(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("modesHash"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNewSkin(::GlobalNamespace::GorillaSkin* value) {
            static BNM::Field<::GlobalNamespace::GorillaSkin*> _field = GetClass().GetField(O("newSkin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSfxAudioClip(::BNM::Structures::Mono::List<::AudioClip*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::AudioClip*>*> _field = GetClass().GetField(O("sfxAudioClip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpecialVerticalForce(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("specialVerticalForce"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTarget(::GorillaTag_Cosmetics::CosmeticEffectsOnPlayers_TargetType value) {
            static BNM::Field<::GorillaTag_Cosmetics::CosmeticEffectsOnPlayers_TargetType> _field = GetClass().GetField(O("target"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVFXGameObject(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("VFXGameObject"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVoiceOverrideLoudClips(::BNM::Structures::Mono::Array<::AudioClip*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::AudioClip*>*> _field = GetClass().GetField(O("voiceOverrideLoudClips"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVoiceOverrideLoudThreshold(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("voiceOverrideLoudThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVoiceOverrideLoudVolume(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("voiceOverrideLoudVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVoiceOverrideNormalClips(::BNM::Structures::Mono::Array<::AudioClip*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::AudioClip*>*> _field = GetClass().GetField(O("voiceOverrideNormalClips"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVoiceOverrideNormalVolume(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("voiceOverrideNormalVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        float get_EffectDuration() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_EffectDuration"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_EffectStartedTime() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_EffectStartedTime"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_knockbackStrengthMultiplier() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_knockbackStrengthMultiplier"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* get_Modes() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_Modes"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool HasKnockback() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("HasKnockback"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool IsGameModeAllowed() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsGameModeAllowed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool IsInstantKnockback() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsInstantKnockback"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool IsSFX() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsSFX"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool IsSkin() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsSkin"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool IsTagKnockback() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsTagKnockback"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool IsVFX() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsVFX"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool IsVO() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsVO"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void set_EffectDuration(float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_EffectDuration"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_EffectStartedTime(float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_EffectStartedTime"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_knockbackStrengthMultiplier(float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_knockbackStrengthMultiplier"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
