#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace ExitGames_Client_Photon {
    struct NCommand : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("ExitGames.Client.Photon", "NCommand");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr uint8_t FV_UNRELIABLE = 0;
        static constexpr uint8_t FV_RELIABLE = 1;
        static constexpr uint8_t FV_UNRELIABLE_UNSEQUENCED = 2;
        static constexpr uint8_t FV_RELIBALE_UNSEQUENCED = 3;
        static constexpr uint8_t CT_NONE = 0;
        static constexpr uint8_t CT_ACK = 1;
        static constexpr uint8_t CT_CONNECT = 2;
        static constexpr uint8_t CT_VERIFYCONNECT = 3;
        static constexpr uint8_t CT_DISCONNECT = 4;
        static constexpr uint8_t CT_PING = 5;
        static constexpr uint8_t CT_SENDRELIABLE = 6;
        static constexpr uint8_t CT_SENDUNRELIABLE = 7;
        static constexpr uint8_t CT_SENDFRAGMENT = 8;
        static constexpr uint8_t CT_SENDUNSEQUENCED = 11;
        static constexpr uint8_t CT_EG_SERVERTIME = 12;
        static constexpr uint8_t CT_EG_SEND_UNRELIABLE_PROCESSED = 13;
        static constexpr uint8_t CT_EG_SEND_RELIABLE_UNSEQUENCED = 14;
        static constexpr uint8_t CT_EG_SEND_FRAGMENT_UNSEQUENCED = 15;
        static constexpr uint8_t CT_EG_ACK_UNSEQUENCED = 16;
        static constexpr int HEADER_UDP_PACK_LENGTH = 12;
        static constexpr int CmdSizeMinimum = 12;
        static constexpr int CmdSizeAck = 20;
        static constexpr int CmdSizeConnect = 44;
        static constexpr int CmdSizeVerifyConnect = 44;
        static constexpr int CmdSizeDisconnect = 12;
        static constexpr int CmdSizePing = 12;
        static constexpr int CmdSizeReliableHeader = 12;
        static constexpr int CmdSizeUnreliableHeader = 16;
        static constexpr int CmdSizeUnsequensedHeader = 16;
        static constexpr int CmdSizeFragmentHeader = 32;
        static constexpr int CmdSizeMaxHeader = 36;
        bool GetIsFlaggedReliable() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsFlaggedReliable"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsFlaggedUnsequenced() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsFlaggedUnsequenced"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetSizeOfPayload() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_SizeOfPayload"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetAckReceivedReliableSequenceNumber() {
            static BNM::Field<int> _field = GetClass().GetField(O("ackReceivedReliableSequenceNumber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetAckReceivedSentTime() {
            static BNM::Field<int> _field = GetClass().GetField(O("ackReceivedSentTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint8_t GetCommandChannelID() {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("commandChannelID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint8_t GetCommandFlags() {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("commandFlags"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint8_t GetCommandSentCount() {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("commandSentCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCommandSentTime() {
            static BNM::Field<int> _field = GetClass().GetField(O("commandSentTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint8_t GetCommandType() {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("commandType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetFragmentCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("fragmentCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetFragmentNumber() {
            static BNM::Field<int> _field = GetClass().GetField(O("fragmentNumber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetFragmentOffset() {
            static BNM::Field<int> _field = GetClass().GetField(O("fragmentOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetFragmentsRemaining() {
            static BNM::Field<int> _field = GetClass().GetField(O("fragmentsRemaining"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ExitGames_Client_Photon::StreamBuffer* GetPayload() {
            static BNM::Field<::ExitGames_Client_Photon::StreamBuffer*> _field = GetClass().GetField(O("Payload"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetReliableSequenceNumber() {
            static BNM::Field<int> _field = GetClass().GetField(O("reliableSequenceNumber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint8_t GetReservedByte() {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("reservedByte"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ExitGames_Client_Photon::NCommandPool* GetReturnPool() {
            static BNM::Field<::ExitGames_Client_Photon::NCommandPool*> _field = GetClass().GetField(O("returnPool"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetRoundTripTimeout() {
            static BNM::Field<int> _field = GetClass().GetField(O("roundTripTimeout"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSize() {
            static BNM::Field<int> _field = GetClass().GetField(O("Size"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetStartSequenceNumber() {
            static BNM::Field<int> _field = GetClass().GetField(O("startSequenceNumber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetTimeoutTime() {
            static BNM::Field<int> _field = GetClass().GetField(O("timeoutTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetTotalLength() {
            static BNM::Field<int> _field = GetClass().GetField(O("totalLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetUnreliableSequenceNumber() {
            static BNM::Field<int> _field = GetClass().GetField(O("unreliableSequenceNumber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetUnsequencedGroupNumber() {
            static BNM::Field<int> _field = GetClass().GetField(O("unsequencedGroupNumber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAckReceivedReliableSequenceNumber(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("ackReceivedReliableSequenceNumber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAckReceivedSentTime(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("ackReceivedSentTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCommandChannelID(uint8_t value) {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("commandChannelID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCommandFlags(uint8_t value) {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("commandFlags"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCommandSentCount(uint8_t value) {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("commandSentCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCommandSentTime(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("commandSentTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCommandType(uint8_t value) {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("commandType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFragmentCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("fragmentCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFragmentNumber(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("fragmentNumber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFragmentOffset(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("fragmentOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFragmentsRemaining(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("fragmentsRemaining"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPayload(::ExitGames_Client_Photon::StreamBuffer* value) {
            static BNM::Field<::ExitGames_Client_Photon::StreamBuffer*> _field = GetClass().GetField(O("Payload"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReliableSequenceNumber(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("reliableSequenceNumber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReservedByte(uint8_t value) {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("reservedByte"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReturnPool(::ExitGames_Client_Photon::NCommandPool* value) {
            static BNM::Field<::ExitGames_Client_Photon::NCommandPool*> _field = GetClass().GetField(O("returnPool"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRoundTripTimeout(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("roundTripTimeout"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSize(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("Size"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartSequenceNumber(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("startSequenceNumber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimeoutTime(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("timeoutTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTotalLength(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("totalLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUnreliableSequenceNumber(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("unreliableSequenceNumber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUnsequencedGroupNumber(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("unsequencedGroupNumber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        int CompareTo(::ExitGames_Client_Photon::NCommand* other) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("CompareTo"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(other);
        }
        static void CreateAck(::BNM::Structures::Mono::Array<uint8_t>* buffer, int offset, ::ExitGames_Client_Photon::NCommand* commandToAck, int sentTime) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CreateAck"), {"buffer", "offset", "commandToAck", "sentTime"});
            _m.Call(buffer, offset, commandToAck, sentTime);
        }
        void FreePayload() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FreePayload"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool get_IsFlaggedReliable() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsFlaggedReliable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsFlaggedUnsequenced() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsFlaggedUnsequenced"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_SizeOfPayload() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_SizeOfPayload"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void Initialize(::ExitGames_Client_Photon::EnetPeer* peer, ::BNM::Structures::Mono::Array<uint8_t>* inBuff, int& readingOffset) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Initialize"), {"peer", "inBuff", "readingOffset"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(peer, inBuff, &readingOffset);
        }
        void Initialize(::ExitGames_Client_Photon::EnetPeer* peer, uint8_t commandType, ::ExitGames_Client_Photon::StreamBuffer* payload, uint8_t channel) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Initialize"), {"peer", "commandType", "payload", "channel"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(peer, commandType, payload, channel);
        }
        void Release() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Release"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Reset() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Reset"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Structures::Mono::Array<uint8_t>* Serialize() {
            static BNM::Method<::BNM::Structures::Mono::Array<uint8_t>*> _m = GetClass().GetMethod(O("Serialize"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void SerializeHeader(::BNM::Structures::Mono::Array<uint8_t>* buffer, int& bufferIndex) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SerializeHeader"), {"buffer", "bufferIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(buffer, &bufferIndex);
        }
        ::BNM::Structures::Mono::String* ToString_1() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ToString"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
