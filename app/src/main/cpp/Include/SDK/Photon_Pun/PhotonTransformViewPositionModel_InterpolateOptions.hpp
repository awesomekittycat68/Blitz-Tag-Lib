#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Pun {
    enum class PhotonTransformViewPositionModel_InterpolateOptions : int {
        Disabled = 0,
        FixedSpeed = 1,
        EstimatedSpeed = 2,
        SynchronizeValues = 3,
        Lerp = 4,
    };
}
