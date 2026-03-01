#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace MTAssets_EasyMeshCombiner {
    enum class RuntimeMeshCombiner_CombineOnStart : int {
        Disabled = 0,
        OnStart = 1,
        OnAwake = 2,
    };
}
