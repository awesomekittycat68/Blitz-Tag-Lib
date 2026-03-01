#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Realtime {
    enum class EncryptionMode : int {
        PayloadEncryption = 0,
        DatagramEncryption = 10,
        DatagramEncryptionRandomSequence = 11,
        DatagramEncryptionGCM = 13,
    };
}
