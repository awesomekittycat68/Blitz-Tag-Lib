#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GorillaPressableButton.hpp"

namespace GlobalNamespace {
    struct GameModeSelectButton : ::GlobalNamespace::GorillaPressableButton {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GameModeSelectButton");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetButtonIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("buttonIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GameModePages* GetSelector() {
            static BNM::Field<::GlobalNamespace::GameModePages*> _field = GetClass().GetField(O("selector"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetButtonIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("buttonIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSelector(::GlobalNamespace::GameModePages* value) {
            static BNM::Field<::GlobalNamespace::GameModePages*> _field = GetClass().GetField(O("selector"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void ButtonActivation() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ButtonActivation"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
