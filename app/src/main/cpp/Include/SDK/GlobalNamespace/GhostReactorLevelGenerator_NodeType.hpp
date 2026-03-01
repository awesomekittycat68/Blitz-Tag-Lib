#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class GhostReactorLevelGenerator_NodeType : int {
        Hub = 0,
        EndCap = 1,
        Blocker = 2,
    };
}
