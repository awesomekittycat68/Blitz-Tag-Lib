#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class CrittersBiome : int {
        Forest = 1,
        Mountain = 2,
        Desert = 4,
        Grassland = 8,
        Cave = 16,
        IntroArea = 1073741824,
        Any = -1,
    };
}
