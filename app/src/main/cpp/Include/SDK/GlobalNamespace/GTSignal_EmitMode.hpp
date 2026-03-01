#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class GTSignal_EmitMode : int {
        None = -1,
        Others = 0,
        Targets = 1,
        All = 2,
        Host = 3,
    };
}
