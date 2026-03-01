#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class GRSenseLineOfSight_RaycastMode : int {
        Geometry = 0,
        Navmesh = 1,
        GeometryAndNavMesh = 2,
        GeometryOrNavMesh = 3,
    };
}
