#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Voice {
    enum class PhotonTransportProtocol_EventParam : uint8_t {
        VoiceId = 1,
        SamplingRate = 2,
        Channels = 3,
        FrameDurationUs = 4,
        Bitrate = 5,
        Width = 6,
        Height = 7,
        FPS = 8,
        KeyFrameInt = 9,
        UserData = 10,
        EventNumber = 11,
        Codec = 12,
    };
}
