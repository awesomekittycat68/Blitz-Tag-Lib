#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../Photon_Pun/MonoBehaviourPun.hpp"

namespace GorillaTagScripts {
    struct GorillaTimer : ::Photon_Pun::MonoBehaviourPun {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts", "GorillaTimer");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void* GetOnTimerStarted() {
            static BNM::Field<void*> _field = GetClass().GetField(O("onTimerStarted"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetOnTimerStopped() {
            static BNM::Field<void*> _field = GetClass().GetField(O("onTimerStopped"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPassedTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("passedTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRandTimeMax() {
            static BNM::Field<float> _field = GetClass().GetField(O("randTimeMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRandTimeMin() {
            static BNM::Field<float> _field = GetClass().GetField(O("randTimeMin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetResetTimer() {
            static BNM::Field<bool> _field = GetClass().GetField(O("resetTimer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetStartTimer() {
            static BNM::Field<bool> _field = GetClass().GetField(O("startTimer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTimerDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("timerDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetUseRandomDuration() {
            static BNM::Field<bool> _field = GetClass().GetField(O("useRandomDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetOnTimerStarted(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("onTimerStarted"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnTimerStopped(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("onTimerStopped"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPassedTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("passedTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRandTimeMax(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("randTimeMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRandTimeMin(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("randTimeMin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetResetTimer(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("resetTimer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartTimer(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("startTimer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimerDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("timerDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUseRandomDuration(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("useRandomDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Coroutine::IEnumerator* DelayedReStartTimer(float delayTime) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("DelayedReStartTimer"), {"delayTime"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(delayTime);
        }
        float GetPassedTime_1() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("GetPassedTime"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float GetRemainingTime() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("GetRemainingTime"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void InvokeUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InvokeUpdate"));
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
        void ResetTimer() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetTimer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RestartTimer() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RestartTimer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetPassedTime_1(float time) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetPassedTime"), {"time"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(time);
        }
        void SetTimerDuration_1(float timer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetTimerDuration"), {"timer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(timer);
        }
        void StartTimer() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StartTimer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void StopTimer() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StopTimer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
