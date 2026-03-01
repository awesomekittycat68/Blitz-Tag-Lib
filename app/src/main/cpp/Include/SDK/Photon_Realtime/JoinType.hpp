#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Realtime {
    enum class JoinType : int {
        CreateRoom = 0,
        JoinRoom = 1,
        JoinRandomRoom = 2,
        JoinRandomOrCreateRoom = 3,
        JoinOrCreateRoom = 4,
    };
}
