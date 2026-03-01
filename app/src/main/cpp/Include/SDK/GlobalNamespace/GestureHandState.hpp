#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class GestureHandState : uint32_t {
        None = 0,
        IsLeft = 1,
        IsRight = 2,
        Open = 4,
        Closed = 8,
    };
}
