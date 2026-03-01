#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Oculus_Platform {
    enum class RichPresenceExtraContext : int {
        Unknown = 0,
        None = 1,
        CurrentCapacity = 2,
        StartedAgo = 3,
        EndingIn = 4,
        LookingForAMatch = 5,
    };
}
