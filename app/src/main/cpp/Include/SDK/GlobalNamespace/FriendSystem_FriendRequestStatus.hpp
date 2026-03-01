#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class FriendSystem_FriendRequestStatus : int {
        Pending = 0,
        Succeeded = 1,
        Failed = 2,
    };
}
