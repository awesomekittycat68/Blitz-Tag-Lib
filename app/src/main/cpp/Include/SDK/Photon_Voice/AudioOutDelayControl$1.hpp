#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "AudioOutDelayControl.hpp"

namespace Photon_Voice {
    template <typename T>
    struct AudioOutDelayControl$1 : ::Photon_Voice::AudioOutDelayControl {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Voice", "AudioOutDelayControl`1");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr int TEMPO_UP_SKIP_GROUP = 6;
        static constexpr int NO_PUSH_TIMEOUT_MS = 100;
        static constexpr int FRAME_POOL_CAPACITY = 50;
        bool GetIsFlushed() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsFlushed"));
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
        int GetOutPos() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_OutPos"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetBufferSamples() {
            static BNM::Field<int> _field = GetClass().GetField(O("bufferSamples"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetCatchingUp() {
            static BNM::Field<bool> _field = GetClass().GetField(O("catchingUp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetChannels() {
            static BNM::Field<int> _field = GetClass().GetField(O("channels"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetClipWriteSamplePos() {
            static BNM::Field<int> _field = GetClass().GetField(O("clipWriteSamplePos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDebugInfo() {
            static BNM::Field<bool> _field = GetClass().GetField(O("debugInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetFlushed() {
            static BNM::Field<bool> _field = GetClass().GetField(O("flushed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetFrameQueue() {
            static BNM::Field<void*> _field = GetClass().GetField(O("frameQueue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetFrameSamples() {
            static BNM::Field<int> _field = GetClass().GetField(O("frameSamples"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetFrameSize() {
            static BNM::Field<int> _field = GetClass().GetField(O("frameSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetFrequency() {
            static BNM::Field<int> _field = GetClass().GetField(O("frequency"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLastPushTime() {
            static BNM::Field<int> _field = GetClass().GetField(O("lastPushTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetLogger() {
            static BNM::Field<void*> _field = GetClass().GetField(O("logger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetLogPrefix() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("logPrefix"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMaxDelaySamples() {
            static BNM::Field<int> _field = GetClass().GetField(O("maxDelaySamples"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Voice::AudioOutDelayControl_PlayDelayConfig* GetPlayDelayConfig() {
            static BNM::Field<::Photon_Voice::AudioOutDelayControl_PlayDelayConfig*> _field = GetClass().GetField(O("playDelayConfig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPlayLoopCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("playLoopCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPlaySamplePosPrev() {
            static BNM::Field<int> _field = GetClass().GetField(O("playSamplePosPrev"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetProcessInService() {
            static BNM::Field<bool> _field = GetClass().GetField(O("processInService"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<T>* GetResampledFrame() {
            static BNM::Field<::BNM::Structures::Mono::Array<T>*> _field = GetClass().GetField(O("resampledFrame"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSizeofT() {
            static BNM::Field<int> _field = GetClass().GetField(O("sizeofT"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSourceTimeSamplesPrev() {
            static BNM::Field<int> _field = GetClass().GetField(O("sourceTimeSamplesPrev"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetStarted() {
            static BNM::Field<bool> _field = GetClass().GetField(O("started"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetTargetDelaySamples() {
            static BNM::Field<int> _field = GetClass().GetField(O("targetDelaySamples"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetTempoChangeHQ() {
            static BNM::Field<bool> _field = GetClass().GetField(O("tempoChangeHQ"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetUpperTargetDelaySamples() {
            static BNM::Field<int> _field = GetClass().GetField(O("upperTargetDelaySamples"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<T>* GetZeroFrame() {
            static BNM::Field<::BNM::Structures::Mono::Array<T>*> _field = GetClass().GetField(O("zeroFrame"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBufferSamples(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("bufferSamples"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCatchingUp(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("catchingUp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetChannels(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("channels"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetClipWriteSamplePos(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("clipWriteSamplePos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFlushed(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("flushed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFrameQueue(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("frameQueue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFrameSamples(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("frameSamples"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFrameSize(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("frameSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFrequency(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("frequency"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastPushTime(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("lastPushTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxDelaySamples(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("maxDelaySamples"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayDelayConfig(::Photon_Voice::AudioOutDelayControl_PlayDelayConfig* value) {
            static BNM::Field<::Photon_Voice::AudioOutDelayControl_PlayDelayConfig*> _field = GetClass().GetField(O("playDelayConfig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayLoopCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("playLoopCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlaySamplePosPrev(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("playSamplePosPrev"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetResampledFrame(::BNM::Structures::Mono::Array<T>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<T>*> _field = GetClass().GetField(O("resampledFrame"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSourceTimeSamplesPrev(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("sourceTimeSamplesPrev"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStarted(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("started"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTargetDelaySamples(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("targetDelaySamples"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTempoChangeHQ(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("tempoChangeHQ"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUpperTargetDelaySamples(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("upperTargetDelaySamples"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetZeroFrame(::BNM::Structures::Mono::Array<T>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<T>*> _field = GetClass().GetField(O("zeroFrame"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Flush() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Flush"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool get_IsFlushed() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsFlushed"));
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
        int get_OutPos() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_OutPos"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OutCreate(int frequency, int channels, int bufferSamples) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OutCreate"), {"frequency", "channels", "bufferSamples"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(frequency, channels, bufferSamples);
        }
        void OutStart() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OutStart"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OutWrite(::BNM::Structures::Mono::Array<T>* data, int offsetSamples) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OutWrite"), {"data", "offsetSamples"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(data, offsetSamples);
        }
        bool processFrame(::BNM::Structures::Mono::Array<T>* frame, int playSamplePos) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("processFrame"), {"frame", "playSamplePos"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(frame, playSamplePos);
        }
        void Push(::BNM::Structures::Mono::Array<T>* frame) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Push"), {"frame"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(frame);
        }
        void Service() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Service"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Start(int frequency, int channels, int frameSamples) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"), {"frequency", "channels", "frameSamples"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(frequency, channels, frameSamples);
        }
        void Stop() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Stop"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ToggleAudioSource(bool toggle) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ToggleAudioSource"), {"toggle"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(toggle);
        }
        int writeResampled(::BNM::Structures::Mono::Array<T>* f, int resampledLenSamples) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("writeResampled"), {"f", "resampledLenSamples"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(f, resampledLenSamples);
        }
    };
}
