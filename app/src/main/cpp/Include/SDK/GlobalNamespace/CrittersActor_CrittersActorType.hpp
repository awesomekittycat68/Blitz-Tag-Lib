#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class CrittersActor_CrittersActorType : int {
        Creature = 0,
        Food = 1,
        LoudNoise = 2,
        BrightLight = 3,
        Darkness = 4,
        HidingArea = 5,
        Disappear = 6,
        Spawn = 7,
        Player = 8,
        Grabber = 9,
        Cage = 10,
        FoodSpawner = 11,
        AttachPoint = 12,
        StunBomb = 13,
        Bag = 14,
        BodyAttachPoint = 15,
        NoiseMaker = 16,
        StickyTrap = 17,
        StickyGoo = 18,
    };
}
