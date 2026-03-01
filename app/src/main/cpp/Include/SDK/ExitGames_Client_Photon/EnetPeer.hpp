#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "PeerBase.hpp"
#include "SendOptions.hpp"

namespace ExitGames_Client_Photon {
    struct EnetPeer : ::ExitGames_Client_Photon::PeerBase {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("ExitGames.Client.Photon", "EnetPeer");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr int CRC_LENGTH = 4;
        static constexpr int EncryptedDataGramHeaderSize = 7;
        static constexpr int EncryptedHeaderSize = 5;
        static constexpr int QUICK_RESEND_QUEUELIMIT = 25;
        static constexpr int UnsequencedWindowSize = 128;
        static constexpr uint8_t ControlChannelNumber = 255;
        static constexpr int16_t PeerIdForConnect = -1;
        static constexpr int16_t PeerIdForConnectTrace = -2;
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
        bool GetSendWindowUpdateRequired() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_sendWindowUpdateRequired"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetSendWindowUpdateRequired(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_sendWindowUpdateRequired"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetSentReliableCommandsCount() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_SentReliableCommandsCount"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::Array<uint8_t>* GetBufferForEncryption() {
            static BNM::Field<::BNM::Structures::Mono::Array<uint8_t>*> _field = GetClass().GetField(O("bufferForEncryption"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetChallenge() {
            static BNM::Field<int> _field = GetClass().GetField(O("challenge"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::ExitGames_Client_Photon::EnetChannel*>* GetChannelArray() {
            static BNM::Field<::BNM::Structures::Mono::Array<::ExitGames_Client_Photon::EnetChannel*>*> _field = GetClass().GetField(O("channelArray"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetChannelsToUpdateLowestSent() {
            static BNM::Field<void*> _field = GetClass().GetField(O("channelsToUpdateLowestSent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCommandBufferSize() {
            static BNM::Field<int> _field = GetClass().GetField(O("commandBufferSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetCommandQueue() {
            static BNM::Field<void*> _field = GetClass().GetField(O("CommandQueue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetCommandsToRemove() {
            static BNM::Field<void*> _field = GetClass().GetField(O("commandsToRemove"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDatagramEncryptedConnection() {
            static BNM::Field<bool> _field = GetClass().GetField(O("datagramEncryptedConnection"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetFragmentLength() {
            static BNM::Field<int> _field = GetClass().GetField(O("fragmentLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetFragmentLengthDatagramEncrypt() {
            static BNM::Field<int> _field = GetClass().GetField(O("fragmentLengthDatagramEncrypt"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetFragmentLengthMtuValue() {
            static BNM::Field<int> _field = GetClass().GetField(O("fragmentLengthMtuValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetIncomingUnsequencedGroupNumber() {
            static BNM::Field<int> _field = GetClass().GetField(O("incomingUnsequencedGroupNumber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<int>* GetLowestSentSequenceNumber() {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("lowestSentSequenceNumber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ExitGames_Client_Photon::NCommandPool* GetNCommandPool() {
            static BNM::Field<::ExitGames_Client_Photon::NCommandPool*> _field = GetClass().GetField(O("nCommandPool"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ExitGames_Client_Photon::StreamBuffer* GetOutgoingAcknowledgementsPool() {
            static BNM::Field<::ExitGames_Client_Photon::StreamBuffer*> _field = GetClass().GetField(O("outgoingAcknowledgementsPool"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetOutgoingUnsequencedGroupNumber() {
            static BNM::Field<int> _field = GetClass().GetField(O("outgoingUnsequencedGroupNumber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetReliableCommandsRepeated() {
            static BNM::Field<int> _field = GetClass().GetField(O("reliableCommandsRepeated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetReliableCommandsSent() {
            static BNM::Field<int> _field = GetClass().GetField(O("reliableCommandsSent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSendWindowUpdateRequiredBackValue() {
            static BNM::Field<int> _field = GetClass().GetField(O("sendWindowUpdateRequiredBackValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::ExitGames_Client_Photon::NCommand*>* GetSentReliableCommands() {
            static BNM::Field<::BNM::Structures::Mono::List<::ExitGames_Client_Photon::NCommand*>*> _field = GetClass().GetField(O("sentReliableCommands"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetServerSentTime() {
            static BNM::Field<int> _field = GetClass().GetField(O("serverSentTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<uint8_t>* GetUdpBuffer() {
            static BNM::Field<::BNM::Structures::Mono::Array<uint8_t>*> _field = GetClass().GetField(O("udpBuffer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetUdpBufferIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("udpBufferIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint8_t GetUdpCommandCount() {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("udpCommandCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<uint8_t>* GetUdpHeader0xF3() {
            static BNM::Field<::BNM::Structures::Mono::Array<uint8_t>*> _field = GetClass().GetField(O("udpHeader0xF3"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<int>* GetUnsequencedWindow() {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("unsequencedWindow"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBufferForEncryption(::BNM::Structures::Mono::Array<uint8_t>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<uint8_t>*> _field = GetClass().GetField(O("bufferForEncryption"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetChallenge(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("challenge"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetChannelArray(::BNM::Structures::Mono::Array<::ExitGames_Client_Photon::EnetChannel*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::ExitGames_Client_Photon::EnetChannel*>*> _field = GetClass().GetField(O("channelArray"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCommandBufferSize(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("commandBufferSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCommandQueue(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("CommandQueue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCommandsToRemove(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("commandsToRemove"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDatagramEncryptedConnection(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("datagramEncryptedConnection"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFragmentLength(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("fragmentLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFragmentLengthDatagramEncrypt(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("fragmentLengthDatagramEncrypt"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFragmentLengthMtuValue(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("fragmentLengthMtuValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIncomingUnsequencedGroupNumber(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("incomingUnsequencedGroupNumber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLowestSentSequenceNumber(::BNM::Structures::Mono::Array<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("lowestSentSequenceNumber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNCommandPool(::ExitGames_Client_Photon::NCommandPool* value) {
            static BNM::Field<::ExitGames_Client_Photon::NCommandPool*> _field = GetClass().GetField(O("nCommandPool"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOutgoingAcknowledgementsPool(::ExitGames_Client_Photon::StreamBuffer* value) {
            static BNM::Field<::ExitGames_Client_Photon::StreamBuffer*> _field = GetClass().GetField(O("outgoingAcknowledgementsPool"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOutgoingUnsequencedGroupNumber(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("outgoingUnsequencedGroupNumber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReliableCommandsRepeated(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("reliableCommandsRepeated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReliableCommandsSent(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("reliableCommandsSent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSendWindowUpdateRequiredBackValue(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("sendWindowUpdateRequiredBackValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSentReliableCommands(::BNM::Structures::Mono::List<::ExitGames_Client_Photon::NCommand*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::ExitGames_Client_Photon::NCommand*>*> _field = GetClass().GetField(O("sentReliableCommands"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetServerSentTime(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("serverSentTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUdpBuffer(::BNM::Structures::Mono::Array<uint8_t>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<uint8_t>*> _field = GetClass().GetField(O("udpBuffer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUdpBufferIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("udpBufferIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUdpCommandCount(uint8_t value) {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("udpCommandCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void ApplyRandomizedSequenceNumbers() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyRandomizedSequenceNumbers"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        int CalculateInitialOffset() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("CalculateInitialOffset"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int CalculatePacketSize(int inSize) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("CalculatePacketSize"), {"inSize"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(inSize);
        }
        ::BNM::Structures::Mono::String* CommandListToString(::BNM::Structures::Mono::Array<::ExitGames_Client_Photon::NCommand*>* list) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("CommandListToString"), {"list"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(list);
        }
        template <typename TP3 = void*>
        bool Connect(::BNM::Structures::Mono::String* ipport, ::BNM::Structures::Mono::String* proxyServerAddress, ::BNM::Structures::Mono::String* appID, TP3 photonToken) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("Connect"), {"ipport", "proxyServerAddress", "appID", "photonToken"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(ipport, proxyServerAddress, appID, photonToken);
        }
        bool CreateAndEnqueueCommand(uint8_t commandType, ::ExitGames_Client_Photon::StreamBuffer* payload, uint8_t channelNumber) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CreateAndEnqueueCommand"), {"commandType", "payload", "channelNumber"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(commandType, payload, channelNumber);
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
        bool EnqueuePhotonMessage(::ExitGames_Client_Photon::StreamBuffer* opBytes, ::ExitGames_Client_Photon::SendOptions sendParams) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("EnqueuePhotonMessage"), {"opBytes", "sendParams"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(opBytes, sendParams);
        }
        void ExecuteCommand(::ExitGames_Client_Photon::NCommand* command) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ExecuteCommand"), {"command"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(command);
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
        bool get_sendWindowUpdateRequired() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_sendWindowUpdateRequired"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_SentReliableCommandsCount() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_SentReliableCommandsCount"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::ExitGames_Client_Photon::EnetChannel* GetChannel(uint8_t channelNumber) {
            static BNM::Method<::ExitGames_Client_Photon::EnetChannel*> _m = GetClass().GetMethod(O("GetChannel"), {"channelNumber"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(channelNumber);
        }
        int GetFragmentLength_1() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetFragmentLength"));
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
        bool QueueIncomingCommand(::ExitGames_Client_Photon::NCommand* command) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("QueueIncomingCommand"), {"command"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(command);
        }
        void QueueOutgoingAcknowledgement(::ExitGames_Client_Photon::NCommand* readCommand, int sendTime) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("QueueOutgoingAcknowledgement"), {"readCommand", "sendTime"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(readCommand, sendTime);
        }
        void QueueOutgoingReliableCommand(::ExitGames_Client_Photon::NCommand* command) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("QueueOutgoingReliableCommand"), {"command"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(command);
        }
        void QueueOutgoingUnreliableCommand(::ExitGames_Client_Photon::NCommand* command) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("QueueOutgoingUnreliableCommand"), {"command"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(command);
        }
        void QueueSentCommand(::ExitGames_Client_Photon::NCommand* command, bool commandIsAlreadyInSentQueue) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("QueueSentCommand"), {"command", "commandIsAlreadyInSentQueue"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(command, commandIsAlreadyInSentQueue);
        }
        void ReceiveIncomingCommands(::BNM::Structures::Mono::Array<uint8_t>* inBuff, int inDataLength) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReceiveIncomingCommands"), {"inBuff", "inDataLength"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(inBuff, inDataLength);
        }
        ::ExitGames_Client_Photon::NCommand* RemoveSentReliableCommand(int ackReceivedReliableSequenceNumber, int ackReceivedChannel, bool isUnsequenced) {
            static BNM::Method<::ExitGames_Client_Photon::NCommand*> _m = GetClass().GetMethod(O("RemoveSentReliableCommand"), {"ackReceivedReliableSequenceNumber", "ackReceivedChannel", "isUnsequenced"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(ackReceivedReliableSequenceNumber, ackReceivedChannel, isUnsequenced);
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
        void SendData(::BNM::Structures::Mono::Array<uint8_t>* data, int length) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendData"), {"data", "length"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(data, length);
        }
        void SendDataEncrypted(::BNM::Structures::Mono::Array<uint8_t>* data, int length) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendDataEncrypted"), {"data", "length"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(data, length);
        }
        bool SendOutgoingCommands() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("SendOutgoingCommands"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void SendToSocket(::BNM::Structures::Mono::Array<uint8_t>* data, int length) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendToSocket"), {"data", "length"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(data, length);
        }
        int SerializeAckToBuffer() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("SerializeAckToBuffer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool SerializeCommandToBuffer(::ExitGames_Client_Photon::NCommand* command, bool commandIsInSentQueue) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("SerializeCommandToBuffer"), {"command", "commandIsInSentQueue"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(command, commandIsInSentQueue);
        }
        template <typename TP0 = void*>
        int SerializeToBuffer(TP0 commandList, int channelSequenceLimit) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("SerializeToBuffer"), {"commandList", "channelSequenceLimit"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(commandList, channelSequenceLimit);
        }
        void set_sendWindowUpdateRequired(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_sendWindowUpdateRequired"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void StopConnection() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StopConnection"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateSendWindow() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateSendWindow"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
