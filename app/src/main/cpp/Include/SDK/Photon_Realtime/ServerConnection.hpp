#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Realtime {
    enum class ServerConnection : int {
        MasterServer = 0,
        GameServer = 1,
        NameServer = 2,
    };
}
