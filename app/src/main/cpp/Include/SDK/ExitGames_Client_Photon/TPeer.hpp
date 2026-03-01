#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "DeliveryMode.hpp"
#include "PeerBase.hpp"
#include "PhotonSocketError.hpp"
#include "SendOptions.hpp"

namespace ExitGames_Client_Photon {
    struct TPeer : ::ExitGames_Client_Photon::PeerBase {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("ExitGames.Client.Photon", "TPeer");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr int TCP_HEADER_BYTES = 7;
        static constexpr int MSG_HEADER_BYTES = 2;
        static constexpr int ALL_HEADER_BYTES = 9;
        int GetQueuedIncomingCommandsCount() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_QueuedIncomingCommandsCount"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetQueuedOutgoingCommandsCount() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_QueuedOutgoingCommandsCount"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetDoFraming() {
            static BNM::Field<bool> _field = GetClass().GetField(O("DoFraming"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetIncomingList() {
            static BNM::Field<void*> _field = GetClass().GetField(O("incomingList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLastPingActivity() {
            static BNM::Field<int> _field = GetClass().GetField(O("lastPingActivity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::ExitGames_Client_Photon::StreamBuffer*>* GetOutgoingStream() {
            static BNM::Field<::BNM::Structures::Mono::List<::ExitGames_Client_Photon::StreamBuffer*>*> _field = GetClass().GetField(O("outgoingStream"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ExitGames_Client_Photon::ParameterDictionary* GetPingParamDict() {
            static BNM::Field<::ExitGames_Client_Photon::ParameterDictionary*> _field = GetClass().GetField(O("pingParamDict"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<uint8_t>* GetPingRequest() {
            static BNM::Field<::BNM::Structures::Mono::Array<uint8_t>*> _field = GetClass().GetField(O("pingRequest"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<uint8_t>* GetTcpFramedMessageHead() {
            static BNM::Field<::BNM::Structures::Mono::Array<uint8_t>*> _field = GetClass().GetField(O("tcpFramedMessageHead"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<uint8_t>* GetTcpMsgHead() {
            static BNM::Field<::BNM::Structures::Mono::Array<uint8_t>*> _field = GetClass().GetField(O("tcpMsgHead"));
            return _field.Get();
        }
        bool GetWaitForInitResponse() {
            static BNM::Field<bool> _field = GetClass().GetField(O("waitForInitResponse"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDoFraming(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("DoFraming"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIncomingList(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("incomingList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastPingActivity(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("lastPingActivity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOutgoingStream(::BNM::Structures::Mono::List<::ExitGames_Client_Photon::StreamBuffer*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::ExitGames_Client_Photon::StreamBuffer*>*> _field = GetClass().GetField(O("outgoingStream"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWaitForInitResponse(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("waitForInitResponse"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        template <typename TP3 = void*>
        bool Connect(::BNM::Structures::Mono::String* serverAddress, ::BNM::Structures::Mono::String* proxyServerAddress, ::BNM::Structures::Mono::String* appID, TP3 photonToken) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("Connect"), {"serverAddress", "proxyServerAddress", "appID", "photonToken"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(serverAddress, proxyServerAddress, appID, photonToken);
        }
        void Disconnect() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Disconnect"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool DispatchIncomingCommands() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("DispatchIncomingCommands"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void EnqueueInit(::BNM::Structures::Mono::Array<uint8_t>* data) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EnqueueInit"), {"data"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(data);
        }
        bool EnqueueMessageAsPayload(::ExitGames_Client_Photon::DeliveryMode deliveryMode, ::ExitGames_Client_Photon::StreamBuffer* opMessage, uint8_t channelId) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("EnqueueMessageAsPayload"), {"deliveryMode", "opMessage", "channelId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(deliveryMode, opMessage, channelId);
        }
        bool EnqueuePhotonMessage(::ExitGames_Client_Photon::StreamBuffer* opBytes, ::ExitGames_Client_Photon::SendOptions sendParams) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("EnqueuePhotonMessage"), {"opBytes", "sendParams"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(opBytes, sendParams);
        }
        void FetchServerTimestamp() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FetchServerTimestamp"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        int get_QueuedIncomingCommandsCount() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_QueuedIncomingCommandsCount"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_QueuedOutgoingCommandsCount() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_QueuedOutgoingCommandsCount"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool IsTransportEncrypted() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsTransportEncrypted"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnConnect() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnConnect"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ReadPingResult(::BNM::Structures::Mono::Array<uint8_t>* inbuff) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReadPingResult"), {"inbuff"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(inbuff);
        }
        void ReadPingResult(::ExitGames_Client_Photon::OperationResponse* operationResponse) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReadPingResult"), {"operationResponse"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(operationResponse);
        }
        void ReceiveIncomingCommands(::BNM::Structures::Mono::Array<uint8_t>* inbuff, int dataLength) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReceiveIncomingCommands"), {"inbuff", "dataLength"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(inbuff, dataLength);
        }
        void Reset() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Reset"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool SendAcksOnly() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("SendAcksOnly"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::ExitGames_Client_Photon::PhotonSocketError SendData(::BNM::Structures::Mono::Array<uint8_t>* data, int length) {
            static BNM::Method<::ExitGames_Client_Photon::PhotonSocketError> _m = GetClass().GetMethod(O("SendData"), {"data", "length"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(data, length);
        }
        bool SendOutgoingCommands() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("SendOutgoingCommands"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void SendPing() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendPing"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void StopConnection() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StopConnection"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
