#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class EImageVisibility : int {
        None = 0,
        AfterBody = 1,
        BeforeBody = 2,
    };
}
