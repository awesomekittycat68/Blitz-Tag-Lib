#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace ExitGames_Client_Photon {
    enum class ConnectionStateValue : uint8_t {
        Disconnected = 0,
        Connecting = 1,
        Connected = 3,
        Disconnecting = 4,
        AcknowledgingDisconnect = 5,
        Zombie = 6,
    };
}
