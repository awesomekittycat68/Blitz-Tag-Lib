#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class TransferrableObject_ItemStates : int {
        State0 = 1,
        State1 = 2,
        State2 = 4,
        State3 = 8,
        State4 = 16,
        State5 = 32,
        Part0Held = 64,
        Part1Held = 128,
    };
}
