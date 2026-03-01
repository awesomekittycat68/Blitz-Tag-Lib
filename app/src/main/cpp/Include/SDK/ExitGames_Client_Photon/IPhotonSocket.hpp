#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "ConnectionProtocol.hpp"
#include "DebugLevel.hpp"
#include "PhotonSocketError.hpp"
#include "PhotonSocketState.hpp"
#include "StatusCode.hpp"

namespace ExitGames_Client_Photon {
    struct IPhotonSocket : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("ExitGames.Client.Photon", "IPhotonSocket");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetAddressResolvedAsIpv6() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_AddressResolvedAsIpv6"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetAddressResolvedAsIpv6(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_AddressResolvedAsIpv6"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetConnected() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_Connected"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetMTU() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_MTU"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::String* GetProxyServerAddress() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_ProxyServerAddress"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetProxyServerAddress(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_ProxyServerAddress"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::String* GetSerializationProtocol() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_SerializationProtocol"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::String* GetServerAddress() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_ServerAddress"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetServerAddress(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_ServerAddress"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::String* GetServerIpAddress() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_ServerIpAddress"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetServerIpAddress(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_ServerIpAddress"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetServerPort() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_ServerPort"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetServerPort(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_ServerPort"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetSocketErrorCode() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_SocketErrorCode"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetSocketErrorCode(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_SocketErrorCode"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::ExitGames_Client_Photon::PhotonSocketState GetState() {
            static BNM::Method<::ExitGames_Client_Photon::PhotonSocketState> _method = GetClass().GetMethod(O("get_State"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetState(::ExitGames_Client_Photon::PhotonSocketState value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_State"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::String* GetUrlPath() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_UrlPath"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetUrlPath(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_UrlPath"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::String* GetUrlProtocol() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_UrlProtocol"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetUrlProtocol(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_UrlProtocol"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::String* GetConnectAddress() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("ConnectAddress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ExitGames_Client_Photon::PeerBase* GetPeerBase() {
            static BNM::Field<::ExitGames_Client_Photon::PeerBase*> _field = GetClass().GetField(O("peerBase"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetPollReceive() {
            static BNM::Field<bool> _field = GetClass().GetField(O("PollReceive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ExitGames_Client_Photon::ConnectionProtocol GetProtocol() {
            static BNM::Field<::ExitGames_Client_Photon::ConnectionProtocol> _field = GetClass().GetField(O("Protocol"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetConnectAddress(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("ConnectAddress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPeerBase(::ExitGames_Client_Photon::PeerBase* value) {
            static BNM::Field<::ExitGames_Client_Photon::PeerBase*> _field = GetClass().GetField(O("peerBase"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPollReceive(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("PollReceive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        int AddressSortComparer(::BNM::IL2CPP::Il2CppObject* x, ::BNM::IL2CPP::Il2CppObject* y) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("AddressSortComparer"), {"x", "y"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(x, y);
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
        void EnqueueDebugReturn(::ExitGames_Client_Photon::DebugLevel debugLevel, ::BNM::Structures::Mono::String* message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EnqueueDebugReturn"), {"debugLevel", "message"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(debugLevel, message);
        }
        bool get_AddressResolvedAsIpv6() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_AddressResolvedAsIpv6"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_Connected() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_Connected"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* get_Listener() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_Listener"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_MTU() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_MTU"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* get_ProxyServerAddress() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_ProxyServerAddress"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* get_SerializationProtocol() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_SerializationProtocol"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* get_ServerAddress() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_ServerAddress"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::String* get_ServerIpAddress() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_ServerIpAddress"));
            return _m.Call();
        }
        int get_ServerPort() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_ServerPort"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_SocketErrorCode() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_SocketErrorCode"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::ExitGames_Client_Photon::PhotonSocketState get_State() {
            static BNM::Method<::ExitGames_Client_Photon::PhotonSocketState> _m = GetClass().GetMethod(O("get_State"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* get_UrlPath() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_UrlPath"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* get_UrlProtocol() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_UrlProtocol"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static ::BNM::IL2CPP::Il2CppObject* GetIpAddress(::BNM::Structures::Mono::String* address) {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("GetIpAddress"), {"address"});
            return _m.Call(address);
        }
        ::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>* GetIpAddresses(::BNM::Structures::Mono::String* hostname) {
            static BNM::Method<::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>*> _m = GetClass().GetMethod(O("GetIpAddresses"), {"hostname"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(hostname);
        }
        void HandleException(::ExitGames_Client_Photon::StatusCode statusCode) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleException"), {"statusCode"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(statusCode);
        }
        void HandleReceivedDatagram(::BNM::Structures::Mono::Array<uint8_t>* inBuffer, int length, bool willBeReused) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleReceivedDatagram"), {"inBuffer", "length", "willBeReused"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(inBuffer, length, willBeReused);
        }
        bool IpAddressTryParse(::BNM::Structures::Mono::String* strIP, ::BNM::IL2CPP::Il2CppObject*& address) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IpAddressTryParse"), {"strIP", "address"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(strIP, &address);
        }
        ::ExitGames_Client_Photon::PhotonSocketError Receive(uint8_t& data) {
            static BNM::Method<::ExitGames_Client_Photon::PhotonSocketError> _m = GetClass().GetMethod(O("Receive"), {"data"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(&data);
        }
        bool ReportDebugOfLevel(::ExitGames_Client_Photon::DebugLevel levelOfMessage) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ReportDebugOfLevel"), {"levelOfMessage"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(levelOfMessage);
        }
        ::ExitGames_Client_Photon::PhotonSocketError Send(::BNM::Structures::Mono::Array<uint8_t>* data, int length) {
            static BNM::Method<::ExitGames_Client_Photon::PhotonSocketError> _m = GetClass().GetMethod(O("Send"), {"data", "length"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(data, length);
        }
        void set_AddressResolvedAsIpv6(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_AddressResolvedAsIpv6"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_ProxyServerAddress(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_ProxyServerAddress"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_ServerAddress(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_ServerAddress"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        static void set_ServerIpAddress(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_ServerIpAddress"), {"value"});
            _m.Call(value);
        }
        void set_ServerPort(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_ServerPort"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_SocketErrorCode(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_SocketErrorCode"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_State(::ExitGames_Client_Photon::PhotonSocketState value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_State"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_UrlPath(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_UrlPath"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_UrlProtocol(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_UrlProtocol"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        bool TryParseAddress(::BNM::Structures::Mono::String* url, ::BNM::Structures::Mono::String*& host, uint16_t& port, ::BNM::Structures::Mono::String*& scheme, ::BNM::Structures::Mono::String*& absolutePath) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryParseAddress"), {"url", "host", "port", "scheme", "absolutePath"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(url, &host, &port, &scheme, &absolutePath);
        }
    };
}
