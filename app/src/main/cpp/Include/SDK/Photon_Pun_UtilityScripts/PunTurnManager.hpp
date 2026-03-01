#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../Photon_Pun/MonoBehaviourPunCallbacks.hpp"

namespace Photon_Pun_UtilityScripts {
    struct PunTurnManager : ::Photon_Pun::MonoBehaviourPunCallbacks {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Pun.UtilityScripts", "PunTurnManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr uint8_t TurnManagerEventOffset = 0;
        static constexpr uint8_t EvMove = 1;
        static constexpr uint8_t EvFinalMove = 2;
        float GetElapsedTimeInTurn() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_ElapsedTimeInTurn"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsCompletedByAll() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsCompletedByAll"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsFinishedByMe() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsFinishedByMe"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsOver() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsOver"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        float GetRemainingSecondsInTurn() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_RemainingSecondsInTurn"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetTurn() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_Turn"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetTurn(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Turn"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetIsOverCallProcessed() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_isOverCallProcessed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetFinishedPlayers() {
            static BNM::Field<void*> _field = GetClass().GetField(O("finishedPlayers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Realtime::Player* GetSender() {
            static BNM::Field<::Photon_Realtime::Player*> _field = GetClass().GetField(O("sender"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTurnDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("TurnDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetTurnManagerListener() {
            static BNM::Field<void*> _field = GetClass().GetField(O("TurnManagerListener"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetIsOverCallProcessed(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_isOverCallProcessed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSender(::Photon_Realtime::Player* value) {
            static BNM::Field<::Photon_Realtime::Player*> _field = GetClass().GetField(O("sender"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTurnDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("TurnDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTurnManagerListener(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("TurnManagerListener"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void BeginTurn() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("BeginTurn"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        float get_ElapsedTimeInTurn() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_ElapsedTimeInTurn"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsCompletedByAll() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsCompletedByAll"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsFinishedByMe() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsFinishedByMe"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsOver() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsOver"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_RemainingSecondsInTurn() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_RemainingSecondsInTurn"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_Turn() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_Turn"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool GetPlayerFinishedTurn(::Photon_Realtime::Player* player) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("GetPlayerFinishedTurn"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(player);
        }
        void OnEvent(::ExitGames_Client_Photon::EventData* photonEvent) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEvent"), {"photonEvent"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(photonEvent);
        }
        void OnRoomPropertiesUpdate(::ExitGames_Client_Photon::Hashtable* propertiesThatChanged) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnRoomPropertiesUpdate"), {"propertiesThatChanged"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(propertiesThatChanged);
        }
        template <typename TP1 = void*>
        void ProcessOnEvent(uint8_t eventCode, TP1 content, int senderId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ProcessOnEvent"), {"eventCode", "content", "senderId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(eventCode, content, senderId);
        }
        template <typename TP0 = void*>
        void SendMove(TP0 move, bool finished) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendMove"), {"move", "finished"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(move, finished);
        }
        void set_Turn(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Turn"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
