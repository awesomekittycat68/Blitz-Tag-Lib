#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class GTZoneEventType : int {
        zone_enter = 0,
        zone_exit = 1,
        zone_stay = 2,
        none = 3,
    };
}
