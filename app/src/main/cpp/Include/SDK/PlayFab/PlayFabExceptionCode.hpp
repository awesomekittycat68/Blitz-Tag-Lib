#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace PlayFab {
    enum class PlayFabExceptionCode : int {
        AuthContextRequired = 0,
        BuildError = 1,
        DeveloperKeyNotSet = 2,
        EntityTokenNotSet = 3,
        NotLoggedIn = 4,
        TitleNotSet = 5,
    };
}
