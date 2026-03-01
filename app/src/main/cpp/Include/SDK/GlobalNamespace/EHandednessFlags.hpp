#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class EHandednessFlags : uint8_t {
        None = 0,
        Left = 1,
        Right = 2,
        Both = 3,
    };
}
