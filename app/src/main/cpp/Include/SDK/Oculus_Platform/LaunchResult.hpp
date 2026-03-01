#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Oculus_Platform {
    enum class LaunchResult : int {
        Unknown = 0,
        Success = 1,
        FailedRoomFull = 2,
        FailedGameAlreadyStarted = 3,
        FailedRoomNotFound = 4,
        FailedUserDeclined = 5,
        FailedOtherReason = 6,
    };
}
