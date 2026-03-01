#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class EGetPermissionsStatus : int {
        None = 0,
        GetPermission = 1,
        RequestingPermission = 2,
        RequestedPermission = 3,
    };
}
