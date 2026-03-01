#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Oculus_Platform {
    enum class NetSyncConnectionStatus : int {
        Unknown = 0,
        Connecting = 1,
        Disconnected = 2,
        Connected = 3,
    };
}
