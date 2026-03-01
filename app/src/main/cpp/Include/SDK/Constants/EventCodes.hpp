#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Constants {
    struct EventCodes : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Constants", "EventCodes");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr uint8_t PLAYER_TAGGED = 1;
        static constexpr uint8_t PLAYER_INFECTED = 2;
        static constexpr uint8_t PLAYER_TOUCHED = 3;
    };
}
