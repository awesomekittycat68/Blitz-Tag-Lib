#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Voice {
    enum class WebRTCAudioLib_Error : int {
        kNoError = 0,
        kUnspecifiedError = -1,
        kCreationFailedError = -2,
        kUnsupportedComponentError = -3,
        kUnsupportedFunctionError = -4,
        kNullPointerError = -5,
        kBadParameterError = -6,
        kBadSampleRateError = -7,
        kBadDataLengthError = -8,
        kBadNumberChannelsError = -9,
        kFileError = -10,
        kStreamParameterNotSetError = -11,
        kNotEnabledError = -12,
        kBadStreamParameterWarning = -13,
    };
}
