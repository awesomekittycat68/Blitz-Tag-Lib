#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Voice_IOS {
    enum class AudioSessionCategory : int {
        Ambient = 0,
        SoloAmbient = 1,
        Playback = 2,
        Record = 3,
        PlayAndRecord = 4,
        AudioProcessing = 5,
        MultiRoute = 6,
    };
}
