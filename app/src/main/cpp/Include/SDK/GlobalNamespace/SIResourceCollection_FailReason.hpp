#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class SIResourceCollection_FailReason : int {
        NotEnoughRocks = 0,
        ResourcesFull = 1,
        Unknown = 2,
    };
}
