#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Voice {
    struct AudioUtil : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Voice", "AudioUtil");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static void Convert(::BNM::Structures::Mono::Array<float>* src, ::BNM::Structures::Mono::Array<int16_t>* dst, int dstCount) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Convert"), {"src", "dst", "dstCount"});
            _m.Call(src, dst, dstCount);
        }
        static void Convert(::BNM::Structures::Mono::Array<int16_t>* src, ::BNM::Structures::Mono::Array<float>* dst, int dstCount) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Convert"), {"src", "dst", "dstCount"});
            _m.Call(src, dst, dstCount);
        }
        template <typename T>
        static void ForceToStereo(::BNM::Structures::Mono::Array<T>* src, ::BNM::Structures::Mono::Array<T>* dst, int srcChannels) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ForceToStereo"), {"src", "dst", "srcChannels"});
            _m.Call(src, dst, srcChannels);
        }
        template <typename T>
        static void Resample(::BNM::Structures::Mono::Array<T>* src, ::BNM::Structures::Mono::Array<T>* dst, int dstCount, int channels) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Resample"), {"src", "dst", "dstCount", "channels"});
            _m.Call(src, dst, dstCount, channels);
        }
        template <typename T>
        static void Resample(::BNM::Structures::Mono::Array<T>* src, int srcOffset, int srcCount, ::BNM::Structures::Mono::Array<T>* dst, int dstOffset, int dstCount, int channels) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Resample"), {"src", "srcOffset", "srcCount", "dst", "dstOffset", "dstCount", "channels"});
            _m.Call(src, srcOffset, srcCount, dst, dstOffset, dstCount, channels);
        }
        template <typename T>
        static void Resample(::BNM::Structures::Mono::Array<T>* src, int srcOffset, int srcCount, int srcChannels, ::BNM::Structures::Mono::Array<T>* dst, int dstOffset, int dstCount, int dstChannels) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Resample"), {"src", "srcOffset", "srcCount", "srcChannels", "dst", "dstOffset", "dstCount", "dstChannels"});
            _m.Call(src, srcOffset, srcCount, srcChannels, dst, dstOffset, dstCount, dstChannels);
        }
        static void ResampleAndConvert(::BNM::Structures::Mono::Array<int16_t>* src, ::BNM::Structures::Mono::Array<float>* dst, int dstCount, int channels) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResampleAndConvert"), {"src", "dst", "dstCount", "channels"});
            _m.Call(src, dst, dstCount, channels);
        }
        static void ResampleAndConvert(::BNM::Structures::Mono::Array<float>* src, ::BNM::Structures::Mono::Array<int16_t>* dst, int dstCount, int channels) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResampleAndConvert"), {"src", "dst", "dstCount", "channels"});
            _m.Call(src, dst, dstCount, channels);
        }
        template <typename T>
        static ::BNM::Structures::Mono::String* tostr(::BNM::Structures::Mono::Array<T>* x, int lim) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("tostr"), {"x", "lim"});
            return _m.Call(x, lim);
        }
    };
}
