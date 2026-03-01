#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class LckWallCameraSpawner_WallSpawnerState : int {
        CameraOnHook = 0,
        CameraDragging = 1,
        CameraOffHook = 2,
    };
}
