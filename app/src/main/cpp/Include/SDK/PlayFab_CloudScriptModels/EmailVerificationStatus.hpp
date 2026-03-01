#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace PlayFab_CloudScriptModels {
    enum class EmailVerificationStatus : int {
        Unverified = 0,
        Pending = 1,
        Confirmed = 2,
    };
}
