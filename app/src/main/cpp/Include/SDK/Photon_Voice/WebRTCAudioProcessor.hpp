#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "WebRTCAudioLib.hpp"
#include "WebRTCAudioLib_Param.hpp"

namespace Photon_Voice {
    struct WebRTCAudioProcessor : ::Photon_Voice::WebRTCAudioLib {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Voice", "WebRTCAudioProcessor");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr int REVERSE_BUFFER_POOL_CAPACITY = 50;
        static constexpr int supportedFrameLenMs = 10;
        void SetAEC(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_AEC"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        void SetAECHighPass(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_AECHighPass"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        void SetAECMobile(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_AECMobile"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        void SetAECStreamDelayMs(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_AECStreamDelayMs"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        void SetAGC(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_AGC"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        void SetAGC2(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_AGC2"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        void SetAGCCompressionGain(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_AGCCompressionGain"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        void SetAGCTargetLevel(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_AGCTargetLevel"));
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
        void SetHighPass(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_HighPass"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        void SetNoiseSuppression(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_NoiseSuppression"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
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
        bool GetAecHighPass() {
            static BNM::Field<bool> _field = GetClass().GetField(O("aecHighPass"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetAecInited() {
            static BNM::Field<bool> _field = GetClass().GetField(O("aecInited"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetAecm() {
            static BNM::Field<bool> _field = GetClass().GetField(O("aecm"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetAgc() {
            static BNM::Field<bool> _field = GetClass().GetField(O("agc"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetAgc2() {
            static BNM::Field<bool> _field = GetClass().GetField(O("agc2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetAgcCompressionGain() {
            static BNM::Field<int> _field = GetClass().GetField(O("agcCompressionGain"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetAgcTargetLevel() {
            static BNM::Field<int> _field = GetClass().GetField(O("agcTargetLevel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetBypass_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("bypass"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetChannels() {
            static BNM::Field<int> _field = GetClass().GetField(O("channels"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDisposed() {
            static BNM::Field<bool> _field = GetClass().GetField(O("disposed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHighPass() {
            static BNM::Field<bool> _field = GetClass().GetField(O("highPass"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetInFrameSize() {
            static BNM::Field<int> _field = GetClass().GetField(O("inFrameSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLastProcessErr() {
            static BNM::Field<int> _field = GetClass().GetField(O("lastProcessErr"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLastProcessReverseErr() {
            static BNM::Field<int> _field = GetClass().GetField(O("lastProcessReverseErr"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetLogger() {
            static BNM::Field<void*> _field = GetClass().GetField(O("logger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetNs() {
            static BNM::Field<bool> _field = GetClass().GetField(O("ns"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Types::nint GetProc() {
            static BNM::Field<::BNM::Types::nint> _field = GetClass().GetField(O("proc"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetProcessFrameSize() {
            static BNM::Field<int> _field = GetClass().GetField(O("processFrameSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetReverseChannels() {
            static BNM::Field<int> _field = GetClass().GetField(O("reverseChannels"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetReverseSamplingRate() {
            static BNM::Field<int> _field = GetClass().GetField(O("reverseSamplingRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetReverseStreamDelayMs() {
            static BNM::Field<int> _field = GetClass().GetField(O("reverseStreamDelayMs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetReverseStreamQueue() {
            static BNM::Field<void*> _field = GetClass().GetField(O("reverseStreamQueue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetReverseStreamQueueReady() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("reverseStreamQueueReady"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetReverseStreamThreadRunning() {
            static BNM::Field<bool> _field = GetClass().GetField(O("reverseStreamThreadRunning"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSamplingRate() {
            static BNM::Field<int> _field = GetClass().GetField(O("samplingRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<int>* GetSupportedSamplingRates() {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("SupportedSamplingRates"));
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
        void SetAecHighPass(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("aecHighPass"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAecInited(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("aecInited"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAecm(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("aecm"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAgc(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("agc"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAgc2(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("agc2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAgcCompressionGain(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("agcCompressionGain"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAgcTargetLevel(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("agcTargetLevel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBypass_fs(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("bypass"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetChannels(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("channels"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDisposed(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("disposed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHighPass_fs(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("highPass"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInFrameSize(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("inFrameSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastProcessErr(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("lastProcessErr"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastProcessReverseErr(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("lastProcessReverseErr"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLogger(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("logger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNs(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("ns"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProc(::BNM::Types::nint value) {
            static BNM::Field<::BNM::Types::nint> _field = GetClass().GetField(O("proc"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProcessFrameSize(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("processFrameSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReverseChannels(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("reverseChannels"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReverseSamplingRate(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("reverseSamplingRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReverseStreamDelayMs(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("reverseStreamDelayMs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReverseStreamQueue(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("reverseStreamQueue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReverseStreamQueueReady(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("reverseStreamQueueReady"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReverseStreamThreadRunning(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("reverseStreamThreadRunning"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSamplingRate(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("samplingRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVad(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("vad"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Dispose() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Dispose"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool get_Bypass() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_Bypass"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void InitReverseStream() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitReverseStream"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnAudioOutFrameFloat(::BNM::Structures::Mono::Array<float>* data) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnAudioOutFrameFloat"), {"data"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(data);
        }
        ::BNM::Structures::Mono::Array<int16_t>* Process(::BNM::Structures::Mono::Array<int16_t>* buf) {
            static BNM::Method<::BNM::Structures::Mono::Array<int16_t>*> _m = GetClass().GetMethod(O("Process"), {"buf"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(buf);
        }
        void ReverseStreamThread() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReverseStreamThread"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void set_AEC(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_AEC"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_AECHighPass(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_AECHighPass"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_AECMobile(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_AECMobile"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_AECStreamDelayMs(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_AECStreamDelayMs"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_AGC(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_AGC"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_AGC2(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_AGC2"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_AGCCompressionGain(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_AGCCompressionGain"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_AGCTargetLevel(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_AGCTargetLevel"), {"value"});
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
        void set_VAD(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_VAD"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        int setParam(::Photon_Voice::WebRTCAudioLib_Param param, int v) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("setParam"), {"param", "v"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(param, v);
        }
    };
}
