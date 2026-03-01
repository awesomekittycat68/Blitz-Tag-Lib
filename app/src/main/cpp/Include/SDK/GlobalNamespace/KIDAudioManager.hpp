#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "KIDAudioManager_KIDSoundType.hpp"

namespace GlobalNamespace {
    struct KIDAudioManager : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "KIDAudioManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::KIDAudioManager* get_Instance() {
            static BNM::Method<::GlobalNamespace::KIDAudioManager*> method = GetClass().GetMethod(O("get_Instance"));
            return method.Call();
        }
        static ::GlobalNamespace::KIDAudioManager* GetInstance() {
            static BNM::Field<::GlobalNamespace::KIDAudioManager*> field = GetClass().GetField("_instance");
            return field.Get();
        }
        static constexpr const char* GAME_VOLUME = "Game_Volume";
        static constexpr const char* KID_VOLUME = "KID_UI_Volume";
        static constexpr float MUTED_VALUE = -80.0f;
        static constexpr float UNMUTED_VALUE = 0.0f;
        ::GlobalNamespace::KIDAudioManager* GetInstance_pg() {
            static BNM::Method<::GlobalNamespace::KIDAudioManager*> _method = GetClass().GetMethod(O("get_Instance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        static ::GlobalNamespace::KIDAudioManager* GetInstance_f() {
            static BNM::Field<::GlobalNamespace::KIDAudioManager*> _field = GetClass().GetField(O("_instance"));
            return _field.Get();
        }
        ::AudioSource* GetAudioSource() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetButtonClickSound() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("buttonClickSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetButtonHeldSound() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("buttonHeldSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetButtonHoverSound() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("buttonHoverSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCachedGameVolume() {
            static BNM::Field<float> _field = GetClass().GetField(O("cachedGameVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetDeniedSound() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("deniedSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetInputBackSound() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("inputBackSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsHoldSoundPlaying() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isHoldSoundPlaying"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsKIDUIActive() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isKIDUIActive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetKIDSnapshot() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("KIDSnapshot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetKidUIGroup() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("kidUIGroup"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetLoopingAudioSource() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("loopingAudioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetMainMixer() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("mainMixer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetNormalSnapshot() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("normalSnapshot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetPageTransitionSound() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("pageTransitionSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::GlobalNamespace::KIDAudioManager_KIDSoundType, ::AudioClip*>* GetSoundClips() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::KIDAudioManager_KIDSoundType, ::AudioClip*>*> _field = GetClass().GetField(O("soundClips"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetSuccessSound() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("successSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetTurnOffPermissionSound() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("turnOffPermissionSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static void SetInstance(::GlobalNamespace::KIDAudioManager* value) {
            static BNM::Field<::GlobalNamespace::KIDAudioManager*> _field = GetClass().GetField(O("_instance"));
            _field.Set(value);
        }
        void SetAudioSource(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetButtonClickSound(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("buttonClickSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetButtonHeldSound(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("buttonHeldSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetButtonHoverSound(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("buttonHoverSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCachedGameVolume(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("cachedGameVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDeniedSound(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("deniedSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInputBackSound(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("inputBackSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsHoldSoundPlaying(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isHoldSoundPlaying"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsKIDUIActive(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isKIDUIActive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetKIDSnapshot(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("KIDSnapshot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetKidUIGroup(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("kidUIGroup"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLoopingAudioSource(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("loopingAudioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMainMixer(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("mainMixer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNormalSnapshot(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("normalSnapshot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPageTransitionSound(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("pageTransitionSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSoundClips(::BNM::Structures::Mono::Dictionary<::GlobalNamespace::KIDAudioManager_KIDSoundType, ::AudioClip*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::KIDAudioManager_KIDSoundType, ::AudioClip*>*> _field = GetClass().GetField(O("soundClips"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSuccessSound(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("successSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTurnOffPermissionSound(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("turnOffPermissionSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ConfigureAudioSource() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ConfigureAudioSource"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static ::GlobalNamespace::KIDAudioManager* get_Instance_1() {
            static BNM::Method<::GlobalNamespace::KIDAudioManager*> _m = GetClass().GetMethod(O("get_Instance"));
            return _m.Call();
        }
        void InitializeSoundClips() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitializeSoundClips"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool IsInstanceValid() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsInstanceValid"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool IsKIDUIActive() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsKIDUIActive"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Coroutine::IEnumerator* PlayDelayedSound(::GlobalNamespace::KIDAudioManager_KIDSoundType soundType, float delay) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("PlayDelayedSound"), {"soundType", "delay"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(soundType, delay);
        }
        void PlaySound(::GlobalNamespace::KIDAudioManager_KIDSoundType soundType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlaySound"), {"soundType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(soundType);
        }
        void PlaySoundWithDelay(::GlobalNamespace::KIDAudioManager_KIDSoundType soundType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlaySoundWithDelay"), {"soundType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(soundType);
        }
        void SetKIDUIAudioActive(bool active) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetKIDUIAudioActive"), {"active"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(active);
        }
        void StartButtonHeldSound() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StartButtonHeldSound"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void StopButtonHeldSound() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StopButtonHeldSound"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
