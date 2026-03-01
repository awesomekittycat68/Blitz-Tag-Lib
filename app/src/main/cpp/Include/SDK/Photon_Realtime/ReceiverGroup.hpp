#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Realtime {
    enum class ReceiverGroup : uint8_t {
        Others = 0,
        All = 1,
        MasterClient = 2,
    };
}
