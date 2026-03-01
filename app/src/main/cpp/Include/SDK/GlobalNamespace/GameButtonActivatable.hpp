#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GameButtonActivatable_InputButton.hpp"

namespace GlobalNamespace {
    struct GameButtonActivatable : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GameButtonActivatable");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::GameEntity* GetGameEntity() {
            static BNM::Field<::GlobalNamespace::GameEntity*> _field = GetClass().GetField(O("gameEntity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GameButtonActivatable_InputButton GetInputButton() {
            static BNM::Field<::GlobalNamespace::GameButtonActivatable_InputButton> _field = GetClass().GetField(O("inputButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetGameEntity(::GlobalNamespace::GameEntity* value) {
            static BNM::Field<::GlobalNamespace::GameEntity*> _field = GetClass().GetField(O("gameEntity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInputButton(::GlobalNamespace::GameButtonActivatable_InputButton value) {
            static BNM::Field<::GlobalNamespace::GameButtonActivatable_InputButton> _field = GetClass().GetField(O("inputButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        template <typename TP0 = void*>
        bool CheckInput(TP0 xrNode, float sensitivity) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CheckInput"), {"xrNode", "sensitivity"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(xrNode, sensitivity);
        }
        bool CheckInput(bool checkHeld, bool checkSnapped, float sensitivity, bool checkHeldActivatable, bool checkTriggerInteractable) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CheckInput"), {"checkHeld", "checkSnapped", "sensitivity", "checkHeldActivatable", "checkTriggerInteractable"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(checkHeld, checkSnapped, sensitivity, checkHeldActivatable, checkTriggerInteractable);
        }
        template <typename TP0 = void*>
        float GetFloatInput(TP0 xrNode, float sensitivity) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("GetFloatInput"), {"xrNode", "sensitivity"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(xrNode, sensitivity);
        }
        float GetFloatInput(bool checkHeld, bool checkSnapped, float sensitivity, bool checkHeldActivatable) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("GetFloatInput"), {"checkHeld", "checkSnapped", "sensitivity", "checkHeldActivatable"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(checkHeld, checkSnapped, sensitivity, checkHeldActivatable);
        }
        bool IsEquippedLocal() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsEquippedLocal"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
