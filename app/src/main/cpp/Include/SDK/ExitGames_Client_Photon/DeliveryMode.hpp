#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace ExitGames_Client_Photon {
    enum class DeliveryMode : int {
        Unreliable = 0,
        Reliable = 1,
        UnreliableUnsequenced = 2,
        ReliableUnsequenced = 3,
    };
}
