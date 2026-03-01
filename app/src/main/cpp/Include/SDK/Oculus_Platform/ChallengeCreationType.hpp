#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Oculus_Platform {
    enum class ChallengeCreationType : int {
        Unknown = 0,
        UserCreated = 1,
        DeveloperCreated = 2,
    };
}
