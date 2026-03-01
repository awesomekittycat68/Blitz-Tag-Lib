#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class HandLinkAuthorityType : int {
        None = 0,
        ButtGrounded = 1,
        ResidualHandGrounded = 2,
        HandGrounded = 3,
    };
}
