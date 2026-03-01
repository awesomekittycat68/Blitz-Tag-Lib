#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Realtime {
    enum class JoinMode : uint8_t {
        Default = 0,
        CreateIfNotExists = 1,
        JoinOrRejoin = 2,
        RejoinOnly = 3,
    };
}
