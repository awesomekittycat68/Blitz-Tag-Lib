#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Pun {
    enum class OwnershipOption : int {
        Fixed = 0,
        Takeover = 1,
        Request = 2,
    };
}
