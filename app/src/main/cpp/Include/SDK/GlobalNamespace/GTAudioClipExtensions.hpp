#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct GTAudioClipExtensions : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GTAudioClipExtensions");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static float GetPeakMagnitude(::AudioClip* audioClip) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("GetPeakMagnitude"), {"audioClip"});
            return _m.Call(audioClip);
        }
        static float GetRMSMagnitude(::AudioClip* audioClip) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("GetRMSMagnitude"), {"audioClip"});
            return _m.Call(audioClip);
        }
    };
}
