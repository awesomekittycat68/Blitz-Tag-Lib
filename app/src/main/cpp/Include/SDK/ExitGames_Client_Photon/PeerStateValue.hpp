#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace ExitGames_Client_Photon {
    enum class PeerStateValue : uint8_t {
        Disconnected = 0,
        Connecting = 1,
        InitializingApplication = 10,
        Connected = 3,
        Disconnecting = 4,
    };
}
