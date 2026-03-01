#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "IPhotonSocket.hpp"
#include "PhotonSocketError.hpp"

namespace ExitGames_Client_Photon {
    struct SocketUdp : ::ExitGames_Client_Photon::IPhotonSocket {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("ExitGames.Client.Photon", "SocketUdp");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::IL2CPP::Il2CppObject* GetSock() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("sock"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetSyncer() {
            static BNM::Field<void*> _field = GetClass().GetField(O("syncer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetSock(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("sock"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool Connect() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("Connect"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool Disconnect() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("Disconnect"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void Dispose() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Dispose"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void DnsAndConnect() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DnsAndConnect"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Finalize_1() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Finalize"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::ExitGames_Client_Photon::PhotonSocketError Receive(uint8_t& data) {
            static BNM::Method<::ExitGames_Client_Photon::PhotonSocketError> _m = GetClass().GetMethod(O("Receive"), {"data"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(&data);
        }
        void ReceiveLoop() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReceiveLoop"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::ExitGames_Client_Photon::PhotonSocketError Send(::BNM::Structures::Mono::Array<uint8_t>* data, int length) {
            static BNM::Method<::ExitGames_Client_Photon::PhotonSocketError> _m = GetClass().GetMethod(O("Send"), {"data", "length"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(data, length);
        }
    };
}
