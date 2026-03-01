#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Constants {
    struct Network : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Constants", "Network");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr uint8_t ROOM_SYSTEM = 3;
        static constexpr uint8_t COSMETIC_PURCHASE = 9;
        static constexpr uint8_t REPORT_PLAYER = 50;
        static constexpr uint8_t REPORT_MUTE = 51;
        static constexpr uint8_t COSMETIC_EVENT = 176;
        static constexpr uint8_t GT_SIGNAL = 186;
        static constexpr uint8_t COSMETICS_LOOKUP = 199;
        static constexpr int MAX_SERIALIZE_RATE = 12;
        static constexpr double MAX_PHOTON_SERVER_TIME = 4294967.295;
    };
}
