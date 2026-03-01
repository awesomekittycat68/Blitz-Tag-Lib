#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaNetworking {
    enum class GorillaComputer_ComputerState : int {
        Startup = 0,
        Color = 1,
        Name = 2,
        Turn = 3,
        Mic = 4,
        Room = 5,
        Queue = 6,
        Group = 7,
        Voice = 8,
        AutoMute = 9,
        Credits = 10,
        Visuals = 11,
        Time = 12,
        NameWarning = 13,
        Loading = 14,
        Support = 15,
        Troop = 16,
        KID = 17,
        Redemption = 18,
        Language = 19,
    };
}
