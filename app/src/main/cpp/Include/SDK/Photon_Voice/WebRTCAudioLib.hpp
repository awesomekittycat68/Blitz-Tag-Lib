#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Voice {
    struct WebRTCAudioLib : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Voice", "WebRTCAudioLib");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr const char* lib_name = "webrtc-audio";
        static ::BNM::Types::nint webrtc_audio_processor_create(int samplingRate, int channels, int frameSize, int revSamplingRate, int revChannels) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("webrtc_audio_processor_create"), {"samplingRate", "channels", "frameSize", "revSamplingRate", "revChannels"});
            return _m.Call(samplingRate, channels, frameSize, revSamplingRate, revChannels);
        }
        static void webrtc_audio_processor_destroy(::BNM::Types::nint proc) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("webrtc_audio_processor_destroy"), {"proc"});
            _m.Call(proc);
        }
        static int webrtc_audio_processor_init(::BNM::Types::nint proc) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("webrtc_audio_processor_init"), {"proc"});
            return _m.Call(proc);
        }
        static int webrtc_audio_processor_process(::BNM::Types::nint proc, ::BNM::Structures::Mono::Array<int16_t>* buffer, int offset, bool& voiceDetected) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("webrtc_audio_processor_process"), {"proc", "buffer", "offset", "voiceDetected"});
            return _m.Call(proc, buffer, offset, &voiceDetected);
        }
        static int webrtc_audio_processor_process_reverse(::BNM::Types::nint proc, ::BNM::Structures::Mono::Array<int16_t>* buffer, int bufferSize) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("webrtc_audio_processor_process_reverse"), {"proc", "buffer", "bufferSize"});
            return _m.Call(proc, buffer, bufferSize);
        }
        static int webrtc_audio_processor_set_param(::BNM::Types::nint proc, int param, int v) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("webrtc_audio_processor_set_param"), {"proc", "param", "v"});
            return _m.Call(proc, param, v);
        }
    };
}
