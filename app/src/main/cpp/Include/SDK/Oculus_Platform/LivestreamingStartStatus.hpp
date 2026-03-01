#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Oculus_Platform {
    enum class LivestreamingStartStatus : int {
        Success = 1,
        Unknown = 0,
        NoPackageSet = -1,
        NoFbConnect = -2,
        NoSessionId = -3,
        MissingParameters = -4,
    };
}
