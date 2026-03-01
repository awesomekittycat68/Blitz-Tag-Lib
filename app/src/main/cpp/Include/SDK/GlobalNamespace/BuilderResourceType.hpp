#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class BuilderResourceType : int {
        Basic = 0,
        Decorative = 1,
        Functional = 2,
        Count = 3,
    };
}
