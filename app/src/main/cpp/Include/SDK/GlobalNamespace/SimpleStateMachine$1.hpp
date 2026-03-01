#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    template <typename State>
    struct SimpleStateMachine$1 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SimpleStateMachine`1");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        State GetCurrState() {
            static BNM::Field<State> _field = GetClass().GetField(O("currState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<State>* GetOnStateEnd() {
            static BNM::Field<::BNM::Structures::Mono::Action<State>*> _field = GetClass().GetField(O("onStateEnd"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<State>* GetOnStateStart() {
            static BNM::Field<::BNM::Structures::Mono::Action<State>*> _field = GetClass().GetField(O("onStateStart"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<State>* GetOnStateUpdate() {
            static BNM::Field<::BNM::Structures::Mono::Action<State>*> _field = GetClass().GetField(O("onStateUpdate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetStateStartTime() {
            static BNM::Field<double> _field = GetClass().GetField(O("stateStartTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCurrState(State value) {
            static BNM::Field<State> _field = GetClass().GetField(O("currState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnStateEnd(::BNM::Structures::Mono::Action<State>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<State>*> _field = GetClass().GetField(O("onStateEnd"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnStateStart(::BNM::Structures::Mono::Action<State>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<State>*> _field = GetClass().GetField(O("onStateStart"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnStateUpdate(::BNM::Structures::Mono::Action<State>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<State>*> _field = GetClass().GetField(O("onStateUpdate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStateStartTime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("stateStartTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        State GetState() {
            static BNM::Method<State> _m = GetClass().GetMethod(O("GetState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        double GetStateStartTime_1() {
            static BNM::Method<double> _m = GetClass().GetMethod(O("GetStateStartTime"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool IsStateFinished(double currTime, float stateDuration) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsStateFinished"), {"currTime", "stateDuration"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(currTime, stateDuration);
        }
        void SetState(State state, bool force) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetState"), {"state", "force"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(state, force);
        }
        void Setup(State initialState, ::BNM::Structures::Mono::Action<State>* onStateStart, ::BNM::Structures::Mono::Action<State>* onStateEnd, ::BNM::Structures::Mono::Action<State>* onStateUpdate) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Setup"), {"initialState", "onStateStart", "onStateEnd", "onStateUpdate"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(initialState, onStateStart, onStateEnd, onStateUpdate);
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
