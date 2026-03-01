#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "MonoBehaviourTick.hpp"

namespace GlobalNamespace {
    struct MonkeBallGoalZone : ::GlobalNamespace::MonoBehaviourTick {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "MonkeBallGoalZone");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::GlobalNamespace::MonkeBallPlayer*>* GetPlayersInGoalZone() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::MonkeBallPlayer*>*> _field = GetClass().GetField(O("playersInGoalZone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetTeamId() {
            static BNM::Field<int> _field = GetClass().GetField(O("teamId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetPlayersInGoalZone(::BNM::Structures::Mono::List<::GlobalNamespace::MonkeBallPlayer*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::MonkeBallPlayer*>*> _field = GetClass().GetField(O("playersInGoalZone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTeamId(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("teamId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void CleanupPlayer(::GlobalNamespace::MonkeBallPlayer* player) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CleanupPlayer"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(player);
        }
        void OnTriggerEnter(::Collider* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTriggerEnter"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(other);
        }
        void OnTriggerExit(::Collider* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTriggerExit"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(other);
        }
        void Tick() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Tick"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
