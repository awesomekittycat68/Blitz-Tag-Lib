#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTagScripts {
    enum class BuilderTableNetworking_SharedTableEventTypes : int {
        LOAD_STARTED = 0,
        LOAD_FAILED = 1,
        OUT_OF_BOUNDS = 2,
        COUNT = 3,
    };
}
