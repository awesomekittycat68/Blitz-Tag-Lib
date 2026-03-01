#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "ConnectionProtocol.hpp"
#include "ConnectionStateValue.hpp"
#include "DebugLevel.hpp"
#include "EgMessageType.hpp"
#include "SendOptions.hpp"
#include "StatusCode.hpp"

namespace ExitGames_Client_Photon {
    struct PeerBase : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("ExitGames.Client.Photon", "PeerBase");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int64_t GetBytesIn() {
            static BNM::Method<int64_t> _method = GetClass().GetMethod(O("get_BytesIn"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int64_t GetBytesOut() {
            static BNM::Method<int64_t> _method = GetClass().GetMethod(O("get_BytesOut"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        uint8_t GetChannelCount() {
            static BNM::Method<uint8_t> _method = GetClass().GetMethod(O("get_ChannelCount"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::ExitGames_Client_Photon::DebugLevel GetDebugOut() {
            static BNM::Method<::ExitGames_Client_Photon::DebugLevel> _method = GetClass().GetMethod(O("get_debugOut"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetDisconnectTimeout() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_DisconnectTimeout"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsIpv6() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsIpv6"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetMtu() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_mtu"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::ExitGames_Client_Photon::NetworkSimulationSet* GetNetworkSimulationSettings() {
            static BNM::Method<::ExitGames_Client_Photon::NetworkSimulationSet*> _method = GetClass().GetMethod(O("get_NetworkSimulationSettings"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetOutgoingStreamBufferSize() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_outgoingStreamBufferSize"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::String* GetPeerID() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_PeerID"));
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
        int GetSentReliableCommandsCount() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_SentReliableCommandsCount"));
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
        int GetTimeInt() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_timeInt"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetTimePingInterval() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_timePingInterval"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetTrafficStatsEnabled() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_TrafficStatsEnabled"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::ExitGames_Client_Photon::TrafficStatsGameLevel* GetTrafficStatsGameLevel() {
            static BNM::Method<::ExitGames_Client_Photon::TrafficStatsGameLevel*> _method = GetClass().GetMethod(O("get_TrafficStatsGameLevel"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::ExitGames_Client_Photon::TrafficStats* GetTrafficStatsIncoming() {
            static BNM::Method<::ExitGames_Client_Photon::TrafficStats*> _method = GetClass().GetMethod(O("get_TrafficStatsIncoming"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::ExitGames_Client_Photon::TrafficStats* GetTrafficStatsOutgoing() {
            static BNM::Method<::ExitGames_Client_Photon::TrafficStats*> _method = GetClass().GetMethod(O("get_TrafficStatsOutgoing"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void* GetActionQueue() {
            static BNM::Field<void*> _field = GetClass().GetField(O("ActionQueue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetAppId() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("AppId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetApplicationIsInitialized() {
            static BNM::Field<bool> _field = GetClass().GetField(O("ApplicationIsInitialized"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetByteCountCurrentDispatch() {
            static BNM::Field<int> _field = GetClass().GetField(O("ByteCountCurrentDispatch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetByteCountLastOperation() {
            static BNM::Field<int> _field = GetClass().GetField(O("ByteCountLastOperation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int64_t GetBytesIn_f() {
            static BNM::Field<int64_t> _field = GetClass().GetField(O("bytesIn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int64_t GetBytesOut_f() {
            static BNM::Field<int64_t> _field = GetClass().GetField(O("bytesOut"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ExitGames_Client_Photon::NCommand* GetCommandInCurrentDispatch() {
            static BNM::Field<::ExitGames_Client_Photon::NCommand*> _field = GetClass().GetField(O("CommandInCurrentDispatch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetCryptoProvider() {
            static BNM::Field<void*> _field = GetClass().GetField(O("CryptoProvider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetCustomInitData() {
            static BNM::Field<void*> _field = GetClass().GetField(O("CustomInitData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetHighestRoundTripTimeVariance() {
            static BNM::Field<int> _field = GetClass().GetField(O("highestRoundTripTimeVariance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsEncryptionAvailable() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isEncryptionAvailable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetLagRandomizer() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("lagRandomizer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLastRoundTripTime() {
            static BNM::Field<int> _field = GetClass().GetField(O("lastRoundTripTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLongestSentCall() {
            static BNM::Field<int> _field = GetClass().GetField(O("longestSentCall"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLowestRoundTripTime() {
            static BNM::Field<int> _field = GetClass().GetField(O("lowestRoundTripTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static void* GetMessageBufferPool() {
            static BNM::Field<void*> _field = GetClass().GetField(O("MessageBufferPool"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<uint8_t>* GetMessageHeader() {
            static BNM::Field<::BNM::Structures::Mono::Array<uint8_t>*> _field = GetClass().GetField(O("messageHeader"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetNetSimListIncoming() {
            static BNM::Field<void*> _field = GetClass().GetField(O("NetSimListIncoming"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetNetSimListOutgoing() {
            static BNM::Field<void*> _field = GetClass().GetField(O("NetSimListOutgoing"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ExitGames_Client_Photon::NetworkSimulationSet* GetNetworkSimulationSettings_f() {
            static BNM::Field<::ExitGames_Client_Photon::NetworkSimulationSet*> _field = GetClass().GetField(O("networkSimulationSettings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetOutgoingCommandsInStream() {
            static BNM::Field<int> _field = GetClass().GetField(O("outgoingCommandsInStream"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPacketLossByChallenge() {
            static BNM::Field<int> _field = GetClass().GetField(O("packetLossByChallenge"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPacketLossByCrc() {
            static BNM::Field<int> _field = GetClass().GetField(O("packetLossByCrc"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ExitGames_Client_Photon::ConnectionStateValue GetPeerConnectionState() {
            static BNM::Field<::ExitGames_Client_Photon::ConnectionStateValue> _field = GetClass().GetField(O("peerConnectionState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static int16_t GetPeerCount() {
            static BNM::Field<int16_t> _field = GetClass().GetField(O("peerCount"));
            return _field.Get();
        }
        int16_t GetPeerID_f() {
            static BNM::Field<int16_t> _field = GetClass().GetField(O("peerID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ExitGames_Client_Photon::PhotonPeer* GetPhotonPeer() {
            static BNM::Field<::ExitGames_Client_Photon::PhotonPeer*> _field = GetClass().GetField(O("photonPeer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ExitGames_Client_Photon::IPhotonSocket* GetPhotonSocket() {
            static BNM::Field<::ExitGames_Client_Photon::IPhotonSocket*> _field = GetClass().GetField(O("PhotonSocket"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetPhotonToken() {
            static BNM::Field<void*> _field = GetClass().GetField(O("PhotonToken"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ExitGames_Client_Photon::EventData* GetReusableEventData() {
            static BNM::Field<::ExitGames_Client_Photon::EventData*> _field = GetClass().GetField(O("reusableEventData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetRoundTripTime() {
            static BNM::Field<int> _field = GetClass().GetField(O("roundTripTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetRoundTripTimeVariance() {
            static BNM::Field<int> _field = GetClass().GetField(O("roundTripTimeVariance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ExitGames_Client_Photon::IProtocol* GetSerializationProtocol() {
            static BNM::Field<::ExitGames_Client_Photon::IProtocol*> _field = GetClass().GetField(O("SerializationProtocol"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetServerTimeOffset() {
            static BNM::Field<int> _field = GetClass().GetField(O("serverTimeOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetServerTimeOffsetIsAvailable() {
            static BNM::Field<bool> _field = GetClass().GetField(O("serverTimeOffsetIsAvailable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetTimeLastAckReceive() {
            static BNM::Field<int> _field = GetClass().GetField(O("timeLastAckReceive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetTimeLastSendAck() {
            static BNM::Field<int> _field = GetClass().GetField(O("timeLastSendAck"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetTimeLastSendOutgoing() {
            static BNM::Field<int> _field = GetClass().GetField(O("timeLastSendOutgoing"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetTimeoutInt() {
            static BNM::Field<int> _field = GetClass().GetField(O("timeoutInt"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetTimestampOfLastReceive() {
            static BNM::Field<int> _field = GetClass().GetField(O("timestampOfLastReceive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetTrafficPackageHeaderSize() {
            static BNM::Field<int> _field = GetClass().GetField(O("TrafficPackageHeaderSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ExitGames_Client_Photon::ConnectionProtocol GetUsedTransportProtocol() {
            static BNM::Field<::ExitGames_Client_Photon::ConnectionProtocol> _field = GetClass().GetField(O("usedTransportProtocol"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetWatch() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("watch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAppId(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("AppId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetApplicationIsInitialized(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("ApplicationIsInitialized"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetByteCountCurrentDispatch(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("ByteCountCurrentDispatch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetByteCountLastOperation(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("ByteCountLastOperation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBytesIn(int64_t value) {
            static BNM::Field<int64_t> _field = GetClass().GetField(O("bytesIn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBytesOut(int64_t value) {
            static BNM::Field<int64_t> _field = GetClass().GetField(O("bytesOut"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCommandInCurrentDispatch(::ExitGames_Client_Photon::NCommand* value) {
            static BNM::Field<::ExitGames_Client_Photon::NCommand*> _field = GetClass().GetField(O("CommandInCurrentDispatch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCryptoProvider(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("CryptoProvider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCustomInitData(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("CustomInitData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHighestRoundTripTimeVariance(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("highestRoundTripTimeVariance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsEncryptionAvailable(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isEncryptionAvailable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastRoundTripTime(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("lastRoundTripTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLongestSentCall(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("longestSentCall"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLowestRoundTripTime(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("lowestRoundTripTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetMessageBufferPool(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("MessageBufferPool"));
            _field.Set(value);
        }
        void SetMessageHeader(::BNM::Structures::Mono::Array<uint8_t>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<uint8_t>*> _field = GetClass().GetField(O("messageHeader"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOutgoingCommandsInStream(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("outgoingCommandsInStream"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPacketLossByChallenge(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("packetLossByChallenge"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPacketLossByCrc(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("packetLossByCrc"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPeerConnectionState(::ExitGames_Client_Photon::ConnectionStateValue value) {
            static BNM::Field<::ExitGames_Client_Photon::ConnectionStateValue> _field = GetClass().GetField(O("peerConnectionState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetPeerCount(int16_t value) {
            static BNM::Field<int16_t> _field = GetClass().GetField(O("peerCount"));
            _field.Set(value);
        }
        void SetPeerID(int16_t value) {
            static BNM::Field<int16_t> _field = GetClass().GetField(O("peerID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPhotonPeer(::ExitGames_Client_Photon::PhotonPeer* value) {
            static BNM::Field<::ExitGames_Client_Photon::PhotonPeer*> _field = GetClass().GetField(O("photonPeer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPhotonSocket(::ExitGames_Client_Photon::IPhotonSocket* value) {
            static BNM::Field<::ExitGames_Client_Photon::IPhotonSocket*> _field = GetClass().GetField(O("PhotonSocket"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPhotonToken(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("PhotonToken"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReusableEventData(::ExitGames_Client_Photon::EventData* value) {
            static BNM::Field<::ExitGames_Client_Photon::EventData*> _field = GetClass().GetField(O("reusableEventData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRoundTripTime(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("roundTripTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRoundTripTimeVariance(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("roundTripTimeVariance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSerializationProtocol(::ExitGames_Client_Photon::IProtocol* value) {
            static BNM::Field<::ExitGames_Client_Photon::IProtocol*> _field = GetClass().GetField(O("SerializationProtocol"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetServerTimeOffset(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("serverTimeOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetServerTimeOffsetIsAvailable(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("serverTimeOffsetIsAvailable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimeLastAckReceive(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("timeLastAckReceive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimeLastSendAck(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("timeLastSendAck"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimeLastSendOutgoing(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("timeLastSendOutgoing"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimeoutInt(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("timeoutInt"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimestampOfLastReceive(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("timestampOfLastReceive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTrafficPackageHeaderSize(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("TrafficPackageHeaderSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUsedTransportProtocol(::ExitGames_Client_Photon::ConnectionProtocol value) {
            static BNM::Field<::ExitGames_Client_Photon::ConnectionProtocol> _field = GetClass().GetField(O("usedTransportProtocol"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWatch(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("watch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        template <typename TP3 = void*>
        bool Connect(::BNM::Structures::Mono::String* serverAddress, ::BNM::Structures::Mono::String* proxyServerAddress, ::BNM::Structures::Mono::String* appID, TP3 photonToken) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("Connect"), {"serverAddress", "proxyServerAddress", "appID", "photonToken"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(serverAddress, proxyServerAddress, appID, photonToken);
        }
        void DeriveSharedKey(::ExitGames_Client_Photon::OperationResponse* operationResponse) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DeriveSharedKey"), {"operationResponse"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(operationResponse);
        }
        bool DeserializeMessageAndCallback(::ExitGames_Client_Photon::StreamBuffer* stream) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("DeserializeMessageAndCallback"), {"stream"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(stream);
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
        void EnqueueActionForDispatch(::ExitGames_Client_Photon::PeerBase_MyAction* action) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EnqueueActionForDispatch"), {"action"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(action);
        }
        void EnqueueDebugReturn(::ExitGames_Client_Photon::DebugLevel level, ::BNM::Structures::Mono::String* debugReturn) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EnqueueDebugReturn"), {"level", "debugReturn"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(level, debugReturn);
        }
        bool EnqueuePhotonMessage(::ExitGames_Client_Photon::StreamBuffer* opBytes, ::ExitGames_Client_Photon::SendOptions sendParams) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("EnqueuePhotonMessage"), {"opBytes", "sendParams"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(opBytes, sendParams);
        }
        void EnqueueStatusCallback(::ExitGames_Client_Photon::StatusCode statusValue) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EnqueueStatusCallback"), {"statusValue"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(statusValue);
        }
        template <typename TP0 = void*>
        bool ExchangeKeysForEncryption(TP0 lockObject) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ExchangeKeysForEncryption"), {"lockObject"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(lockObject);
        }
        void FetchServerTimestamp() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FetchServerTimestamp"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        int64_t get_BytesIn() {
            static BNM::Method<int64_t> _m = GetClass().GetMethod(O("get_BytesIn"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int64_t get_BytesOut() {
            static BNM::Method<int64_t> _m = GetClass().GetMethod(O("get_BytesOut"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        uint8_t get_ChannelCount() {
            static BNM::Method<uint8_t> _m = GetClass().GetMethod(O("get_ChannelCount"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::ExitGames_Client_Photon::DebugLevel get_debugOut() {
            static BNM::Method<::ExitGames_Client_Photon::DebugLevel> _m = GetClass().GetMethod(O("get_debugOut"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_DisconnectTimeout() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_DisconnectTimeout"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsIpv6() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsIpv6"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* get_Listener() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_Listener"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_mtu() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_mtu"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::ExitGames_Client_Photon::NetworkSimulationSet* get_NetworkSimulationSettings() {
            static BNM::Method<::ExitGames_Client_Photon::NetworkSimulationSet*> _m = GetClass().GetMethod(O("get_NetworkSimulationSettings"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static int get_outgoingStreamBufferSize() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_outgoingStreamBufferSize"));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* get_PeerID() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_PeerID"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* get_ProxyServerAddress() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_ProxyServerAddress"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
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
        int get_SentReliableCommandsCount() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_SentReliableCommandsCount"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* get_ServerAddress() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_ServerAddress"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_timeInt() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_timeInt"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_timePingInterval() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_timePingInterval"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_TrafficStatsEnabled() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_TrafficStatsEnabled"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::ExitGames_Client_Photon::TrafficStatsGameLevel* get_TrafficStatsGameLevel() {
            static BNM::Method<::ExitGames_Client_Photon::TrafficStatsGameLevel*> _m = GetClass().GetMethod(O("get_TrafficStatsGameLevel"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::ExitGames_Client_Photon::TrafficStats* get_TrafficStatsIncoming() {
            static BNM::Method<::ExitGames_Client_Photon::TrafficStats*> _m = GetClass().GetMethod(O("get_TrafficStatsIncoming"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::ExitGames_Client_Photon::TrafficStats* get_TrafficStatsOutgoing() {
            static BNM::Method<::ExitGames_Client_Photon::TrafficStats*> _m = GetClass().GetMethod(O("get_TrafficStatsOutgoing"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* GetHttpKeyValueString(::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* dic) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetHttpKeyValueString"), {"dic"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(dic);
        }
        void InitCallback() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitCallback"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void InitEncryption(::BNM::Structures::Mono::Array<uint8_t>* secret) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitEncryption"), {"secret"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(secret);
        }
        bool IsTransportEncrypted() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsTransportEncrypted"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static ::ExitGames_Client_Photon::StreamBuffer* MessageBufferPoolGet() {
            static BNM::Method<::ExitGames_Client_Photon::StreamBuffer*> _m = GetClass().GetMethod(O("MessageBufferPoolGet"));
            return _m.Call();
        }
        static void MessageBufferPoolPut(::ExitGames_Client_Photon::StreamBuffer* buff) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("MessageBufferPoolPut"), {"buff"});
            _m.Call(buff);
        }
        void NetworkSimRun() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("NetworkSimRun"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnConnect() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnConnect"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        template <typename TP2 = void*>
        ::BNM::Structures::Mono::String* PrepareWebSocketUrl(::BNM::Structures::Mono::String* serverAddress, ::BNM::Structures::Mono::String* appId, TP2 photonToken) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("PrepareWebSocketUrl"), {"serverAddress", "appId", "photonToken"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(serverAddress, appId, photonToken);
        }
        void ReceiveIncomingCommands(::BNM::Structures::Mono::Array<uint8_t>* inBuff, int dataLength) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReceiveIncomingCommands"), {"inBuff", "dataLength"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(inBuff, dataLength);
        }
        void ReceiveNetworkSimulated(::BNM::Structures::Mono::Array<uint8_t>* dataReceived) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReceiveNetworkSimulated"), {"dataReceived"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(dataReceived);
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
        void SendNetworkSimulated(::BNM::Structures::Mono::Array<uint8_t>* dataToSend) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendNetworkSimulated"), {"dataToSend"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(dataToSend);
        }
        bool SendOutgoingCommands() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("SendOutgoingCommands"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        template <typename TP0 = void*>
        ::ExitGames_Client_Photon::StreamBuffer* SerializeMessageToMessage(TP0 message, bool encrypt) {
            static BNM::Method<::ExitGames_Client_Photon::StreamBuffer*> _m = GetClass().GetMethod(O("SerializeMessageToMessage"), {"message", "encrypt"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(message, encrypt);
        }
        ::ExitGames_Client_Photon::StreamBuffer* SerializeOperationToMessage(uint8_t opCode, ::BNM::Structures::Mono::Dictionary<uint8_t, void*>* parameters, ::ExitGames_Client_Photon::EgMessageType messageType, bool encrypt) {
            static BNM::Method<::ExitGames_Client_Photon::StreamBuffer*> _m = GetClass().GetMethod(O("SerializeOperationToMessage"), {"opCode", "parameters", "messageType", "encrypt"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(opCode, parameters, messageType, encrypt);
        }
        ::ExitGames_Client_Photon::StreamBuffer* SerializeOperationToMessage(uint8_t opCode, ::ExitGames_Client_Photon::ParameterDictionary* parameters, ::ExitGames_Client_Photon::EgMessageType messageType, bool encrypt) {
            static BNM::Method<::ExitGames_Client_Photon::StreamBuffer*> _m = GetClass().GetMethod(O("SerializeOperationToMessage"), {"opCode", "parameters", "messageType", "encrypt"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(opCode, parameters, messageType, encrypt);
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
        void StopConnection() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StopConnection"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateRoundTripTimeAndVariance(int lastRoundtripTime) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateRoundTripTimeAndVariance"), {"lastRoundtripTime"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(lastRoundtripTime);
        }
        ::BNM::Structures::Mono::Array<uint8_t>* WriteInitRequest() {
            static BNM::Method<::BNM::Structures::Mono::Array<uint8_t>*> _m = GetClass().GetMethod(O("WriteInitRequest"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::Array<uint8_t>* WriteInitV3() {
            static BNM::Method<::BNM::Structures::Mono::Array<uint8_t>*> _m = GetClass().GetMethod(O("WriteInitV3"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
