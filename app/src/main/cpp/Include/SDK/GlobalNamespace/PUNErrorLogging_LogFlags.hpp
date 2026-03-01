#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class PUNErrorLogging_LogFlags : int {
        SerializeView = 1,
        OwnershipTransfer = 2,
        OwnershipRequest = 4,
        OwnershipUpdate = 8,
        RPC = 16,
        Instantiate = 32,
        Destroy = 64,
        DestroyPlayer = 128,
    };
}
