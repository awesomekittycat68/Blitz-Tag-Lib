#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class EmitSignalToBiter_EdibleState : int {
        None = 0,
        State0 = 1,
        State1 = 2,
        State2 = 4,
        State3 = 8,
    };
}
