#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Voice {
    enum class WebRTCAudioLib_Param : int {
        REVERSE_STREAM_DELAY_MS = 1,
        AEC = 10,
        AEC_HIGH_PASS_FILTER = 11,
        AECM = 20,
        HIGH_PASS_FILTER = 31,
        NS = 41,
        NS_LEVEL = 42,
        AGC = 51,
        AGC_TARGET_LEVEL_DBFS = 55,
        AGC_COMPRESSION_GAIN = 56,
        AGC_LIMITER = 57,
        VAD = 61,
        VAD_FRAME_SIZE_MS = 62,
        VAD_LIKELIHOOD = 63,
        AGC2 = 71,
    };
}
