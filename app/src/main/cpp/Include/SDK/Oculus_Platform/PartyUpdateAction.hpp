#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Oculus_Platform {
    enum class PartyUpdateAction : int {
        Unknown = 0,
        Join = 1,
        Leave = 2,
        Invite = 3,
        Uninvite = 4,
    };
}
