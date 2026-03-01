#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GlobalNamespace/ArcadeButtons.hpp"
#include "../GlobalNamespace/ArcadeGame.hpp"

namespace com_AnotherAxiom_MonkeArcade_Joust {
    struct JoustGame : ::GlobalNamespace::ArcadeGame {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("com.AnotherAxiom.MonkeArcade.Joust", "JoustGame");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Array<::com_AnotherAxiom_MonkeArcade_Joust::JoustPlayer*>* GetJoustPlayers() {
            static BNM::Field<::BNM::Structures::Mono::Array<::com_AnotherAxiom_MonkeArcade_Joust::JoustPlayer*>*> _field = GetClass().GetField(O("joustPlayers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetJoustPlayers(::BNM::Structures::Mono::Array<::com_AnotherAxiom_MonkeArcade_Joust::JoustPlayer*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::com_AnotherAxiom_MonkeArcade_Joust::JoustPlayer*>*> _field = GetClass().GetField(O("joustPlayers"));
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
        void SetNetworkState(::BNM::Structures::Mono::Array<uint8_t>* obj) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetNetworkState"), {"obj"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(obj);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
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
