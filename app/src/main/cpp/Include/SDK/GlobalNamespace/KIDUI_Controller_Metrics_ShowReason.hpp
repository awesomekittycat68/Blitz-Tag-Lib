#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class KIDUI_Controller_Metrics_ShowReason : int {
        None = 0,
        Inaccessible = 1,
        Guardian_Disabled = 2,
        Permissions_Changed = 3,
        Default_Session = 4,
        No_Session = 5,
    };
}
