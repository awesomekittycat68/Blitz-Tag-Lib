#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Oculus_Platform {
    enum class LaunchType : int {
        Unknown = 0,
        Normal = 1,
        Invite = 2,
        Coordinated = 3,
        Deeplink = 4,
    };
}
