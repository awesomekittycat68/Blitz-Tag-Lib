#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class GameEntityManager_RPC : int {
        CreateItem = 0,
        CreateItems = 1,
        DestroyItem = 2,
        ApplyState = 3,
        GrabEntity = 4,
        ThrowEntity = 5,
        SendTableData = 6,
        HitEntity = 7,
    };
}
