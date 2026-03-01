#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class FlagForLighting_TimeOfDay : int {
        Sunrise = 0,
        TenAM = 1,
        Noon = 2,
        ThreePM = 3,
        Sunset = 4,
        Night = 5,
        RainingDay = 6,
        RainingNight = 7,
        None = 8,
    };
}
