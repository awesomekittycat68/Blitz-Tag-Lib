#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "ServerTimeEvent_EventTime.hpp"
#include "TimeEvent.hpp"

namespace GlobalNamespace {
    struct ServerTimeEvent : ::GlobalNamespace::TimeEvent {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ServerTimeEvent");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void* GetEventTimes() {
            static BNM::Field<void*> _field = GetClass().GetField(O("eventTimes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLastQueryTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("lastQueryTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetQueryTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("queryTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::ServerTimeEvent_EventTime>* GetTimes() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::ServerTimeEvent_EventTime>*> _field = GetClass().GetField(O("times"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetEventTimes(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("eventTimes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastQueryTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lastQueryTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetQueryTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("queryTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimes(::BNM::Structures::Mono::Array<::GlobalNamespace::ServerTimeEvent_EventTime>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::ServerTimeEvent_EventTime>*> _field = GetClass().GetField(O("times"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
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
