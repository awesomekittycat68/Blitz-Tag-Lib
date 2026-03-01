#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GorillaTagScripts_AI/AIEntity.hpp"

namespace GorillaTagScripts_AI_Entities {
    struct TestShark : ::GorillaTagScripts_AI::AIEntity {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts.AI.Entities", "TestShark");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GorillaTagScripts_AI::StateMachine* GetStateMachine() {
            static BNM::Field<::GorillaTagScripts_AI::StateMachine*> _field = GetClass().GetField(O("_stateMachine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts_AI_States::Chase_State* GetChase() {
            static BNM::Field<::GorillaTagScripts_AI_States::Chase_State*> _field = GetClass().GetField(O("chase"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetChasingTimer() {
            static BNM::Field<float> _field = GetClass().GetField(O("chasingTimer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts_AI_States::CircularPatrol_State* GetCircularPatrol() {
            static BNM::Field<::GorillaTagScripts_AI_States::CircularPatrol_State*> _field = GetClass().GetField(O("circularPatrol"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetNextTimeToChasePlayer() {
            static BNM::Field<float> _field = GetClass().GetField(O("nextTimeToChasePlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts_AI_States::Patrol_State* GetPatrol() {
            static BNM::Field<::GorillaTagScripts_AI_States::Patrol_State*> _field = GetClass().GetField(O("patrol"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetShouldChase() {
            static BNM::Field<bool> _field = GetClass().GetField(O("shouldChase"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetStateMachine(::GorillaTagScripts_AI::StateMachine* value) {
            static BNM::Field<::GorillaTagScripts_AI::StateMachine*> _field = GetClass().GetField(O("_stateMachine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetChase(::GorillaTagScripts_AI_States::Chase_State* value) {
            static BNM::Field<::GorillaTagScripts_AI_States::Chase_State*> _field = GetClass().GetField(O("chase"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetChasingTimer(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("chasingTimer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCircularPatrol(::GorillaTagScripts_AI_States::CircularPatrol_State* value) {
            static BNM::Field<::GorillaTagScripts_AI_States::CircularPatrol_State*> _field = GetClass().GetField(O("circularPatrol"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNextTimeToChasePlayer(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("nextTimeToChasePlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPatrol(::GorillaTagScripts_AI_States::Patrol_State* value) {
            static BNM::Field<::GorillaTagScripts_AI_States::Patrol_State*> _field = GetClass().GetField(O("patrol"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShouldChase(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("shouldChase"));
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
