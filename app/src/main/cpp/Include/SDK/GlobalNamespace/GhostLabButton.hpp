#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GorillaPressableButton.hpp"

namespace GlobalNamespace {
    struct GhostLabButton : ::GlobalNamespace::GorillaPressableButton {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GhostLabButton");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetButtonIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("buttonIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetForSingleDoor() {
            static BNM::Field<bool> _field = GetClass().GetField(O("forSingleDoor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GhostLab* GetGhostLab() {
            static BNM::Field<::GlobalNamespace::GhostLab*> _field = GetClass().GetField(O("ghostLab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetButtonIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("buttonIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetForSingleDoor(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("forSingleDoor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGhostLab(::GlobalNamespace::GhostLab* value) {
            static BNM::Field<::GlobalNamespace::GhostLab*> _field = GetClass().GetField(O("ghostLab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool BuildValidationCheck() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("BuildValidationCheck"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void ButtonActivation() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ButtonActivation"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
