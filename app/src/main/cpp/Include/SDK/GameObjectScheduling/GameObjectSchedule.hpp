#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GameObjectScheduling {
    struct GameObjectSchedule : BNM::UnityEngine::Object {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GameObjectScheduling", "GameObjectSchedule");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetInitialState() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_InitialState"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::Array<::GameObjectScheduling::GameObjectSchedule_GameObjectScheduleNode*>* GetNodes() {
            static BNM::Method<::BNM::Structures::Mono::Array<::GameObjectScheduling::GameObjectSchedule_GameObjectScheduleNode*>*> _method = GetClass().GetMethod(O("get_Nodes"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetInitialState_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("initialState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GameObjectScheduling::GameObjectSchedule_GameObjectScheduleNode*>* GetNodes_f() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObjectScheduling::GameObjectSchedule_GameObjectScheduleNode*>*> _field = GetClass().GetField(O("nodes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObjectScheduling::SchedulingOptions* GetOptions() {
            static BNM::Field<::GameObjectScheduling::SchedulingOptions*> _field = GetClass().GetField(O("options"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetValidated() {
            static BNM::Field<bool> _field = GetClass().GetField(O("validated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetInitialState(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("initialState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNodes(::BNM::Structures::Mono::Array<::GameObjectScheduling::GameObjectSchedule_GameObjectScheduleNode*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObjectScheduling::GameObjectSchedule_GameObjectScheduleNode*>*> _field = GetClass().GetField(O("nodes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOptions(::GameObjectScheduling::SchedulingOptions* value) {
            static BNM::Field<::GameObjectScheduling::SchedulingOptions*> _field = GetClass().GetField(O("options"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetValidated(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("validated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void _validate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_validate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        template <typename TP0 = void*, typename TP1 = void*>
        static void GenerateDailyShuffle(TP0 startDate, TP1 endDate, ::BNM::Structures::Mono::Array<::GameObjectScheduling::GameObjectSchedule*>* schedules) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GenerateDailyShuffle"), {"startDate", "endDate", "schedules"});
            _m.Call(startDate, endDate, schedules);
        }
        bool get_InitialState() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_InitialState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::Array<::GameObjectScheduling::GameObjectSchedule_GameObjectScheduleNode*>* get_Nodes() {
            static BNM::Method<::BNM::Structures::Mono::Array<::GameObjectScheduling::GameObjectSchedule_GameObjectScheduleNode*>*> _m = GetClass().GetMethod(O("get_Nodes"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        template <typename TP0 = void*>
        int GetCurrentNodeIndex(TP0 currentDate, void*& startDate) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetCurrentNodeIndex"), {"currentDate", "startDate"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(currentDate, &startDate);
        }
        void Validate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Validate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
