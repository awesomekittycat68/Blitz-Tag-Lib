#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace BoingKit {
    enum class BoingBones_Chain_CurveType : int {
        ConstantOne = 0,
        ConstantHalf = 1,
        ConstantZero = 2,
        RootOneTailHalf = 3,
        RootOneTailZero = 4,
        RootHalfTailOne = 5,
        RootZeroTailOne = 6,
        Custom = 7,
    };
}
