#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTag_Sports {
    struct SportGoalTrigger : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.Sports", "SportGoalTrigger");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void* GetBallsPendingTriggerExit() {
            static BNM::Field<void*> _field = GetClass().GetField(O("ballsPendingTriggerExit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetBallTriggerExitDistanceFallback() {
            static BNM::Field<float> _field = GetClass().GetField(O("ballTriggerExitDistanceFallback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Sports::SportScoreboard* GetScoreboard() {
            static BNM::Field<::GorillaTag_Sports::SportScoreboard*> _field = GetClass().GetField(O("scoreboard"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetTeamScoringOnThisGoal() {
            static BNM::Field<int> _field = GetClass().GetField(O("teamScoringOnThisGoal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBallsPendingTriggerExit(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("ballsPendingTriggerExit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBallTriggerExitDistanceFallback(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("ballTriggerExitDistanceFallback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScoreboard(::GorillaTag_Sports::SportScoreboard* value) {
            static BNM::Field<::GorillaTag_Sports::SportScoreboard*> _field = GetClass().GetField(O("scoreboard"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTeamScoringOnThisGoal(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("teamScoringOnThisGoal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void BallExitedGoalTrigger(::GorillaTag_Sports::SportBall* ball) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("BallExitedGoalTrigger"), {"ball"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(ball);
        }
        void OnTriggerEnter(::Collider* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTriggerEnter"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(other);
        }
        void PruneBallsPendingTriggerExitByDistance() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PruneBallsPendingTriggerExitByDistance"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
