#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../Photon_Voice/FrameBuffer.hpp"
#include "../POpusCodec_Enums/Channels.hpp"
#include "../POpusCodec_Enums/OpusApplicationType.hpp"
#include "../POpusCodec_Enums/OpusCtlGetRequest.hpp"
#include "../POpusCodec_Enums/OpusCtlSetRequest.hpp"
#include "../POpusCodec_Enums/OpusStatusCode.hpp"
#include "../POpusCodec_Enums/SamplingRate.hpp"

namespace POpusCodec {
    struct Wrapper : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("POpusCodec", "Wrapper");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr const char* lib_name = "opus_egpv";
        static int get_opus_decoder_ctl(::BNM::Types::nint st, ::POpusCodec_Enums::OpusCtlGetRequest request) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_opus_decoder_ctl"), {"st", "request"});
            return _m.Call(st, request);
        }
        static int get_opus_encoder_ctl(::BNM::Types::nint st, ::POpusCodec_Enums::OpusCtlGetRequest request) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_opus_encoder_ctl"), {"st", "request"});
            return _m.Call(st, request);
        }
        static void HandleStatusCode(::POpusCodec_Enums::OpusStatusCode statusCode, ::BNM::Structures::Mono::Array<void*>* info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleStatusCode"), {"statusCode", "info"});
            _m.Call(statusCode, info);
        }
        static int opus_decode(::BNM::Types::nint st, ::Photon_Voice::FrameBuffer data, ::BNM::Structures::Mono::Array<int16_t>* pcm, int decode_fec, int channels) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("opus_decode"), {"st", "data", "pcm", "decode_fec", "channels"});
            return _m.Call(st, data, pcm, decode_fec, channels);
        }
        static int opus_decode(::BNM::Types::nint st, ::Photon_Voice::FrameBuffer data, ::BNM::Structures::Mono::Array<float>* pcm, int decode_fec, int channels) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("opus_decode"), {"st", "data", "pcm", "decode_fec", "channels"});
            return _m.Call(st, data, pcm, decode_fec, channels);
        }
        static int opus_decode(::BNM::Types::nint st, ::BNM::Types::nint data, int len, ::BNM::Structures::Mono::Array<int16_t>* pcm, int frame_size, int decode_fec) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("opus_decode"), {"st", "data", "len", "pcm", "frame_size", "decode_fec"});
            return _m.Call(st, data, len, pcm, frame_size, decode_fec);
        }
        static int opus_decode_float(::BNM::Types::nint st, ::BNM::Types::nint data, int len, ::BNM::Structures::Mono::Array<float>* pcm, int frame_size, int decode_fec) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("opus_decode_float"), {"st", "data", "len", "pcm", "frame_size", "decode_fec"});
            return _m.Call(st, data, len, pcm, frame_size, decode_fec);
        }
        static ::BNM::Types::nint opus_decoder_create(::POpusCodec_Enums::SamplingRate Fs, ::POpusCodec_Enums::Channels channels) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("opus_decoder_create"), {"Fs", "channels"});
            return _m.Call(Fs, channels);
        }
        static int opus_decoder_ctl_get(::BNM::Types::nint st, ::POpusCodec_Enums::OpusCtlGetRequest request, int& value) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("opus_decoder_ctl_get"), {"st", "request", "value"});
            return _m.Call(st, request, &value);
        }
        static int opus_decoder_ctl_set(::BNM::Types::nint st, ::POpusCodec_Enums::OpusCtlSetRequest request, int value) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("opus_decoder_ctl_set"), {"st", "request", "value"});
            return _m.Call(st, request, value);
        }
        static void opus_decoder_destroy(::BNM::Types::nint st) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("opus_decoder_destroy"), {"st"});
            _m.Call(st);
        }
        static int opus_decoder_get_size(::POpusCodec_Enums::Channels channels) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("opus_decoder_get_size"), {"channels"});
            return _m.Call(channels);
        }
        static ::POpusCodec_Enums::OpusStatusCode opus_decoder_init(::BNM::Types::nint st, ::POpusCodec_Enums::SamplingRate Fs, ::POpusCodec_Enums::Channels channels) {
            static BNM::Method<::POpusCodec_Enums::OpusStatusCode> _m = GetClass().GetMethod(O("opus_decoder_init"), {"st", "Fs", "channels"});
            return _m.Call(st, Fs, channels);
        }
        static int opus_encode(::BNM::Types::nint st, ::BNM::Structures::Mono::Array<int16_t>* pcm, int frame_size, ::BNM::Structures::Mono::Array<uint8_t>* data) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("opus_encode"), {"st", "pcm", "frame_size", "data"});
            return _m.Call(st, pcm, frame_size, data);
        }
        static int opus_encode(::BNM::Types::nint st, ::BNM::Structures::Mono::Array<float>* pcm, int frame_size, ::BNM::Structures::Mono::Array<uint8_t>* data) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("opus_encode"), {"st", "pcm", "frame_size", "data"});
            return _m.Call(st, pcm, frame_size, data);
        }
        static int opus_encode(::BNM::Types::nint st, ::BNM::Structures::Mono::Array<int16_t>* pcm, int frame_size, ::BNM::Structures::Mono::Array<uint8_t>* data, int max_data_bytes) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("opus_encode"), {"st", "pcm", "frame_size", "data", "max_data_bytes"});
            return _m.Call(st, pcm, frame_size, data, max_data_bytes);
        }
        static int opus_encode_float(::BNM::Types::nint st, ::BNM::Structures::Mono::Array<float>* pcm, int frame_size, ::BNM::Structures::Mono::Array<uint8_t>* data, int max_data_bytes) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("opus_encode_float"), {"st", "pcm", "frame_size", "data", "max_data_bytes"});
            return _m.Call(st, pcm, frame_size, data, max_data_bytes);
        }
        static ::BNM::Types::nint opus_encoder_create(::POpusCodec_Enums::SamplingRate Fs, ::POpusCodec_Enums::Channels channels, ::POpusCodec_Enums::OpusApplicationType application) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("opus_encoder_create"), {"Fs", "channels", "application"});
            return _m.Call(Fs, channels, application);
        }
        static int opus_encoder_ctl_get(::BNM::Types::nint st, ::POpusCodec_Enums::OpusCtlGetRequest request, int& value) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("opus_encoder_ctl_get"), {"st", "request", "value"});
            return _m.Call(st, request, &value);
        }
        static int opus_encoder_ctl_set(::BNM::Types::nint st, ::POpusCodec_Enums::OpusCtlSetRequest request, int value) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("opus_encoder_ctl_set"), {"st", "request", "value"});
            return _m.Call(st, request, value);
        }
        static void opus_encoder_destroy(::BNM::Types::nint st) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("opus_encoder_destroy"), {"st"});
            _m.Call(st);
        }
        static int opus_encoder_get_size(::POpusCodec_Enums::Channels channels) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("opus_encoder_get_size"), {"channels"});
            return _m.Call(channels);
        }
        static ::POpusCodec_Enums::OpusStatusCode opus_encoder_init(::BNM::Types::nint st, ::POpusCodec_Enums::SamplingRate Fs, ::POpusCodec_Enums::Channels channels, ::POpusCodec_Enums::OpusApplicationType application) {
            static BNM::Method<::POpusCodec_Enums::OpusStatusCode> _m = GetClass().GetMethod(O("opus_encoder_init"), {"st", "Fs", "channels", "application"});
            return _m.Call(st, Fs, channels, application);
        }
        static ::BNM::Types::nint opus_get_version_string() {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("opus_get_version_string"));
            return _m.Call();
        }
        static int opus_packet_get_bandwidth(::BNM::Types::nint data) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("opus_packet_get_bandwidth"), {"data"});
            return _m.Call(data);
        }
        static int opus_packet_get_nb_channels(::BNM::Structures::Mono::Array<uint8_t>* data) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("opus_packet_get_nb_channels"), {"data"});
            return _m.Call(data);
        }
        static ::BNM::Types::nint opus_strerror(::POpusCodec_Enums::OpusStatusCode error) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("opus_strerror"), {"error"});
            return _m.Call(error);
        }
        static void set_opus_decoder_ctl(::BNM::Types::nint st, ::POpusCodec_Enums::OpusCtlSetRequest request, int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_opus_decoder_ctl"), {"st", "request", "value"});
            _m.Call(st, request, value);
        }
        static void set_opus_encoder_ctl(::BNM::Types::nint st, ::POpusCodec_Enums::OpusCtlSetRequest request, int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_opus_encoder_ctl"), {"st", "request", "value"});
            _m.Call(st, request, value);
        }
    };
}
