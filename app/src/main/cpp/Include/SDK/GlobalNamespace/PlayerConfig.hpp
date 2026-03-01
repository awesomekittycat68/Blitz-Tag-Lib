#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct PlayerConfig : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "PlayerConfig");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr const char* Player_Nickname = "playerName";
        static constexpr const char* Player_HasDoneTutorial = "didTutorial";
        static constexpr const char* Player_HasSeenGhostReactor = "seenGhostReactor";
        static constexpr const char* Player_HasFlaggedWrongStump = "spawnInWrongStump";
        static constexpr const char* Done = "done";
        static constexpr const char* Nope = "nope";
        static constexpr const char* FlagTrue = "flagged";
    };
}
