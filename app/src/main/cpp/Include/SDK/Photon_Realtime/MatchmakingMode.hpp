#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Realtime {
    enum class MatchmakingMode : uint8_t {
        FillRoom = 0,
        SerialMatching = 1,
        RandomMatching = 2,
    };
}
