#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace PlayFab_ClientModels {
    enum class SourceType : int {
        Admin = 0,
        BackEnd = 1,
        GameClient = 2,
        GameServer = 3,
        Partner = 4,
        Custom = 5,
        API = 6,
    };
}
