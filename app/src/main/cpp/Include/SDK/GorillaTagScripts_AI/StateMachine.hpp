#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTagScripts_AI {
    struct StateMachine : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts.AI", "StateMachine");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::GorillaTagScripts_AI::StateMachine_Transition*>* GetAnyTransitions() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTagScripts_AI::StateMachine_Transition*>*> _field = GetClass().GetField(O("_anyTransitions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetCurrentState() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_currentState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GorillaTagScripts_AI::StateMachine_Transition*>* GetCurrentTransitions() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTagScripts_AI::StateMachine_Transition*>*> _field = GetClass().GetField(O("_currentTransitions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::BNM::MonoType*, ::BNM::Structures::Mono::List<::GorillaTagScripts_AI::StateMachine_Transition*>*>* GetTransitions() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::MonoType*, ::BNM::Structures::Mono::List<::GorillaTagScripts_AI::StateMachine_Transition*>*>*> _field = GetClass().GetField(O("_transitions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::GorillaTagScripts_AI::StateMachine_Transition*>* GetEmptyTransitions() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTagScripts_AI::StateMachine_Transition*>*> _field = GetClass().GetField(O("EmptyTransitions"));
            return _field.Get();
        }
        void SetAnyTransitions(::BNM::Structures::Mono::List<::GorillaTagScripts_AI::StateMachine_Transition*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTagScripts_AI::StateMachine_Transition*>*> _field = GetClass().GetField(O("_anyTransitions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentState(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("_currentState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentTransitions(::BNM::Structures::Mono::List<::GorillaTagScripts_AI::StateMachine_Transition*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTagScripts_AI::StateMachine_Transition*>*> _field = GetClass().GetField(O("_currentTransitions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTransitions(::BNM::Structures::Mono::Dictionary<::BNM::MonoType*, ::BNM::Structures::Mono::List<::GorillaTagScripts_AI::StateMachine_Transition*>*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::MonoType*, ::BNM::Structures::Mono::List<::GorillaTagScripts_AI::StateMachine_Transition*>*>*> _field = GetClass().GetField(O("_transitions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetEmptyTransitions(::BNM::Structures::Mono::List<::GorillaTagScripts_AI::StateMachine_Transition*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTagScripts_AI::StateMachine_Transition*>*> _field = GetClass().GetField(O("EmptyTransitions"));
            _field.Set(value);
        }
        template <typename TP0 = void*>
        void AddAnyTransition(TP0 state, ::BNM::Structures::Mono::Func<bool>* predicate) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddAnyTransition"), {"state", "predicate"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(state, predicate);
        }
        template <typename TP0 = void*, typename TP1 = void*>
        void AddTransition(TP0 from, TP1 to, ::BNM::Structures::Mono::Func<bool>* predicate) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddTransition"), {"from", "to", "predicate"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(from, to, predicate);
        }
        void* GetState() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("GetState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GorillaTagScripts_AI::StateMachine_Transition* GetTransition() {
            static BNM::Method<::GorillaTagScripts_AI::StateMachine_Transition*> _m = GetClass().GetMethod(O("GetTransition"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        template <typename TP0 = void*>
        void SetState(TP0 state) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetState"), {"state"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(state);
        }
        void Tick() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Tick"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
