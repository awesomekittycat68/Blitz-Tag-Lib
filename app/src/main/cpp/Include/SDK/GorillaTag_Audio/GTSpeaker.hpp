#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../Photon_Voice_Unity/Speaker.hpp"

namespace GorillaTag_Audio {
    struct GTSpeaker : ::Photon_Voice_Unity::Speaker {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.Audio", "GTSpeaker");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetAudioOutputStarted() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_audioOutputStarted"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetChannels() {
            static BNM::Field<int> _field = GetClass().GetField(O("_channels"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<void*>* GetExternalAudioOutputs() {
            static BNM::Field<::BNM::Structures::Mono::List<void*>*> _field = GetClass().GetField(O("_externalAudioOutputs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::AudioSource*>* GetExternalAudioSources() {
            static BNM::Field<::BNM::Structures::Mono::Array<::AudioSource*>*> _field = GetClass().GetField(O("_externalAudioSources"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetFrameSamplesPerChannel() {
            static BNM::Field<int> _field = GetClass().GetField(O("_frameSamplesPerChannel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetFrequency() {
            static BNM::Field<int> _field = GetClass().GetField(O("_frequency"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetInitializedExternalAudioSources() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_initializedExternalAudioSources"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetBroadcastExternal() {
            static BNM::Field<bool> _field = GetClass().GetField(O("BroadcastExternal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAudioOutputStarted(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_audioOutputStarted"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetChannels(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_channels"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetExternalAudioOutputs(::BNM::Structures::Mono::List<void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<void*>*> _field = GetClass().GetField(O("_externalAudioOutputs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetExternalAudioSources(::BNM::Structures::Mono::Array<::AudioSource*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::AudioSource*>*> _field = GetClass().GetField(O("_externalAudioSources"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFrameSamplesPerChannel(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_frameSamplesPerChannel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFrequency(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_frequency"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInitializedExternalAudioSources(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_initializedExternalAudioSources"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBroadcastExternal(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("BroadcastExternal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AddExternalAudioSources(::BNM::Structures::Mono::Array<::AudioSource*>* audioSources) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddExternalAudioSources"), {"audioSources"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(audioSources);
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
        void ExternalAudioOutputStart(int frequency, int channels, int frameSamplesPerChannel) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ExternalAudioOutputStart"), {"frequency", "channels", "frameSamplesPerChannel"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(frequency, channels, frameSamplesPerChannel);
        }
        ::BNM::Structures::Mono::Func<void*>* GetAudioOutFactoryFromSource(::AudioSource* source, ::Photon_Voice::AudioOutDelayControl_PlayDelayConfig* pdc) {
            static BNM::Method<::BNM::Structures::Mono::Func<void*>*> _m = GetClass().GetMethod(O("GetAudioOutFactoryFromSource"), {"source", "pdc"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(source, pdc);
        }
        void Initialize() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Initialize"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void InitializeExternalAudioSources() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitializeExternalAudioSources"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ToggleAudioSource(bool toggle) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ToggleAudioSource"), {"toggle"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(toggle);
        }
    };
}
