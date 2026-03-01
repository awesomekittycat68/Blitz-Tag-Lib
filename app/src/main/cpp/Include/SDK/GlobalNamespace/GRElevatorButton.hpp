#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GRElevator_ButtonType.hpp"

namespace GlobalNamespace {
    struct GRElevatorButton : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GRElevatorButton");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GameObject* GetButtonLit() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("buttonLit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRElevator_ButtonType GetButtonType() {
            static BNM::Field<::GlobalNamespace::GRElevator_ButtonType> _field = GetClass().GetField(O("buttonType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::DisableGameObjectDelayed* GetDisableDelayed() {
            static BNM::Field<::GlobalNamespace::DisableGameObjectDelayed*> _field = GetClass().GetField(O("disableDelayed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLitUpTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("litUpTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetTempLight() {
            static BNM::Field<bool> _field = GetClass().GetField(O("tempLight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetButtonLit(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("buttonLit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetButtonType(::GlobalNamespace::GRElevator_ButtonType value) {
            static BNM::Field<::GlobalNamespace::GRElevator_ButtonType> _field = GetClass().GetField(O("buttonType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDisableDelayed(::GlobalNamespace::DisableGameObjectDelayed* value) {
            static BNM::Field<::GlobalNamespace::DisableGameObjectDelayed*> _field = GetClass().GetField(O("disableDelayed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLitUpTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("litUpTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTempLight(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("tempLight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Depressed() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Depressed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Pressed() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Pressed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
