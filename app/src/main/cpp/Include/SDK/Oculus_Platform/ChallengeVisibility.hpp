#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Oculus_Platform {
    enum class ChallengeVisibility : int {
        Unknown = 0,
        InviteOnly = 1,
        Public = 2,
        Private = 3,
    };
}
