#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GameObjectScheduleGenerator_ScheduleType.hpp"

namespace GlobalNamespace {
    struct GameObjectScheduleGenerator : BNM::UnityEngine::Object {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GameObjectScheduleGenerator");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::String* GetScheduleEnd() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("scheduleEnd"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GameObjectScheduling::GameObjectSchedule*>* GetSchedules() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObjectScheduling::GameObjectSchedule*>*> _field = GetClass().GetField(O("schedules"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetScheduleStart() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("scheduleStart"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GameObjectScheduleGenerator_ScheduleType GetScheduleType() {
            static BNM::Field<::GlobalNamespace::GameObjectScheduleGenerator_ScheduleType> _field = GetClass().GetField(O("scheduleType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetScheduleEnd(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("scheduleEnd"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSchedules(::BNM::Structures::Mono::Array<::GameObjectScheduling::GameObjectSchedule*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObjectScheduling::GameObjectSchedule*>*> _field = GetClass().GetField(O("schedules"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScheduleStart(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("scheduleStart"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScheduleType(::GlobalNamespace::GameObjectScheduleGenerator_ScheduleType value) {
            static BNM::Field<::GlobalNamespace::GameObjectScheduleGenerator_ScheduleType> _field = GetClass().GetField(O("scheduleType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void GenerateSchedule() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GenerateSchedule"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
