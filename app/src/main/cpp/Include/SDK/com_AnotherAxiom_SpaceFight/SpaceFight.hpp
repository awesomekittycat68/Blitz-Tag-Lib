#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SpaceFight_SpaceFlightNetState.hpp"
#include "../GlobalNamespace/ArcadeButtons.hpp"
#include "../GlobalNamespace/ArcadeGame.hpp"

namespace com_AnotherAxiom_SpaceFight {
    struct SpaceFight : ::GlobalNamespace::ArcadeGame {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("com.AnotherAxiom.SpaceFight", "SpaceFight");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::com_AnotherAxiom_SpaceFight::SpaceFight_SpaceFlightNetState GetNetStateCur() {
            static BNM::Field<::com_AnotherAxiom_SpaceFight::SpaceFight_SpaceFlightNetState> _field = GetClass().GetField(O("netStateCur"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::com_AnotherAxiom_SpaceFight::SpaceFight_SpaceFlightNetState GetNetStateLast() {
            static BNM::Field<::com_AnotherAxiom_SpaceFight::SpaceFight_SpaceFlightNetState> _field = GetClass().GetField(O("netStateLast"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::Transform*>* GetPlayer() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Transform*>*> _field = GetClass().GetField(O("player"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::Transform*>* GetProjectile() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Transform*>*> _field = GetClass().GetField(O("projectile"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<bool>* GetProjectilesFired() {
            static BNM::Field<::BNM::Structures::Mono::Array<bool>*> _field = GetClass().GetField(O("projectilesFired"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector2 GetTableSize() {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("tableSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetNetStateCur(::com_AnotherAxiom_SpaceFight::SpaceFight_SpaceFlightNetState value) {
            static BNM::Field<::com_AnotherAxiom_SpaceFight::SpaceFight_SpaceFlightNetState> _field = GetClass().GetField(O("netStateCur"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNetStateLast(::com_AnotherAxiom_SpaceFight::SpaceFight_SpaceFlightNetState value) {
            static BNM::Field<::com_AnotherAxiom_SpaceFight::SpaceFight_SpaceFlightNetState> _field = GetClass().GetField(O("netStateLast"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayer(::BNM::Structures::Mono::Array<::Transform*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Transform*>*> _field = GetClass().GetField(O("player"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProjectile(::BNM::Structures::Mono::Array<::Transform*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Transform*>*> _field = GetClass().GetField(O("projectile"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProjectilesFired(::BNM::Structures::Mono::Array<bool>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<bool>*> _field = GetClass().GetField(O("projectilesFired"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTableSize(::BNM::Structures::Unity::Vector2 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("tableSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void ButtonDown(int player, ::GlobalNamespace::ArcadeButtons button) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ButtonDown"), {"player", "button"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(player, button);
        }
        void ButtonUp(int player, ::GlobalNamespace::ArcadeButtons button) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ButtonUp"), {"player", "button"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(player, button);
        }
        void clamp(::Transform* tr) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("clamp"), {"tr"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(tr);
        }
        ::BNM::Structures::Mono::Array<uint8_t>* GetNetworkState() {
            static BNM::Method<::BNM::Structures::Mono::Array<uint8_t>*> _m = GetClass().GetMethod(O("GetNetworkState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void move(::Transform* p, float speed) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("move"), {"p", "speed"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(p, speed);
        }
        void OnTimeout() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTimeout"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetNetworkState(::BNM::Structures::Mono::Array<uint8_t>* b) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetNetworkState"), {"b"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(b);
        }
        void turn(::Transform* p, bool cw) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("turn"), {"p", "cw"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(p, cw);
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
