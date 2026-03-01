#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace ExitGames_Client_Photon {
    struct EnetChannel : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("ExitGames.Client.Photon", "EnetChannel");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        uint8_t GetChannelNumber() {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("ChannelNumber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetHighestReceivedAck() {
            static BNM::Field<int> _field = GetClass().GetField(O("highestReceivedAck"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetIncomingReliableSequenceNumber() {
            static BNM::Field<int> _field = GetClass().GetField(O("incomingReliableSequenceNumber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetIncomingUnreliableSequenceNumber() {
            static BNM::Field<int> _field = GetClass().GetField(O("incomingUnreliableSequenceNumber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetIncomingUnsequencedCommandsList() {
            static BNM::Field<void*> _field = GetClass().GetField(O("incomingUnsequencedCommandsList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLowestUnacknowledgedSequenceNumber() {
            static BNM::Field<int> _field = GetClass().GetField(O("lowestUnacknowledgedSequenceNumber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetOutgoingReliableCommandsList() {
            static BNM::Field<void*> _field = GetClass().GetField(O("outgoingReliableCommandsList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetOutgoingReliableSequenceNumber() {
            static BNM::Field<int> _field = GetClass().GetField(O("outgoingReliableSequenceNumber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetOutgoingReliableUnsequencedNumber() {
            static BNM::Field<int> _field = GetClass().GetField(O("outgoingReliableUnsequencedNumber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetOutgoingUnreliableCommandsList() {
            static BNM::Field<void*> _field = GetClass().GetField(O("outgoingUnreliableCommandsList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetOutgoingUnreliableSequenceNumber() {
            static BNM::Field<int> _field = GetClass().GetField(O("outgoingUnreliableSequenceNumber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetReliableCommandsInFlight() {
            static BNM::Field<int> _field = GetClass().GetField(O("reliableCommandsInFlight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetReliableUnsequencedNumbersCompletelyReceived() {
            static BNM::Field<int> _field = GetClass().GetField(O("reliableUnsequencedNumbersCompletelyReceived"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetReliableUnsequencedNumbersReceived() {
            static BNM::Field<void*> _field = GetClass().GetField(O("reliableUnsequencedNumbersReceived"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetChannelNumber(uint8_t value) {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("ChannelNumber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHighestReceivedAck(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("highestReceivedAck"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIncomingReliableSequenceNumber(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("incomingReliableSequenceNumber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIncomingUnreliableSequenceNumber(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("incomingUnreliableSequenceNumber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIncomingUnsequencedCommandsList(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("incomingUnsequencedCommandsList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLowestUnacknowledgedSequenceNumber(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("lowestUnacknowledgedSequenceNumber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOutgoingReliableCommandsList(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("outgoingReliableCommandsList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOutgoingReliableSequenceNumber(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("outgoingReliableSequenceNumber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOutgoingReliableUnsequencedNumber(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("outgoingReliableUnsequencedNumber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOutgoingUnreliableCommandsList(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("outgoingUnreliableCommandsList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOutgoingUnreliableSequenceNumber(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("outgoingUnreliableSequenceNumber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReliableCommandsInFlight(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("reliableCommandsInFlight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReliableUnsequencedNumbersCompletelyReceived(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("reliableUnsequencedNumbersCompletelyReceived"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReliableUnsequencedNumbersReceived(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("reliableUnsequencedNumbersReceived"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void clearAll() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("clearAll"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool ContainsReliableSequenceNumber(int reliableSequenceNumber) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ContainsReliableSequenceNumber"), {"reliableSequenceNumber"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(reliableSequenceNumber);
        }
        bool ContainsUnreliableSequenceNumber(int unreliableSequenceNumber) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ContainsUnreliableSequenceNumber"), {"unreliableSequenceNumber"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(unreliableSequenceNumber);
        }
        ::ExitGames_Client_Photon::NCommand* FetchReliableSequenceNumber(int reliableSequenceNumber) {
            static BNM::Method<::ExitGames_Client_Photon::NCommand*> _m = GetClass().GetMethod(O("FetchReliableSequenceNumber"), {"reliableSequenceNumber"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(reliableSequenceNumber);
        }
        ::ExitGames_Client_Photon::NCommand* FetchUnreliableSequenceNumber(int unreliableSequenceNumber) {
            static BNM::Method<::ExitGames_Client_Photon::NCommand*> _m = GetClass().GetMethod(O("FetchUnreliableSequenceNumber"), {"unreliableSequenceNumber"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(unreliableSequenceNumber);
        }
        bool QueueIncomingReliableUnsequenced(::ExitGames_Client_Photon::NCommand* command) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("QueueIncomingReliableUnsequenced"), {"command"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(command);
        }
        void RemoveFragment(int reliableSequenceNumber, bool isSequenced) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveFragment"), {"reliableSequenceNumber", "isSequenced"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(reliableSequenceNumber, isSequenced);
        }
        bool TryGetFragment(int reliableSequenceNumber, bool isSequenced, ::ExitGames_Client_Photon::NCommand*& fragment) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryGetFragment"), {"reliableSequenceNumber", "isSequenced", "fragment"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(reliableSequenceNumber, isSequenced, &fragment);
        }
    };
}
