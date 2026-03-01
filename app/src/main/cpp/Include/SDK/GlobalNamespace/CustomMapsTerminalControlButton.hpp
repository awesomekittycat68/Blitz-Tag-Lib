#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "CustomMapsScreenTouchPoint.hpp"

namespace GlobalNamespace {
    struct CustomMapsTerminalControlButton : ::GlobalNamespace::CustomMapsScreenTouchPoint {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CustomMapsTerminalControlButton");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetIsLocked() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsLocked"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetIsLocked(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_IsLocked"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::TMP_Text* GetBttnText() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("bttnText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsLocked_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isLocked"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLockedFontSize() {
            static BNM::Field<float> _field = GetClass().GetField(O("lockedFontSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetLockedText() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("lockedText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetLockedTextColor() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("lockedTextColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CustomMapsTerminal* GetMapsTerminal() {
            static BNM::Field<::GlobalNamespace::CustomMapsTerminal*> _field = GetClass().GetField(O("mapsTerminal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetUnlockedFontSize() {
            static BNM::Field<float> _field = GetClass().GetField(O("unlockedFontSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetUnlockedText() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("unlockedText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetUnlockedTextColor() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("unlockedTextColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBttnText(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("bttnText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsLocked_fs(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isLocked"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLockedFontSize(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lockedFontSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLockedText(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("lockedText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLockedTextColor(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("lockedTextColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMapsTerminal(::GlobalNamespace::CustomMapsTerminal* value) {
            static BNM::Field<::GlobalNamespace::CustomMapsTerminal*> _field = GetClass().GetField(O("mapsTerminal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUnlockedFontSize(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("unlockedFontSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUnlockedText(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("unlockedText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUnlockedTextColor(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("unlockedTextColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool get_IsLocked() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsLocked"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void LockTerminalControl() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LockTerminalControl"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnButtonPressedEvent() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnButtonPressedEvent"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PressButtonColourUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PressButtonColourUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void set_IsLocked(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_IsLocked"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void UnlockTerminalControl() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnlockTerminalControl"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
