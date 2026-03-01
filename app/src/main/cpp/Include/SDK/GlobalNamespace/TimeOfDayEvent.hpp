#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "TimeEvent.hpp"

namespace GlobalNamespace {
    struct TimeOfDayEvent : ::GlobalNamespace::TimeEvent {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "TimeOfDayEvent");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetCurrentTime() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_currentTime"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsOngoing() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_isOngoing"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        float GetTimeEnd() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_timeEnd"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetTimeEnd(float value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_timeEnd"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        float GetTimeStart() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_timeStart"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetTimeStart(float value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_timeStart"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        double GetCurrentSeconds() {
            static BNM::Field<double> _field = GetClass().GetField(O("_currentSeconds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCurrentTime_f() {
            static BNM::Field<float> _field = GetClass().GetField(O("_currentTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::BetterDayNightManager* GetDayNightManager() {
            static BNM::Field<::GlobalNamespace::BetterDayNightManager*> _field = GetClass().GetField(O("_dayNightManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetElapsed() {
            static BNM::Field<float> _field = GetClass().GetField(O("_elapsed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTimeEnd_f() {
            static BNM::Field<float> _field = GetClass().GetField(O("_timeEnd"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTimeStart_f() {
            static BNM::Field<float> _field = GetClass().GetField(O("_timeStart"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetTotalSecondsInRange() {
            static BNM::Field<double> _field = GetClass().GetField(O("_totalSecondsInRange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCurrentSeconds(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("_currentSeconds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_currentTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDayNightManager(::GlobalNamespace::BetterDayNightManager* value) {
            static BNM::Field<::GlobalNamespace::BetterDayNightManager*> _field = GetClass().GetField(O("_dayNightManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetElapsed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_elapsed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimeEnd_fs(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_timeEnd"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimeStart_fs(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_timeStart"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTotalSecondsInRange(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("_totalSecondsInRange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        float get_currentTime() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_currentTime"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_isOngoing() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_isOngoing"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_timeEnd() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_timeEnd"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_timeStart() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_timeStart"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void set_timeEnd(float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_timeEnd"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_timeStart(float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_timeStart"), {"value"});
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
        void UpdateTime() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateTime"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
