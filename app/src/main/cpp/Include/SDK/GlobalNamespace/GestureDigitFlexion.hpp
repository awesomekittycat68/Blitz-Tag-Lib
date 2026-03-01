#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class GestureDigitFlexion : uint32_t {
        None = 0,
        Open = 16,
        Closed = 32,
        Bent = 64,
    };
}
