#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace ExitGames_Client_Photon {
    enum class InitV3Flags : int16_t {
        NoFlags = 0,
        EncryptionFlag = 1,
        IPv6Flag = 2,
        ReleaseSdkFlag = 4,
    };
}
