#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Pun {
    enum class PhotonTransformViewPositionModel_ExtrapolateOptions : int {
        Disabled = 0,
        SynchronizeValues = 1,
        EstimateSpeedAndTurn = 2,
        FixedSpeed = 3,
    };
}
