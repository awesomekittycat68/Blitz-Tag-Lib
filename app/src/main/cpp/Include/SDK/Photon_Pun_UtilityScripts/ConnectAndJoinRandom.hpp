#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../Photon_Pun/MonoBehaviourPunCallbacks.hpp"
#include "../Photon_Realtime/DisconnectCause.hpp"

namespace Photon_Pun_UtilityScripts {
    struct ConnectAndJoinRandom : ::Photon_Pun::MonoBehaviourPunCallbacks {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Pun.UtilityScripts", "ConnectAndJoinRandom");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetAutoConnect() {
            static BNM::Field<bool> _field = GetClass().GetField(O("AutoConnect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint8_t GetMaxPlayers() {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("MaxPlayers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPlayerTTL() {
            static BNM::Field<int> _field = GetClass().GetField(O("playerTTL"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint8_t GetVersion() {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("Version"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAutoConnect(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("AutoConnect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxPlayers(uint8_t value) {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("MaxPlayers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerTTL(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("playerTTL"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVersion(uint8_t value) {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("Version"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void ConnectNow() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ConnectNow"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnConnectedToMaster() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnConnectedToMaster"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDisconnected(::Photon_Realtime::DisconnectCause cause) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisconnected"), {"cause"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(cause);
        }
        void OnJoinedLobby() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnJoinedLobby"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnJoinedRoom() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnJoinedRoom"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnJoinRandomFailed(int16_t returnCode, ::BNM::Structures::Mono::String* message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnJoinRandomFailed"), {"returnCode", "message"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(returnCode, message);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
