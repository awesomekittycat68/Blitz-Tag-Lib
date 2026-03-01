#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace PlayFab_Internal {
    enum class HttpRequestState : int {
        Sent = 0,
        Received = 1,
        Idle = 2,
        Error = 3,
    };
}
