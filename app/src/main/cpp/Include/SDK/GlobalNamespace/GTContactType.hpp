#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class GTContactType : uint32_t {
        None = 0,
        HandPrint = 1,
        Crater = 2,
        WaterSplash = 4,
        PaintSplat = 8,
    };
}
