#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct GRAdaptiveMusicController : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GRAdaptiveMusicController");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetNextAudioSourceIndex() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_NextAudioSourceIndex"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        float GetAdjustedSourceVolume() {
            static BNM::Field<float> _field = GetClass().GetField(O("AdjustedSourceVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::AudioSource*>* GetAudioSources() {
            static BNM::Field<::BNM::Structures::Mono::List<::AudioSource*>*> _field = GetClass().GetField(O("AudioSources"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static double GetBARDURATION() {
            static BNM::Field<double> _field = GetClass().GetField(O("BAR_DURATION"));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetCachedSourcePosition() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("cachedSourcePosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCachedSourceVolume() {
            static BNM::Field<float> _field = GetClass().GetField(O("cachedSourceVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCurrentAudioSourceIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("currentAudioSourceIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRAdaptiveMusicController_SingleTrack* GetCurrentTrack() {
            static BNM::Field<::GlobalNamespace::GRAdaptiveMusicController_SingleTrack*> _field = GetClass().GetField(O("CurrentTrack"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetFinishCoroutine() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("finishCoroutine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetRepositionAudioSourcePoint() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("RepositionAudioSourcePoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SynchedMusicController* GetSynchedMusicController() {
            static BNM::Field<::GlobalNamespace::SynchedMusicController*> _field = GetClass().GetField(O("synchedMusicController"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetTrackIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("trackIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GRAdaptiveMusicController_SingleTrack*>* GetTracks() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GRAdaptiveMusicController_SingleTrack*>*> _field = GetClass().GetField(O("Tracks"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAdjustedSourceVolume(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("AdjustedSourceVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAudioSources(::BNM::Structures::Mono::List<::AudioSource*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::AudioSource*>*> _field = GetClass().GetField(O("AudioSources"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetBARDURATION(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("BAR_DURATION"));
            _field.Set(value);
        }
        void SetCachedSourcePosition(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("cachedSourcePosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCachedSourceVolume(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("cachedSourceVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentAudioSourceIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("currentAudioSourceIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentTrack(::GlobalNamespace::GRAdaptiveMusicController_SingleTrack* value) {
            static BNM::Field<::GlobalNamespace::GRAdaptiveMusicController_SingleTrack*> _field = GetClass().GetField(O("CurrentTrack"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFinishCoroutine(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("finishCoroutine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRepositionAudioSourcePoint(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("RepositionAudioSourcePoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSynchedMusicController(::GlobalNamespace::SynchedMusicController* value) {
            static BNM::Field<::GlobalNamespace::SynchedMusicController*> _field = GetClass().GetField(O("synchedMusicController"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTrackIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("trackIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTracks(::BNM::Structures::Mono::List<::GlobalNamespace::GRAdaptiveMusicController_SingleTrack*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GRAdaptiveMusicController_SingleTrack*>*> _field = GetClass().GetField(O("Tracks"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Finish(float delay) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Finish"), {"delay"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(delay);
        }
        int get_NextAudioSourceIndex() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_NextAudioSourceIndex"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::AudioSource* GetCurrentAudioSource() {
            static BNM::Method<::AudioSource*> _m = GetClass().GetMethod(O("GetCurrentAudioSource"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::AudioSource* GetNextAudioSource() {
            static BNM::Method<::AudioSource*> _m = GetClass().GetMethod(O("GetNextAudioSource"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void GoToTrack(int nextIndex, bool force) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GoToTrack"), {"nextIndex", "force"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(nextIndex, force);
        }
        void PlayCurrentTrack() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayCurrentTrack"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Restart() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Restart"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RestartAt(int index) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RestartAt"), {"index"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(index);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void StopAllAudioSources() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StopAllAudioSources"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void TransitionToLastTrack() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TransitionToLastTrack"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void TransitionToNextTrack() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TransitionToNextTrack"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Coroutine::IEnumerator* TryFinish(float delay) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("TryFinish"), {"delay"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(delay);
        }
        void UpdateAudioSourcesPosition(::BNM::Structures::Unity::Vector3 position) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateAudioSourcesPosition"), {"position"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(position);
        }
        void UpdateAudioSourcesVolume(float volume) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateAudioSourcesVolume"), {"volume"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(volume);
        }
    };
}
