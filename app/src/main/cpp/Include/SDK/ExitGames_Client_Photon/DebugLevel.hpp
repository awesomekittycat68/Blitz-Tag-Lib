#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace ExitGames_Client_Photon {
    enum class DebugLevel : uint8_t {
        OFF = 0,
        ERROR = 1,
        WARNING = 2,
        INFO = 3,
        ALL = 5,
    };
}
