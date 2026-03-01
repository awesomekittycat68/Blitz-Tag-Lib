#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GorillaIntervalTimer_IntervalSource.hpp"
#include "GorillaIntervalTimer_RandomDistribution.hpp"
#include "GorillaIntervalTimer_RunLength.hpp"
#include "GorillaIntervalTimer_TimeUnit.hpp"
#include "../Photon_Pun/MonoBehaviourPun.hpp"

namespace GorillaTagScripts {
    struct GorillaIntervalTimer : ::Photon_Pun::MonoBehaviourPun {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts", "GorillaIntervalTimer");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr float minIntervalEpsilon = 0.001f;
        float GetCurrentIntervalSeconds() {
            static BNM::Field<float> _field = GetClass().GetField(O("currentIntervalSeconds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts::GorillaIntervalTimer_RandomDistribution GetDistribution() {
            static BNM::Field<::GorillaTagScripts::GorillaIntervalTimer_RandomDistribution> _field = GetClass().GetField(O("distribution"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetElapsed() {
            static BNM::Field<float> _field = GetClass().GetField(O("elapsed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFixedInterval() {
            static BNM::Field<float> _field = GetClass().GetField(O("fixedInterval"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetInitialDelay() {
            static BNM::Field<float> _field = GetClass().GetField(O("initialDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts::GorillaIntervalTimer_IntervalSource GetIntervalSource() {
            static BNM::Field<::GorillaTagScripts::GorillaIntervalTimer_IntervalSource> _field = GetClass().GetField(O("intervalSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsInPostFireDelay() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isInPostFireDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsPaused() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isPaused"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsRegistered() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isRegistered"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsRunning() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isRunning"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMaxFiresPerRun() {
            static BNM::Field<int> _field = GetClass().GetField(O("maxFiresPerRun"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Cosmetics::NetworkedRandomProvider* GetNetworkProvider() {
            static BNM::Field<::GorillaTag_Cosmetics::NetworkedRandomProvider*> _field = GetClass().GetField(O("networkProvider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetOnIntervalFired() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("onIntervalFired"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetOnTimerStarted() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("onTimerStarted"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetOnTimerStopped() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("onTimerStopped"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPostIntervalDelay() {
            static BNM::Field<float> _field = GetClass().GetField(O("postIntervalDelay"));
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
        bool GetRequireManualReset() {
            static BNM::Field<bool> _field = GetClass().GetField(O("requireManualReset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetRunFiredSoFar() {
            static BNM::Field<int> _field = GetClass().GetField(O("runFiredSoFar"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts::GorillaIntervalTimer_RunLength GetRunLength() {
            static BNM::Field<::GorillaTagScripts::GorillaIntervalTimer_RunLength> _field = GetClass().GetField(O("runLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRunOnEnable() {
            static BNM::Field<bool> _field = GetClass().GetField(O("runOnEnable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts::GorillaIntervalTimer_TimeUnit GetUnit() {
            static BNM::Field<::GorillaTagScripts::GorillaIntervalTimer_TimeUnit> _field = GetClass().GetField(O("unit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetUseInitialDelay() {
            static BNM::Field<bool> _field = GetClass().GetField(O("useInitialDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetUsePostIntervalDelay() {
            static BNM::Field<bool> _field = GetClass().GetField(O("usePostIntervalDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetUseRandomDuration() {
            static BNM::Field<bool> _field = GetClass().GetField(O("useRandomDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCurrentIntervalSeconds(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("currentIntervalSeconds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDistribution(::GorillaTagScripts::GorillaIntervalTimer_RandomDistribution value) {
            static BNM::Field<::GorillaTagScripts::GorillaIntervalTimer_RandomDistribution> _field = GetClass().GetField(O("distribution"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetElapsed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("elapsed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFixedInterval(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("fixedInterval"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInitialDelay(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("initialDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIntervalSource(::GorillaTagScripts::GorillaIntervalTimer_IntervalSource value) {
            static BNM::Field<::GorillaTagScripts::GorillaIntervalTimer_IntervalSource> _field = GetClass().GetField(O("intervalSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsInPostFireDelay(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isInPostFireDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsPaused(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isPaused"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsRegistered(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isRegistered"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsRunning(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isRunning"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxFiresPerRun(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("maxFiresPerRun"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNetworkProvider(::GorillaTag_Cosmetics::NetworkedRandomProvider* value) {
            static BNM::Field<::GorillaTag_Cosmetics::NetworkedRandomProvider*> _field = GetClass().GetField(O("networkProvider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnIntervalFired(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("onIntervalFired"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnTimerStarted(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("onTimerStarted"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnTimerStopped(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("onTimerStopped"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPostIntervalDelay(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("postIntervalDelay"));
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
        void SetRequireManualReset(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("requireManualReset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRunFiredSoFar(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("runFiredSoFar"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRunLength(::GorillaTagScripts::GorillaIntervalTimer_RunLength value) {
            static BNM::Field<::GorillaTagScripts::GorillaIntervalTimer_RunLength> _field = GetClass().GetField(O("runLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRunOnEnable(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("runOnEnable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUnit(::GorillaTagScripts::GorillaIntervalTimer_TimeUnit value) {
            static BNM::Field<::GorillaTagScripts::GorillaIntervalTimer_TimeUnit> _field = GetClass().GetField(O("unit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUseInitialDelay(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("useInitialDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUsePostIntervalDelay(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("usePostIntervalDelay"));
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
        float GetPassedTime() {
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
        void OverrideNextIntervalSeconds(float seconds) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OverrideNextIntervalSeconds"), {"seconds"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(seconds);
        }
        void Pause() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Pause"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ResetElapsed() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetElapsed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ResetRun() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetRun"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RestartTimer() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RestartTimer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Resume() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Resume"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RollNextInterval() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RollNextInterval"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetFixedIntervalSeconds(float seconds) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetFixedIntervalSeconds"), {"seconds"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(seconds);
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
        float ToSeconds(float value) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("ToSeconds"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(value);
        }
    };
}
