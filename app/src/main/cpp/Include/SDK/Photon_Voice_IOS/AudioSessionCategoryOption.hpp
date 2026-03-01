#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Voice_IOS {
    enum class AudioSessionCategoryOption : int {
        MixWithOthers = 1,
        DuckOthers = 2,
        AllowBluetooth = 4,
        DefaultToSpeaker = 8,
    };
}
