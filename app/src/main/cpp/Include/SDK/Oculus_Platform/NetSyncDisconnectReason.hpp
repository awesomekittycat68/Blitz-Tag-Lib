#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Oculus_Platform {
    enum class NetSyncDisconnectReason : int {
        Unknown = 0,
        LocalTerminated = 1,
        ServerTerminated = 2,
        Failed = 3,
        Lost = 4,
    };
}
