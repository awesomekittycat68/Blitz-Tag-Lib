#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTagScripts_VirtualStumpCustomMaps {
    enum class MapLoadStatus : int {
        None = 0,
        Downloading = 1,
        Loading = 2,
        Unloading = 3,
        Error = 4,
    };
}
