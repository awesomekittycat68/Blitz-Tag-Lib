#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "VoiceComponent.hpp"

namespace Photon_Voice_Unity {
    struct WebRtcAudioDsp : ::Photon_Voice_Unity::VoiceComponent {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Voice.Unity", "WebRtcAudioDsp");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetAEC() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_AEC"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetAEC(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_AEC"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetAecHighPass() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_AecHighPass"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetAecHighPass(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_AecHighPass"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetAECMobile() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_AECMobile"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetAECMobile(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_AECMobile"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetAecOnlyWhenEnabled() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_AecOnlyWhenEnabled"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetAecOnlyWhenEnabled(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_AecOnlyWhenEnabled"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetAGC() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_AGC"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetAGC(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_AGC"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetAgcCompressionGain() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_AgcCompressionGain"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetAgcCompressionGain(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_AgcCompressionGain"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetBypass() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_Bypass"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetBypass(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Bypass"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetHighPass() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_HighPass"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetHighPass(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_HighPass"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetIsInitialized() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsInitialized"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetNoiseSuppression() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_NoiseSuppression"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetNoiseSuppression(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_NoiseSuppression"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetReverseStreamDelayMs() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_ReverseStreamDelayMs"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetReverseStreamDelayMs(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_ReverseStreamDelayMs"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetVAD() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_VAD"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetVAD(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_VAD"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetAec() {
            static BNM::Field<bool> _field = GetClass().GetField(O("aec"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetAecHighPass_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("aecHighPass"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetAECMobileComfortNoise() {
            static BNM::Field<bool> _field = GetClass().GetField(O("AECMobileComfortNoise"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetAecOnlyWhenEnabled_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("aecOnlyWhenEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetAecStarted() {
            static BNM::Field<bool> _field = GetClass().GetField(O("aecStarted"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetAgc() {
            static BNM::Field<bool> _field = GetClass().GetField(O("agc"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetAgcCompressionGain_f() {
            static BNM::Field<int> _field = GetClass().GetField(O("agcCompressionGain"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetAudioListener() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("audioListener"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Voice_Unity::AudioOutCapture* GetAudioOutCapture() {
            static BNM::Field<::Photon_Voice_Unity::AudioOutCapture*> _field = GetClass().GetField(O("audioOutCapture"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetAutoDestroyAudioOutCapture() {
            static BNM::Field<bool> _field = GetClass().GetField(O("autoDestroyAudioOutCapture"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetAutoRestartOnAudioChannelsMismatch() {
            static BNM::Field<bool> _field = GetClass().GetField(O("AutoRestartOnAudioChannelsMismatch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetBypass_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("bypass"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<void*, int>* GetChannelsMap() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<void*, int>*> _field = GetClass().GetField(O("channelsMap"));
            return _field.Get();
        }
        bool GetForceNormalAecInMobile() {
            static BNM::Field<bool> _field = GetClass().GetField(O("ForceNormalAecInMobile"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHighPass_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("highPass"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Voice::LocalVoiceAudioShort* GetLocalVoice() {
            static BNM::Field<::Photon_Voice::LocalVoiceAudioShort*> _field = GetClass().GetField(O("localVoice"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetNoiseSuppression_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("noiseSuppression"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetOutputSampleRate() {
            static BNM::Field<int> _field = GetClass().GetField(O("outputSampleRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Voice::WebRTCAudioProcessor* GetProc() {
            static BNM::Field<::Photon_Voice::WebRTCAudioProcessor*> _field = GetClass().GetField(O("proc"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Voice_Unity::Recorder* GetRecorder() {
            static BNM::Field<::Photon_Voice_Unity::Recorder*> _field = GetClass().GetField(O("recorder"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetReverseChannels() {
            static BNM::Field<int> _field = GetClass().GetField(O("reverseChannels"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetReverseStreamDelayMs_f() {
            static BNM::Field<int> _field = GetClass().GetField(O("reverseStreamDelayMs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetThreadSafety() {
            static BNM::Field<void*> _field = GetClass().GetField(O("threadSafety"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetVad() {
            static BNM::Field<bool> _field = GetClass().GetField(O("vad"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAec(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("aec"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAecHighPass_fs(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("aecHighPass"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAECMobileComfortNoise(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("AECMobileComfortNoise"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAecOnlyWhenEnabled_fs(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("aecOnlyWhenEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAecStarted(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("aecStarted"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAgc(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("agc"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAgcCompressionGain_fs(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("agcCompressionGain"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAudioListener(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("audioListener"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAudioOutCapture(::Photon_Voice_Unity::AudioOutCapture* value) {
            static BNM::Field<::Photon_Voice_Unity::AudioOutCapture*> _field = GetClass().GetField(O("audioOutCapture"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAutoDestroyAudioOutCapture(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("autoDestroyAudioOutCapture"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAutoRestartOnAudioChannelsMismatch(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("AutoRestartOnAudioChannelsMismatch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBypass_fs(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("bypass"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetForceNormalAecInMobile(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("ForceNormalAecInMobile"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHighPass_fs(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("highPass"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLocalVoice(::Photon_Voice::LocalVoiceAudioShort* value) {
            static BNM::Field<::Photon_Voice::LocalVoiceAudioShort*> _field = GetClass().GetField(O("localVoice"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNoiseSuppression_fs(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("noiseSuppression"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOutputSampleRate(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("outputSampleRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProc(::Photon_Voice::WebRTCAudioProcessor* value) {
            static BNM::Field<::Photon_Voice::WebRTCAudioProcessor*> _field = GetClass().GetField(O("proc"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRecorder(::Photon_Voice_Unity::Recorder* value) {
            static BNM::Field<::Photon_Voice_Unity::Recorder*> _field = GetClass().GetField(O("recorder"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReverseChannels(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("reverseChannels"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReverseStreamDelayMs_fs(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("reverseStreamDelayMs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetThreadSafety(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("threadSafety"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVad(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("vad"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool AudioListenerChecks(::BNM::IL2CPP::Il2CppObject* listener, bool log) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("AudioListenerChecks"), {"listener", "log"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(listener, log);
        }
        bool AudioOutCaptureChecks(::Photon_Voice_Unity::AudioOutCapture* capture, bool listenerChecks, bool log) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("AudioOutCaptureChecks"), {"capture", "listenerChecks", "log"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(capture, listenerChecks, log);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool get_AEC() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_AEC"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_AecHighPass() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_AecHighPass"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_AECMobile() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_AECMobile"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_AecOnlyWhenEnabled() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_AecOnlyWhenEnabled"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_AGC() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_AGC"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_AgcCompressionGain() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_AgcCompressionGain"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_Bypass() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_Bypass"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_HighPass() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_HighPass"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsInitialized() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsInitialized"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_NoiseSuppression() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_NoiseSuppression"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_ReverseStreamDelayMs() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_ReverseStreamDelayMs"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_VAD() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_VAD"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool Init() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("Init"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool InitAudioOutCapture() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("InitAudioOutCapture"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnAudioConfigurationChanged(bool deviceWasChanged) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnAudioConfigurationChanged"), {"deviceWasChanged"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(deviceWasChanged);
        }
        void OnAudioOutFrameFloat(::BNM::Structures::Mono::Array<float>* data, int outChannels) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnAudioOutFrameFloat"), {"data", "outChannels"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(data, outChannels);
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
        void PhotonVoiceCreated(::Photon_Voice_Unity::PhotonVoiceCreatedParams* p) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PhotonVoiceCreated"), {"p"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(p);
        }
        void PhotonVoiceRemoved() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PhotonVoiceRemoved"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Restart() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Restart"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void set_AEC(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_AEC"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_AecHighPass(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_AecHighPass"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_AECMobile(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_AECMobile"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_AecOnlyWhenEnabled(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_AecOnlyWhenEnabled"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_AGC(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_AGC"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_AgcCompressionGain(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_AgcCompressionGain"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_Bypass(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Bypass"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_HighPass(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_HighPass"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_NoiseSuppression(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_NoiseSuppression"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_ReverseStreamDelayMs(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_ReverseStreamDelayMs"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_VAD(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_VAD"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        bool SetOrSwitchAudioListener(::BNM::IL2CPP::Il2CppObject* listener) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("SetOrSwitchAudioListener"), {"listener"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(listener);
        }
        bool SetOrSwitchAudioListener(::BNM::IL2CPP::Il2CppObject* listener, bool extraChecks, bool log) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("SetOrSwitchAudioListener"), {"listener", "extraChecks", "log"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(listener, extraChecks, log);
        }
        bool SetOrSwitchAudioOutCapture(::Photon_Voice_Unity::AudioOutCapture* capture) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("SetOrSwitchAudioOutCapture"), {"capture"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(capture);
        }
        bool SetOrSwitchAudioOutCapture(::Photon_Voice_Unity::AudioOutCapture* capture, bool extraChecks, bool log) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("SetOrSwitchAudioOutCapture"), {"capture", "extraChecks", "log"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(capture, extraChecks, log);
        }
        void StartAec() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StartAec"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void StopAllProcessing() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StopAllProcessing"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool SupportedPlatformCheck() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("SupportedPlatformCheck"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void ToggleAec() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ToggleAec"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool ToggleAecOutputListener(bool on) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ToggleAecOutputListener"), {"on"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(on);
        }
        bool UnsubscribeFromAudioOutCapture(bool destroy) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("UnsubscribeFromAudioOutCapture"), {"destroy"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(destroy);
        }
    };
}
