#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class GetSessionStatus : int {
        PASS = 0,
        CHALLENGE = 1,
        PROHIBITED = 2,
    };
}
