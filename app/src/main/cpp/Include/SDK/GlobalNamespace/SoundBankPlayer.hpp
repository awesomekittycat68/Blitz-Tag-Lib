#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SoundBankPlayer_PlaylistEntry.hpp"

namespace GlobalNamespace {
    struct SoundBankPlayer : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SoundBankPlayer");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetCurrentTime() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_CurrentTime"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsPlaying() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_isPlaying"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        float GetNormalizedTime() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_NormalizedTime"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::AudioSource* GetAudioSource() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetBypassEffects() {
            static BNM::Field<bool> _field = GetClass().GetField(O("bypassEffects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetBypassListenerEffects() {
            static BNM::Field<bool> _field = GetClass().GetField(O("bypassListenerEffects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetBypassReverbZones() {
            static BNM::Field<bool> _field = GetClass().GetField(O("bypassReverbZones"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetClipDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("clipDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetCustomRolloffCurve() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("customRolloffCurve"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDopplerLevel() {
            static BNM::Field<float> _field = GetClass().GetField(O("dopplerLevel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxDistance() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMinDistance() {
            static BNM::Field<float> _field = GetClass().GetField(O("minDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetMissingSoundsAreOk() {
            static BNM::Field<bool> _field = GetClass().GetField(O("missingSoundsAreOk"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetNextIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("nextIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetOutputAudioMixerGroup() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("outputAudioMixerGroup"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPlayEndTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("playEndTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::SoundBankPlayer_PlaylistEntry>* GetPlaylist() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::SoundBankPlayer_PlaylistEntry>*> _field = GetClass().GetField(O("playlist"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetPlayOnEnable() {
            static BNM::Field<bool> _field = GetClass().GetField(O("playOnEnable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPlayStartTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("playStartTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPriority() {
            static BNM::Field<int> _field = GetClass().GetField(O("priority"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetReverbZoneMix() {
            static BNM::Field<float> _field = GetClass().GetField(O("reverbZoneMix"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetRolloffMode() {
            static BNM::Field<void*> _field = GetClass().GetField(O("rolloffMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetShuffleOrder() {
            static BNM::Field<bool> _field = GetClass().GetField(O("shuffleOrder"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SoundBankSO* GetSoundBank() {
            static BNM::Field<::GlobalNamespace::SoundBankSO*> _field = GetClass().GetField(O("soundBank"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSpatialBlend() {
            static BNM::Field<float> _field = GetClass().GetField(O("spatialBlend"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetSpatialize() {
            static BNM::Field<bool> _field = GetClass().GetField(O("spatialize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetSpatializePostEffects() {
            static BNM::Field<bool> _field = GetClass().GetField(O("spatializePostEffects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSpread() {
            static BNM::Field<float> _field = GetClass().GetField(O("spread"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAudioSource(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBypassEffects(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("bypassEffects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBypassListenerEffects(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("bypassListenerEffects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBypassReverbZones(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("bypassReverbZones"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetClipDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("clipDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCustomRolloffCurve(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("customRolloffCurve"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDopplerLevel(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("dopplerLevel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxDistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMinDistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("minDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMissingSoundsAreOk(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("missingSoundsAreOk"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNextIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("nextIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOutputAudioMixerGroup(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("outputAudioMixerGroup"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayEndTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("playEndTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlaylist(::BNM::Structures::Mono::Array<::GlobalNamespace::SoundBankPlayer_PlaylistEntry>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::SoundBankPlayer_PlaylistEntry>*> _field = GetClass().GetField(O("playlist"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayOnEnable(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("playOnEnable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayStartTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("playStartTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPriority(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("priority"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReverbZoneMix(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("reverbZoneMix"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRolloffMode(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("rolloffMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShuffleOrder(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("shuffleOrder"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSoundBank(::GlobalNamespace::SoundBankSO* value) {
            static BNM::Field<::GlobalNamespace::SoundBankSO*> _field = GetClass().GetField(O("soundBank"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpatialBlend(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("spatialBlend"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpatialize(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("spatialize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpatializePostEffects(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("spatializePostEffects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpread(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("spread"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        float get_CurrentTime() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_CurrentTime"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_isPlaying() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_isPlaying"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_NormalizedTime() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_NormalizedTime"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Play() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Play"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        template <typename TP0 = void*, typename TP1 = void*>
        void Play(TP0 volumeOverride, TP1 pitchOverride) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Play"), {"volumeOverride", "pitchOverride"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(volumeOverride, pitchOverride);
        }
        void RestartSequence() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RestartSequence"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
