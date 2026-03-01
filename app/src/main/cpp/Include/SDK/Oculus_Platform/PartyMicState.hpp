#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Oculus_Platform {
    enum class PartyMicState : int {
        Unknown = 0,
        Party = 1,
        App = 2,
        Mute = 3,
        Inactive = 4,
        InputShared = 5,
    };
}
