#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class EBuildReleaseTier : int {
        PublicRC = 1,
        PrivateRC = 2,
        PublicBeta = 3,
        PrivateBeta = 4,
        PublicAlpha = 5,
        PrivateAlpha = 6,
        Internal = 7,
    };
}
