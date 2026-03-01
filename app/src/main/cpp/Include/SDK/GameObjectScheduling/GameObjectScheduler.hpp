#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GameObjectScheduling {
    struct GameObjectScheduler : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GameObjectScheduling", "GameObjectScheduler");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetCurrentNodeIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("currentNodeIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDebugTime() {
            static BNM::Field<bool> _field = GetClass().GetField(O("debugTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObjectScheduling::GameObjectSchedulerEventDispatcher* GetDispatcher() {
            static BNM::Field<::GameObjectScheduling::GameObjectSchedulerEventDispatcher*> _field = GetClass().GetField(O("dispatcher"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLastMinuteCheck() {
            static BNM::Field<int> _field = GetClass().GetField(O("lastMinuteCheck"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetPreviousState() {
            static BNM::Field<bool> _field = GetClass().GetField(O("previousState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetReady() {
            static BNM::Field<bool> _field = GetClass().GetField(O("ready"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObjectScheduling::GameObjectSchedule* GetSchedule() {
            static BNM::Field<::GameObjectScheduling::GameObjectSchedule*> _field = GetClass().GetField(O("schedule"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GameObject*>* GetScheduledGameObject() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("scheduledGameObject"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetUseSecondsFidelity() {
            static BNM::Field<bool> _field = GetClass().GetField(O("useSecondsFidelity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCurrentNodeIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("currentNodeIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDebugTime(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("debugTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDispatcher(::GameObjectScheduling::GameObjectSchedulerEventDispatcher* value) {
            static BNM::Field<::GameObjectScheduling::GameObjectSchedulerEventDispatcher*> _field = GetClass().GetField(O("dispatcher"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastMinuteCheck(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("lastMinuteCheck"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPreviousState(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("previousState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReady(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("ready"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSchedule(::GameObjectScheduling::GameObjectSchedule* value) {
            static BNM::Field<::GameObjectScheduling::GameObjectSchedule*> _field = GetClass().GetField(O("schedule"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScheduledGameObject(::BNM::Structures::Mono::Array<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("scheduledGameObject"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUseSecondsFidelity(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("useSecondsFidelity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void changeActiveState(bool state) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("changeActiveState"), {"state"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(state);
        }
        void getActiveState(bool& state, double& totalSeconds) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("getActiveState"), {"state", "totalSeconds"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&state, &totalSeconds);
        }
        void* getServerTime() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("getServerTime"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
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
        void SetInitialState() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetInitialState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SliceUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SliceUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
