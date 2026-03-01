#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Oculus_Platform {
    enum class AppInstallResult : int {
        Unknown = 0,
        LowStorage = 1,
        NetworkError = 2,
        DuplicateRequest = 3,
        InstallerError = 4,
        UserCancelled = 5,
        AuthorizationError = 6,
        Success = 7,
    };
}
