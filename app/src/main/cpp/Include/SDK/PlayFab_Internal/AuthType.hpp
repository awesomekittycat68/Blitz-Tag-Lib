#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace PlayFab_Internal {
    enum class AuthType : int {
        None = 0,
        PreLoginSession = 1,
        LoginSession = 2,
        DevSecretKey = 3,
        EntityToken = 4,
    };
}
