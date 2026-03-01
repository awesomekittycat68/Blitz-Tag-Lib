#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class HandHold_HandSnapMethod : int {
        None = 0,
        SnapToCenterPoint = 1,
        SnapToNearestEdge = 2,
        SnapToXAxisPoint = 3,
        SnapToYAxisPoint = 4,
        SnapToZAxisPoint = 5,
    };
}
