#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class CustomMapsListScreen_ListScreenState : int {
        AvailableMods = 0,
        InstalledMods = 1,
        FavoriteMods = 2,
        SubscribedMods = 3,
        CustomModList = 4,
    };
}
