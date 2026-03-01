#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace PlayFab {
    enum class PlayFabLogLevel : int {
        None = 0,
        Debug = 1,
        Info = 2,
        Warning = 4,
        Error = 8,
        All = 15,
    };
}
