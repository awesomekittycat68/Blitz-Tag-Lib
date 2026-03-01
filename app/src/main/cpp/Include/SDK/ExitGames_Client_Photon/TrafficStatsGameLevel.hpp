#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace ExitGames_Client_Photon {
    struct TrafficStatsGameLevel : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("ExitGames.Client.Photon", "TrafficStatsGameLevel");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetDispatchCalls() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_DispatchCalls"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetDispatchIncomingCommandsCalls() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_DispatchIncomingCommandsCalls"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetDispatchIncomingCommandsCalls(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_DispatchIncomingCommandsCalls"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetEventByteCount() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_EventByteCount"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetEventByteCount(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_EventByteCount"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetEventCount() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_EventCount"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetEventCount(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_EventCount"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetLongestDeltaBetweenDispatching() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_LongestDeltaBetweenDispatching"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetLongestDeltaBetweenDispatching(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_LongestDeltaBetweenDispatching"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetLongestDeltaBetweenSending() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_LongestDeltaBetweenSending"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetLongestDeltaBetweenSending(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_LongestDeltaBetweenSending"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetLongestEventCallback() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_LongestEventCallback"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetLongestEventCallback(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_LongestEventCallback"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        uint8_t GetLongestEventCallbackCode() {
            static BNM::Method<uint8_t> _method = GetClass().GetMethod(O("get_LongestEventCallbackCode"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetLongestEventCallbackCode(uint8_t value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_LongestEventCallbackCode"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetLongestMessageCallback() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_LongestMessageCallback"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetLongestMessageCallback(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_LongestMessageCallback"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetLongestOpResponseCallback() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_LongestOpResponseCallback"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetLongestOpResponseCallback(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_LongestOpResponseCallback"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        uint8_t GetLongestOpResponseCallbackOpCode() {
            static BNM::Method<uint8_t> _method = GetClass().GetMethod(O("get_LongestOpResponseCallbackOpCode"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetLongestOpResponseCallbackOpCode(uint8_t value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_LongestOpResponseCallbackOpCode"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetLongestRawMessageCallback() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_LongestRawMessageCallback"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetLongestRawMessageCallback(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_LongestRawMessageCallback"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetOperationByteCount() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_OperationByteCount"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetOperationByteCount(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_OperationByteCount"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetOperationCount() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_OperationCount"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetOperationCount(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_OperationCount"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetResultByteCount() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_ResultByteCount"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetResultByteCount(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_ResultByteCount"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetResultCount() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_ResultCount"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetResultCount(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_ResultCount"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetSendOutgoingCommandsCalls() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_SendOutgoingCommandsCalls"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetSendOutgoingCommandsCalls(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_SendOutgoingCommandsCalls"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetTotalByteCount() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_TotalByteCount"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetTotalIncomingByteCount() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_TotalIncomingByteCount"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetTotalIncomingMessageCount() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_TotalIncomingMessageCount"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetTotalMessageCount() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_TotalMessageCount"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetTotalOutgoingByteCount() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_TotalOutgoingByteCount"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetTotalOutgoingMessageCount() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_TotalOutgoingMessageCount"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetTimeOfLastDispatchCall() {
            static BNM::Field<int> _field = GetClass().GetField(O("timeOfLastDispatchCall"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetTimeOfLastSendCall() {
            static BNM::Field<int> _field = GetClass().GetField(O("timeOfLastSendCall"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetWatch() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("watch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetTimeOfLastDispatchCall(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("timeOfLastDispatchCall"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimeOfLastSendCall(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("timeOfLastSendCall"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWatch(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("watch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void CountEvent(int eventBytes) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CountEvent"), {"eventBytes"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(eventBytes);
        }
        void CountOperation(int operationBytes) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CountOperation"), {"operationBytes"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(operationBytes);
        }
        void CountResult(int resultBytes) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CountResult"), {"resultBytes"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(resultBytes);
        }
        void DispatchIncomingCommandsCalled() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DispatchIncomingCommandsCalled"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        int get_DispatchCalls() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_DispatchCalls"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_DispatchIncomingCommandsCalls() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_DispatchIncomingCommandsCalls"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_EventByteCount() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_EventByteCount"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_EventCount() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_EventCount"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_LongestDeltaBetweenDispatching() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_LongestDeltaBetweenDispatching"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_LongestDeltaBetweenSending() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_LongestDeltaBetweenSending"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_LongestEventCallback() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_LongestEventCallback"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        uint8_t get_LongestEventCallbackCode() {
            static BNM::Method<uint8_t> _m = GetClass().GetMethod(O("get_LongestEventCallbackCode"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_LongestMessageCallback() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_LongestMessageCallback"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_LongestOpResponseCallback() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_LongestOpResponseCallback"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        uint8_t get_LongestOpResponseCallbackOpCode() {
            static BNM::Method<uint8_t> _m = GetClass().GetMethod(O("get_LongestOpResponseCallbackOpCode"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_LongestRawMessageCallback() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_LongestRawMessageCallback"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_OperationByteCount() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_OperationByteCount"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_OperationCount() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_OperationCount"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_ResultByteCount() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_ResultByteCount"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_ResultCount() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_ResultCount"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_SendOutgoingCommandsCalls() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_SendOutgoingCommandsCalls"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_TotalByteCount() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_TotalByteCount"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_TotalIncomingByteCount() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_TotalIncomingByteCount"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_TotalIncomingMessageCount() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_TotalIncomingMessageCount"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_TotalMessageCount() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_TotalMessageCount"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_TotalOutgoingByteCount() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_TotalOutgoingByteCount"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_TotalOutgoingMessageCount() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_TotalOutgoingMessageCount"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void ResetMaximumCounters() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetMaximumCounters"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SendOutgoingCommandsCalled() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendOutgoingCommandsCalled"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void set_DispatchIncomingCommandsCalls(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_DispatchIncomingCommandsCalls"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_EventByteCount(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_EventByteCount"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_EventCount(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_EventCount"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_LongestDeltaBetweenDispatching(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_LongestDeltaBetweenDispatching"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_LongestDeltaBetweenSending(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_LongestDeltaBetweenSending"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_LongestEventCallback(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_LongestEventCallback"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_LongestEventCallbackCode(uint8_t value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_LongestEventCallbackCode"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_LongestMessageCallback(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_LongestMessageCallback"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_LongestOpResponseCallback(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_LongestOpResponseCallback"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_LongestOpResponseCallbackOpCode(uint8_t value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_LongestOpResponseCallbackOpCode"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_LongestRawMessageCallback(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_LongestRawMessageCallback"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_OperationByteCount(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_OperationByteCount"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_OperationCount(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_OperationCount"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_ResultByteCount(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_ResultByteCount"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_ResultCount(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_ResultCount"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_SendOutgoingCommandsCalls(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_SendOutgoingCommandsCalls"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void TimeForEventCallback(uint8_t code, int time) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TimeForEventCallback"), {"code", "time"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(code, time);
        }
        void TimeForMessageCallback(int time) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TimeForMessageCallback"), {"time"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(time);
        }
        void TimeForRawMessageCallback(int time) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TimeForRawMessageCallback"), {"time"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(time);
        }
        void TimeForResponseCallback(uint8_t code, int time) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TimeForResponseCallback"), {"code", "time"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(code, time);
        }
        ::BNM::Structures::Mono::String* ToString_1() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ToString"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* ToStringVitalStats() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ToStringVitalStats"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
