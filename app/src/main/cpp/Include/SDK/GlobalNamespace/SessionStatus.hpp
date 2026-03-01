#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class SessionStatus : int {
        PASS = 0,
        PROHIBITED = 1,
        CHALLENGE = 2,
        CHALLENGE_SESSION_UPGRADE = 3,
        PENDING_AGE_APPEAL = 4,
    };
}
