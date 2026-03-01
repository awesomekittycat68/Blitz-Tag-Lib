#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace ExitGames_Client_Photon {
    enum class ConnectionProtocol : uint8_t {
        Udp = 0,
        Tcp = 1,
        WebSocket = 4,
        WebSocketSecure = 5,
    };
}
