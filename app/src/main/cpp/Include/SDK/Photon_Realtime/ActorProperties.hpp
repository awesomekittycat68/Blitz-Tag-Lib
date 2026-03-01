#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Realtime {
    struct ActorProperties : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Realtime", "ActorProperties");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr uint8_t PlayerName = 255;
        static constexpr uint8_t IsInactive = 254;
        static constexpr uint8_t UserId = 253;
    };
}
