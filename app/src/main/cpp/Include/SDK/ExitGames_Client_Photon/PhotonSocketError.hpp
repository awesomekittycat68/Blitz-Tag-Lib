#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace ExitGames_Client_Photon {
    enum class PhotonSocketError : int {
        Success = 0,
        Skipped = 1,
        NoData = 2,
        Exception = 3,
        Busy = 4,
        PendingSend = 5,
    };
}
