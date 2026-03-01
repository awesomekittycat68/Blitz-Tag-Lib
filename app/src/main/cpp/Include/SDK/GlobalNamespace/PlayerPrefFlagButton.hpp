#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GorillaPressableButton.hpp"
#include "PlayerPrefFlagButton_ButtonMode.hpp"
#include "PlayerPrefFlags_Flag.hpp"

namespace GlobalNamespace {
    struct PlayerPrefFlagButton : ::GlobalNamespace::GorillaPressableButton {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "PlayerPrefFlagButton");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::PlayerPrefFlags_Flag GetFlag() {
            static BNM::Field<::GlobalNamespace::PlayerPrefFlags_Flag> _field = GetClass().GetField(O("flag"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::PlayerPrefFlagButton_ButtonMode GetMode() {
            static BNM::Field<::GlobalNamespace::PlayerPrefFlagButton_ButtonMode> _field = GetClass().GetField(O("mode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetValue() {
            static BNM::Field<bool> _field = GetClass().GetField(O("value"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetFlag(::GlobalNamespace::PlayerPrefFlags_Flag value) {
            static BNM::Field<::GlobalNamespace::PlayerPrefFlags_Flag> _field = GetClass().GetField(O("flag"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMode(::GlobalNamespace::PlayerPrefFlagButton_ButtonMode value) {
            static BNM::Field<::GlobalNamespace::PlayerPrefFlagButton_ButtonMode> _field = GetClass().GetField(O("mode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetValue(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("value"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void ButtonActivation() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ButtonActivation"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
