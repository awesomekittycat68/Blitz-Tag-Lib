#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "LocalVoiceAudio$1.hpp"

namespace Photon_Voice {
    struct LocalVoiceAudioFloat : ::Photon_Voice::LocalVoiceAudio$1<float> {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Voice", "LocalVoiceAudioFloat");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

    };
}
