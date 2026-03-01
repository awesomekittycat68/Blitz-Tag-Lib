#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SerializationProtocol.hpp"

namespace ExitGames_Client_Photon {
    struct SerializationProtocolFactory : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("ExitGames.Client.Photon", "SerializationProtocolFactory");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::ExitGames_Client_Photon::IProtocol* Create(::ExitGames_Client_Photon::SerializationProtocol serializationProtocol) {
            static BNM::Method<::ExitGames_Client_Photon::IProtocol*> _m = GetClass().GetMethod(O("Create"), {"serializationProtocol"});
            return _m.Call(serializationProtocol);
        }
    };
}
