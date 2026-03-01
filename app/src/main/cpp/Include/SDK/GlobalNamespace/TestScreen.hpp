#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "ArcadeButtons.hpp"
#include "ArcadeGame.hpp"

namespace GlobalNamespace {
    struct TestScreen : ::GlobalNamespace::ArcadeGame {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "TestScreen");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Transform* GetDot() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("dot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>* GetLights() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("lights"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDot(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("dot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLights(::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("lights"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void ButtonDown(int player, ::GlobalNamespace::ArcadeButtons button) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ButtonDown"), {"player", "button"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(player, button);
        }
        int buttonToLightIndex(int player, ::GlobalNamespace::ArcadeButtons button) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("buttonToLightIndex"), {"player", "button"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(player, button);
        }
        void ButtonUp(int player, ::GlobalNamespace::ArcadeButtons button) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ButtonUp"), {"player", "button"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(player, button);
        }
        ::BNM::Structures::Mono::Array<uint8_t>* GetNetworkState() {
            static BNM::Method<::BNM::Structures::Mono::Array<uint8_t>*> _m = GetClass().GetMethod(O("GetNetworkState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
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
    };
}
