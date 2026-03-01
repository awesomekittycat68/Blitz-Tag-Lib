#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "AudioUtil_VoiceDetector$1.hpp"

namespace Photon_Voice {
    struct AudioUtil_VoiceDetectorFloat : ::Photon_Voice::AudioUtil_VoiceDetector$1<float> {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Voice", "AudioUtil").GetInnerClass("VoiceDetectorFloat");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Array<float>* Process(::BNM::Structures::Mono::Array<float>* buffer) {
            static BNM::Method<::BNM::Structures::Mono::Array<float>*> _m = GetClass().GetMethod(O("Process"), {"buffer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(buffer);
        }
    };
}
