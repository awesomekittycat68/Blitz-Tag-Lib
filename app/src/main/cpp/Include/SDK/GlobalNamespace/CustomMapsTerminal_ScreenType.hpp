#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class CustomMapsTerminal_ScreenType : int {
        Invalid = -1,
        TerminalControlPrompt = 0,
        AvailableMods = 1,
        InstalledMods = 2,
        FavoriteMods = 3,
        SubscribedMods = 4,
        SearchMods = 5,
        ModDetails = 6,
    };
}
