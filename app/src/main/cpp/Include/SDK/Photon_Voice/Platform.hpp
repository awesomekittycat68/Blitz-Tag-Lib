#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "DeviceInfo.hpp"
#include "VoiceInfo.hpp"

namespace Photon_Voice {
    struct Platform : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Voice", "Platform");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        template <typename TP1 = void*>
        static void* CreateAudioInChangeNotifier(::BNM::Structures::Mono::Action<>* callback, TP1 logger) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("CreateAudioInChangeNotifier"), {"callback", "logger"});
            return _m.Call(callback, logger);
        }
        template <typename TP0 = void*>
        static void* CreateAudioInEnumerator(TP0 logger) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("CreateAudioInEnumerator"), {"logger"});
            return _m.Call(logger);
        }
        template <typename T, typename TP0 = void*>
        static void* CreateDefaultAudioEncoder(TP0 logger, ::Photon_Voice::VoiceInfo info) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("CreateDefaultAudioEncoder"), {"logger", "info"});
            return _m.Call(logger, info);
        }
        template <typename TP0 = void*, typename TP4 = void*>
        static void* CreateDefaultAudioSource(TP0 logger, ::Photon_Voice::DeviceInfo dev, int samplingRate, int channels, TP4 otherParams) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("CreateDefaultAudioSource"), {"logger", "dev", "samplingRate", "channels", "otherParams"});
            return _m.Call(logger, dev, samplingRate, channels, otherParams);
        }
    };
}
