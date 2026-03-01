#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "PhotonVoiceCreatedParams.hpp"

namespace Photon_Voice_Unity {
    struct Recorder_PhotonVoiceCreatedParams : ::Photon_Voice_Unity::PhotonVoiceCreatedParams {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Voice.Unity", "Recorder").GetInnerClass("PhotonVoiceCreatedParams");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

    };
}
