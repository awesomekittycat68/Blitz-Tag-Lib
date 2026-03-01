#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTag_Cosmetics {
    enum class ContinuousProperty_Cast : int {
        Null = 0,
        Any = 1024,
        Transform = 2048,
        ParticleSystem = 3072,
        SkinnedMeshRenderer = 4096,
        Animator = 5120,
        AudioSource = 6144,
        Renderer = 7168,
        Behaviour = 8192,
        GameObject = 9216,
        Rigidbody = 10240,
        VoicePitchShiftCosmetic = 11264,
    };
}
