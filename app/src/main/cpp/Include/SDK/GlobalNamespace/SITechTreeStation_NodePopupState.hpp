#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class SITechTreeStation_NodePopupState : int {
        Description = 0,
        NotEnoughResources = 1,
        Success = 2,
        PurchaseInitiation = 3,
        Loading = 4,
    };
}
