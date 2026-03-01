#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace ExitGames_Client_Photon_StructWrapping {
    enum class Pooling : int {
        Disconnected = 0,
        Connected = 1,
        ReleaseOnUnwrap = 2,
        Readonly = 4,
        CheckedOut = 8,
    };
}
