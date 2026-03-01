#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class GRAttributeType : int {
        None = 0,
        ArmorMax = 1,
        EnergyMax = 2,
        EnergyUseCost = 3,
        EnergyStart = 4,
        FlashDamage = 5,
        BatonDamage = 6,
        LightIntensity = 7,
        HarvestGain = 8,
        ShieldSize = 9,
        HPMax = 10,
        PatrolSpeed = 11,
        ChaseSpeed = 12,
        PoweredBatonDamage = 13,
        PlayerDamage = 14,
        PlayerShieldDamage = 15,
        BackupSpeed = 16,
        KnockbackMultiplier = 17,
        RechargeRate = 18,
        FlashStunDuration = 19,
        DirectionalShieldDamage = 20,
    };
}
