#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace PlayFab_ProfilesModels {
    enum class OperationTypes : int {
        Created = 0,
        Updated = 1,
        Deleted = 2,
        None = 3,
    };
}
