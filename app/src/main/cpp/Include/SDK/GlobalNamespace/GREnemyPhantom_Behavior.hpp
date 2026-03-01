#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class GREnemyPhantom_Behavior : int {
        Mine = 0,
        Idle = 1,
        Alert = 2,
        Return = 3,
        Rage = 4,
        Chase = 5,
        Attack = 6,
        Investigate = 7,
        Jump = 8,
        Count = 9,
    };
}
