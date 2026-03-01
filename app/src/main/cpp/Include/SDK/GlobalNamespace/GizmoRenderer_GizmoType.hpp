#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class GizmoRenderer_GizmoType : uint32_t {
        BoxWire = 0,
        BoxSolid = 1,
        SphereWire = 2,
        SphereSolid = 3,
        Label3D = 4,
        Label2D = 5,
        GridWire = 6,
        PlaneSolid = 7,
        PlaneWire = 8,
    };
}
