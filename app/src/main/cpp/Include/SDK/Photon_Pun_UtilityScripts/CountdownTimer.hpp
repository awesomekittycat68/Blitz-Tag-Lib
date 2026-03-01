#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../Photon_Pun/MonoBehaviourPunCallbacks.hpp"

namespace Photon_Pun_UtilityScripts {
    struct CountdownTimer : ::Photon_Pun::MonoBehaviourPunCallbacks {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Pun.UtilityScripts", "CountdownTimer");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr const char* CountdownStartTime = "StartTime";
        void add_OnCountdownTimerHasExpired(::Photon_Pun_UtilityScripts::CountdownTimer_CountdownTimerHasExpired* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnCountdownTimerHasExpired"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnCountdownTimerHasExpired(::Photon_Pun_UtilityScripts::CountdownTimer_CountdownTimerHasExpired* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnCountdownTimerHasExpired"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        float GetCountdown() {
            static BNM::Field<float> _field = GetClass().GetField(O("Countdown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsTimerRunning() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isTimerRunning"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::Photon_Pun_UtilityScripts::CountdownTimer_CountdownTimerHasExpired* GetOnCountdownTimerHasExpired() {
            static BNM::Field<::Photon_Pun_UtilityScripts::CountdownTimer_CountdownTimerHasExpired*> _field = GetClass().GetField(O("OnCountdownTimerHasExpired"));
            return _field.Get();
        }
        int GetStartTime() {
            static BNM::Field<int> _field = GetClass().GetField(O("startTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Text* GetText() {
            static BNM::Field<::Text*> _field = GetClass().GetField(O("Text"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCountdown(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("Countdown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsTimerRunning(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isTimerRunning"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetOnCountdownTimerHasExpired(::Photon_Pun_UtilityScripts::CountdownTimer_CountdownTimerHasExpired* value) {
            static BNM::Field<::Photon_Pun_UtilityScripts::CountdownTimer_CountdownTimerHasExpired*> _field = GetClass().GetField(O("OnCountdownTimerHasExpired"));
            _field.Set(value);
        }
        void SetStartTime(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("startTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetText(::Text* value) {
            static BNM::Field<::Text*> _field = GetClass().GetField(O("Text"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void add_OnCountdownTimerHasExpired_1(::Photon_Pun_UtilityScripts::CountdownTimer_CountdownTimerHasExpired* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnCountdownTimerHasExpired"), {"value"});
            _m.Call(value);
        }
        void Initialize() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Initialize"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDisable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnRoomPropertiesUpdate(::ExitGames_Client_Photon::Hashtable* propertiesThatChanged) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnRoomPropertiesUpdate"), {"propertiesThatChanged"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(propertiesThatChanged);
        }
        void OnTimerEnds() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTimerEnds"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnTimerRuns() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTimerRuns"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void remove_OnCountdownTimerHasExpired_1(::Photon_Pun_UtilityScripts::CountdownTimer_CountdownTimerHasExpired* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnCountdownTimerHasExpired"), {"value"});
            _m.Call(value);
        }
        static void SetStartTime_1() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetStartTime"));
            _m.Call();
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        float TimeRemaining() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("TimeRemaining"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static bool TryGetStartTime(int& startTimestamp) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryGetStartTime"), {"startTimestamp"});
            return _m.Call(&startTimestamp);
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
