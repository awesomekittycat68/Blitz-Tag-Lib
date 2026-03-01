#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GorillaPressableButton.hpp"

namespace GlobalNamespace {
    struct ModeSelectButton : ::GlobalNamespace::GorillaPressableButton {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ModeSelectButton");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::PartyGameModeWarning* GetWarningScreen() {
            static BNM::Method<::GlobalNamespace::PartyGameModeWarning*> _method = GetClass().GetMethod(O("get_WarningScreen"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetWarningScreen(::GlobalNamespace::PartyGameModeWarning* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_WarningScreen"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::String* GetGameMode() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("gameMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetGameModeTitle() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("gameModeTitle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObjectScheduling::CountdownText* GetLimitedCountdown() {
            static BNM::Field<::GameObjectScheduling::CountdownText*> _field = GetClass().GetField(O("limitedCountdown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetNewModeSplash() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("newModeSplash"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::PartyGameModeWarning* GetWarningScreen_f() {
            static BNM::Field<::GlobalNamespace::PartyGameModeWarning*> _field = GetClass().GetField(O("warningScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetGameMode(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("gameMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGameModeTitle(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("gameModeTitle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLimitedCountdown(::GameObjectScheduling::CountdownText* value) {
            static BNM::Field<::GameObjectScheduling::CountdownText*> _field = GetClass().GetField(O("limitedCountdown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNewModeSplash(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("newModeSplash"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWarningScreen_fs(::GlobalNamespace::PartyGameModeWarning* value) {
            static BNM::Field<::GlobalNamespace::PartyGameModeWarning*> _field = GetClass().GetField(O("warningScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void ButtonActivationWithHand(bool isLeftHand) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ButtonActivationWithHand"), {"isLeftHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(isLeftHand);
        }
        ::GlobalNamespace::PartyGameModeWarning* get_WarningScreen() {
            static BNM::Method<::GlobalNamespace::PartyGameModeWarning*> _m = GetClass().GetMethod(O("get_WarningScreen"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void HideNewAndLimitedTimeInfo() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HideNewAndLimitedTimeInfo"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnGameModeChanged(::BNM::Structures::Mono::String* newGameMode) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnGameModeChanged"), {"newGameMode"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newGameMode);
        }
        void set_WarningScreen(::GlobalNamespace::PartyGameModeWarning* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_WarningScreen"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetInfo(::BNM::Structures::Mono::String* Mode, ::BNM::Structures::Mono::String* ModeTitle, bool NewMode, ::GameObjectScheduling::CountdownTextDate* CountdownTo) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetInfo"), {"Mode", "ModeTitle", "NewMode", "CountdownTo"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(Mode, ModeTitle, NewMode, CountdownTo);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
