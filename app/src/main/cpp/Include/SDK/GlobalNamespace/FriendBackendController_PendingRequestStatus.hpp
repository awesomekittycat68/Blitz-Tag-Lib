#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class FriendBackendController_PendingRequestStatus : int {
        I_REQUESTED = 0,
        THEY_REQUESTED = 1,
        CONFIRMED = 2,
        NOT_FOUND = 3,
    };
}
