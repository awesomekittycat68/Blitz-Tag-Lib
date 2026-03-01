#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class CrittersManager_AllowGrabbingFlags : int {
        None = 0,
        OutOfHands = 1,
        FromBags = 2,
        EntireBag = 4,
    };
}
