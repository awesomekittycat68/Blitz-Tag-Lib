#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class GizmoRenderer_RenderMode : uint32_t {
        Never = 0,
        InEditor = 1,
        InBuild = 2,
        Always = 3,
    };
}
