#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTag_Cosmetics {
    enum class CosmeticEffectsOnPlayers_EFFECTTYPE : int {
        Skin = 0,
        TagWithKnockback = 2,
        InstantKnockback = 3,
        VoiceOverride = 4,
        SFX = 5,
        VFX = 6,
    };
}
