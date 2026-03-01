#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class CreatorCodes_CreatorCodeStatus : int {
        Empty = 0,
        Unchecked = 1,
        Validating = 2,
        Valid = 3,
    };
}
