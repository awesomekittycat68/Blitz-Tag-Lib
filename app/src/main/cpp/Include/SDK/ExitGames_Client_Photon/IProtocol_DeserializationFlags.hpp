#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace ExitGames_Client_Photon {
    enum class IProtocol_DeserializationFlags : int {
        None = 0,
        AllowPooledByteArray = 1,
        WrapIncomingStructs = 2,
    };
}
