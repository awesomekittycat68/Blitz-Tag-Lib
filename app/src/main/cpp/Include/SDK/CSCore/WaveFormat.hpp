#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "AudioEncoding.hpp"

namespace CSCore {
    struct WaveFormat : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("CSCore", "WaveFormat");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetBitsPerSample() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_BitsPerSample"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetBitsPerSample(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_BitsPerSample"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetBlockAlign() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_BlockAlign"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetBlockAlign(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_BlockAlign"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetBytesPerBlock() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_BytesPerBlock"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetBytesPerSample() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_BytesPerSample"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetBytesPerSecond() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_BytesPerSecond"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetBytesPerSecond(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_BytesPerSecond"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetChannels() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_Channels"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetChannels(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Channels"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetExtraSize() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_ExtraSize"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetExtraSize(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_ExtraSize"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetSampleRate() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_SampleRate"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetSampleRate(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_SampleRate"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::CSCore::AudioEncoding GetWaveFormatTag() {
            static BNM::Method<::CSCore::AudioEncoding> _method = GetClass().GetMethod(O("get_WaveFormatTag"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetWaveFormatTag(::CSCore::AudioEncoding value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_WaveFormatTag"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int16_t GetBitsPerSample_f() {
            static BNM::Field<int16_t> _field = GetClass().GetField(O("_bitsPerSample"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int16_t GetBlockAlign_f() {
            static BNM::Field<int16_t> _field = GetClass().GetField(O("_blockAlign"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetBytesPerSecond_f() {
            static BNM::Field<int> _field = GetClass().GetField(O("_bytesPerSecond"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int16_t GetChannels_f() {
            static BNM::Field<int16_t> _field = GetClass().GetField(O("_channels"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::CSCore::AudioEncoding GetEncoding() {
            static BNM::Field<::CSCore::AudioEncoding> _field = GetClass().GetField(O("_encoding"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int16_t GetExtraSize_f() {
            static BNM::Field<int16_t> _field = GetClass().GetField(O("_extraSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSampleRate_f() {
            static BNM::Field<int> _field = GetClass().GetField(O("_sampleRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBitsPerSample_fs(int16_t value) {
            static BNM::Field<int16_t> _field = GetClass().GetField(O("_bitsPerSample"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBlockAlign_fs(int16_t value) {
            static BNM::Field<int16_t> _field = GetClass().GetField(O("_blockAlign"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBytesPerSecond_fs(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_bytesPerSecond"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetChannels_fs(int16_t value) {
            static BNM::Field<int16_t> _field = GetClass().GetField(O("_channels"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEncoding(::CSCore::AudioEncoding value) {
            static BNM::Field<::CSCore::AudioEncoding> _field = GetClass().GetField(O("_encoding"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetExtraSize_fs(int16_t value) {
            static BNM::Field<int16_t> _field = GetClass().GetField(O("_extraSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSampleRate_fs(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_sampleRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        double BytesToMilliseconds(int64_t bytes) {
            static BNM::Method<double> _m = GetClass().GetMethod(O("BytesToMilliseconds"), {"bytes"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(bytes);
        }
        void* Clone() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("Clone"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool Equals_1(::CSCore::WaveFormat* other) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("Equals"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(other);
        }
        int get_BitsPerSample() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_BitsPerSample"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_BlockAlign() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_BlockAlign"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_BytesPerBlock() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_BytesPerBlock"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_BytesPerSample() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_BytesPerSample"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_BytesPerSecond() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_BytesPerSecond"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_Channels() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_Channels"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_ExtraSize() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_ExtraSize"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_SampleRate() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_SampleRate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::CSCore::AudioEncoding get_WaveFormatTag() {
            static BNM::Method<::CSCore::AudioEncoding> _m = GetClass().GetMethod(O("get_WaveFormatTag"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::IL2CPP::Il2CppObject* GetInformation() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("GetInformation"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int64_t MillisecondsToBytes(double milliseconds) {
            static BNM::Method<int64_t> _m = GetClass().GetMethod(O("MillisecondsToBytes"), {"milliseconds"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(milliseconds);
        }
        void set_BitsPerSample(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_BitsPerSample"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_BlockAlign(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_BlockAlign"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_BytesPerSecond(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_BytesPerSecond"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_Channels(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Channels"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_ExtraSize(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_ExtraSize"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_SampleRate(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_SampleRate"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_WaveFormatTag(::CSCore::AudioEncoding value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_WaveFormatTag"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetBitsPerSampleAndFormatProperties(int bitsPerSample) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetBitsPerSampleAndFormatProperties"), {"bitsPerSample"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(bitsPerSample);
        }
        void SetWaveFormatTagInternal(::CSCore::AudioEncoding waveFormatTag) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetWaveFormatTagInternal"), {"waveFormatTag"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(waveFormatTag);
        }
        ::BNM::Structures::Mono::String* ToString_1() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ToString"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void UpdateProperties() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateProperties"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
