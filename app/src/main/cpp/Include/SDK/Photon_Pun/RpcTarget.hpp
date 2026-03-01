#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Pun {
    enum class RpcTarget : int {
        All = 0,
        Others = 1,
        MasterClient = 2,
        AllBuffered = 3,
        OthersBuffered = 4,
        AllViaServer = 5,
        AllBufferedViaServer = 6,
    };
}
