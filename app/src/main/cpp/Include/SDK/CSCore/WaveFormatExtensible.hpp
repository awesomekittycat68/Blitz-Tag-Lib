#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "AudioEncoding.hpp"
#include "ChannelMask.hpp"
#include "WaveFormat.hpp"

namespace CSCore {
    struct WaveFormatExtensible : ::CSCore::WaveFormat {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("CSCore", "WaveFormatExtensible");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr int WaveFormatExtensibleExtraSize = 22;
        ::CSCore::ChannelMask GetChannelMask() {
            static BNM::Method<::CSCore::ChannelMask> _method = GetClass().GetMethod(O("get_ChannelMask"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetChannelMask(::CSCore::ChannelMask value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_ChannelMask"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetSamplesPerBlock() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_SamplesPerBlock"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetSamplesPerBlock(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_SamplesPerBlock"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetValidBitsPerSample() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_ValidBitsPerSample"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetValidBitsPerSample(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_ValidBitsPerSample"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::CSCore::ChannelMask GetChannelMask_f() {
            static BNM::Field<::CSCore::ChannelMask> _field = GetClass().GetField(O("_channelMask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int16_t GetSamplesUnion() {
            static BNM::Field<int16_t> _field = GetClass().GetField(O("_samplesUnion"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetSubFormat() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_subFormat"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetChannelMask_fs(::CSCore::ChannelMask value) {
            static BNM::Field<::CSCore::ChannelMask> _field = GetClass().GetField(O("_channelMask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSamplesUnion(int16_t value) {
            static BNM::Field<int16_t> _field = GetClass().GetField(O("_samplesUnion"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSubFormat(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("_subFormat"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void* Clone() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("Clone"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::CSCore::ChannelMask get_ChannelMask() {
            static BNM::Method<::CSCore::ChannelMask> _m = GetClass().GetMethod(O("get_ChannelMask"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_SamplesPerBlock() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_SamplesPerBlock"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* get_SubFormat() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_SubFormat"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_ValidBitsPerSample() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_ValidBitsPerSample"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void set_ChannelMask(::CSCore::ChannelMask value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_ChannelMask"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_SamplesPerBlock(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_SamplesPerBlock"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        template <typename TP0 = void*>
        void set_SubFormat(TP0 value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_SubFormat"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_ValidBitsPerSample(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_ValidBitsPerSample"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetWaveFormatTagInternal(::CSCore::AudioEncoding waveFormatTag) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetWaveFormatTagInternal"), {"waveFormatTag"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(waveFormatTag);
        }
        static void* SubTypeFromWaveFormat(::CSCore::WaveFormat* waveFormat) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("SubTypeFromWaveFormat"), {"waveFormat"});
            return _m.Call(waveFormat);
        }
        ::BNM::Structures::Mono::String* ToString_1() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ToString"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::CSCore::WaveFormat* ToWaveFormat() {
            static BNM::Method<::CSCore::WaveFormat*> _m = GetClass().GetMethod(O("ToWaveFormat"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
