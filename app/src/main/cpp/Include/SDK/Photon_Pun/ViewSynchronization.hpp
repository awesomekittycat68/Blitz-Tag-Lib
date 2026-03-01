#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Pun {
    enum class ViewSynchronization : int {
        Off = 0,
        ReliableDeltaCompressed = 1,
        Unreliable = 2,
        UnreliableOnChange = 3,
    };
}
