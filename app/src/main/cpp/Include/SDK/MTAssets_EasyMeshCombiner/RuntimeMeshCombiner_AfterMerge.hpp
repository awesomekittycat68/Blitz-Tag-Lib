#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace MTAssets_EasyMeshCombiner {
    enum class RuntimeMeshCombiner_AfterMerge : int {
        DisableOriginalMeshes = 0,
        DeactiveOriginalGameObjects = 1,
        DoNothing = 2,
    };
}
