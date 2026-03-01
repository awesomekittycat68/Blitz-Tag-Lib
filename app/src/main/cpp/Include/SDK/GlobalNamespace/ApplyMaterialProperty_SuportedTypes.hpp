#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class ApplyMaterialProperty_SuportedTypes : int {
        Color = 0,
        Float = 1,
        Vector2 = 2,
        Vector3 = 3,
        Vector4 = 4,
        Texture2D = 5,
    };
}
