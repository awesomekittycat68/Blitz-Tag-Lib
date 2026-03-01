#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Voice {
    enum class PhotonTransportProtocol_EventSubcode : uint8_t {
        VoiceInfo = 1,
        VoiceRemove = 2,
        Frame = 3,
    };
}
