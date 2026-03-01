#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "PlaybackDelaySettings.hpp"
#include "VoiceComponent.hpp"

namespace Photon_Voice_Unity {
    struct Speaker : ::Photon_Voice_Unity::VoiceComponent {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Voice.Unity", "Speaker");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Photon_Realtime::Player* GetActor() {
            static BNM::Method<::Photon_Realtime::Player*> _method = GetClass().GetMethod(O("get_Actor"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetActor(::Photon_Realtime::Player* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Actor"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetIsInitialized() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsInitialized"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsLinked() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsLinked"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsPlaying() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsPlaying"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetLag() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_Lag"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::Action<::Photon_Voice_Unity::Speaker*>* GetOnRemoteVoiceRemoveAction() {
            static BNM::Method<::BNM::Structures::Mono::Action<::Photon_Voice_Unity::Speaker*>*> _method = GetClass().GetMethod(O("get_OnRemoteVoiceRemoveAction"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetOnRemoteVoiceRemoveAction(::BNM::Structures::Mono::Action<::Photon_Voice_Unity::Speaker*>* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_OnRemoteVoiceRemoveAction"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetPlaybackDelayMaxHard() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_PlaybackDelayMaxHard"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetPlaybackDelayMaxSoft() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_PlaybackDelayMaxSoft"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetPlaybackDelayMinSoft() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_PlaybackDelayMinSoft"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetPlaybackOnlyWhenEnabled() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_PlaybackOnlyWhenEnabled"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetPlaybackOnlyWhenEnabled(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_PlaybackOnlyWhenEnabled"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetPlaybackStarted() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_PlaybackStarted"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetPlaybackStarted(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_PlaybackStarted"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetPlayDelayMs() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_PlayDelayMs"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetPlayDelayMs(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_PlayDelayMs"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::Photon_Voice_Unity::RemoteVoiceLink* GetRemoteVoiceLink() {
            static BNM::Method<::Photon_Voice_Unity::RemoteVoiceLink*> _method = GetClass().GetMethod(O("get_RemoteVoiceLink"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void* GetAudioOutput() {
            static BNM::Field<void*> _field = GetClass().GetField(O("audioOutput"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Func<void*>* GetCustomAudioOutFactory() {
            static BNM::Field<::BNM::Structures::Mono::Func<void*>*> _field = GetClass().GetField(O("CustomAudioOutFactory"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Voice_Unity::PlaybackDelaySettings GetPlaybackDelaySettings() {
            static BNM::Field<::Photon_Voice_Unity::PlaybackDelaySettings> _field = GetClass().GetField(O("playbackDelaySettings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetPlaybackExplicitlyStopped() {
            static BNM::Field<bool> _field = GetClass().GetField(O("playbackExplicitlyStopped"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetPlaybackOnlyWhenEnabled_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("playbackOnlyWhenEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPlayDelayMs_f() {
            static BNM::Field<int> _field = GetClass().GetField(O("playDelayMs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Voice_Unity::RemoteVoiceLink* GetRemoteVoiceLink_f() {
            static BNM::Field<::Photon_Voice_Unity::RemoteVoiceLink*> _field = GetClass().GetField(O("remoteVoiceLink"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAudioOutput(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("audioOutput"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCustomAudioOutFactory(::BNM::Structures::Mono::Func<void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Func<void*>*> _field = GetClass().GetField(O("CustomAudioOutFactory"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlaybackDelaySettings(::Photon_Voice_Unity::PlaybackDelaySettings value) {
            static BNM::Field<::Photon_Voice_Unity::PlaybackDelaySettings> _field = GetClass().GetField(O("playbackDelaySettings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlaybackExplicitlyStopped(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("playbackExplicitlyStopped"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlaybackOnlyWhenEnabled_fs(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("playbackOnlyWhenEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayDelayMs_fs(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("playDelayMs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRemoteVoiceLink(::Photon_Voice_Unity::RemoteVoiceLink* value) {
            static BNM::Field<::Photon_Voice_Unity::RemoteVoiceLink*> _field = GetClass().GetField(O("remoteVoiceLink"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AudioOutputService() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AudioOutputService"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void AudioOutputStart(int frequency, int channels, int frameSamplesPerChannel) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AudioOutputStart"), {"frequency", "channels", "frameSamplesPerChannel"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(frequency, channels, frameSamplesPerChannel);
        }
        void AudioOutputStop() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AudioOutputStop"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CleanUp() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CleanUp"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::Photon_Realtime::Player* get_Actor() {
            static BNM::Method<::Photon_Realtime::Player*> _m = GetClass().GetMethod(O("get_Actor"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsInitialized() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsInitialized"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsLinked() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsLinked"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsPlaying() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsPlaying"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_Lag() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_Lag"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::Action<::Photon_Voice_Unity::Speaker*>* get_OnRemoteVoiceRemoveAction() {
            static BNM::Method<::BNM::Structures::Mono::Action<::Photon_Voice_Unity::Speaker*>*> _m = GetClass().GetMethod(O("get_OnRemoteVoiceRemoveAction"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_PlaybackDelayMaxHard() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_PlaybackDelayMaxHard"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_PlaybackDelayMaxSoft() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_PlaybackDelayMaxSoft"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_PlaybackDelayMinSoft() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_PlaybackDelayMinSoft"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_PlaybackOnlyWhenEnabled() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_PlaybackOnlyWhenEnabled"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_PlaybackStarted() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_PlaybackStarted"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_PlayDelayMs() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_PlayDelayMs"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Photon_Voice_Unity::RemoteVoiceLink* get_RemoteVoiceLink() {
            static BNM::Method<::Photon_Voice_Unity::RemoteVoiceLink*> _m = GetClass().GetMethod(O("get_RemoteVoiceLink"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::Func<void*>* GetDefaultAudioOutFactory() {
            static BNM::Method<::BNM::Structures::Mono::Func<void*>*> _m = GetClass().GetMethod(O("GetDefaultAudioOutFactory"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void Initialize() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Initialize"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
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
        bool OnRemoteVoiceInfo(::Photon_Voice_Unity::RemoteVoiceLink* stream) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("OnRemoteVoiceInfo"), {"stream"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(stream);
        }
        void OnRemoteVoiceRemove() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnRemoteVoiceRemove"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool RestartPlayback(bool reinit) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("RestartPlayback"), {"reinit"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(reinit);
        }
        void Service() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Service"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void set_Actor(::Photon_Realtime::Player* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Actor"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_OnRemoteVoiceRemoveAction(::BNM::Structures::Mono::Action<::Photon_Voice_Unity::Speaker*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_OnRemoteVoiceRemoveAction"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_PlaybackOnlyWhenEnabled(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_PlaybackOnlyWhenEnabled"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_PlaybackStarted(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_PlaybackStarted"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_PlayDelayMs(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_PlayDelayMs"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        bool SetPlaybackDelaySettings_1(::Photon_Voice_Unity::PlaybackDelaySettings pdc) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("SetPlaybackDelaySettings"), {"pdc"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(pdc);
        }
        bool SetPlaybackDelaySettings_1(int low, int high, int max) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("SetPlaybackDelaySettings"), {"low", "high", "max"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(low, high, max);
        }
        bool StartPlayback() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("StartPlayback"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool StartPlaying() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("StartPlaying"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool StopPlayback() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("StopPlayback"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool StopPlaying(bool force) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("StopPlaying"), {"force"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(force);
        }
    };
}
