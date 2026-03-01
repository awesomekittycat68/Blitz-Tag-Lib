#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Oculus_Platform {
    enum class SystemVoipStatus : int {
        Unknown = 0,
        Unavailable = 1,
        Suppressed = 2,
        Active = 3,
    };
}
