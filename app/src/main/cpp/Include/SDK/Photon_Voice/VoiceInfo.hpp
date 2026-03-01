#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "Codec.hpp"
#include "OpusCodec_FrameDuration.hpp"
#include "../POpusCodec_Enums/SamplingRate.hpp"

namespace Photon_Voice {
    struct VoiceInfo : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Voice", "VoiceInfo");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetBitrate() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_Bitrate"));
            return _method.Call();
        }
        void SetBitrate(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Bitrate"));
            _method.Call(value);
        }
        int GetChannels() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_Channels"));
            return _method.Call();
        }
        void SetChannels(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Channels"));
            _method.Call(value);
        }
        ::Photon_Voice::Codec GetCodec() {
            static BNM::Method<::Photon_Voice::Codec> _method = GetClass().GetMethod(O("get_Codec"));
            return _method.Call();
        }
        void SetCodec(::Photon_Voice::Codec value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Codec"));
            _method.Call(value);
        }
        int GetFPS() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_FPS"));
            return _method.Call();
        }
        void SetFPS(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_FPS"));
            _method.Call(value);
        }
        int GetFrameDurationSamples() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_FrameDurationSamples"));
            return _method.Call();
        }
        int GetFrameDurationUs() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_FrameDurationUs"));
            return _method.Call();
        }
        void SetFrameDurationUs(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_FrameDurationUs"));
            _method.Call(value);
        }
        int GetFrameSize() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_FrameSize"));
            return _method.Call();
        }
        int GetHeight() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_Height"));
            return _method.Call();
        }
        void SetHeight(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Height"));
            _method.Call(value);
        }
        int GetKeyFrameInt() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_KeyFrameInt"));
            return _method.Call();
        }
        void SetKeyFrameInt(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_KeyFrameInt"));
            _method.Call(value);
        }
        int GetSamplingRate() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_SamplingRate"));
            return _method.Call();
        }
        void SetSamplingRate(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_SamplingRate"));
            _method.Call(value);
        }
        int GetWidth() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_Width"));
            return _method.Call();
        }
        void SetWidth(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Width"));
            _method.Call(value);
        }
        template <typename TP4 = void*>
        static ::Photon_Voice::VoiceInfo CreateAudio(::Photon_Voice::Codec codec, int samplingRate, int channels, int frameDurationUs, TP4 userdata) {
            static BNM::Method<::Photon_Voice::VoiceInfo> _m = GetClass().GetMethod(O("CreateAudio"), {"codec", "samplingRate", "channels", "frameDurationUs", "userdata"});
            return _m.Call(codec, samplingRate, channels, frameDurationUs, userdata);
        }
        template <typename TP4 = void*>
        static ::Photon_Voice::VoiceInfo CreateAudioOpus(::POpusCodec_Enums::SamplingRate samplingRate, int channels, ::Photon_Voice::OpusCodec_FrameDuration frameDurationUs, int bitrate, TP4 userdata) {
            static BNM::Method<::Photon_Voice::VoiceInfo> _m = GetClass().GetMethod(O("CreateAudioOpus"), {"samplingRate", "channels", "frameDurationUs", "bitrate", "userdata"});
            return _m.Call(samplingRate, channels, frameDurationUs, bitrate, userdata);
        }
        int get_Bitrate() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_Bitrate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_Channels() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_Channels"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Photon_Voice::Codec get_Codec() {
            static BNM::Method<::Photon_Voice::Codec> _m = GetClass().GetMethod(O("get_Codec"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_FPS() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_FPS"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_FrameDurationSamples() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_FrameDurationSamples"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_FrameDurationUs() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_FrameDurationUs"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_FrameSize() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_FrameSize"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_Height() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_Height"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_KeyFrameInt() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_KeyFrameInt"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_SamplingRate() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_SamplingRate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* get_UserData() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_UserData"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_Width() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_Width"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void set_Bitrate(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Bitrate"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_Channels(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Channels"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_Codec(::Photon_Voice::Codec value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Codec"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_FPS(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_FPS"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_FrameDurationUs(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_FrameDurationUs"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_Height(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Height"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_KeyFrameInt(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_KeyFrameInt"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_SamplingRate(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_SamplingRate"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        template <typename TP0 = void*>
        void set_UserData(TP0 value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_UserData"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_Width(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Width"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        ::BNM::Structures::Mono::String* ToString_1() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ToString"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
