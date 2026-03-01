#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Constants {
    struct GamePlayConfig : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Constants", "GamePlayConfig");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr float PROJECTILE_DISTANCE_THRESHOLD = 4.0f;
        static constexpr float MAX_THROW_VELOCITY = 50.0f;
        static constexpr float TAG_DISTANCE_THRESHOLD = 6.0f;
        static constexpr float TAG_TIME_ROLLBACK = 0.2f;
        static constexpr int MAX_ROOM_SIZE = 20;
        static constexpr int MAX_ROOM_SIZE_NOSUBS = 10;
        static constexpr float SPEED_TELEPORT_THRESHOLD = 100.0f;
    };
}
