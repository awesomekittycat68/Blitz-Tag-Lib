#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Pun {
    enum class ConnectMethod : int {
        NotCalled = 0,
        ConnectToMaster = 1,
        ConnectToRegion = 2,
        ConnectToBest = 3,
    };
}
