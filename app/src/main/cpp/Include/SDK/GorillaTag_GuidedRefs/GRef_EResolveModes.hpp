#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTag_GuidedRefs {
    enum class GRef_EResolveModes : int {
        None = 0,
        Runtime = 1,
        SceneProcessing = 2,
    };
}
