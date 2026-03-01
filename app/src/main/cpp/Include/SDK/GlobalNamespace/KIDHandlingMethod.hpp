#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class KIDHandlingMethod : int {
        DEFAULT = 0,
        SKIP = 1,
        FORCE = 2,
    };
}
