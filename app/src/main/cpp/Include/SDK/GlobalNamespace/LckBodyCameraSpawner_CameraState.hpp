#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class LckBodyCameraSpawner_CameraState : int {
        CameraDisabled = 0,
        CameraOnNeck = 1,
        CameraSpawned = 2,
    };
}
