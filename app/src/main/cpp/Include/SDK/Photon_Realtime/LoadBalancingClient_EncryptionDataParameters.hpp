#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Realtime {
    struct LoadBalancingClient_EncryptionDataParameters : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Realtime", "LoadBalancingClient").GetInnerClass("EncryptionDataParameters");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr uint8_t Mode = 0;
        static constexpr uint8_t Secret1 = 1;
        static constexpr uint8_t Secret2 = 2;
    };
}
