#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Pun {
    struct PunEvent : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Pun", "PunEvent");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr uint8_t RPC = 200;
        static constexpr uint8_t SendSerialize = 201;
        static constexpr uint8_t Instantiation = 202;
        static constexpr uint8_t CloseConnection = 203;
        static constexpr uint8_t Destroy = 204;
        static constexpr uint8_t RemoveCachedRPCs = 205;
        static constexpr uint8_t SendSerializeReliable = 206;
        static constexpr uint8_t DestroyPlayer = 207;
        static constexpr uint8_t OwnershipRequest = 209;
        static constexpr uint8_t OwnershipTransfer = 210;
        static constexpr uint8_t VacantViewIds = 211;
        static constexpr uint8_t OwnershipUpdate = 212;
    };
}
