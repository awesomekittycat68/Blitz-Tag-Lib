#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Voice {
    template <typename T>
    struct AudioUtil_VoiceDetector$1 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Voice", "AudioUtil").GetInnerClass("VoiceDetector`1");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetActivityDelayMs() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_ActivityDelayMs"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetActivityDelayMs(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_ActivityDelayMs"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetDetected() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_Detected"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetDetected(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Detected"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetOn() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_On"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetOn(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_On"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        float GetThreshold() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_Threshold"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetThreshold(float value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Threshold"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        void add_OnDetected(::BNM::Structures::Mono::Action<>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnDetected"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnDetected(::BNM::Structures::Mono::Action<>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnDetected"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        int GetActivityDelay() {
            static BNM::Field<int> _field = GetClass().GetField(O("activityDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetActivityDelayValuesCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("activityDelayValuesCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetAutoSilenceCounter() {
            static BNM::Field<int> _field = GetClass().GetField(O("autoSilenceCounter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDetected_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("detected"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetNorm() {
            static BNM::Field<float> _field = GetClass().GetField(O("norm"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<>* GetOnDetected() {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnDetected"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetThreshold_f() {
            static BNM::Field<float> _field = GetClass().GetField(O("threshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetValuesCountPerSec() {
            static BNM::Field<int> _field = GetClass().GetField(O("valuesCountPerSec"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetActivityDelay(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("activityDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetActivityDelayValuesCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("activityDelayValuesCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAutoSilenceCounter(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("autoSilenceCounter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDetected_fs(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("detected"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNorm(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("norm"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnDetected(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnDetected"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetThreshold_fs(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("threshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetValuesCountPerSec(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("valuesCountPerSec"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void add_OnDetected_1(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnDetected"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void Dispose() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Dispose"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        int get_ActivityDelayMs() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_ActivityDelayMs"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_Detected() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_Detected"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* get_DetectedTime() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_DetectedTime"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_On() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_On"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_Threshold() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_Threshold"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::Array<T>* Process(::BNM::Structures::Mono::Array<T>* buf) {
            static BNM::Method<::BNM::Structures::Mono::Array<T>*> _m = GetClass().GetMethod(O("Process"), {"buf"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(buf);
        }
        void remove_OnDetected_1(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnDetected"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_ActivityDelayMs(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_ActivityDelayMs"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_Detected(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Detected"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        template <typename TP0 = void*>
        void set_DetectedTime(TP0 value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_DetectedTime"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_On(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_On"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_Threshold(float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Threshold"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
