#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class HandSocketConstraint : uint32_t {
        None = 0,
        LeftHandOnly = 1,
        RightHandOnly = 2,
    };
}
