#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Realtime {
    struct PhotonPortDefinition : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Realtime", "PhotonPortDefinition");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::Photon_Realtime::PhotonPortDefinition GetAlternativeUdpPorts() {
            static BNM::Field<::Photon_Realtime::PhotonPortDefinition> _field = GetClass().GetField(O("AlternativeUdpPorts"));
            return _field.Get();
        }
        uint16_t GetGameServerPort() {
            static BNM::Field<uint16_t> _field = GetClass().GetField(O("GameServerPort"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint16_t GetMasterServerPort() {
            static BNM::Field<uint16_t> _field = GetClass().GetField(O("MasterServerPort"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint16_t GetNameServerPort() {
            static BNM::Field<uint16_t> _field = GetClass().GetField(O("NameServerPort"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetGameServerPort(uint16_t value) {
            static BNM::Field<uint16_t> _field = GetClass().GetField(O("GameServerPort"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMasterServerPort(uint16_t value) {
            static BNM::Field<uint16_t> _field = GetClass().GetField(O("MasterServerPort"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNameServerPort(uint16_t value) {
            static BNM::Field<uint16_t> _field = GetClass().GetField(O("NameServerPort"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
