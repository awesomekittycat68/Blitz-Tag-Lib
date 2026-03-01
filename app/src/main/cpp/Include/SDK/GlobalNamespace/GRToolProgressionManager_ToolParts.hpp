#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class GRToolProgressionManager_ToolParts : int {
        None = 0,
        Baton = 1,
        BatonDamage1 = 2,
        BatonDamage2 = 3,
        BatonDamage3 = 4,
        Flash = 5,
        FlashDamage1 = 6,
        FlashDamage2 = 7,
        FlashDamage3 = 8,
        Collector = 9,
        CollectorBonus1 = 10,
        CollectorBonus2 = 11,
        CollectorBonus3 = 12,
        Lantern = 13,
        LanternIntensity1 = 14,
        LanternIntensity2 = 15,
        LanternIntensity3 = 16,
        ShieldGun = 17,
        ShieldGunStrength1 = 18,
        ShieldGunStrength2 = 19,
        ShieldGunStrength3 = 20,
        DirectionalShield = 21,
        DirectionalShieldSize1 = 22,
        DirectionalShieldSize2 = 23,
        DirectionalShieldSize3 = 24,
        EnergyEff = 25,
        EnergyEff1 = 26,
        EnergyEff2 = 27,
        EnergyEff3 = 28,
        DockWrist = 29,
        Revive = 30,
        DropPodBasic = 31,
        DropPodChassis1 = 32,
        DropPodChassis2 = 33,
        DropPodChassis3 = 34,
        StatusWatch = 35,
        RattyBackpack = 36,
        HockeyStick = 37,
    };
}
