#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Realtime {
    enum class LobbyType : uint8_t {
        Default = 0,
        SqlLobby = 2,
        AsyncRandomLobby = 3,
    };
}
