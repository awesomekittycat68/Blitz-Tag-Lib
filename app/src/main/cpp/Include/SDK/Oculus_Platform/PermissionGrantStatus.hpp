#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Oculus_Platform {
    enum class PermissionGrantStatus : int {
        Unknown = 0,
        Granted = 1,
        Denied = 2,
        Blocked = 3,
    };
}
