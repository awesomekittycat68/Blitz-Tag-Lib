#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Realtime {
    enum class PropertyTypeFlag : uint8_t {
        None = 0,
        Game = 1,
        Actor = 2,
        GameAndActor = 3,
    };
}
