#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTagScripts_Builder {
    enum class SharedBlocksManager_MapSortMethod : int {
        Top = 0,
        NewlyCreated = 1,
        RecentlyUpdated = 2,
    };
}
