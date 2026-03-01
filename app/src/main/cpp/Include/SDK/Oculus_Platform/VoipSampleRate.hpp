#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Oculus_Platform {
    enum class VoipSampleRate : int {
        Unknown = 0,
        HZ24000 = 1,
        HZ44100 = 2,
        HZ48000 = 3,
    };
}
