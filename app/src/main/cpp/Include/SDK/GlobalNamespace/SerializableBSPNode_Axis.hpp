#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class SerializableBSPNode_Axis : int {
        X = 0,
        Y = 1,
        Z = 2,
        MatrixChain = 3,
        MatrixFinal = 4,
        Zone = 5,
    };
}
