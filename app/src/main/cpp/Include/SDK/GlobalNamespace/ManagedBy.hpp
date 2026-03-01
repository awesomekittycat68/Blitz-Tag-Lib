#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class ManagedBy : int {
        PLAYER = 1,
        GUARDIAN = 2,
        PROHIBITED = 3,
    };
}
