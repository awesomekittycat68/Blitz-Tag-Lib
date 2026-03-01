#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "IPhotonSocket.hpp"
#include "PhotonSocketError.hpp"

namespace ExitGames_Client_Photon {
    struct PhotonClientWebSocket : ::ExitGames_Client_Photon::IPhotonSocket {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("ExitGames.Client.Photon", "PhotonClientWebSocket");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::IL2CPP::Il2CppObject* GetClientWebSocket() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("clientWebSocket"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetSendTask() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("sendTask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetClientWebSocket(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("clientWebSocket"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSendTask(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("sendTask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AsyncConnectAndReceive() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AsyncConnectAndReceive"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
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
        ::ExitGames_Client_Photon::PhotonSocketError Receive(uint8_t& data) {
            static BNM::Method<::ExitGames_Client_Photon::PhotonSocketError> _m = GetClass().GetMethod(O("Receive"), {"data"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(&data);
        }
        ::ExitGames_Client_Photon::PhotonSocketError Send(::BNM::Structures::Mono::Array<uint8_t>* data, int length) {
            static BNM::Method<::ExitGames_Client_Photon::PhotonSocketError> _m = GetClass().GetMethod(O("Send"), {"data", "length"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(data, length);
        }
    };
}
