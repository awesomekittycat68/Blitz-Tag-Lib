#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../POpusCodec_Enums/Bandwidth.hpp"
#include "../POpusCodec_Enums/Channels.hpp"
#include "../POpusCodec_Enums/Complexity.hpp"
#include "../POpusCodec_Enums/Delay.hpp"
#include "../POpusCodec_Enums/ForceChannels.hpp"
#include "../POpusCodec_Enums/SamplingRate.hpp"
#include "../POpusCodec_Enums/SignalHint.hpp"

namespace POpusCodec {
    struct OpusEncoder : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("POpusCodec", "OpusEncoder");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr int BitrateMax = -1;
        static constexpr int RecommendedMaxPacketSize = 4000;
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
        ::POpusCodec_Enums::Complexity GetComplexity() {
            static BNM::Method<::POpusCodec_Enums::Complexity> _method = GetClass().GetMethod(O("get_Complexity"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetComplexity(::POpusCodec_Enums::Complexity value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Complexity"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetDtxEnabled() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_DtxEnabled"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetDtxEnabled(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_DtxEnabled"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::POpusCodec_Enums::Delay GetEncoderDelay() {
            static BNM::Method<::POpusCodec_Enums::Delay> _method = GetClass().GetMethod(O("get_EncoderDelay"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetEncoderDelay(::POpusCodec_Enums::Delay value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_EncoderDelay"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetExpectedPacketLossPercentage() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_ExpectedPacketLossPercentage"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetExpectedPacketLossPercentage(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_ExpectedPacketLossPercentage"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::POpusCodec_Enums::ForceChannels GetForceChannels() {
            static BNM::Method<::POpusCodec_Enums::ForceChannels> _method = GetClass().GetMethod(O("get_ForceChannels"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetForceChannels(::POpusCodec_Enums::ForceChannels value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_ForceChannels"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetFrameSizePerChannel() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_FrameSizePerChannel"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::POpusCodec_Enums::Channels GetInputChannels() {
            static BNM::Method<::POpusCodec_Enums::Channels> _method = GetClass().GetMethod(O("get_InputChannels"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::POpusCodec_Enums::SamplingRate GetInputSamplingRate() {
            static BNM::Method<::POpusCodec_Enums::SamplingRate> _method = GetClass().GetMethod(O("get_InputSamplingRate"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::POpusCodec_Enums::Bandwidth GetMaxBandwidth() {
            static BNM::Method<::POpusCodec_Enums::Bandwidth> _method = GetClass().GetMethod(O("get_MaxBandwidth"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetMaxBandwidth(::POpusCodec_Enums::Bandwidth value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_MaxBandwidth"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetPacketLossPercentage() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_PacketLossPercentage"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetPacketLossPercentage(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_PacketLossPercentage"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::POpusCodec_Enums::SignalHint GetSignalHint() {
            static BNM::Method<::POpusCodec_Enums::SignalHint> _method = GetClass().GetMethod(O("get_SignalHint"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetSignalHint(::POpusCodec_Enums::SignalHint value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_SignalHint"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetUseInbandFEC() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_UseInbandFEC"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetUseInbandFEC(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_UseInbandFEC"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetUseUnconstrainedVBR() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_UseUnconstrainedVBR"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetUseUnconstrainedVBR(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_UseUnconstrainedVBR"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::POpusCodec_Enums::Delay GetEncoderDelay_f() {
            static BNM::Field<::POpusCodec_Enums::Delay> _field = GetClass().GetField(O("_encoderDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetFrameSizePerChannel_f() {
            static BNM::Field<int> _field = GetClass().GetField(O("_frameSizePerChannel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Types::nint GetHandle() {
            static BNM::Field<::BNM::Types::nint> _field = GetClass().GetField(O("_handle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::POpusCodec_Enums::Channels GetInputChannels_f() {
            static BNM::Field<::POpusCodec_Enums::Channels> _field = GetClass().GetField(O("_inputChannels"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::POpusCodec_Enums::SamplingRate GetInputSamplingRate_f() {
            static BNM::Field<::POpusCodec_Enums::SamplingRate> _field = GetClass().GetField(O("_inputSamplingRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static void* GetEmptyBuffer() {
            static BNM::Field<void*> _field = GetClass().GetField(O("EmptyBuffer"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<uint8_t>* GetWritePacket() {
            static BNM::Field<::BNM::Structures::Mono::Array<uint8_t>*> _field = GetClass().GetField(O("writePacket"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetEncoderDelay_fs(::POpusCodec_Enums::Delay value) {
            static BNM::Field<::POpusCodec_Enums::Delay> _field = GetClass().GetField(O("_encoderDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFrameSizePerChannel(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_frameSizePerChannel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHandle(::BNM::Types::nint value) {
            static BNM::Field<::BNM::Types::nint> _field = GetClass().GetField(O("_handle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInputChannels(::POpusCodec_Enums::Channels value) {
            static BNM::Field<::POpusCodec_Enums::Channels> _field = GetClass().GetField(O("_inputChannels"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInputSamplingRate(::POpusCodec_Enums::SamplingRate value) {
            static BNM::Field<::POpusCodec_Enums::SamplingRate> _field = GetClass().GetField(O("_inputSamplingRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Dispose() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Dispose"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void* Encode(::BNM::Structures::Mono::Array<float>* pcmSamples) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("Encode"), {"pcmSamples"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(pcmSamples);
        }
        void* Encode(::BNM::Structures::Mono::Array<int16_t>* pcmSamples) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("Encode"), {"pcmSamples"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(pcmSamples);
        }
        int get_Bitrate() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_Bitrate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::POpusCodec_Enums::Complexity get_Complexity() {
            static BNM::Method<::POpusCodec_Enums::Complexity> _m = GetClass().GetMethod(O("get_Complexity"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_DtxEnabled() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_DtxEnabled"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::POpusCodec_Enums::Delay get_EncoderDelay() {
            static BNM::Method<::POpusCodec_Enums::Delay> _m = GetClass().GetMethod(O("get_EncoderDelay"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_ExpectedPacketLossPercentage() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_ExpectedPacketLossPercentage"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::POpusCodec_Enums::ForceChannels get_ForceChannels() {
            static BNM::Method<::POpusCodec_Enums::ForceChannels> _m = GetClass().GetMethod(O("get_ForceChannels"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_FrameSizePerChannel() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_FrameSizePerChannel"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::POpusCodec_Enums::Channels get_InputChannels() {
            static BNM::Method<::POpusCodec_Enums::Channels> _m = GetClass().GetMethod(O("get_InputChannels"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::POpusCodec_Enums::SamplingRate get_InputSamplingRate() {
            static BNM::Method<::POpusCodec_Enums::SamplingRate> _m = GetClass().GetMethod(O("get_InputSamplingRate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::POpusCodec_Enums::Bandwidth get_MaxBandwidth() {
            static BNM::Method<::POpusCodec_Enums::Bandwidth> _m = GetClass().GetMethod(O("get_MaxBandwidth"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_PacketLossPercentage() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_PacketLossPercentage"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::POpusCodec_Enums::SignalHint get_SignalHint() {
            static BNM::Method<::POpusCodec_Enums::SignalHint> _m = GetClass().GetMethod(O("get_SignalHint"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_UseInbandFEC() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_UseInbandFEC"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_UseUnconstrainedVBR() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_UseUnconstrainedVBR"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void set_Bitrate(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Bitrate"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_Complexity(::POpusCodec_Enums::Complexity value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Complexity"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_DtxEnabled(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_DtxEnabled"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_EncoderDelay(::POpusCodec_Enums::Delay value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_EncoderDelay"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_ExpectedPacketLossPercentage(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_ExpectedPacketLossPercentage"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_ForceChannels(::POpusCodec_Enums::ForceChannels value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_ForceChannels"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_MaxBandwidth(::POpusCodec_Enums::Bandwidth value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_MaxBandwidth"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_PacketLossPercentage(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_PacketLossPercentage"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_SignalHint(::POpusCodec_Enums::SignalHint value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_SignalHint"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_UseInbandFEC(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_UseInbandFEC"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_UseUnconstrainedVBR(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_UseUnconstrainedVBR"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
