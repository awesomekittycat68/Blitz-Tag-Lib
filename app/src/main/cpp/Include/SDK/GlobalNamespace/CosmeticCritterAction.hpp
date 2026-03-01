#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class CosmeticCritterAction : int {
        None = 0,
        RPC = 1,
        Spawn = 2,
        Despawn = 4,
        SpawnLinked = 8,
        ShadeHeartbeat = 16,
    };
}
