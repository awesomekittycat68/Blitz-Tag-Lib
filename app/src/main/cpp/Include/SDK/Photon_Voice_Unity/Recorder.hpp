#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../Photon_Voice/DeviceInfo.hpp"
#include "../Photon_Voice/OpusCodec_FrameDuration.hpp"
#include "NativeAndroidMicrophoneSettings.hpp"
#include "Recorder_InputSourceType.hpp"
#include "Recorder_MicType.hpp"
#include "Recorder_SampleTypeConv.hpp"
#include "VoiceComponent.hpp"
#include "../POpusCodec_Enums/SamplingRate.hpp"

namespace Photon_Voice_Unity {
    struct Recorder : ::Photon_Voice_Unity::VoiceComponent {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Voice.Unity", "Recorder");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr int MIN_OPUS_BITRATE = 6000;
        static constexpr int MAX_OPUS_BITRATE = 510000;
        ::AudioClip* GetAudioClip() {
            static BNM::Method<::AudioClip*> _method = GetClass().GetMethod(O("get_AudioClip"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetAudioClip(::AudioClip* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_AudioClip"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        uint8_t GetAudioGroup() {
            static BNM::Method<uint8_t> _method = GetClass().GetMethod(O("get_AudioGroup"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetAudioGroup(uint8_t value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_AudioGroup"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetAutoStart() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_AutoStart"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetAutoStart(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_AutoStart"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetBitrate() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_Bitrate"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetBitrate(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Bitrate"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetDebugEchoMode() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_DebugEchoMode"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetDebugEchoMode(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_DebugEchoMode"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetEncrypt() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_Encrypt"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetEncrypt(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Encrypt"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::Photon_Voice::OpusCodec_FrameDuration GetFrameDuration() {
            static BNM::Method<::Photon_Voice::OpusCodec_FrameDuration> _method = GetClass().GetMethod(O("get_FrameDuration"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetFrameDuration(::Photon_Voice::OpusCodec_FrameDuration value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_FrameDuration"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::Func<void*>* GetInputFactory() {
            static BNM::Method<::BNM::Structures::Mono::Func<void*>*> _method = GetClass().GetMethod(O("get_InputFactory"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetInputFactory(::BNM::Structures::Mono::Func<void*>* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_InputFactory"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        uint8_t GetInterestGroup() {
            static BNM::Method<uint8_t> _method = GetClass().GetMethod(O("get_InterestGroup"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetInterestGroup(uint8_t value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_InterestGroup"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetIsCurrentlyTransmitting() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsCurrentlyTransmitting"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsInitialized() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsInitialized"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsRecording() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsRecording"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetIsRecording(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_IsRecording"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetLoopAudioClip() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_LoopAudioClip"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetLoopAudioClip(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_LoopAudioClip"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::Photon_Voice::DeviceInfo GetMicrophoneDevice() {
            static BNM::Method<::Photon_Voice::DeviceInfo> _method = GetClass().GetMethod(O("get_MicrophoneDevice"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetMicrophoneDevice(::Photon_Voice::DeviceInfo value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_MicrophoneDevice"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetMicrophoneDeviceChangeDetected() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_MicrophoneDeviceChangeDetected"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetMicrophoneDeviceChangeDetected(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_MicrophoneDeviceChangeDetected"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::Photon_Voice_Unity::Recorder_MicType GetMicrophoneType() {
            static BNM::Method<::Photon_Voice_Unity::Recorder_MicType> _method = GetClass().GetMethod(O("get_MicrophoneType"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetMicrophoneType(::Photon_Voice_Unity::Recorder_MicType value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_MicrophoneType"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetPhotonMicrophoneDeviceId() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_PhotonMicrophoneDeviceId"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetPhotonMicrophoneDeviceId(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_PhotonMicrophoneDeviceId"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetReactOnSystemChanges() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_ReactOnSystemChanges"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetReactOnSystemChanges(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_ReactOnSystemChanges"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetRecordOnlyWhenEnabled() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_RecordOnlyWhenEnabled"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetRecordOnlyWhenEnabled(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_RecordOnlyWhenEnabled"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetRecordOnlyWhenJoined() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_RecordOnlyWhenJoined"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetRecordOnlyWhenJoined(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_RecordOnlyWhenJoined"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetReliableMode() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_ReliableMode"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetReliableMode(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_ReliableMode"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetRequiresInit() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_RequiresInit"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetRequiresRestart() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_RequiresRestart"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetRequiresRestart(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_RequiresRestart"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::POpusCodec_Enums::SamplingRate GetSamplingRate() {
            static BNM::Method<::POpusCodec_Enums::SamplingRate> _method = GetClass().GetMethod(O("get_SamplingRate"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetSamplingRate(::POpusCodec_Enums::SamplingRate value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_SamplingRate"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetSkipDeviceChangeChecks() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_SkipDeviceChangeChecks"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetSkipDeviceChangeChecks(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_SkipDeviceChangeChecks"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::Photon_Voice_Unity::Recorder_InputSourceType GetSourceType() {
            static BNM::Method<::Photon_Voice_Unity::Recorder_InputSourceType> _method = GetClass().GetMethod(O("get_SourceType"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetSourceType(::Photon_Voice_Unity::Recorder_InputSourceType value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_SourceType"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetStopRecordingWhenPaused() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_StopRecordingWhenPaused"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetStopRecordingWhenPaused(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_StopRecordingWhenPaused"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetSubscribedToSystemChanges() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_subscribedToSystemChanges"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetTransmitEnabled() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_TransmitEnabled"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetTransmitEnabled(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_TransmitEnabled"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetTrySamplingRateMatch() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_TrySamplingRateMatch"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetTrySamplingRateMatch(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_TrySamplingRateMatch"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::Photon_Voice_Unity::Recorder_SampleTypeConv GetTypeConvert() {
            static BNM::Method<::Photon_Voice_Unity::Recorder_SampleTypeConv> _method = GetClass().GetMethod(O("get_TypeConvert"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetTypeConvert(::Photon_Voice_Unity::Recorder_SampleTypeConv value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_TypeConvert"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::String* GetUnityMicrophoneDevice() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_UnityMicrophoneDevice"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetUnityMicrophoneDevice(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_UnityMicrophoneDevice"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetUseMicrophoneTypeFallback() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_UseMicrophoneTypeFallback"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetUseMicrophoneTypeFallback(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_UseMicrophoneTypeFallback"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetUseOnAudioFilterRead() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_UseOnAudioFilterRead"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetUseOnAudioFilterRead(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_UseOnAudioFilterRead"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::Photon_Voice::LocalVoice* GetVoice() {
            static BNM::Method<::Photon_Voice::LocalVoice*> _method = GetClass().GetMethod(O("get_Voice"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetVoiceDetection() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_VoiceDetection"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetVoiceDetection(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_VoiceDetection"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetVoiceDetectionDelayMs() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_VoiceDetectionDelayMs"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetVoiceDetectionDelayMs(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_VoiceDetectionDelayMs"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        float GetVoiceDetectionThreshold() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_VoiceDetectionThreshold"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetVoiceDetectionThreshold(float value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_VoiceDetectionThreshold"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetVoiceDetectorCalibrating() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_VoiceDetectorCalibrating"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::AudioClip* GetAudioClip_f() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("audioClip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetAutoStart_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("autoStart"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetBitrate_f() {
            static BNM::Field<int> _field = GetClass().GetField(O("bitrate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Voice::VoiceClient* GetClient() {
            static BNM::Field<::Photon_Voice::VoiceClient*> _field = GetClass().GetField(O("client"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDebugEchoMode_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("debugEchoMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetEncrypt_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("encrypt"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Voice::OpusCodec_FrameDuration GetFrameDuration_f() {
            static BNM::Field<::Photon_Voice::OpusCodec_FrameDuration> _field = GetClass().GetField(O("frameDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Func<void*>* GetInputFactory_f() {
            static BNM::Field<::BNM::Structures::Mono::Func<void*>*> _field = GetClass().GetField(O("inputFactory"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetInputSource() {
            static BNM::Field<void*> _field = GetClass().GetField(O("inputSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint8_t GetInterestGroup_f() {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("interestGroup"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsPausedOrInBackground() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isPausedOrInBackground"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsRecording_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isRecording"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetLoopAudioClip_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("loopAudioClip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetMicrophoneDeviceChangeDetected_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("microphoneDeviceChangeDetected"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetMicrophoneDeviceChangeDetectedLock() {
            static BNM::Field<void*> _field = GetClass().GetField(O("microphoneDeviceChangeDetectedLock"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Voice_Unity::Recorder_MicType GetMicrophoneType_f() {
            static BNM::Field<::Photon_Voice_Unity::Recorder_MicType> _field = GetClass().GetField(O("microphoneType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Voice_Unity::NativeAndroidMicrophoneSettings GetNativeAndroidMicrophoneSettings() {
            static BNM::Field<::Photon_Voice_Unity::NativeAndroidMicrophoneSettings> _field = GetClass().GetField(O("nativeAndroidMicrophoneSettings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetPhotonMicChangeNotifier() {
            static BNM::Field<void*> _field = GetClass().GetField(O("photonMicChangeNotifier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPhotonMicrophoneDeviceId_f() {
            static BNM::Field<int> _field = GetClass().GetField(O("photonMicrophoneDeviceId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static void* GetPhotonMicrophoneEnumerator() {
            static BNM::Field<void*> _field = GetClass().GetField(O("photonMicrophoneEnumerator"));
            return _field.Get();
        }
        void* GetPhotonMicrophonesEnumerator() {
            static BNM::Field<void*> _field = GetClass().GetField(O("photonMicrophonesEnumerator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetReactOnSystemChanges_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("reactOnSystemChanges"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRecordingStoppedExplicitly() {
            static BNM::Field<bool> _field = GetClass().GetField(O("recordingStoppedExplicitly"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRecordOnlyWhenEnabled_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("recordOnlyWhenEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRecordOnlyWhenJoined_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("recordOnlyWhenJoined"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetReliableMode_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("reliableMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::POpusCodec_Enums::SamplingRate GetSamplingRate_f() {
            static BNM::Field<::POpusCodec_Enums::SamplingRate> _field = GetClass().GetField(O("samplingRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::IL2CPP::Il2CppObject* GetSamplingRateValues() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("samplingRateValues"));
            return _field.Get();
        }
        bool GetSkipDeviceChangeChecks_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("skipDeviceChangeChecks"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Voice_Unity::Recorder_InputSourceType GetSourceType_f() {
            static BNM::Field<::Photon_Voice_Unity::Recorder_InputSourceType> _field = GetClass().GetField(O("sourceType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetStopRecordingWhenPaused_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("stopRecordingWhenPaused"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetSubscribedToSystemChangesPhoton() {
            static BNM::Field<bool> _field = GetClass().GetField(O("subscribedToSystemChangesPhoton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetSubscribedToSystemChangesUnity() {
            static BNM::Field<bool> _field = GetClass().GetField(O("subscribedToSystemChangesUnity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetTransmitEnabled_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("transmitEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetTrySamplingRateMatch_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("trySamplingRateMatch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetUnityMicrophoneDevice_f() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("unityMicrophoneDevice"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Voice_Unity::AudioInEnumerator* GetUnityMicrophonesEnumerator() {
            static BNM::Field<::Photon_Voice_Unity::AudioInEnumerator*> _field = GetClass().GetField(O("unityMicrophonesEnumerator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetUseMicrophoneTypeFallback_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("useMicrophoneTypeFallback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetUseOnAudioFilterRead_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("useOnAudioFilterRead"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetUserData() {
            static BNM::Field<void*> _field = GetClass().GetField(O("userData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Voice::LocalVoice* GetVoice_f() {
            static BNM::Field<::Photon_Voice::LocalVoice*> _field = GetClass().GetField(O("voice"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Voice_Unity::VoiceConnection* GetVoiceConnection() {
            static BNM::Field<::Photon_Voice_Unity::VoiceConnection*> _field = GetClass().GetField(O("voiceConnection"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetVoiceDetection_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("voiceDetection"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetVoiceDetectionDelayMs_f() {
            static BNM::Field<int> _field = GetClass().GetField(O("voiceDetectionDelayMs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetVoiceDetectionThreshold_f() {
            static BNM::Field<float> _field = GetClass().GetField(O("voiceDetectionThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetWasRecordingBeforePause() {
            static BNM::Field<bool> _field = GetClass().GetField(O("wasRecordingBeforePause"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAudioClip_fs(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("audioClip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAutoStart_fs(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("autoStart"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBitrate_fs(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("bitrate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetClient(::Photon_Voice::VoiceClient* value) {
            static BNM::Field<::Photon_Voice::VoiceClient*> _field = GetClass().GetField(O("client"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDebugEchoMode_fs(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("debugEchoMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEncrypt_fs(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("encrypt"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFrameDuration_fs(::Photon_Voice::OpusCodec_FrameDuration value) {
            static BNM::Field<::Photon_Voice::OpusCodec_FrameDuration> _field = GetClass().GetField(O("frameDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInputFactory_fs(::BNM::Structures::Mono::Func<void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Func<void*>*> _field = GetClass().GetField(O("inputFactory"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInputSource(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("inputSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInterestGroup_fs(uint8_t value) {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("interestGroup"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsPausedOrInBackground(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isPausedOrInBackground"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsRecording_fs(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isRecording"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLoopAudioClip_fs(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("loopAudioClip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMicrophoneDeviceChangeDetected_fs(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("microphoneDeviceChangeDetected"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMicrophoneDeviceChangeDetectedLock(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("microphoneDeviceChangeDetectedLock"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMicrophoneType_fs(::Photon_Voice_Unity::Recorder_MicType value) {
            static BNM::Field<::Photon_Voice_Unity::Recorder_MicType> _field = GetClass().GetField(O("microphoneType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNativeAndroidMicrophoneSettings(::Photon_Voice_Unity::NativeAndroidMicrophoneSettings value) {
            static BNM::Field<::Photon_Voice_Unity::NativeAndroidMicrophoneSettings> _field = GetClass().GetField(O("nativeAndroidMicrophoneSettings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPhotonMicChangeNotifier(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("photonMicChangeNotifier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPhotonMicrophoneDeviceId_fs(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("photonMicrophoneDeviceId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetPhotonMicrophoneEnumerator(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("photonMicrophoneEnumerator"));
            _field.Set(value);
        }
        void SetPhotonMicrophonesEnumerator(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("photonMicrophonesEnumerator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReactOnSystemChanges_fs(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("reactOnSystemChanges"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRecordingStoppedExplicitly(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("recordingStoppedExplicitly"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRecordOnlyWhenEnabled_fs(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("recordOnlyWhenEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRecordOnlyWhenJoined_fs(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("recordOnlyWhenJoined"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReliableMode_fs(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("reliableMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSamplingRate_fs(::POpusCodec_Enums::SamplingRate value) {
            static BNM::Field<::POpusCodec_Enums::SamplingRate> _field = GetClass().GetField(O("samplingRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSkipDeviceChangeChecks_fs(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("skipDeviceChangeChecks"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSourceType_fs(::Photon_Voice_Unity::Recorder_InputSourceType value) {
            static BNM::Field<::Photon_Voice_Unity::Recorder_InputSourceType> _field = GetClass().GetField(O("sourceType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStopRecordingWhenPaused_fs(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("stopRecordingWhenPaused"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSubscribedToSystemChangesPhoton(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("subscribedToSystemChangesPhoton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSubscribedToSystemChangesUnity(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("subscribedToSystemChangesUnity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTransmitEnabled_fs(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("transmitEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTrySamplingRateMatch_fs(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("trySamplingRateMatch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUnityMicrophoneDevice_fs(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("unityMicrophoneDevice"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUnityMicrophonesEnumerator(::Photon_Voice_Unity::AudioInEnumerator* value) {
            static BNM::Field<::Photon_Voice_Unity::AudioInEnumerator*> _field = GetClass().GetField(O("unityMicrophonesEnumerator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUseMicrophoneTypeFallback_fs(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("useMicrophoneTypeFallback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUseOnAudioFilterRead_fs(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("useOnAudioFilterRead"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUserData(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("userData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVoice(::Photon_Voice::LocalVoice* value) {
            static BNM::Field<::Photon_Voice::LocalVoice*> _field = GetClass().GetField(O("voice"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVoiceConnection(::Photon_Voice_Unity::VoiceConnection* value) {
            static BNM::Field<::Photon_Voice_Unity::VoiceConnection*> _field = GetClass().GetField(O("voiceConnection"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVoiceDetection_fs(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("voiceDetection"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVoiceDetectionDelayMs_fs(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("voiceDetectionDelayMs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVoiceDetectionThreshold_fs(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("voiceDetectionThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWasRecordingBeforePause(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("wasRecordingBeforePause"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void CheckAndAutoStart() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CheckAndAutoStart"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CheckAndAutoStart(bool autoStartFlag) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CheckAndAutoStart"), {"autoStartFlag"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(autoStartFlag);
        }
        void CheckAndSetSamplingRate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CheckAndSetSamplingRate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CheckAndSetSamplingRate(::POpusCodec_Enums::SamplingRate sR) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CheckAndSetSamplingRate"), {"sR"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(sR);
        }
        template <typename TP0 = void*>
        static bool CheckIfMicrophoneIdIsValid(TP0 audioInEnumerator, int id) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CheckIfMicrophoneIdIsValid"), {"audioInEnumerator", "id"});
            return _m.Call(audioInEnumerator, id);
        }
        bool CheckIfThereIsAtLeastOneMic() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CheckIfThereIsAtLeastOneMic"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static bool CompareUnityMicNames(::BNM::Structures::Mono::String* mic1, ::BNM::Structures::Mono::String* mic2) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CompareUnityMicNames"), {"mic1", "mic2"});
            return _m.Call(mic1, mic2);
        }
        ::Photon_Voice::LocalVoice* CreateLocalVoiceAudioAndSource() {
            static BNM::Method<::Photon_Voice::LocalVoice*> _m = GetClass().GetMethod(O("CreateLocalVoiceAudioAndSource"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Photon_Voice_Unity::MicWrapper* CreateMicWrapper(::BNM::Structures::Mono::String* micDev, int samplingRateInt, ::Photon_Voice_Unity::VoiceLogger* logger) {
            static BNM::Method<::Photon_Voice_Unity::MicWrapper*> _m = GetClass().GetMethod(O("CreateMicWrapper"), {"micDev", "samplingRateInt", "logger"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(micDev, samplingRateInt, logger);
        }
        static void* CreatePhotonDeviceEnumerator(::Photon_Voice_Unity::VoiceLogger* voiceLogger) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("CreatePhotonDeviceEnumerator"), {"voiceLogger"});
            return _m.Call(voiceLogger);
        }
        ::AudioClip* get_AudioClip() {
            static BNM::Method<::AudioClip*> _m = GetClass().GetMethod(O("get_AudioClip"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        uint8_t get_AudioGroup() {
            static BNM::Method<uint8_t> _m = GetClass().GetMethod(O("get_AudioGroup"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_AutoStart() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_AutoStart"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_Bitrate() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_Bitrate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_DebugEchoMode() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_DebugEchoMode"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_Encrypt() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_Encrypt"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Photon_Voice::OpusCodec_FrameDuration get_FrameDuration() {
            static BNM::Method<::Photon_Voice::OpusCodec_FrameDuration> _m = GetClass().GetMethod(O("get_FrameDuration"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::Func<void*>* get_InputFactory() {
            static BNM::Method<::BNM::Structures::Mono::Func<void*>*> _m = GetClass().GetMethod(O("get_InputFactory"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* get_InputSource() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_InputSource"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        uint8_t get_InterestGroup() {
            static BNM::Method<uint8_t> _m = GetClass().GetMethod(O("get_InterestGroup"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsCurrentlyTransmitting() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsCurrentlyTransmitting"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsInitialized() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsInitialized"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsRecording() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsRecording"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* get_LevelMeter() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_LevelMeter"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_LoopAudioClip() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_LoopAudioClip"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Photon_Voice::DeviceInfo get_MicrophoneDevice() {
            static BNM::Method<::Photon_Voice::DeviceInfo> _m = GetClass().GetMethod(O("get_MicrophoneDevice"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_MicrophoneDeviceChangeDetected() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_MicrophoneDeviceChangeDetected"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* get_MicrophonesEnumerator() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_MicrophonesEnumerator"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Photon_Voice_Unity::Recorder_MicType get_MicrophoneType() {
            static BNM::Method<::Photon_Voice_Unity::Recorder_MicType> _m = GetClass().GetMethod(O("get_MicrophoneType"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_PhotonMicrophoneDeviceId() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_PhotonMicrophoneDeviceId"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static void* get_PhotonMicrophoneEnumerator() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_PhotonMicrophoneEnumerator"));
            return _m.Call();
        }
        bool get_ReactOnSystemChanges() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_ReactOnSystemChanges"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_RecordOnlyWhenEnabled() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_RecordOnlyWhenEnabled"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_RecordOnlyWhenJoined() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_RecordOnlyWhenJoined"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_ReliableMode() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_ReliableMode"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_RequiresInit() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_RequiresInit"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_RequiresRestart() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_RequiresRestart"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::POpusCodec_Enums::SamplingRate get_SamplingRate() {
            static BNM::Method<::POpusCodec_Enums::SamplingRate> _m = GetClass().GetMethod(O("get_SamplingRate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_SkipDeviceChangeChecks() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_SkipDeviceChangeChecks"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Photon_Voice_Unity::Recorder_InputSourceType get_SourceType() {
            static BNM::Method<::Photon_Voice_Unity::Recorder_InputSourceType> _m = GetClass().GetMethod(O("get_SourceType"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_StopRecordingWhenPaused() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_StopRecordingWhenPaused"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_subscribedToSystemChanges() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_subscribedToSystemChanges"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_TransmitEnabled() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_TransmitEnabled"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_TrySamplingRateMatch() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_TrySamplingRateMatch"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Photon_Voice_Unity::Recorder_SampleTypeConv get_TypeConvert() {
            static BNM::Method<::Photon_Voice_Unity::Recorder_SampleTypeConv> _m = GetClass().GetMethod(O("get_TypeConvert"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* get_UnityMicrophoneDevice() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_UnityMicrophoneDevice"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_UseMicrophoneTypeFallback() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_UseMicrophoneTypeFallback"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_UseOnAudioFilterRead() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_UseOnAudioFilterRead"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* get_UserData() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_UserData"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Photon_Voice::LocalVoice* get_Voice() {
            static BNM::Method<::Photon_Voice::LocalVoice*> _m = GetClass().GetMethod(O("get_Voice"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* get_voiceAudio() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_voiceAudio"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_VoiceDetection() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_VoiceDetection"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_VoiceDetectionDelayMs() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_VoiceDetectionDelayMs"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_VoiceDetectionThreshold() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_VoiceDetectionThreshold"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* get_VoiceDetector() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_VoiceDetector"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_VoiceDetectorCalibrating() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_VoiceDetectorCalibrating"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void GetActivityDelayFromDetector() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetActivityDelayFromDetector"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::Photon_Voice::DeviceInfo GetDeviceById(int id) {
            static BNM::Method<::Photon_Voice::DeviceInfo> _m = GetClass().GetMethod(O("GetDeviceById"), {"id"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(id);
        }
        ::Photon_Voice::DeviceInfo GetDeviceById(::BNM::Structures::Mono::String* id) {
            static BNM::Method<::Photon_Voice::DeviceInfo> _m = GetClass().GetMethod(O("GetDeviceById"), {"id"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(id);
        }
        void* GetMicrophonesEnumerator(::Photon_Voice_Unity::Recorder_MicType micType) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("GetMicrophonesEnumerator"), {"micType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(micType);
        }
        void GetStatusFromDetector() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetStatusFromDetector"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::POpusCodec_Enums::SamplingRate GetSupportedSamplingRate(int requested) {
            static BNM::Method<::POpusCodec_Enums::SamplingRate> _m = GetClass().GetMethod(O("GetSupportedSamplingRate"), {"requested"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(requested);
        }
        ::POpusCodec_Enums::SamplingRate GetSupportedSamplingRate(::POpusCodec_Enums::SamplingRate sR) {
            static BNM::Method<::POpusCodec_Enums::SamplingRate> _m = GetClass().GetMethod(O("GetSupportedSamplingRate"), {"sR"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(sR);
        }
        ::POpusCodec_Enums::SamplingRate GetSupportedSamplingRate(::POpusCodec_Enums::SamplingRate requested, int minFreq, int maxFreq) {
            static BNM::Method<::POpusCodec_Enums::SamplingRate> _m = GetClass().GetMethod(O("GetSupportedSamplingRate"), {"requested", "minFreq", "maxFreq"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(requested, minFreq, maxFreq);
        }
        ::POpusCodec_Enums::SamplingRate GetSupportedSamplingRateForUnityMicrophone(::POpusCodec_Enums::SamplingRate requested) {
            static BNM::Method<::POpusCodec_Enums::SamplingRate> _m = GetClass().GetMethod(O("GetSupportedSamplingRateForUnityMicrophone"), {"requested"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(requested);
        }
        void GetThresholdFromDetector() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetThresholdFromDetector"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void HandleApplicationPause(bool paused) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleApplicationPause"), {"paused"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(paused);
        }
        void HandleDeviceChange() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleDeviceChange"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Init(::Photon_Voice_Unity::VoiceConnection* connection) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Init"), {"connection"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(connection);
        }
        static bool IsDefaultUnityMic(::BNM::Structures::Mono::String* mic) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsDefaultUnityMic"), {"mic"});
            return _m.Call(mic);
        }
        bool IsValidPhotonMic() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsValidPhotonMic"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool IsValidPhotonMic(int id) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsValidPhotonMic"), {"id"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(id);
        }
        static bool IsValidUnityMic(::BNM::Structures::Mono::String* mic) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsValidUnityMic"), {"mic"});
            return _m.Call(mic);
        }
        void OnApplicationFocus(bool focused) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnApplicationFocus"), {"focused"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(focused);
        }
        void OnApplicationPause(bool paused) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnApplicationPause"), {"paused"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(paused);
        }
        void OnAudioConfigChanged(bool deviceWasChanged) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnAudioConfigChanged"), {"deviceWasChanged"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(deviceWasChanged);
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
        void PhotonMicrophoneChangeDetected() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PhotonMicrophoneChangeDetected"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ReInit() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReInit"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RemoveVoice() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveVoice"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool ResetLocalAudio() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ResetLocalAudio"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void RestartRecording(bool force) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RestartRecording"), {"force"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(force);
        }
        void SendPhotonVoiceCreatedMessage() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendPhotonVoiceCreatedMessage"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void set_AudioClip(::AudioClip* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_AudioClip"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_AudioGroup(uint8_t value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_AudioGroup"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_AutoStart(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_AutoStart"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_Bitrate(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Bitrate"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_DebugEchoMode(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_DebugEchoMode"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_Encrypt(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Encrypt"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_FrameDuration(::Photon_Voice::OpusCodec_FrameDuration value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_FrameDuration"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_InputFactory(::BNM::Structures::Mono::Func<void*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_InputFactory"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_InterestGroup(uint8_t value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_InterestGroup"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_IsRecording(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_IsRecording"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_LoopAudioClip(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_LoopAudioClip"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_MicrophoneDevice(::Photon_Voice::DeviceInfo value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_MicrophoneDevice"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_MicrophoneDeviceChangeDetected(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_MicrophoneDeviceChangeDetected"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_MicrophoneType(::Photon_Voice_Unity::Recorder_MicType value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_MicrophoneType"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_PhotonMicrophoneDeviceId(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_PhotonMicrophoneDeviceId"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_ReactOnSystemChanges(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_ReactOnSystemChanges"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_RecordOnlyWhenEnabled(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_RecordOnlyWhenEnabled"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_RecordOnlyWhenJoined(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_RecordOnlyWhenJoined"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_ReliableMode(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_ReliableMode"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_RequiresRestart(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_RequiresRestart"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_SamplingRate(::POpusCodec_Enums::SamplingRate value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_SamplingRate"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_SkipDeviceChangeChecks(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_SkipDeviceChangeChecks"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_SourceType(::Photon_Voice_Unity::Recorder_InputSourceType value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_SourceType"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_StopRecordingWhenPaused(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_StopRecordingWhenPaused"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_TransmitEnabled(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_TransmitEnabled"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_TrySamplingRateMatch(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_TrySamplingRateMatch"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_TypeConvert(::Photon_Voice_Unity::Recorder_SampleTypeConv value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_TypeConvert"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_UnityMicrophoneDevice(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_UnityMicrophoneDevice"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_UseMicrophoneTypeFallback(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_UseMicrophoneTypeFallback"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_UseOnAudioFilterRead(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_UseOnAudioFilterRead"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        template <typename TP0 = void*>
        void set_UserData(TP0 value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_UserData"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_VoiceDetection(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_VoiceDetection"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_VoiceDetectionDelayMs(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_VoiceDetectionDelayMs"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_VoiceDetectionThreshold(float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_VoiceDetectionThreshold"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        bool SetAndroidNativeMicrophoneSettings(::Photon_Voice_Unity::NativeAndroidMicrophoneSettings nams) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("SetAndroidNativeMicrophoneSettings"), {"nams"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(nams);
        }
        bool SetAndroidNativeMicrophoneSettings(bool aec, bool agc, bool ns) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("SetAndroidNativeMicrophoneSettings"), {"aec", "agc", "ns"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(aec, agc, ns);
        }
        void Setup() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Setup"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void StartRecording() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StartRecording"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void StartRecordingInternal() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StartRecordingInternal"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void StopRecording() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StopRecording"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void StopRecordingInternal() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StopRecordingInternal"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SubscribeToSystemChanges() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SubscribeToSystemChanges"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UnsubscribeFromSystemChanges() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnsubscribeFromSystemChanges"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void VoiceDetectorCalibrate(int durationMs, ::BNM::Structures::Mono::Action<float>* detectionEndedCallback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("VoiceDetectorCalibrate"), {"durationMs", "detectionEndedCallback"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(durationMs, detectionEndedCallback);
        }
    };
}
