#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Voice {
    template <typename T>
    struct AudioSyncBuffer$1 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Voice", "AudioSyncBuffer`1");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr int FRAME_POOL_CAPACITY = 50;
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
        int GetChannels() {
            static BNM::Field<int> _field = GetClass().GetField(O("channels"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCurPlayingFrameSamplePos() {
            static BNM::Field<int> _field = GetClass().GetField(O("curPlayingFrameSamplePos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDebugInfo() {
            static BNM::Field<bool> _field = GetClass().GetField(O("debugInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetElementSize() {
            static BNM::Field<int> _field = GetClass().GetField(O("elementSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<T>* GetEmptyFrame() {
            static BNM::Field<::BNM::Structures::Mono::Array<T>*> _field = GetClass().GetField(O("emptyFrame"));
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
        int GetMaxDevPlayDelaySamples() {
            static BNM::Field<int> _field = GetClass().GetField(O("maxDevPlayDelaySamples"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPlayDelayMs() {
            static BNM::Field<int> _field = GetClass().GetField(O("playDelayMs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSampleRate() {
            static BNM::Field<int> _field = GetClass().GetField(O("sampleRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetStarted() {
            static BNM::Field<bool> _field = GetClass().GetField(O("started"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetTargetPlayDelaySamples() {
            static BNM::Field<int> _field = GetClass().GetField(O("targetPlayDelaySamples"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetChannels(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("channels"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurPlayingFrameSamplePos(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("curPlayingFrameSamplePos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEmptyFrame(::BNM::Structures::Mono::Array<T>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<T>*> _field = GetClass().GetField(O("emptyFrame"));
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
        void SetMaxDevPlayDelaySamples(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("maxDevPlayDelaySamples"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayDelayMs(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("playDelayMs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSampleRate(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("sampleRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStarted(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("started"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTargetPlayDelaySamples(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("targetPlayDelaySamples"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void dequeueFrameQueue() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("dequeueFrameQueue"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Flush() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Flush"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
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
        void Push(::BNM::Structures::Mono::Array<T>* frame) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Push"), {"frame"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(frame);
        }
        void Read(::BNM::Structures::Mono::Array<T>* outBuf, int outChannels, int outSampleRate) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Read"), {"outBuf", "outChannels", "outSampleRate"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(outBuf, outChannels, outSampleRate);
        }
        void Service() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Service"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Start(int sampleRate, int channels, int frameSamples) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"), {"sampleRate", "channels", "frameSamples"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(sampleRate, channels, frameSamples);
        }
        void Stop() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Stop"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void syncFrameQueue() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("syncFrameQueue"));
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
