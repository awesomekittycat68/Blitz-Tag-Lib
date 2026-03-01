#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_SocketServer_Security {
    struct OakleyGroups : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.SocketServer.Security", "OakleyGroups");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static int GetGenerator() {
            static BNM::Field<int> _field = GetClass().GetField(O("Generator"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<uint8_t>* GetOakleyPrime1024() {
            static BNM::Field<::BNM::Structures::Mono::Array<uint8_t>*> _field = GetClass().GetField(O("OakleyPrime1024"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<uint8_t>* GetOakleyPrime1536() {
            static BNM::Field<::BNM::Structures::Mono::Array<uint8_t>*> _field = GetClass().GetField(O("OakleyPrime1536"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<uint8_t>* GetOakleyPrime768() {
            static BNM::Field<::BNM::Structures::Mono::Array<uint8_t>*> _field = GetClass().GetField(O("OakleyPrime768"));
            return _field.Get();
        }
    };
}
