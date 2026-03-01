#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace ExitGames_Client_Photon {
    enum class SerializationProtocol : int {
        GpBinaryV16 = 0,
        GpBinaryV18 = 1,
    };
}
