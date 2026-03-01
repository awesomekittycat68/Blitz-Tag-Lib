#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class BuilderScanKiosk_ScannerState : int {
        IDLE = 0,
        CONFIRMATION = 1,
        SAVING = 2,
    };
}
