#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Oculus_Platform {
    enum class LivestreamingMicrophoneStatus : int {
        Unknown = 0,
        MicrophoneOn = 1,
        MicrophoneOff = 2,
    };
}
