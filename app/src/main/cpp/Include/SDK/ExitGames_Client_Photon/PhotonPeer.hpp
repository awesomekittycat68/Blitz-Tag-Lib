#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "ConnectionProtocol.hpp"
#include "DebugLevel.hpp"
#include "PeerStateValue.hpp"
#include "SendOptions.hpp"
#include "SerializationProtocol.hpp"
#include "TargetFrameworks.hpp"

namespace ExitGames_Client_Photon {
    struct PhotonPeer : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("ExitGames.Client.Photon", "PhotonPeer");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr bool NativeDatagramEncrypt = true;
        static constexpr bool NoSocket = false;
        static constexpr bool DebugBuild = true;
        static constexpr int NativeEncryptorApiVersion = 2;
        ::ExitGames_Client_Photon::ByteArraySlicePool* GetByteArraySlicePool() {
            static BNM::Method<::ExitGames_Client_Photon::ByteArraySlicePool*> _method = GetClass().GetMethod(O("get_ByteArraySlicePool"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetByteCountCurrentDispatch() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_ByteCountCurrentDispatch"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetByteCountLastOperation() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_ByteCountLastOperation"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
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
        uint8_t GetClientSdkIdShifted() {
            static BNM::Method<uint8_t> _method = GetClass().GetMethod(O("get_ClientSdkIdShifted"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::String* GetClientVersion() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_ClientVersion"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetCommandBufferSize() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_CommandBufferSize"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetCommandBufferSize(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_CommandBufferSize"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::String* GetCommandInfoCurrentDispatch() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_CommandInfoCurrentDispatch"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetConnectionTime() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_ConnectionTime"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetCountDiscarded() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_CountDiscarded"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetCountDiscarded(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_CountDiscarded"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetCrcEnabled() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_CrcEnabled"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetCrcEnabled(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_CrcEnabled"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetDeltaUnreliableNumber() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_DeltaUnreliableNumber"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetDeltaUnreliableNumber(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_DeltaUnreliableNumber"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetDisconnectTimeout() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_DisconnectTimeout"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetDisconnectTimeout(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_DisconnectTimeout"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetEnableServerTracing() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_EnableServerTracing"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetEnableServerTracing(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_EnableServerTracing"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::MonoType* GetEncryptorType() {
            static BNM::Method<::BNM::MonoType*> _method = GetClass().GetMethod(O("get_EncryptorType"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetEncryptorType(::BNM::MonoType* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_EncryptorType"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetIsEncryptionAvailable() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsEncryptionAvailable"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsSendingOnlyAcks() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsSendingOnlyAcks"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetIsSendingOnlyAcks(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_IsSendingOnlyAcks"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetIsSimulationEnabled() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsSimulationEnabled"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetIsSimulationEnabled(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_IsSimulationEnabled"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetLastRoundTripTime() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_LastRoundTripTime"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetLastSendAckTime() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_LastSendAckTime"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetLastSendOutgoingTime() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_LastSendOutgoingTime"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetLimitOfUnreliableCommands() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_LimitOfUnreliableCommands"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetLimitOfUnreliableCommands(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_LimitOfUnreliableCommands"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        void SetLocalMsTimestampDelegate(::ExitGames_Client_Photon::SupportClass_IntegerMillisecondsDelegate* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_LocalMsTimestampDelegate"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetLocalTimeInMilliSeconds() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_LocalTimeInMilliSeconds"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetLongestSentCall() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_LongestSentCall"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetLongestSentCall(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_LongestSentCall"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetMaximumTransferUnit() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_MaximumTransferUnit"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetMaximumTransferUnit(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_MaximumTransferUnit"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::ExitGames_Client_Photon::NetworkSimulationSet* GetNetworkSimulationSettings() {
            static BNM::Method<::ExitGames_Client_Photon::NetworkSimulationSet*> _method = GetClass().GetMethod(O("get_NetworkSimulationSettings"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetPacketLossByChallenge() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_PacketLossByChallenge"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetPacketLossByCrc() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_PacketLossByCrc"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::MonoType* GetPayloadEncryptorType() {
            static BNM::Method<::BNM::MonoType*> _method = GetClass().GetMethod(O("get_PayloadEncryptorType"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetPayloadEncryptorType(::BNM::MonoType* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_PayloadEncryptorType"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::String* GetPeerID() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_PeerID"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::ExitGames_Client_Photon::PeerStateValue GetPeerState() {
            static BNM::Method<::ExitGames_Client_Photon::PeerStateValue> _method = GetClass().GetMethod(O("get_PeerState"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetQueuedIncomingCommands() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_QueuedIncomingCommands"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetQueuedOutgoingCommands() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_QueuedOutgoingCommands"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        uint8_t GetQuickResendAttempts() {
            static BNM::Method<uint8_t> _method = GetClass().GetMethod(O("get_QuickResendAttempts"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetQuickResendAttempts(uint8_t value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_QuickResendAttempts"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetResentReliableCommands() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_ResentReliableCommands"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetReuseEventInstance() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_ReuseEventInstance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetReuseEventInstance(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_ReuseEventInstance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetRoundTripTime() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_RoundTripTime"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetRoundTripTimeVariance() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_RoundTripTimeVariance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetSentReliableCommandsCount() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_SentReliableCommandsCount"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetSequenceDeltaLimitSends() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_SequenceDeltaLimitSends"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetSequenceDeltaLimitSends(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_SequenceDeltaLimitSends"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::ExitGames_Client_Photon::SerializationProtocol GetSerializationProtocolType() {
            static BNM::Method<::ExitGames_Client_Photon::SerializationProtocol> _method = GetClass().GetMethod(O("get_SerializationProtocolType"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetSerializationProtocolType(::ExitGames_Client_Photon::SerializationProtocol value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_SerializationProtocolType"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::String* GetServerAddress() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_ServerAddress"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::String* GetServerIpAddress() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_ServerIpAddress"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetServerTimeInMilliSeconds() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_ServerTimeInMilliSeconds"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetSocketErrorCode() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_SocketErrorCode"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::MonoType* GetSocketImplementation() {
            static BNM::Method<::BNM::MonoType*> _method = GetClass().GetMethod(O("get_SocketImplementation"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetSocketImplementation(::BNM::MonoType* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_SocketImplementation"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetTimestampOfLastSocketReceive() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_TimestampOfLastSocketReceive"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int64_t GetTrafficStatsElapsedMs() {
            static BNM::Method<int64_t> _method = GetClass().GetMethod(O("get_TrafficStatsElapsedMs"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetTrafficStatsEnabled() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_TrafficStatsEnabled"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetTrafficStatsEnabled(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_TrafficStatsEnabled"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::ExitGames_Client_Photon::TrafficStatsGameLevel* GetTrafficStatsGameLevel() {
            static BNM::Method<::ExitGames_Client_Photon::TrafficStatsGameLevel*> _method = GetClass().GetMethod(O("get_TrafficStatsGameLevel"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetTrafficStatsGameLevel(::ExitGames_Client_Photon::TrafficStatsGameLevel* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_TrafficStatsGameLevel"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::ExitGames_Client_Photon::TrafficStats* GetTrafficStatsIncoming() {
            static BNM::Method<::ExitGames_Client_Photon::TrafficStats*> _method = GetClass().GetMethod(O("get_TrafficStatsIncoming"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetTrafficStatsIncoming(::ExitGames_Client_Photon::TrafficStats* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_TrafficStatsIncoming"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::ExitGames_Client_Photon::TrafficStats* GetTrafficStatsOutgoing() {
            static BNM::Method<::ExitGames_Client_Photon::TrafficStats*> _method = GetClass().GetMethod(O("get_TrafficStatsOutgoing"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetTrafficStatsOutgoing(::ExitGames_Client_Photon::TrafficStats* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_TrafficStatsOutgoing"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::ExitGames_Client_Photon::ConnectionProtocol GetTransportProtocol() {
            static BNM::Method<::ExitGames_Client_Photon::ConnectionProtocol> _method = GetClass().GetMethod(O("get_TransportProtocol"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetTransportProtocol(::ExitGames_Client_Photon::ConnectionProtocol value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_TransportProtocol"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetUseByteArraySlicePoolForEvents() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_UseByteArraySlicePoolForEvents"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetUseByteArraySlicePoolForEvents(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_UseByteArraySlicePoolForEvents"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::ExitGames_Client_Photon::ConnectionProtocol GetUsedProtocol() {
            static BNM::Method<::ExitGames_Client_Photon::ConnectionProtocol> _method = GetClass().GetMethod(O("get_UsedProtocol"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::String* GetVersion() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_Version"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetWrapIncomingStructs() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_WrapIncomingStructs"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetWrapIncomingStructs(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_WrapIncomingStructs"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        void add_OnDisconnectMessage(::BNM::Structures::Mono::Action<::ExitGames_Client_Photon::DisconnectMessage*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnDisconnectMessage"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnDisconnectMessage(::BNM::Structures::Mono::Action<::ExitGames_Client_Photon::DisconnectMessage*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnDisconnectMessage"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        static bool GetAsyncKeyExchange() {
            static BNM::Field<bool> _field = GetClass().GetField(O("AsyncKeyExchange"));
            return _field.Get();
        }
        uint8_t GetChannelCount() {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("ChannelCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint8_t GetClientSdkId() {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("ClientSdkId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::String* GetClientVersion_f() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("clientVersion"));
            return _field.Get();
        }
        int GetCommandLogSize() {
            static BNM::Field<int> _field = GetClass().GetField(O("CommandLogSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetCrcEnabled_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("crcEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ExitGames_Client_Photon::DebugLevel GetDebugOut() {
            static BNM::Field<::ExitGames_Client_Photon::DebugLevel> _field = GetClass().GetField(O("DebugOut"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetDisconnectTimeout_f() {
            static BNM::Field<int> _field = GetClass().GetField(O("disconnectTimeout"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetDispatchLockObject() {
            static BNM::Field<void*> _field = GetClass().GetField(O("DispatchLockObject"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetEnableEncryptedFlag() {
            static BNM::Field<bool> _field = GetClass().GetField(O("EnableEncryptedFlag"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetEncryptor() {
            static BNM::Field<void*> _field = GetClass().GetField(O("Encryptor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::MonoType* GetEncryptorType_f() {
            static BNM::Field<::BNM::MonoType*> _field = GetClass().GetField(O("encryptorType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetEnqueueLock() {
            static BNM::Field<void*> _field = GetClass().GetField(O("EnqueueLock"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetGcmDatagramEncryption() {
            static BNM::Field<bool> _field = GetClass().GetField(O("GcmDatagramEncryption"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetInitialResendTimeMax() {
            static BNM::Field<int> _field = GetClass().GetField(O("InitialResendTimeMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMtu() {
            static BNM::Field<int> _field = GetClass().GetField(O("mtu"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static bool GetNativeDatagramEncryptionLibAvailable() {
            static BNM::Field<bool> _field = GetClass().GetField(O("NativeDatagramEncryptionLibAvailable"));
            return _field.Get();
        }
        static bool GetNativePayloadEncryptionLibAvailable() {
            static BNM::Field<bool> _field = GetClass().GetField(O("NativePayloadEncryptionLibAvailable"));
            return _field.Get();
        }
        static bool GetNativeSocketLibAvailable() {
            static BNM::Field<bool> _field = GetClass().GetField(O("NativeSocketLibAvailable"));
            return _field.Get();
        }
        static bool GetNoNativeCallbacks() {
            static BNM::Field<bool> _field = GetClass().GetField(O("NoNativeCallbacks"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<::ExitGames_Client_Photon::DisconnectMessage*>* GetOnDisconnectMessage() {
            static BNM::Field<::BNM::Structures::Mono::Action<::ExitGames_Client_Photon::DisconnectMessage*>*> _field = GetClass().GetField(O("OnDisconnectMessage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static int GetOutgoingStreamBufferSize() {
            static BNM::Field<int> _field = GetClass().GetField(O("OutgoingStreamBufferSize"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<uint8_t>* GetPayloadEncryptionSecret() {
            static BNM::Field<::BNM::Structures::Mono::Array<uint8_t>*> _field = GetClass().GetField(O("PayloadEncryptionSecret"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::MonoType* GetPayloadEncryptorType_f() {
            static BNM::Field<::BNM::MonoType*> _field = GetClass().GetField(O("payloadEncryptorType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ExitGames_Client_Photon::PeerBase* GetPeerBase() {
            static BNM::Field<::ExitGames_Client_Photon::PeerBase*> _field = GetClass().GetField(O("peerBase"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetPingUsedAsInit() {
            static BNM::Field<bool> _field = GetClass().GetField(O("PingUsedAsInit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint8_t GetQuickResendAttempts_f() {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("quickResendAttempts"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<uint8_t>* GetRandomizedSequenceNumbers() {
            static BNM::Field<::BNM::Structures::Mono::Array<uint8_t>*> _field = GetClass().GetField(O("RandomizedSequenceNumbers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRandomizeSequenceNumbers() {
            static BNM::Field<bool> _field = GetClass().GetField(O("RandomizeSequenceNumbers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRemoveAppIdFromWebSocketPath() {
            static BNM::Field<bool> _field = GetClass().GetField(O("RemoveAppIdFromWebSocketPath"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetReuseEventInstance_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("reuseEventInstance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetSendInCreationOrder() {
            static BNM::Field<bool> _field = GetClass().GetField(O("SendInCreationOrder"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetSendOutgoingLockObject() {
            static BNM::Field<void*> _field = GetClass().GetField(O("SendOutgoingLockObject"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSendWindowSize() {
            static BNM::Field<int> _field = GetClass().GetField(O("SendWindowSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSentCountAllowance() {
            static BNM::Field<int> _field = GetClass().GetField(O("SentCountAllowance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::ExitGames_Client_Photon::ConnectionProtocol, ::BNM::MonoType*>* GetSocketImplementationConfig() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::ExitGames_Client_Photon::ConnectionProtocol, ::BNM::MonoType*>*> _field = GetClass().GetField(O("SocketImplementationConfig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ExitGames_Client_Photon::TargetFrameworks GetTargetFramework() {
            static BNM::Field<::ExitGames_Client_Photon::TargetFrameworks> _field = GetClass().GetField(O("TargetFramework"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetTimePingInterval() {
            static BNM::Field<int> _field = GetClass().GetField(O("TimePingInterval"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetTrafficRecorder() {
            static BNM::Field<void*> _field = GetClass().GetField(O("TrafficRecorder"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetTrafficStatsEnabled_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("trafficStatsEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetTrafficStatsStopwatch() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("trafficStatsStopwatch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetUseByteArraySlicePoolForEvents_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("useByteArraySlicePoolForEvents"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetUseInitV3() {
            static BNM::Field<bool> _field = GetClass().GetField(O("UseInitV3"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetWarningSize() {
            static BNM::Field<int> _field = GetClass().GetField(O("WarningSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetWrapIncomingStructs_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("wrapIncomingStructs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static void SetAsyncKeyExchange(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("AsyncKeyExchange"));
            _field.Set(value);
        }
        void SetChannelCount(uint8_t value) {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("ChannelCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetClientSdkId(uint8_t value) {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("ClientSdkId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetClientVersion(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("clientVersion"));
            _field.Set(value);
        }
        void SetCommandLogSize(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("CommandLogSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCrcEnabled_fs(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("crcEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDebugOut(::ExitGames_Client_Photon::DebugLevel value) {
            static BNM::Field<::ExitGames_Client_Photon::DebugLevel> _field = GetClass().GetField(O("DebugOut"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDisconnectTimeout_fs(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("disconnectTimeout"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEnableEncryptedFlag(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("EnableEncryptedFlag"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEncryptor(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("Encryptor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEncryptorType_fs(::BNM::MonoType* value) {
            static BNM::Field<::BNM::MonoType*> _field = GetClass().GetField(O("encryptorType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGcmDatagramEncryption(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("GcmDatagramEncryption"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInitialResendTimeMax(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("InitialResendTimeMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMtu(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("mtu"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetNoNativeCallbacks(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("NoNativeCallbacks"));
            _field.Set(value);
        }
        void SetOnDisconnectMessage(::BNM::Structures::Mono::Action<::ExitGames_Client_Photon::DisconnectMessage*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::ExitGames_Client_Photon::DisconnectMessage*>*> _field = GetClass().GetField(O("OnDisconnectMessage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetOutgoingStreamBufferSize(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("OutgoingStreamBufferSize"));
            _field.Set(value);
        }
        void SetPayloadEncryptionSecret(::BNM::Structures::Mono::Array<uint8_t>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<uint8_t>*> _field = GetClass().GetField(O("PayloadEncryptionSecret"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPayloadEncryptorType_fs(::BNM::MonoType* value) {
            static BNM::Field<::BNM::MonoType*> _field = GetClass().GetField(O("payloadEncryptorType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPeerBase(::ExitGames_Client_Photon::PeerBase* value) {
            static BNM::Field<::ExitGames_Client_Photon::PeerBase*> _field = GetClass().GetField(O("peerBase"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPingUsedAsInit(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("PingUsedAsInit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetQuickResendAttempts_fs(uint8_t value) {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("quickResendAttempts"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRandomizedSequenceNumbers(::BNM::Structures::Mono::Array<uint8_t>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<uint8_t>*> _field = GetClass().GetField(O("RandomizedSequenceNumbers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRandomizeSequenceNumbers(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("RandomizeSequenceNumbers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRemoveAppIdFromWebSocketPath(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("RemoveAppIdFromWebSocketPath"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReuseEventInstance_fs(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("reuseEventInstance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSendInCreationOrder(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("SendInCreationOrder"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSendWindowSize(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("SendWindowSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSentCountAllowance(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("SentCountAllowance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSocketImplementationConfig(::BNM::Structures::Mono::Dictionary<::ExitGames_Client_Photon::ConnectionProtocol, ::BNM::MonoType*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::ExitGames_Client_Photon::ConnectionProtocol, ::BNM::MonoType*>*> _field = GetClass().GetField(O("SocketImplementationConfig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTargetFramework(::ExitGames_Client_Photon::TargetFrameworks value) {
            static BNM::Field<::ExitGames_Client_Photon::TargetFrameworks> _field = GetClass().GetField(O("TargetFramework"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimePingInterval(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("TimePingInterval"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTrafficRecorder(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("TrafficRecorder"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTrafficStatsEnabled_fs(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("trafficStatsEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTrafficStatsStopwatch(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("trafficStatsStopwatch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUseByteArraySlicePoolForEvents_fs(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("useByteArraySlicePoolForEvents"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUseInitV3(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("UseInitV3"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWarningSize(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("WarningSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWrapIncomingStructs_fs(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("wrapIncomingStructs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void add_OnDisconnectMessage_1(::BNM::Structures::Mono::Action<::ExitGames_Client_Photon::DisconnectMessage*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnDisconnectMessage"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        ::BNM::Structures::Mono::String* CommandLogToString() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("CommandLogToString"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        template <typename TP2 = void*, typename TP3 = void*>
        bool Connect(::BNM::Structures::Mono::String* serverAddress, ::BNM::Structures::Mono::String* appId, TP2 photonToken, TP3 customInitData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("Connect"), {"serverAddress", "appId", "photonToken", "customInitData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(serverAddress, appId, photonToken, customInitData);
        }
        template <typename TP3 = void*, typename TP4 = void*>
        bool Connect(::BNM::Structures::Mono::String* serverAddress, ::BNM::Structures::Mono::String* proxyServerAddress, ::BNM::Structures::Mono::String* appId, TP3 photonToken, TP4 customInitData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("Connect"), {"serverAddress", "proxyServerAddress", "appId", "photonToken", "customInitData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(serverAddress, proxyServerAddress, appId, photonToken, customInitData);
        }
        void CreatePeerBase() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CreatePeerBase"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
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
        bool EstablishEncryption() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("EstablishEncryption"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void FetchServerTimestamp() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FetchServerTimestamp"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::ExitGames_Client_Photon::ByteArraySlicePool* get_ByteArraySlicePool() {
            static BNM::Method<::ExitGames_Client_Photon::ByteArraySlicePool*> _m = GetClass().GetMethod(O("get_ByteArraySlicePool"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_ByteCountCurrentDispatch() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_ByteCountCurrentDispatch"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_ByteCountLastOperation() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_ByteCountLastOperation"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
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
        uint8_t get_ClientSdkIdShifted() {
            static BNM::Method<uint8_t> _m = GetClass().GetMethod(O("get_ClientSdkIdShifted"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* get_ClientVersion() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_ClientVersion"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_CommandBufferSize() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_CommandBufferSize"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* get_CommandInfoCurrentDispatch() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_CommandInfoCurrentDispatch"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_ConnectionTime() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_ConnectionTime"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_CountDiscarded() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_CountDiscarded"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_CrcEnabled() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_CrcEnabled"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_DeltaUnreliableNumber() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_DeltaUnreliableNumber"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_DisconnectTimeout() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_DisconnectTimeout"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_EnableServerTracing() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_EnableServerTracing"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::MonoType* get_EncryptorType() {
            static BNM::Method<::BNM::MonoType*> _m = GetClass().GetMethod(O("get_EncryptorType"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsEncryptionAvailable() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsEncryptionAvailable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsSendingOnlyAcks() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsSendingOnlyAcks"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsSimulationEnabled() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsSimulationEnabled"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_LastRoundTripTime() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_LastRoundTripTime"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_LastSendAckTime() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_LastSendAckTime"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_LastSendOutgoingTime() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_LastSendOutgoingTime"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_LimitOfUnreliableCommands() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_LimitOfUnreliableCommands"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* get_Listener() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_Listener"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_LocalTimeInMilliSeconds() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_LocalTimeInMilliSeconds"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_LongestSentCall() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_LongestSentCall"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_MaximumTransferUnit() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_MaximumTransferUnit"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::ExitGames_Client_Photon::NetworkSimulationSet* get_NetworkSimulationSettings() {
            static BNM::Method<::ExitGames_Client_Photon::NetworkSimulationSet*> _m = GetClass().GetMethod(O("get_NetworkSimulationSettings"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_PacketLossByChallenge() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_PacketLossByChallenge"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_PacketLossByCrc() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_PacketLossByCrc"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::MonoType* get_PayloadEncryptorType() {
            static BNM::Method<::BNM::MonoType*> _m = GetClass().GetMethod(O("get_PayloadEncryptorType"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* get_PeerID() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_PeerID"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::ExitGames_Client_Photon::PeerStateValue get_PeerState() {
            static BNM::Method<::ExitGames_Client_Photon::PeerStateValue> _m = GetClass().GetMethod(O("get_PeerState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_QueuedIncomingCommands() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_QueuedIncomingCommands"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_QueuedOutgoingCommands() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_QueuedOutgoingCommands"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        uint8_t get_QuickResendAttempts() {
            static BNM::Method<uint8_t> _m = GetClass().GetMethod(O("get_QuickResendAttempts"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_ResentReliableCommands() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_ResentReliableCommands"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_ReuseEventInstance() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_ReuseEventInstance"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_RoundTripTime() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_RoundTripTime"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_RoundTripTimeVariance() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_RoundTripTimeVariance"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_SentReliableCommandsCount() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_SentReliableCommandsCount"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_SequenceDeltaLimitSends() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_SequenceDeltaLimitSends"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::ExitGames_Client_Photon::SerializationProtocol get_SerializationProtocolType() {
            static BNM::Method<::ExitGames_Client_Photon::SerializationProtocol> _m = GetClass().GetMethod(O("get_SerializationProtocolType"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* get_ServerAddress() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_ServerAddress"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* get_ServerIpAddress() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_ServerIpAddress"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_ServerTimeInMilliSeconds() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_ServerTimeInMilliSeconds"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_SocketErrorCode() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_SocketErrorCode"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::MonoType* get_SocketImplementation() {
            static BNM::Method<::BNM::MonoType*> _m = GetClass().GetMethod(O("get_SocketImplementation"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_TimestampOfLastSocketReceive() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_TimestampOfLastSocketReceive"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int64_t get_TrafficStatsElapsedMs() {
            static BNM::Method<int64_t> _m = GetClass().GetMethod(O("get_TrafficStatsElapsedMs"));
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
        ::ExitGames_Client_Photon::ConnectionProtocol get_TransportProtocol() {
            static BNM::Method<::ExitGames_Client_Photon::ConnectionProtocol> _m = GetClass().GetMethod(O("get_TransportProtocol"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_UseByteArraySlicePoolForEvents() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_UseByteArraySlicePoolForEvents"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::ExitGames_Client_Photon::ConnectionProtocol get_UsedProtocol() {
            static BNM::Method<::ExitGames_Client_Photon::ConnectionProtocol> _m = GetClass().GetMethod(O("get_UsedProtocol"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::String* get_Version() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_Version"));
            return _m.Call();
        }
        bool get_WrapIncomingStructs() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_WrapIncomingStructs"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool InitDatagramEncryption(::BNM::Structures::Mono::Array<uint8_t>* encryptionSecret, ::BNM::Structures::Mono::Array<uint8_t>* hmacSecret, bool randomizedSequenceNumbers, bool chainingModeGCM) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("InitDatagramEncryption"), {"encryptionSecret", "hmacSecret", "randomizedSequenceNumbers", "chainingModeGCM"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(encryptionSecret, hmacSecret, randomizedSequenceNumbers, chainingModeGCM);
        }
        void InitializeTrafficStats() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitializeTrafficStats"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void InitPayloadEncryption(::BNM::Structures::Mono::Array<uint8_t>* secret) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitPayloadEncryption"), {"secret"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(secret);
        }
        static int MessageBufferPoolSize() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("MessageBufferPoolSize"));
            return _m.Call();
        }
        static void MessageBufferPoolTrim(int countOfBuffers) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("MessageBufferPoolTrim"), {"countOfBuffers"});
            _m.Call(countOfBuffers);
        }
        void OnDisconnectMessageCall(::ExitGames_Client_Photon::DisconnectMessage* dm) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisconnectMessageCall"), {"dm"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(dm);
        }
        static bool RegisterType(::BNM::MonoType* customType, uint8_t code, ::ExitGames_Client_Photon::SerializeMethod* serializeMethod, ::ExitGames_Client_Photon::DeserializeMethod* constructor) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("RegisterType"), {"customType", "code", "serializeMethod", "constructor"});
            return _m.Call(customType, code, serializeMethod, constructor);
        }
        static bool RegisterType(::BNM::MonoType* customType, uint8_t code, ::ExitGames_Client_Photon::SerializeStreamMethod* serializeMethod, ::ExitGames_Client_Photon::DeserializeStreamMethod* constructor) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("RegisterType"), {"customType", "code", "serializeMethod", "constructor"});
            return _m.Call(customType, code, serializeMethod, constructor);
        }
        void remove_OnDisconnectMessage_1(::BNM::Structures::Mono::Action<::ExitGames_Client_Photon::DisconnectMessage*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnDisconnectMessage"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        bool SendAcksOnly() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("SendAcksOnly"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool SendOperation(uint8_t operationCode, ::BNM::Structures::Mono::Dictionary<uint8_t, void*>* operationParameters, ::ExitGames_Client_Photon::SendOptions sendOptions) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("SendOperation"), {"operationCode", "operationParameters", "sendOptions"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(operationCode, operationParameters, sendOptions);
        }
        bool SendOperation(uint8_t operationCode, ::ExitGames_Client_Photon::ParameterDictionary* operationParameters, ::ExitGames_Client_Photon::SendOptions sendOptions) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("SendOperation"), {"operationCode", "operationParameters", "sendOptions"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(operationCode, operationParameters, sendOptions);
        }
        bool SendOutgoingCommands() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("SendOutgoingCommands"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void Service() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Service"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void set_CommandBufferSize(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_CommandBufferSize"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_CountDiscarded(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_CountDiscarded"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_CrcEnabled(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_CrcEnabled"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_DeltaUnreliableNumber(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_DeltaUnreliableNumber"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_DisconnectTimeout(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_DisconnectTimeout"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_EnableServerTracing(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_EnableServerTracing"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_EncryptorType(::BNM::MonoType* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_EncryptorType"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_IsSendingOnlyAcks(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_IsSendingOnlyAcks"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_IsSimulationEnabled(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_IsSimulationEnabled"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_LimitOfUnreliableCommands(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_LimitOfUnreliableCommands"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        template <typename TP0 = void*>
        void set_Listener(TP0 value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Listener"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_LocalMsTimestampDelegate(::ExitGames_Client_Photon::SupportClass_IntegerMillisecondsDelegate* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_LocalMsTimestampDelegate"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_LongestSentCall(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_LongestSentCall"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_MaximumTransferUnit(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_MaximumTransferUnit"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_PayloadEncryptorType(::BNM::MonoType* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_PayloadEncryptorType"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_QuickResendAttempts(uint8_t value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_QuickResendAttempts"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_ReuseEventInstance(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_ReuseEventInstance"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_SequenceDeltaLimitSends(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_SequenceDeltaLimitSends"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_SerializationProtocolType(::ExitGames_Client_Photon::SerializationProtocol value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_SerializationProtocolType"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_SocketImplementation(::BNM::MonoType* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_SocketImplementation"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_TrafficStatsEnabled(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_TrafficStatsEnabled"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_TrafficStatsGameLevel(::ExitGames_Client_Photon::TrafficStatsGameLevel* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_TrafficStatsGameLevel"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_TrafficStatsIncoming(::ExitGames_Client_Photon::TrafficStats* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_TrafficStatsIncoming"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_TrafficStatsOutgoing(::ExitGames_Client_Photon::TrafficStats* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_TrafficStatsOutgoing"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_TransportProtocol(::ExitGames_Client_Photon::ConnectionProtocol value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_TransportProtocol"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_UseByteArraySlicePoolForEvents(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_UseByteArraySlicePoolForEvents"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_WrapIncomingStructs(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_WrapIncomingStructs"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void StopThread() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StopThread"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void TrafficStatsReset() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TrafficStatsReset"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Structures::Mono::String* VitalStatsToString(bool all) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("VitalStatsToString"), {"all"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(all);
        }
    };
}
