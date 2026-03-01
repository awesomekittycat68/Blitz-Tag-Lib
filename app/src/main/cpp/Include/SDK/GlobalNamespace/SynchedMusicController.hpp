#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SynchedMusicController_SyncedSongInfo.hpp"

namespace GlobalNamespace {
    struct SynchedMusicController : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SynchedMusicController");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr int kPlaylistLength = 256;
        ::BNM::Structures::Mono::Array<int>* GetAudioClipsForPlaying() {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("audioClipsForPlaying"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetAudioSource() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::AudioSource*>* GetAudioSourceArray() {
            static BNM::Field<::BNM::Structures::Mono::Array<::AudioSource*>*> _field = GetClass().GetField(O("audioSourceArray"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<int>* GetAudioSourcesForPlaying() {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("audioSourcesForPlaying"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int64_t GetCurrentTime() {
            static BNM::Field<int64_t> _field = GetClass().GetField(O("currentTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsPlayingCurrently() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isPlayingCurrently"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLastPlayIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("lastPlayIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetLocationName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("locationName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int64_t GetMinimumWait() {
            static BNM::Field<int64_t> _field = GetClass().GetField(O("minimumWait"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaPressableButton* GetMuteButton() {
            static BNM::Field<::GlobalNamespace::GorillaPressableButton*> _field = GetClass().GetField(O("muteButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::GorillaPressableButton*>* GetMuteButtons() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GorillaPressableButton*>*> _field = GetClass().GetField(O("muteButtons"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMySeed() {
            static BNM::Field<int> _field = GetClass().GetField(O("mySeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetRandomInterval() {
            static BNM::Field<int> _field = GetClass().GetField(O("randomInterval"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetRandomNumberGenerator() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("randomNumberGenerator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetShufflePlaylist() {
            static BNM::Field<bool> _field = GetClass().GetField(O("shufflePlaylist"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::AudioClip*>* GetSongsArray() {
            static BNM::Field<::BNM::Structures::Mono::Array<::AudioClip*>*> _field = GetClass().GetField(O("songsArray"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<int64_t>* GetSongStartTimes() {
            static BNM::Field<::BNM::Structures::Mono::Array<int64_t>*> _field = GetClass().GetField(O("songStartTimes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::SynchedMusicController_SyncedSongInfo>* GetSyncedSongs() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::SynchedMusicController_SyncedSongInfo>*> _field = GetClass().GetField(O("syncedSongs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetTestPlay() {
            static BNM::Field<bool> _field = GetClass().GetField(O("testPlay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int64_t GetTotalLoopTime() {
            static BNM::Field<int64_t> _field = GetClass().GetField(O("totalLoopTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetTwoLayer() {
            static BNM::Field<bool> _field = GetClass().GetField(O("twoLayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetUsingMultipleSongs() {
            static BNM::Field<bool> _field = GetClass().GetField(O("usingMultipleSongs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetUsingMultipleSources() {
            static BNM::Field<bool> _field = GetClass().GetField(O("usingMultipleSources"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetUsingNewSyncedSongsCode() {
            static BNM::Field<bool> _field = GetClass().GetField(O("usingNewSyncedSongsCode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAudioClipsForPlaying(::BNM::Structures::Mono::Array<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("audioClipsForPlaying"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAudioSource(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAudioSourceArray(::BNM::Structures::Mono::Array<::AudioSource*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::AudioSource*>*> _field = GetClass().GetField(O("audioSourceArray"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAudioSourcesForPlaying(::BNM::Structures::Mono::Array<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("audioSourcesForPlaying"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentTime(int64_t value) {
            static BNM::Field<int64_t> _field = GetClass().GetField(O("currentTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsPlayingCurrently(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isPlayingCurrently"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastPlayIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("lastPlayIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLocationName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("locationName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMinimumWait(int64_t value) {
            static BNM::Field<int64_t> _field = GetClass().GetField(O("minimumWait"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMuteButton(::GlobalNamespace::GorillaPressableButton* value) {
            static BNM::Field<::GlobalNamespace::GorillaPressableButton*> _field = GetClass().GetField(O("muteButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMuteButtons(::BNM::Structures::Mono::Array<::GlobalNamespace::GorillaPressableButton*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GorillaPressableButton*>*> _field = GetClass().GetField(O("muteButtons"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMySeed(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("mySeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRandomInterval(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("randomInterval"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRandomNumberGenerator(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("randomNumberGenerator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShufflePlaylist(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("shufflePlaylist"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSongsArray(::BNM::Structures::Mono::Array<::AudioClip*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::AudioClip*>*> _field = GetClass().GetField(O("songsArray"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSongStartTimes(::BNM::Structures::Mono::Array<int64_t>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<int64_t>*> _field = GetClass().GetField(O("songStartTimes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSyncedSongs(::BNM::Structures::Mono::Array<::GlobalNamespace::SynchedMusicController_SyncedSongInfo>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::SynchedMusicController_SyncedSongInfo>*> _field = GetClass().GetField(O("syncedSongs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTestPlay(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("testPlay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTotalLoopTime(int64_t value) {
            static BNM::Field<int64_t> _field = GetClass().GetField(O("totalLoopTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTwoLayer(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("twoLayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUsingMultipleSongs(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("usingMultipleSongs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUsingMultipleSources(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("usingMultipleSources"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUsingNewSyncedSongsCode(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("usingNewSyncedSongsCode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void GenerateSongStartRandomTimes() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GenerateSongStartRandomTimes"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void MuteAudio(::GlobalNamespace::GorillaPressableButton* pressedButton) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("MuteAudio"), {"pressedButton"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pressedButton);
        }
        void New_GeneratePlaylistArrays() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("New_GeneratePlaylistArrays"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void New_Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("New_Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void New_Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("New_Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Structures::Mono::String* New_Validate() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("New_Validate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnDisable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SliceUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SliceUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void StartPlayingSong(int64_t timeStarted, int64_t currentTime) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StartPlayingSong"), {"timeStarted", "currentTime"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(timeStarted, currentTime);
        }
        void StartPlayingSong(int64_t timeStarted, int64_t currentTime, ::AudioClip* clipToPlay, ::AudioSource* sourceToPlay) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StartPlayingSong"), {"timeStarted", "currentTime", "clipToPlay", "sourceToPlay"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(timeStarted, currentTime, clipToPlay, sourceToPlay);
        }
        void StartPlayingSongs(int64_t timeStarted, int64_t currentTime) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StartPlayingSongs"), {"timeStarted", "currentTime"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(timeStarted, currentTime);
        }
        void StopAllAudioSources() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StopAllAudioSources"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
