#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace PlayFab_MultiplayerModels {
    enum class ContainerFlavor : int {
        ManagedWindowsServerCore = 0,
        CustomLinux = 1,
        ManagedWindowsServerCorePreview = 2,
        Invalid = 3,
    };
}
