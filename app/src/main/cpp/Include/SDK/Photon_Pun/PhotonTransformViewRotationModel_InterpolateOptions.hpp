#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Pun {
    enum class PhotonTransformViewRotationModel_InterpolateOptions : int {
        Disabled = 0,
        RotateTowards = 1,
        Lerp = 2,
    };
}
