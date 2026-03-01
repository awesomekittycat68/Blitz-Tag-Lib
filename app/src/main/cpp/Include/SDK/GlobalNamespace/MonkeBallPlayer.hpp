#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct MonkeBallPlayer : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "MonkeBallPlayer");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::MonkeBallGoalZone* GetCurrGoalZone() {
            static BNM::Field<::GlobalNamespace::MonkeBallGoalZone*> _field = GetClass().GetField(O("currGoalZone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GameBallPlayer* GetGamePlayer() {
            static BNM::Field<::GlobalNamespace::GameBallPlayer*> _field = GetClass().GetField(O("gamePlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCurrGoalZone(::GlobalNamespace::MonkeBallGoalZone* value) {
            static BNM::Field<::GlobalNamespace::MonkeBallGoalZone*> _field = GetClass().GetField(O("currGoalZone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGamePlayer(::GlobalNamespace::GameBallPlayer* value) {
            static BNM::Field<::GlobalNamespace::GameBallPlayer*> _field = GetClass().GetField(O("gamePlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
