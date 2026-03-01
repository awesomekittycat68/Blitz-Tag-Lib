#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class NetJoinResult : int {
        Success = 0,
        FallbackCreated = 1,
        Failed_Full = 2,
        AlreadyInRoom = 3,
        Failed_Other = 4,
    };
}
