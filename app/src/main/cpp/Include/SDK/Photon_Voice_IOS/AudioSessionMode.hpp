#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Voice_IOS {
    enum class AudioSessionMode : int {
        Default = 0,
        VoiceChat = 1,
        VideoRecording = 3,
        Measurement = 4,
        MoviePlayback = 5,
        VideoChat = 6,
    };
}
