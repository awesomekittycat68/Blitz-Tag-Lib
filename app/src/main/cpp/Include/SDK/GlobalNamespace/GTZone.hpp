#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class GTZone : int {
        forest = 0,
        city = 1,
        basement = 2,
        canyon = 3,
        beach = 4,
        mountain = 5,
        skyJungle = 6,
        cave = 7,
        cityWithSkyJungle = 8,
        tutorial = 9,
        rotating = 10,
        none = 11,
        Metropolis = 12,
        cityNoBuildings = 13,
        attic = 14,
        arcade = 15,
        bayou = 16,
        customMaps = 17,
        monkeBlocks = 18,
        mall = 19,
        mines = 20,
        arena = 21,
        hoverboard = 22,
        critters = 23,
        ghostReactor = 24,
        monkeBlocksShared = 25,
        ghostReactorTunnel = 26,
        ranked = 27,
        ghostReactorDrill = 28,
        forestWithCity = 29,
    };
}
