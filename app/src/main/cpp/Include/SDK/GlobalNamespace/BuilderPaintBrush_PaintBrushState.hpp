#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class BuilderPaintBrush_PaintBrushState : int {
        Inactive = 0,
        HeldRemote = 1,
        Held = 2,
        Hover = 3,
        JustPainted = 4,
    };
}
