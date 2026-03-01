#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct RoomSystem_Events : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "RoomSystem").GetInnerClass("Events");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr uint8_t PROJECTILE = 0;
        static constexpr uint8_t IMPACT = 1;
        static constexpr uint8_t STATUS_EFFECT = 2;
        static constexpr uint8_t SOUND_EFFECT = 3;
        static constexpr uint8_t NEARBY_JOIN = 4;
        static constexpr uint8_t PLAYER_TOUCHED = 5;
        static constexpr uint8_t PLAYER_EFFECT = 6;
        static constexpr uint8_t PARTY_JOIN = 7;
        static constexpr uint8_t PLAYER_LAUNCHED = 8;
        static constexpr uint8_t PLAYER_HIT = 9;
        static constexpr uint8_t ELEVATOR_JOIN = 10;
        static constexpr uint8_t SHUTTLE_JOIN = 11;
    };
}
