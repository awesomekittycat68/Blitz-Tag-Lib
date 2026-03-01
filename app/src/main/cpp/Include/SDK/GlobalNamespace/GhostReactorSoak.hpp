#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GhostReactorSoak_State.hpp"

namespace GlobalNamespace {
    struct GhostReactorSoak : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GhostReactorSoak");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::GhostReactorSoak* GetInstance() {
            static BNM::Field<::GlobalNamespace::GhostReactorSoak*> field = GetClass().GetField("instance");
            return field.Get();
        }
        static constexpr const char* SOAK_ROOM = "AKJSOAK";
        static constexpr float MIN_CONNECTED_TIME = 5.0f;
        static constexpr float MAX_CONNECTED_TIME = 60.0f;
        static constexpr float MIN_DISCONNECTED_TIME = 3.0f;
        static constexpr float MAX_DISCONNECTED_TIME = 6.0f;
        static constexpr float START_NEW_TASK_ODDS = 0.005f;
        void* GetActiveTask() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_activeTask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<void*>* GetSoakTasks() {
            static BNM::Field<::BNM::Structures::Mono::List<void*>*> _field = GetClass().GetField(O("_soakTasks"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetDisconnectTime() {
            static BNM::Field<double> _field = GetClass().GetField(O("disconnectTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GhostReactorManager* GetGrManager() {
            static BNM::Field<::GlobalNamespace::GhostReactorManager*> _field = GetClass().GetField(O("grManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRPlayer* GetGrPlayer() {
            static BNM::Field<::GlobalNamespace::GRPlayer*> _field = GetClass().GetField(O("grPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GlobalNamespace::GhostReactorSoak* GetInstance_f() {
            static BNM::Field<::GlobalNamespace::GhostReactorSoak*> _field = GetClass().GetField(O("instance"));
            return _field.Get();
        }
        double GetReconnectTime() {
            static BNM::Field<double> _field = GetClass().GetField(O("reconnectTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GhostReactorSoak_State GetState() {
            static BNM::Field<::GlobalNamespace::GhostReactorSoak_State> _field = GetClass().GetField(O("state"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetStateStartTime() {
            static BNM::Field<double> _field = GetClass().GetField(O("stateStartTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetActiveTask(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("_activeTask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDisconnectTime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("disconnectTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGrManager(::GlobalNamespace::GhostReactorManager* value) {
            static BNM::Field<::GlobalNamespace::GhostReactorManager*> _field = GetClass().GetField(O("grManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGrPlayer(::GlobalNamespace::GRPlayer* value) {
            static BNM::Field<::GlobalNamespace::GRPlayer*> _field = GetClass().GetField(O("grPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetInstance(::GlobalNamespace::GhostReactorSoak* value) {
            static BNM::Field<::GlobalNamespace::GhostReactorSoak*> _field = GetClass().GetField(O("instance"));
            _field.Set(value);
        }
        void SetReconnectTime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("reconnectTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetState(::GlobalNamespace::GhostReactorSoak_State value) {
            static BNM::Field<::GlobalNamespace::GhostReactorSoak_State> _field = GetClass().GetField(O("state"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStateStartTime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("stateStartTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        int GetActorNumber() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetActorNumber"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool IsSoaking() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsSoaking"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void JoinRoom() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("JoinRoom"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void LeaveRoom() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LeaveRoom"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetState_1(::GlobalNamespace::GhostReactorSoak_State newState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetState"), {"newState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newState);
        }
        void Setup(::GlobalNamespace::GRPlayer* grPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Setup"), {"grPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(grPlayer);
        }
        void UpdateActive() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateActive"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
